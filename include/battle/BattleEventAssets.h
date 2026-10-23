#ifndef BATTLE_BATTLEEVENTASSETS_H
#define BATTLE_BATTLEEVENTASSETS_H

#include "common.h"
#include <stddef.h>

/* Accessed prefix; the event name is a trailing string, not a recovered allocation boundary. */
struct BattleEventAssetSource {
    /* 0x000 */ u8 unk000[0xC4];
    /* 0x0C4 */ u32 archiveId;
    /* 0x0C8 */ u8 unk0C8[0x38];
    /* 0x100 */ char name[1];
};
typedef char BattleEventAssetSourceOffsetsCheck[
    offsetof(BattleEventAssetSource, archiveId) == 0xC4 &&
    offsetof(BattleEventAssetSource, name) == 0x100 ? 1 : -1];

struct BattleEventAssetSourceA {
    u8 unk000[0xf0];
    u32 archiveId; // 0x0f0
    u8 unk0f4[0x3c];
    char name[1]; // 0x130
};
struct BattleEventAssetLoadState {
    u32 state;
    u8 unk04[8];
    void *images; // 0x0c
    void *font; // 0x10
};
typedef char BattleEventAssetSourceAOffsetsCheck[
    offsetof(BattleEventAssetSourceA, archiveId) == 0xf0 &&
    offsetof(BattleEventAssetSourceA, name) == 0x130 &&
    offsetof(BattleEventAssetLoadState, images) == 0xc &&
    offsetof(BattleEventAssetLoadState, font) == 0x10 ? 1 : -1];

#endif
