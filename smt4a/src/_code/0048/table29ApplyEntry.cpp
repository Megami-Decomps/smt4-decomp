#include "common.h"

#define TABLE29_KIND_CHANCE 3 /* triggers when its game flag is set or on a chance roll */

/* One entry of data table 29: two randomized values (base + random range) and a trigger. */
struct Table29Entry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 firstBase;
    /* 0x04 */ u16 firstRange;
    /* 0x06 */ u16 secondBase;
    /* 0x08 */ u16 secondRange;
    /* 0x0A */ u8 kind;
    /* 0x0B */ u8 unk0B;
    /* 0x0C */ s16 flag;
    /* 0x0E */ s8 chance;   /* percent */
    /* 0x0F */ u8 unk0F;
};

/* The object the entry is applied to. */
struct Table29Target {
    /* 0x00 */ u8 unk00[0x5C];
    /* 0x5C */ u32 second;
    /* 0x60 */ u8 unk60[0x20];
    /* 0x80 */ u32 id;
    /* 0x84 */ u16 firstValue;
    /* 0x86 */ u16 secondValue;
    /* 0x88 */ u8 unk88[3];
    /* 0x8B */ u8 kind;
    /* 0x8C */ s16 flag;
    /* 0x8E */ s8 chance;
    /* 0x8F */ u8 unk8F;
    /* 0x90 */ u8 rolled;   /* set when the chance roll (not the flag) triggered */
};

extern "C" {

const Table29Entry *dataTable29GetEntry(u32 index);
s32 randRange(s32 max);
s32 gameFlagIsSet(s32 flag);

/* Applies data table 29 entry `index` to the target, randomizing its two values; returns 1 when the
 * entry triggers (its flag is set, or a chance roll hits). */
s32 table29ApplyEntry(Table29Target *target, u32 index)
{
    s32 triggered = 0;
    const Table29Entry *entry = dataTable29GetEntry(index);
    u32 second;

    target->firstValue = randRange(entry->firstRange) + entry->firstBase;
    second = randRange(entry->secondRange) + entry->secondBase;
    target->secondValue = second;
    target->second = second;
    target->id = entry->id;
    target->kind = entry->kind;
    target->flag = entry->flag;
    target->unk8F = entry->unk0F;
    target->chance = entry->chance;
    target->rolled = 0;
    if (target->kind == TABLE29_KIND_CHANCE) {
        if (!gameFlagIsSet(target->flag)) {
            if (randRange(99) <= target->chance) {
                triggered = 1;
                target->rolled = 1;
            }
        } else {
            triggered = 1;
            target->rolled = 0;
        }
    }
    return triggered;
}

} /* extern "C" */
