#include "shard/W5_W5Match7_UiQuest.h"
#include "shard/Shard0037.h"

extern "C" {

extern void uiQuestRebuildLists(void);
extern void uiQuestReturnToList(void);

void stateHolder4Request(s8 value)
{
    UiQuestApoc *obj = g_uiQuest;

    obj->filtered = 1;
    obj->filterMode = value;
    uiQuestRebuildLists();
    uiQuestReturnToList();
}

} /* extern "C" */
