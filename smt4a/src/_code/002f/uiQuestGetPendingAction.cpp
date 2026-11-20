#include "shard/W5_W5Match7_UiQuest.h"
/* Reads the quest panel's current state. */
extern "C" s32 uiQuestGetPendingAction(void) { return g_uiQuest->unk90D; }
