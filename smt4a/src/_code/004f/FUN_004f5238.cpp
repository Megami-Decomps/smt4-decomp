#include "battle/BtlEffectFiles.h"

/* unit-local: the two floats callers pass last (s0/s1), forwarded by value to FUN_004f5750 (its own `Vector2 start`). */
struct EffectOffset2D {
    f32 x;
    f32 y;
};

extern "C" {
s32 libc_strcpy(char *dest, const char *source);
s32 FUN_004f5750(BtlEffectFiles *work, u32 handle, u32 a, u32 b, s32 group, u32 c, char *name, u32 d, u32 e, EffectOffset2D offset);

/* Looks up the effect slot of (group 0-3 the unit sets, 4 markers, 5 and 6 further sets, 7 the last,
 * 8 the single, 9 and 10 the remaining groups, index) and starts its effect with a copy of its name; the name
 * is also copied out to `nameOut` when given. Returns the started handle, or 0 when the slot does not exist. */
s32 FUN_004f5238(BtlEffectFiles *work, u32 a, u32 b, s32 group, s32 index, u32 c, char *nameOut, u32 d, u32 e, EffectOffset2D offset)
{
    u8 handle = 0xFF;
    if (group >= 11)
        return 0;
    char name[64] = { 0 };
    switch (group) {
    case 0:
        if (index >= 4)
            return 0;
        handle = work->unitSlots[index].handle;
        libc_strcpy(name, work->unitSlots[index].name);
        break;
    case 1:
        if (index >= 4)
            return 0;
        handle = work->secondSlots[index].handle;
        libc_strcpy(name, work->secondSlots[index].name);
        break;
    case 2:
        if (index >= 4)
            return 0;
        handle = work->thirdSlots[index].handle;
        libc_strcpy(name, work->thirdSlots[index].name);
        break;
    case 3:
        if (index >= 4)
            return 0;
        handle = work->fourthSlots[index].handle;
        libc_strcpy(name, work->fourthSlots[index].name);
        break;
    case 4:
        if (index >= 11)
            return 0;
        handle = work->markerSlots[index].handle;
        libc_strcpy(name, work->markerSlots[index].name);
        break;
    case 5:
        if (index >= 4)
            return 0;
        handle = work->fifthSlots[index].handle;
        libc_strcpy(name, work->fifthSlots[index].name);
        break;
    case 6:
        if (index >= 3)
            return 0;
        handle = work->eighthSlots[index].handle;
        libc_strcpy(name, work->eighthSlots[index].name);
        break;
    case 7:
        if (index != 0)
            return 0;
        handle = work->lastSlot.handle;
        libc_strcpy(name, work->lastSlot.name);
        break;
    case 8:
        if (index != 0)
            return 0;
        handle = work->singleSlot.handle;
        libc_strcpy(name, work->singleSlot.name);
        break;
    case 9:
        if (index >= 3)
            return 0;
        handle = work->sixthSlots[index].handle;
        libc_strcpy(name, work->sixthSlots[index].name);
        break;
    case 10:
        if (index >= 2)
            return 0;
        handle = work->seventhSlots[index].handle;
        libc_strcpy(name, work->seventhSlots[index].name);
        break;
    }
    if (nameOut != NULL)
        libc_strcpy(nameOut, name);
    return FUN_004f5750(work, handle, a, b, group, c, name, d, e, offset);
}

} /* extern "C" */
