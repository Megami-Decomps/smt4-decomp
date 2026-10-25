#ifndef UI_QUEST_SELECTION_STATE_H
#define UI_QUEST_SELECTION_STATE_H
#include "common.h"
#include <stddef.h>

struct QuestSelectionFlags {
    /* 0x00 */ u8 unk00[0x1E];
    /* 0x1E */ u16 quest;
    /* 0x20 */ u16 unk20;
    /* 0x22 */ u16 selection;
};
struct QuestSelectionNotification {
    /* 0x00 */ u8 unk00[0xAC];
    /* 0xAC */ u16 pending;
};
typedef char QuestSelectionStateOffsets[
    offsetof(QuestSelectionFlags, quest) == 0x1E &&
    offsetof(QuestSelectionFlags, selection) == 0x22 &&
    offsetof(QuestSelectionNotification, pending) == 0xAC ? 1 : -1];
#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_00467df8();

#ifdef __cplusplus
}
#endif

#endif
