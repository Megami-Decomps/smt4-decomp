#include "common.h"

extern "C" {

void sysPlaySe(s32 id);
s32 gameFlagIsSet(u32 flag);

/* Plays the sound effect that belongs to menu item `item` (0x13..0x19 and 0x48..0x4E); items 0x13 and 0x16 pick one of two effects by flag 0x410. */
void menuItemPlaySe(s32 item)
{
    s32 flag;
    u32 effect;

    if (item == 0x13 || item == 0x48) {
        flag = gameFlagIsSet(0x410);
        if (flag == 0) {
            effect = 0x15;
        } else {
            effect = 0xE;
        }
        sysPlaySe(effect);
    }
    if (item == 0x14 || item == 0x49) {
        sysPlaySe(0xF);
        return;
    }
    if (item == 0x15 || item == 0x4A) {
        sysPlaySe(0x10);
        return;
    }
    if (item == 0x16 || item == 0x4B) {
        flag = gameFlagIsSet(0x410);
        if (flag == 0) {
            effect = 0x16;
        } else {
            effect = 0x11;
        }
        sysPlaySe(effect);
    }
    if (item == 0x17 || item == 0x4C) {
        sysPlaySe(0x12);
        return;
    }
    if (item == 0x18 || item == 0x4D) {
        sysPlaySe(0x13);
        return;
    }
    if (item != 0x19 && item != 0x4E) {
        return;
    }
    sysPlaySe(0x14);
}

} /* extern "C" */
