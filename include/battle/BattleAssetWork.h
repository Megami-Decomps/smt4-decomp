#ifndef BATTLE_BATTLEASSETWORK_H
#define BATTLE_BATTLEASSETWORK_H
#include "common.h"
#include <stddef.h>

struct BattleArrangementWork {
    /* 0x00 */ u32 phase;
};
struct BattleTalkWork {
    /* 0x00 */ u32 unitId;
    /* 0x04 */ u32 reserved;
    /* 0x08 */ void *toneFile;
    /* 0x0C */ void *scriptFile;
    /* 0x10 */ u32 reserved10;
    /* 0x14 */ void *messageFile;
    /* 0x18 */ u32 ready;
    /* 0x1C */ u32 reserved1C;
    /* 0x20 */ u32 selector;
    /* 0x24 */ u8 padding24[0xA4];
    /* 0xC8 */ u32 toneId;
};
typedef char BattleAssetWorkOffsetsCheck[
    offsetof(BattleTalkWork, toneFile) == 8 &&
    offsetof(BattleTalkWork, scriptFile) == 0xC &&
    offsetof(BattleTalkWork, messageFile) == 0x14 &&
    offsetof(BattleTalkWork, selector) == 0x20 &&
    offsetof(BattleTalkWork, toneId) == 0xC8 ? 1 : -1];
struct BattleTalkUnitReference {
    u16 slot;
    u16 id;
};
#endif
