#include "ui/UiSpriteApi.h"
#include "gamedata/PartyPick.h"
#include "script/ScriptArgs.h"
#include "ui/MessageMainA.h"
#include "gamedata/GameSaveDataA.h"
#include "code/Code0018.h"
#include "gamedata/SaveSlotTable.h"
#include "code/Code003e.h"

extern "C" {
void FUN_004bd410(u16 id);
} /* extern "C" */

enum {
    MESSAGE_CLOSE_FRAME = 30,
    MESSAGE_COUNTER_SPRITE = 17,
    MESSAGE_FIRST_QUEUE_SPRITE = 22,
    MESSAGE_QUEUE_SIZE = 12,
    MESSAGE_CLOSE_ANIMATION = 2,
};

enum {
    MESSAGE_COUNTER_IDLE = 0,
    MESSAGE_COUNTER_SHOWN = 1,
    MESSAGE_COUNTER_WAITING = 2,
    MESSAGE_COUNTER_CLOSING = 4,
};

/* Closes the affected message rows, commits removals, and repairs the selected party member. */
extern "C" u32 scrCommClearPartySlot(void)
{
    MessageWindowA *panel = g_messageMain.banner;
    if (scrGetCommandFrame() == MESSAGE_CLOSE_FRAME) {
        MessageWindowA *current = g_messageMain.banner;
        u8 state = current->counterState;
        if (state == MESSAGE_COUNTER_IDLE || state == MESSAGE_COUNTER_WAITING || state == MESSAGE_COUNTER_SHOWN) {
            current->counterState = MESSAGE_COUNTER_CLOSING;
            uiSpriteSelectAnim(&current->sprites[MESSAGE_COUNTER_SPRITE], MESSAGE_CLOSE_ANIMATION);
            for (s32 i = 0; i < MESSAGE_QUEUE_SIZE && i <= current->queueIndex; ++i) {
                uiSpriteSelectAnim(&current->sprites[MESSAGE_FIRST_QUEUE_SPRITE + i], MESSAGE_CLOSE_ANIMATION);
                current->queueStates[i] = MESSAGE_COUNTER_CLOSING;
            }
        }
    }
    if (panel->shown == 0) {
        for (s32 i = 0; i < MESSAGE_QUEUE_SIZE && i <= panel->queueIndex; ++i) {
            u32 id = panel->queueIds[i];
            if (id != 0) {
                if (panel->queueSpecial[i] != 0) {
                    FUN_004bd410((u16)id);
                    panel->queueIds[i] = 0;
                } else {
                    partySlotClearInactiveFlag((u16)id);
                    panel->queueIds[i] = 0;
                    if (saveSlotFindSelected()->id == id) {
                        bool found = false;
                        for (s32 index = 0; index < PARTY_PICK_SLOT_COUNT; ++index) {
                            const PartySlotA *candidate = partyGetSlot((u16)index);
                            if (candidate->id != id && partySlotIsOccupied(candidate)) {
                                saveSlotTableSetPreferredId(candidate->id);
                                found = true;
                                break;
                            }
                        }
                        if (!found) {
                            saveSlotTableSetPreferredId(0);
                        }
                    }
                }
            }
        }
        panel->queuePending = 0;
        return 1;
    }
    return 0;
}
