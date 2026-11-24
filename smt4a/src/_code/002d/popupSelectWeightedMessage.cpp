#include "gamedata/PartnerInfoTable.h"
#include "util/Random.h"
#include "map/PopupStateA.h"

namespace {
enum {
    PARTNER_POPUP_SCRIPTED = 7,
    PARTNER_POPUP_KIND_COUNT = 26,
};
}

extern "C" {
s32 gameFlagIsSet(u32 flag);

/* Select a weighted popup matching its category, ID and required/excluded game flags. */
const char *popupSelectWeightedMessage(s32 category, s32 id)
{
    if (category < PARTNER_POPUP_KIND_COUNT && category != PARTNER_POPUP_SCRIPTED) {
        s32 count = partnerInfoCount();
        for (u32 index = 0; (s32)index < count; ++index) {
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

} /* extern "C" */
