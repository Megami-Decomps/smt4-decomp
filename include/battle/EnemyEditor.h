#ifndef BATTLE_ENEMYEDITOR_H
#define BATTLE_ENEMYEDITOR_H
#include "common.h"
#include <stddef.h>
struct EnemyEditorWork {
    u8 unk00[0xc];
    u32 list;
    s16 selection;
};
struct EnemyEditorRecordIV {
    u8 unk00[0xc];
    f32 position[3];
    u8 unk18[0xfc];
};
struct EnemyEditorRecordA {
    u8 unk00[0xc];
    f32 position[3];
    u8 unk18[0x1b8];
};
struct EnemyEditorResourceIV {
    u8 unk0000[0x1e98];
    EnemyEditorRecordIV *records;
};
struct EnemyEditorResourceA {
    u8 unk0000[0x1ed4];
    EnemyEditorRecordA *records;
};
struct EnemyEditorUnit { u16 unk00; u16 id; };
typedef char EnemyEditorOffsets[
    offsetof(EnemyEditorWork, selection) == 0x10 &&
    sizeof(EnemyEditorRecordIV) == 0x114 && sizeof(EnemyEditorRecordA) == 0x1d0 &&
    offsetof(EnemyEditorRecordIV, position) == 0xc &&
    offsetof(EnemyEditorRecordA, position) == 0xc &&
    offsetof(EnemyEditorResourceIV, records) == 0x1e98 &&
    offsetof(EnemyEditorResourceA, records) == 0x1ed4 ? 1 : -1];
#endif
