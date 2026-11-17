#ifndef UI_QUEST_SELECTION_STATE_H
#define UI_QUEST_SELECTION_STATE_H
#include "common.h"
#include <stddef.h>

struct QuestSelectionNotification {
    /* 0x00 */ u8 unk00[0xAC];
    /* 0xAC */ u16 pending;
};
typedef char QuestSelectionStateOffsets[
    offsetof(QuestSelectionNotification, pending) == 0xAC ? 1 : -1];
#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_00467df8();

#ifdef __cplusplus
}
#endif

#endif
