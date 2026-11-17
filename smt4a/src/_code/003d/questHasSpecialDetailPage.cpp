#include "quest_center/QuestRecordA.h"

extern "C" {
u32 partyEntryBitsBit3(s32 index);

u32 questHasSpecialDetailPage(u32 id)
{
    if (questDataGetRecord(id) != NULL) {
        return partyEntryBitsBit3(id);
    }
    return 0;
}
}
