#ifndef BATTLE_RESERVE_EDITOR_H
#define BATTLE_RESERVE_EDITOR_H
#include "common.h"
#include <stddef.h>

struct ReserveEditorWork {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 listBox;
};
struct ReserveEditorRecord {
    /* 0x000 */ f32 position[3];
    /* 0x00C */ f32 previousPosition[3];
    /* 0x018 */ u8 unk018[0x10];
    /* 0x028 */ f32 yaw;
    /* 0x02C */ u8 unk02C[0x14];
    /* 0x040 */ f32 scale;
    /* 0x044 */ u8 unk044[0x178];
    /* 0x1BC */ u32 kind;
    /* 0x1C0 */ s32 value;
};
typedef char ReserveEditorRecordOffsets[
    offsetof(ReserveEditorWork, listBox) == 0x10 &&
    offsetof(ReserveEditorRecord, previousPosition) == 0xC &&
    offsetof(ReserveEditorRecord, yaw) == 0x28 &&
    offsetof(ReserveEditorRecord, scale) == 0x40 &&
    offsetof(ReserveEditorRecord, kind) == 0x1BC &&
    offsetof(ReserveEditorRecord, value) == 0x1C0 ? 1 : -1];
#endif
