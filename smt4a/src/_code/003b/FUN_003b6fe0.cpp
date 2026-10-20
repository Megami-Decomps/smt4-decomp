/* NON_MATCHING: retail reloads the g_gameState address for the stores (the zero takes r0, the address r1) and loads the flag byte into r0; this build keeps the address in r0 */
#include "common.h"

extern "C" {

typedef struct GameState {
    /* 0x000 */ u8 unk000[0x3F5];
    /* 0x3F5 */ u8 questCenterActive;
    /* 0x3F6 */ u8 unk3f6[2];
    /* 0x3F8 */ u32 questCenterWork[3];
} GameState;

extern GameState g_gameState;

extern s32 scrGetCommandFrame(void);
extern void jyoucyuGetTableEntry(s32 index);
extern void QuestCenter_GetActiveEntry(void);
extern void setBit0(void);
extern s32 QuestCenterMode_IsBusy(void);

/* Script command: on its first frame refreshes the quest center entry and clears its active state; returns 1 once the quest center mode is no longer busy. */
u32 FUN_003b6fe0(void)
{
    if (scrGetCommandFrame() == 0) {
        jyoucyuGetTableEntry(0);
        QuestCenter_GetActiveEntry();
        setBit0();
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
