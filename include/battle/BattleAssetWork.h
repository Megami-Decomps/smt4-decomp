#ifndef BATTLE_BATTLEASSETWORK_H
#define BATTLE_BATTLEASSETWORK_H
#include "common.h"
#include <stddef.h>

struct BattleArrangementWork {
    /* 0x00 */ u32 phase;
};
struct BtlMainState;

struct BattleTalkWork {
    /* 0x00 */ BtlMainState *battle;
    /* 0x04 */ u32 reserved;
    /* 0x08 */ void *toneFile;
    /* 0x0C */ void *scriptFile;
    /* 0x10 */ u32 reserved10;
    /* 0x14 */ void *messageFile;
    /* 0x18 */ u32 ready;
    /* 0x1C */ u32 reserved1C;
    /* 0x20 */ s32 memberId; /* the talking unit's member id in the battle's entry lists */
    /* 0x24 */ u8 padding24[0xA4];
    /* 0xC8 */ u32 toneId;
};
typedef char BattleAssetWorkOffsetsCheck[
    offsetof(BattleTalkWork, toneFile) == 8 &&
    offsetof(BattleTalkWork, scriptFile) == 0xC &&
    offsetof(BattleTalkWork, messageFile) == 0x14 &&
    offsetof(BattleTalkWork, memberId) == 0x20 &&
    offsetof(BattleTalkWork, toneId) == 0xC8 ? 1 : -1];
#endif
