/* Starts the mode-10 popup when the scroll position passes the entry's height (adjusted per direction) and a candidate exists. */
#include "common.h"
#include "util/Random.h"
#include "gamedata/EncountData.h"
#include "map/PopupStateA.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {

s32 gameFlagIsSet(u32 flag);
s32 gameDataBlocksGetTableFlag(void);
const char *popupSelectWeightedMessage(u32 kind, u16 id);
f32 partyGetAverageLevel(s32 index);

void popupTryStartScrollPrompt(u32 arg1, u32 arg2)
{
    s32 adjust;
    s32 scrollY;
    EncountRecordA *entry;
    PartySlotA *candidate;

    if (g_popupState->state != 0) {
        return;
    }

    adjust = 0;
    switch (gameDataBlocksGetTableFlag()) {
    case 1:
        adjust = -12;
        break;
    case 2:
        adjust = 12;
        break;
    case 3:
        adjust = -20;
        break;
    case 4:
        adjust = 16;
        break;
    }

    entry = dataTable02FindConditionalMapRecord(arg1, arg2);
    scrollY = (s32)partyGetAverageLevel(2);
    if (scrollY < entry->levelThreshold + adjust) {
        candidate = saveSlotFindSelected();
        if (candidate != NULL) {
            if (gameFlagIsSet(0x1a2) == 0 || (s32)randRange(99) + 1 > 50) {
                g_popupState->state = 10;
                g_popupState->timer = 0;
                g_popupState->speakerId = candidate->id;
                g_popupState->message = popupSelectWeightedMessage(3, candidate->id);
            }
        }
    }
}

} /* extern "C" */
