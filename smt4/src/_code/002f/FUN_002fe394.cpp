/* NON_MATCHING: block layout and the version arithmetic schedule differ - retail parses the digits with 16-bit multiplies, lays the format-0 template path out first and the slot copy last; the same stores and calls. */
#include "common.h"

namespace {
/* An animation slot (0x20 bytes) as stored in the animation file. */
struct AnimSlot {
    /* 0x00 */ u32 id;           /* -1: unused */
    /* 0x04 */ u16 unk04;
    /* 0x06 */ u8 index;         /* index of the matching entry in the entry table, 0xff: none */
    /* 0x07 */ u8 unk07;
    /* 0x08 */ u8 unk08[0xc];
    /* 0x14 */ f32 timing;
    /* 0x18 */ u8 unk18[8];
};

/* A row of the entry table the slots are matched against (0x48 bytes). */
struct AnimEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 id;
    /* 0x08 */ u8 unk08[0x40];
};

/* The animation file header: a four-digit version, a record offset and a record format. */
struct AnimFile {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s8 version[4];    /* ASCII digits, e.g. "1300" */
    /* 0x08 */ u16 offset;       /* where the record starts */
    /* 0x0a */ u8 format;        /* 0: record is parsed by FUN_002fe63c, 1: array of slots */
    /* 0x0b */ u8 unk0b;
    /* 0x0c */ s32 size;
};

/* One unit-scale element of the default template (0x14 bytes). */
struct AnimUnitScale {
    u8 unk00[0x14];
};

/* The template FUN_002fe63c reads: six parameters, a header and ten unit-scale elements. */
struct AnimTemplate {
    /* 0x00 */ f32 values[6];
    /* 0x18 */ u32 header[4];
    /* 0x28 */ AnimUnitScale scales[10];
};
}

extern "C" {
void animationInitializeUnitScale(AnimUnitScale *scale);
void *rt_memcpy_w(void *destination, const void *source, u32 size);
void __aeabi_vec_ctor_nocookie_nodtor(void *array, void (*ctor)(void *), u32 size, u32 count);
void animSlotsSetStartFrames(AnimSlot *slots, u32 count, u32 startFrame, const AnimEntry *entries, s32 entryCount);
void FUN_002fe63c(AnimSlot *slots, s32 maxSlots, const void *record, const AnimEntry *entries, s32 entryCount);

/* Loads the animation slots described by `file` into `slots` (at most `maxSlots`) and matches them with
   the entry table; returns the slot count (or `slots` for the formats FUN_002fe63c parses). */
u32 FUN_002fe394(AnimSlot *slots, s32 maxSlots, const AnimFile *file, const AnimEntry *entries, s32 entryCount)
{
    s32 version = ((file->version[0] - '0') * 1000 + file->version[1] * 100 + file->version[2] * 10 +
                   file->version[3]) - 5328;
    if (file->format != 0) {
        if (file->format != 1) {
            return 0;
        }
        const u8 *record = reinterpret_cast<const u8 *>(file) + file->offset;
        const u8 *source;
        u32 startFrame;
        s32 bytes;
        if (version >= 1300) {
            startFrame = *reinterpret_cast<const u32 *>(record + 0x20);
            source = record + 0xf0;
            bytes = file->size - 0xf0;
        } else {
            startFrame = *reinterpret_cast<const u32 *>(record + 8);
            source = record + 0xd8;
            bytes = file->size - 0xd8;
        }
        if (version >= 1100) {
            source += 4;
            if (version >= 1200) {
                bytes -= 4;
            }
        }
        s32 count = bytes >> 5;
        if (maxSlots < count) {
            count = maxSlots;
        }
        rt_memcpy_w(slots, source, count << 5);
        if (version == 1200) {
            for (s32 i = 0; i < count; i++) {
                slots[i].timing = 0.0f;
            }
        }
        for (s32 i = count; i < maxSlots; i++) {
            slots[i].id = 0xffffffff;
            slots[i].index = 0xff;
            slots[i].unk04 = 0;
        }
        for (s32 i = 0; i < count; i++) {
            for (s32 j = 0; j < entryCount; j++) {
                if (entries[j].id == slots[i].id) {
                    slots[i].index = j;
                    break;
                }
            }
        }
        animSlotsSetStartFrames(slots, count, startFrame, entries, entryCount);
        return count;
    }
    if (version < 1300) {
        const u32 *record = reinterpret_cast<const u32 *>(reinterpret_cast<const u8 *>(file) + file->offset);
        AnimTemplate legacy;
        legacy.header[0] = 0;
        legacy.header[1] = 1;
        legacy.header[2] = 1;
        legacy.header[3] = 1;
        __aeabi_vec_ctor_nocookie_nodtor(legacy.scales, reinterpret_cast<void (*)(void *)>(animationInitializeUnitScale), 20, 10);
        legacy.header[0] = record[0];
        legacy.header[1] = record[1];
        legacy.header[2] = record[2];
        legacy.header[3] = record[3];
        rt_memcpy_w(legacy.scales, record + 4, 200);
        legacy.values[0] = 0.0f;
        legacy.values[1] = 5.0f;
        legacy.values[2] = 3.0f;
        legacy.values[3] = 0.0f;
        legacy.values[4] = 0.0f;
        legacy.values[5] = 3.0f;
        FUN_002fe63c(slots, maxSlots, &legacy, entries, entryCount);
        return reinterpret_cast<u32>(slots);
    }
    FUN_002fe63c(slots, maxSlots, reinterpret_cast<const u8 *>(file) + file->offset, entries, entryCount);
    return reinterpret_cast<u32>(slots);
}

} /* extern "C" */
