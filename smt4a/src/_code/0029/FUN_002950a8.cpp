#include "common.h"
#include "map/PopupStateA.h"

extern "C" {

typedef struct SaveSlot {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ u16 id;
} SaveSlot;

extern void FUN_00152f44(void);
extern SaveSlot *saveSlotFindSelected(void);
extern const char *popupSelectWeightedMessage(u32 kind);

/* When no popup is active and a save slot is selected, opens popup mode 0x16 for that slot. */
void FUN_002950a8(void)
{
    SaveSlot *slot;

    FUN_00152f44();
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
