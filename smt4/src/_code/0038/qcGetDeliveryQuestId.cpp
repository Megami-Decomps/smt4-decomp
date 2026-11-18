#include "ui/DummyAttachmentWork.h"
#include "quest_center/QuestRecord.h"

extern "C" {

/* The id of the quest chosen for delivery in the quest center. */
u16 qcGetDeliveryQuestId(DummyAttachmentWork *work)
{
    return questDataGetRecord((u16)work->questId)->id;
}

} /* extern "C" */
