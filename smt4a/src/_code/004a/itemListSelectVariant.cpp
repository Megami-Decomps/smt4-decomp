#include "gamedata/SelectionValueRecord.h"
#include "ui/ItemListSelection.h"

extern "C" {
SelectionValueRecord *FUN_0026140c(void);
void FUN_004a84e8(ItemListSelectionEntry *entry, s32 selection);

// Select the item-list presentation variant, retaining its alternate-state bit.
void itemListSelectVariant(ItemListSelectionOwner *owner, s32 useAlternate)
{
    if (owner->selection.value == 0) {
        return;
    }
    u8 &variant = FUN_0026140c()->variant.flags;
    s8 selection;
    switch (variant & 0x7F) {
    case 2:
        selection = 2;
        break;
    case 1:
        selection = 6;
        break;
    case 4:
        selection = 14;
        break;
    case 5:
        selection = 20;
        break;
    case 3:
        selection = 22;
        break;
    default:
        selection = 6;
        variant = (variant & ~0x7F) | 1;
        break;
    }
    if (useAlternate != 0 && (variant & 0x80) != 0) {
        ++selection;
    }
    FUN_004a84e8(&owner->selection, selection);
}
}
