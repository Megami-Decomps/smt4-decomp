/* NON_MATCHING: same as the IV twin FUN_002fe394 - the version digits' multiplies and the legacy template's float
 * stores are scheduled differently; the branches, calls and slot loops match. */
#include "gfx/AnimationTemplate.h"

namespace {

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
    /* 0x0a */ u8 format;        /* 0: record is parsed by FUN_0038aa84, 1: array of slots */
    /* 0x0b */ u8 unk0b;
    /* 0x0c */ s32 size;
};

}

extern "C" {
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);
void animSlotsSetStartFrames(AnimationSlot *slots, u32 count, u32 startFrame, const AnimEntry *entries, s32 entryCount);
s32 FUN_0038aa84(AnimationSlot *slots, s32 maxSlots, const void *record, const AnimEntry *entries, s32 entryCount);

/* Loads the animation slots described by `file` into `slots` (at most `maxSlots`) and matches them with
   the entry table; returns the slot count (FUN_0038aa84's for the formats it parses). */
s32 animSlotsLoadFromFile(AnimationSlot *slots, s32 maxSlots, const AnimFile *file, const AnimEntry *entries, s32 entryCount)
{
    s32 version = (file->version[0] - '0') * 1000 + (file->version[1] - '0') * 100 + (file->version[2] - '0') * 10 +
                  (file->version[3] - '0');
    if (file->format == 0) {
        const u32 *record = reinterpret_cast<const u32 *>(reinterpret_cast<const u8 *>(file) + file->offset);
        if (version >= 1300)
            return FUN_0038aa84(slots, maxSlots, record, entries, entryCount);
        AnimationTemplate legacy;
        legacy.header0 = record[0];
        legacy.header1 = record[1];
        legacy.header2 = record[2];
        legacy.header3 = record[3];
        __aeabi_memcpy4(legacy.scales, record + 4, 200);
        legacy.values[0] = 0.0f;
        legacy.values[1] = 5.0f;
        legacy.values[2] = 3.0f;
        legacy.values[3] = 0.0f;
        legacy.values[4] = 0.0f;
        legacy.values[5] = 3.0f;
        return FUN_0038aa84(slots, maxSlots, &legacy, entries, entryCount);
    } else if (file->format == 1) {
        const u8 *record = reinterpret_cast<const u8 *>(file) + file->offset;
        const u8 *source;
        u32 startFrame;
        u32 bytes;
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
        __aeabi_memcpy4(slots, source, count << 5);
        if (version == 1200) {
            for (s32 i = 0; i < count; i++) {
                slots[i].timing = 0.0f;
            }
        }
        for (s32 i = count; i < maxSlots; i++) {
            slots[i].id = 0xffffffff;
            slots[i].index = -1;
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
    return 0;
}

} /* extern "C" */
