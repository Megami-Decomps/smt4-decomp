#ifndef BATTLE_BATTLEEDITORSTATE_H
#define BATTLE_BATTLEEDITORSTATE_H
#include "common.h"
#include <stddef.h>

struct BattleEditorStateA {
    /* 0x00 */ u32 mode;
    /* 0x04 */ u32 rosterCount;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ s16 selection;
    /* 0x12 */ s8 group;
    /* 0x13 */ s8 member;
    /* 0x14 */ u32 unk14;
};
struct BattleEditorGlobalsA {
    BattleEditorStateA* state;
    u32 unk04;
    u64 markerMask;
};
typedef char BattleEditorStateLayoutCheck[
    offsetof(BattleEditorStateA, selection) == 0x10 &&
    offsetof(BattleEditorStateA, group) == 0x12 &&
    sizeof(BattleEditorStateA) == 0x18 &&
    offsetof(BattleEditorGlobalsA, markerMask) == 8 ? 1 : -1];
#endif
