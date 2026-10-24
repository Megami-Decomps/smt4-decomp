#ifndef BATTLE_BATTLEMEMBERLIST_H
#define BATTLE_BATTLEMEMBERLIST_H

#include "common.h"
#include <vector>

/* The part of the battle main state (btlGetMainState) the script commands that edit the list of
 * battle members use: the ids of the members, in order. */
struct BattleMemberList {
    /* 0x0000 */ u8 unk0000[0x4E58];
    /* 0x4E58 */ std::vector<u16> members;
};

extern "C" {
BattleMemberList *btlGetMainState(void);
s32 scrGetArg(u32 index);
}

#endif
