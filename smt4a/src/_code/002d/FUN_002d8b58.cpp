/* NON_MATCHING: entry argument scheduling, table bounds comparison and null-result allocation differ. */
#include "map/PopupChoices.h"
#include "gamedata/DataTable.h"
extern "C" {
extern void *g_popupState;
s32 randRange(u32 maximum);
s32 gameFlagIsSet(u32 flag);
PopupMessageRecord *FUN_00365bc4(s32 message);

/* Select a weighted popup matching its category, ID and required/excluded game flags. */
const char *FUN_002d8b58(s32 category, s32 id)
{
    if (category < 26 && category != 7) {
        void *section = dataTableGet(0x43, 0);
        dataTableGetEntries(section);
        s32 count = dataTableGetCount(section);
        for (u32 index = 0; static_cast<s32>(index) < count; ++index) {
            section = dataTableGet(0x43, 0);
            PopupChoiceRecord *record = static_cast<PopupChoiceRecord *>(dataTableGetEntries(section));
            u32 entryCount = dataTableGetCount(section);
            if (index >= entryCount)
                record = NULL;
            else
                record += index;
            if (record->category == category && record->id == id &&
                (record->requiredFlag == 0 || gameFlagIsSet(record->requiredFlag)) &&
                (record->excludedFlag == 0 || !gameFlagIsSet(record->excludedFlag))) {
                s32 weight = 0;
                s32 roll = randRange(99) + 1;
                for (s32 choice = 0; choice < 4; ++choice) {
                    weight += record->choices[choice].weight;
                    if (roll <= weight) {
                        PopupMessageRecord *message = FUN_00365bc4(record->choices[choice].message);
                        /* Selection fields follow the shared popup-state prefix. */
                        struct PopupSelectionView {
                            u8 prefix[0x18];
                            s32 selectedId;
                            void *selectedData;
                        };
                        PopupSelectionView *work = static_cast<PopupSelectionView *>(g_popupState);
                        work->selectedId = record->id;
                        work->selectedData = message->data;
                        return message->text;
                    }
                }
            }
        }
    }
    return NULL;
}
}
