/* NON_MATCHING: direct stores now match retail registers; armcc cross-jumps the byte stores into case 1 (retail: case 3) and orders case 4/6 address/value loads the other way round. */
#include "common.h"
#include "battle/btlHelp.h"

extern "C" {

extern u8 DAT_00435e00;
extern u8 DAT_00435e01;
extern u8 DAT_00435e02;
extern u8 DAT_00435e03;
extern u32 DAT_00435e04;
extern u32 DAT_00435e08;
extern u32 DAT_00435e20;

u32 asdListBoxGetSelectedItemId(void *listBox);
u32 *asdListBoxGetItemText(void *listBox, u32 itemId);

typedef struct {
    u8 unk0[0x10];
    void *listBox;  /* 0x10 */
} DebugSettingsMenu;

/* Stores the selected list box item's value into the debug setting it edits. */
void FUN_003c49bc(DebugSettingsMenu *menu)
{
    switch (asdListBoxGetSelectedItemId(menu->listBox)) {
    case 0:
        DAT_00435e00 = *asdListBoxGetItemValuePtr(menu->listBox, 0);
        break;
    case 1:
        DAT_00435e01 = *asdListBoxGetItemValuePtr(menu->listBox, 1);
        break;
    case 2:
        DAT_00435e02 = *asdListBoxGetItemValuePtr(menu->listBox, 2);
        break;
    case 3:
        DAT_00435e03 = *asdListBoxGetItemValuePtr(menu->listBox, 3);
        break;
    case 4:
        DAT_00435e04 = *asdListBoxGetItemValuePtr(menu->listBox, 4);
        break;
    case 5:
        DAT_00435e08 = *asdListBoxGetItemText(menu->listBox, 5);
        break;
    case 6:
        DAT_00435e20 = *asdListBoxGetItemText(menu->listBox, 6);
        break;
    }
}

} /* extern "C" */
