#include "shard/Shard0037.h"

extern "C" {

extern StateHolder4 *g_uiQuest;
extern void FUN_001ff724(void);
extern void uiQuestReturnToList(void);

void stateHolder4Request(u8 value)
{
    StateHolder4 *obj = g_uiQuest;

    obj->unk93D = 1;
    obj->unk945 = value;
    FUN_001ff724();
    uiQuestReturnToList();
}

} /* extern "C" */
