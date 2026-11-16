#include "shard/W4_W4Match2_UiQuest.h"

extern "C" {

extern int FUN_0029efa8(void *block);
extern int resourceRunOperationIfUnblocked(void *block);

u16 uiQuestGetCurrentEntryId(void)
{
    UiQuest *obj = g_uiQuest;
    int a = resourceRunOperationIfUnblocked(obj->cursor.data);
    int b = FUN_0029efa8(obj->cursor.data);

    return obj->list[b + a];
}

} /* extern "C" */
