#include "common.h"

extern "C" {

typedef struct GameState {
    /* 0x000 */ u8 unk000[0x3F5];
    /* 0x3F5 */ s8 questCenterActive;
    /* 0x3F6 */ u8 unk3f6[2];
    /* 0x3F8 */ u32 questCenterWork[3];
} GameState;

extern GameState g_gameState;

extern s32 scrGetCommandFrame(void);
extern u32 jyoucyuGetTableEntry(s32 index);
extern s32 QuestCenter_GetActiveEntry(void);
extern void setBit0(u32 *flags);
extern s32 QuestCenterMode_IsBusy(void);

/* Script command: on its first frame refreshes the quest center entry and clears its active state; returns 1 once the quest center mode is no longer busy. */
u32 scrCommQuestCenterRefreshAndWait(void)
{
    if (scrGetCommandFrame() == 0) {
        jyoucyuGetTableEntry(0);
        setBit0(reinterpret_cast<u32 *>(QuestCenter_GetActiveEntry()));
        if (g_gameState.questCenterActive != 0) {
            g_gameState.questCenterActive = 0;
            g_gameState.questCenterWork[0] = 0;
            g_gameState.questCenterWork[1] = 0;
            g_gameState.questCenterWork[2] = 0;
        }
    }
    return QuestCenterMode_IsBusy() == 0;
}

} /* extern "C" */
