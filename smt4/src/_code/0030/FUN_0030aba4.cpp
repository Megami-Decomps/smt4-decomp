#include "common.h"

struct QuestUiState {
    /* 0x000 */ u8 unk00[0x5c4];
    /* 0x5c4 */ s8 pending;
};
extern "C" {
extern QuestUiState *g_uiQuest;
s32 FUN_002903f0();
/* Processes the pending quest UI update. */
s32 FUN_0030aba4()
{
    if (g_uiQuest->pending)
        return 0;
    return FUN_002903f0();
}
}
