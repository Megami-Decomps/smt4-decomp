#include "common.h"
#include "map/PopupStateA.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {

extern void messageVoiceFlagsGet(void);
extern const char *popupSelectWeightedMessage(u32 kind);

/* When no popup is active and a save slot is selected, opens popup mode 0x16 for that slot. */
void FUN_002950a8(void)
{
    PartySlotA *slot;

    messageVoiceFlagsGet();
    if (g_popupState->state == 0) {
        slot = saveSlotFindSelected();
        if (slot != NULL) {
            g_popupState->state = 0x16;
            g_popupState->speakerId = slot->id;
            g_popupState->message = popupSelectWeightedMessage(0x19);
            g_popupState->timer = 0;
        }
    }
}

} /* extern "C" */
