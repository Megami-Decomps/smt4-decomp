#include "common.h"

extern "C" {

typedef struct PopupState {
    /* 0x00 */ s32 mode;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ u8 unk08[0x0C];
    /* 0x14 */ s32 handle;
    /* 0x18 */ s32 slot;
} PopupState;

typedef struct SaveSlot {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ u16 id;
} SaveSlot;

extern PopupState *g_popupState;

extern void FUN_00152f44(void);
extern SaveSlot *saveSlotFindSelected(void);
extern s32 FUN_002d8b58(u32 arg);

/* When no popup is active and a save slot is selected, opens popup mode 0x16 for that slot. */
void FUN_002950a8(void)
{
    SaveSlot *slot;

    FUN_00152f44();
    if (g_popupState->mode == 0) {
        slot = saveSlotFindSelected();
        if (slot != NULL) {
            g_popupState->mode = 0x16;
            g_popupState->slot = slot->id;
            g_popupState->handle = FUN_002d8b58(0x19);
            g_popupState->unk04 = 0;
        }
    }
}

} /* extern "C" */
