#include "common.h"

extern "C" {

/* Settings record the list box writes into: values from 0x40 (0x58 is a text), three texts at 0x90. */
typedef struct ListSettings {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u32 value[13];
    /* 0x74 */ u8 unk74[0x1C];
    /* 0x90 */ u32 text[3];
} ListSettings;

typedef struct ListScreen {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void *listBox;
} ListScreen;

extern ListSettings *DAT_004398d4; /* 0x4398d4 */

extern u32 *asdListBoxGetItemText(void *listBox, u32 id);
extern u32 *asdListBoxGetItemValuePtr(void *listBox, u32 id);
extern u32 asdListBoxGetSelectedItemId(u32 job);

/* Copies the selected list box item into its slot of the settings record. */
void FUN_003c4f38(ListScreen *screen)
{
    u32 id = asdListBoxGetSelectedItemId((u32)screen->listBox);
    u32 *text = DAT_004398d4->text;

    switch (id) {
    case 0:
        text[0] = *asdListBoxGetItemText(screen->listBox, id);
        break;
    case 1:
        text[1] = *asdListBoxGetItemText(screen->listBox, id);
        break;
    case 2:
        text[2] = *asdListBoxGetItemText(screen->listBox, id);
        break;
    case 3:
        DAT_004398d4->value[0] = *asdListBoxGetItemValuePtr(screen->listBox, id);
        break;
    case 4:
        DAT_004398d4->value[1] = *asdListBoxGetItemValuePtr(screen->listBox, id);
        break;
    case 5:
        DAT_004398d4->value[2] = *asdListBoxGetItemValuePtr(screen->listBox, id);
        break;
    case 6:
        DAT_004398d4->value[3] = *asdListBoxGetItemValuePtr(screen->listBox, id);
        break;
    case 7:
        DAT_004398d4->value[4] = *asdListBoxGetItemValuePtr(screen->listBox, id);
        break;
    case 8:
        DAT_004398d4->value[5] = *asdListBoxGetItemValuePtr(screen->listBox, id);
        break;
    case 9:
        DAT_004398d4->value[6] = *asdListBoxGetItemText(screen->listBox, id);
        break;
    case 10:
        DAT_004398d4->value[7] = *asdListBoxGetItemValuePtr(screen->listBox, id);
        break;
    case 11:
        DAT_004398d4->value[8] = *asdListBoxGetItemValuePtr(screen->listBox, id);
        break;
    case 12:
        DAT_004398d4->value[9] = *asdListBoxGetItemValuePtr(screen->listBox, id);
        break;
    case 13:
        DAT_004398d4->value[10] = *asdListBoxGetItemValuePtr(screen->listBox, id);
        break;
    case 14:
        DAT_004398d4->value[11] = *asdListBoxGetItemValuePtr(screen->listBox, id);
        break;
    case 15:
        DAT_004398d4->value[12] = *asdListBoxGetItemValuePtr(screen->listBox, id);
        break;
    }
}

}
