#include "common.h"

struct SlotGroups {
    u8 unk00[9]; // 0x00
    u8 enabledGroups; // 0x09
    u8 unk0a[6]; // 0x0a
    s32 slots[8][20]; // 0x10
};

// Find the first free slot in an enabled group.
extern "C" s32 slotGroupFindFree(const SlotGroups* groups, u32 group)
{
    s32 result = -1;
    if ((groups->enabledGroups & (1u << group)) != 0) {
        for (s32 index = 0; index < 20; ++index) {
            if (groups->slots[group][index] == -1) {
                result = index;
                break;
            }
        }
    }
    return result;
}
