/* NON_MATCHING: entry argument scheduling, table bounds comparison and null-result allocation differ. */
#include "gamedata/PartnerInfoTable.h"
#include "util/Random.h"
#include "map/PopupStateA.h"
extern "C" {
s32 gameFlagIsSet(u32 flag);

/* Select a weighted popup matching its category, ID and required/excluded game flags. */
const char *popupSelectWeightedMessage(s32 category, s32 id)
{
    if (category < 26 && category != 7) {
        s32 count = partnerInfoCount();
        for (u32 index = 0; static_cast<s32>(index) < count; ++index) {
            PartnerInfoRecord *record = partnerInfoRecordAt(index);
            if (record->kind == category && record->partnerId == id &&
                (record->requiredFlag == 0 || gameFlagIsSet(record->requiredFlag)) &&
                (record->excludedFlag == 0 || !gameFlagIsSet(record->excludedFlag))) {
                s32 weight = 0;
                s32 roll = randRange(99) + 1;
                for (s32 choice = 0; choice < 4; ++choice) {
                    weight += record->choices[choice].weight;
                    if (roll <= weight) {
                        PartnerInfoMessage *message = FUN_00365bc4(record->choices[choice].message);
                        PopupStateA *popup = g_popupState;
                        popup->speakerId = record->partnerId;
                        popup->messageData = message->data;
                        return message->text;
                    }
                }
            }
        }
    }
    return NULL;
}
}
