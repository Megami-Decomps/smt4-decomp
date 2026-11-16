#include "common.h"

extern "C" {

struct QuestState {
    /* 0x000 */ u8 unk000[0x90c];
    /* 0x90c */ u8 disabled;
};
extern QuestState *g_uiQuest;
s32 rosterGetLeaderId(void);

s32 uiQuestRunEnabledAction(void)
{
    if (g_uiQuest->disabled) {
        return 0;
    }
    return rosterGetLeaderId();
}

} /* extern "C" */
