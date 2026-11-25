/* NON_MATCHING: 6 lines, scheduling: retail reloads the slot for the second holder address before it reads the
 * selected item's id, the build after. Naming the item and the cursor in single-use locals first
 * (`item = menu->selectedItem(); list = &menu->slotInfo[menu->slot]; id = item->id;`) gives IDENTICAL; they are
 * temporaries with one use each, so they are not written. */
#include "classes/Obj536044.h"
#include "shop/ShopSelectedItem.h"
#include "addon/AocEntryKind.h"
#include "network/DataStore/DataStoreMain.h"
#include "gamedata/GamePlayerData.h"

/* The player's equipment as a 100-byte block: seven slots from offset 0. */
struct PlayerEquipmentBlock {
    /* 0x00 */ u16 slots[7];
    /* 0x0E */ u8 unk0E[0x56];
};

extern "C" {
u32 uiStateHasAnyActiveFlag(const FlaggedValueHolder *holder);
void statusCameraRestore(s32 mode);
void statusModelPreviewOutfitPart(s32 kind, u16 id);
void __aeabi_memcpy4(void *destination, const void *source, s32 bytes);
void FUN_003df7c4(PlayerEquipmentBlock *block);
void FUN_00372100(PlayerEquipmentBlock *block, s32 arg);

/* Tracks the selected item of the equipment menu: restarts the preview when the selection changes
 * and shows the item on the character when the preview is enabled. */
void shopTrackSelectedItemPreview(Obj536044 *menu)
{
    u32 id = menu->selectedItem()->id;
    u32 pending = uiStateHasAnyActiveFlag(&menu->slotInfo[menu->slot].holder);
    if (!(pending == 0 && menu->lastSelectedId == id)) {
        s32 kind = aocEntryGetKindForward(id);
        if (kind == 4 || aocEntryGetKindForward(id) == 5 || aocEntryGetKindForward(id) == 6) {
            statusCameraRestore(0);
            menu->previewing = 0;
            menu->previewReady = 0;
        }
        menu->lastSelectedId = id;
    } else if (!menu->previewing) {
        if (id != 0) {
            if (aocEntryGetKindForward(id) == 4)
                statusModelPreviewOutfitPart(0, id);
            if (aocEntryGetKindForward(id) == 5)
                statusModelPreviewOutfitPart(1, id);
            if (aocEntryGetKindForward(id) == 6)
                statusModelPreviewOutfitPart(2, id);
        }
        menu->previewing = 1;
    } else {
        if (objBStateAllowsAction()) {
            statusCameraRestore(1);
            menu->previewReady = 1;
        }
    }
    if (menu->previewEnabled != 0 && menu->previewedId != id) {
        menu->previewedId = id;
        PlayerEquipmentBlock preview;
        __aeabi_memcpy4(&preview, gameGetPlayerData(), 100);
        if (id != 0) {
            switch (aocEntryGetKindForward(id)) {
            case 2:
                preview.slots[0] = id;
                break;
            case 3:
                preview.slots[1] = id;
                break;
            case 4:
                preview.slots[3] = id;
                break;
            case 5:
                preview.slots[4] = id;
                break;
            case 6:
                preview.slots[5] = id;
                break;
            case 7:
                preview.slots[6] = id;
                break;
            case 8:
                preview.slots[2] = id;
                break;
            }
        }
        FUN_003df7c4(&preview);
        FUN_00372100(&preview, 0);
    }
}

} /* extern "C" */
