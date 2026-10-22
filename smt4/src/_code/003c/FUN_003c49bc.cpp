/* NON_MATCHING: retail keeps the byte value in r0 and the setting address in r1 (built swaps them) and shares the word store of cases 4 and 5 */
#include "common.h"

extern "C" {

extern u8 DAT_00435e00;
extern u8 DAT_00435e01;
extern u8 DAT_00435e02;
extern u8 DAT_00435e03;
extern u32 DAT_00435e04;
extern u32 DAT_00435e08;
extern u32 DAT_00435e20;

u32 asdListBoxGetSelectedItemId(void *listBox);
u32 *asdListBoxGetItemValuePtr(void *listBox, u32 itemId);
u32 *asdListBoxGetItemText(void *listBox, u32 itemId);

typedef struct {
    u8 unk0[0x10];
    void *listBox;  /* 0x10 */
} DebugSettingsMenu;

/* Stores the selected list box item's value into the debug setting it edits. */
void FUN_003c49bc(DebugSettingsMenu *menu)
{
    u8 *flag;
    u8 value;

    switch (asdListBoxGetSelectedItemId(menu->listBox)) {
    case 0:
        value = *asdListBoxGetItemValuePtr(menu->listBox, 0);
        flag = &DAT_00435e00;
        break;
    case 1:
        value = *asdListBoxGetItemValuePtr(menu->listBox, 1);
        flag = &DAT_00435e01;
        break;
    case 2:
        value = *asdListBoxGetItemValuePtr(menu->listBox, 2);
        flag = &DAT_00435e02;
        break;
    case 3:
        value = *asdListBoxGetItemValuePtr(menu->listBox, 3);
        flag = &DAT_00435e03;
        break;
    case 4:
        DAT_00435e04 = *asdListBoxGetItemValuePtr(menu->listBox, 4);
        return;
    case 5:
        DAT_00435e08 = *asdListBoxGetItemText(menu->listBox, 5);
        return;
    case 6:
        DAT_00435e20 = *asdListBoxGetItemText(menu->listBox, 6);
        return;
    default:
        return;
    }
    *flag = value;
}

} /* extern "C" */
