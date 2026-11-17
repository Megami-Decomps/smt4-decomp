/* NON_MATCHING: table lookup null/bounds registers and popup-field store grouping differ. */
#include "gamedata/PartnerInfoTable.h"
#include "gamedata/GameFlags.h"
#include "map/PopupStateA.h"


extern "C" {
s32 gameFlagIsSet(s32 flag);

/* Activate the first matching kind-seven popup and mark its blocking flag. */
void FUN_0023466c(s32 id, s32 argument)
{
    DataTableView<PartnerInfoRecord> table(0x43, 0);
    s32 count = (s32)table.count;
    for (u32 i = 0; (s32)i < count; ++i) {
        DataTableView<PartnerInfoRecord> current(0x43, 0);
        PartnerInfoRecord *record = current.at(i);
        if (record->kind == 7 && record->partnerId == id &&
            (record->requiredFlag == 0 || gameFlagIsSet(record->requiredFlag)) &&
            (record->excludedFlag == 0 || !gameFlagIsSet(record->excludedFlag)) &&
            record->argument == argument) {
            PartnerInfoMessage *message = FUN_00365bc4(record->choices[0].message);
            PopupStateA *popup = g_popupState;
            popup->state = 9;
            popup->timer = 0;
            popup->message = message->text;
            popup->speakerId = record->partnerId;
            popup->messageData = message->data;
            gameFlagSetValue(record->excludedFlag, 1, 1);
            return;
        }
    }
}
}
