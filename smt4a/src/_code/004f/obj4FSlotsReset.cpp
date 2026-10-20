#include "shard/Shard004F.h"

extern "C" {

typedef struct Slot3C {
    /* 0x0000 */ u8 unk0000[0x1398];
    /* 0x1398 */ u32 unk1398;
    /* 0x139C */ u32 unk139C;
    /* 0x13A0 */ u8 block13A0[0x30];
    /* 0x13D0 */ u32 unk13D0;
} Slot3C;

typedef struct Obj4FSlots {
    /* 0x00 */ u8 unk00[4];
} Obj4FSlots;

extern void workOwnerRelease(u8 *block);

void obj4FSlotsReset(Obj4FSlots *obj)
{
    s32 i = 0;

    do {
        Slot3C *slot = (Slot3C *)((u8 *)obj + i * 0x3C);

        slot->unk139C = 0;
        slot->unk1398 = 0xFFFFFFFF;
        workOwnerRelease(slot->block13A0);
        i++;
        slot->unk13D0 = 0;
    } while (i < 0x32);
}

} /* extern "C" */
