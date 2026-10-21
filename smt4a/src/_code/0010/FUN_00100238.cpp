/* NON_MATCHING: retail uses lsls r2, r1, #24 where the compiled block uses uxtb r2, r1. */
#include "common.h"

extern "C" u8 *FUN_00100238(u8 *text, s32 character)
{
    const u8 target = static_cast<u8>(character);
    u8 *cursor = text;
    u8 current;

    do {
        current = *cursor;
        if (current == target) {
            return cursor;
        }
        ++cursor;
    } while (current != 0);

    return NULL;
}
