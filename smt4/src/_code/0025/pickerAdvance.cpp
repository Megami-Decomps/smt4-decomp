#include "common.h"

extern "C" {

typedef struct PickerHud {
    /* 0x00 */ u8 unk00[0xc8];
    /* 0xc8 */ u16 selected;
} PickerHud;

typedef struct Picker {
    /* 0x0000 */ u8 unk0000[0x1f00];
    /* 0x1f00 */ PickerHud hud;
    /* 0x1fca */ u8 unk1fca[0xf3c];
    /* 0x2f06 */ s16 list[12];     /* candidate values; negative = unused */
    /* 0x2f1e */ s16 index;        /* current position in `list`, negative = none */
} Picker;

void FUN_00254f58(Picker *picker);

/* Advances the picker to the next used entry of its list (FUN_00254f58 when it runs out) and publishes its value. */
void pickerAdvance(Picker *picker)
{
    PickerHud *hud;
    s32 value;

    if (picker->index < 0) {
        FUN_00254f58(picker);
        return;
    }
    do {
        picker->index++;
        if (picker->index >= 12) {
            FUN_00254f58(picker);
            break;
        }
    } while (picker->list[picker->index] < 0);
    hud = &picker->hud;
    if (picker->index >= 0) {
        value = (u16)picker->list[picker->index];
    } else {
        value = -1;
        picker->index = 0;
    }
    hud->selected = value;
}

} /* extern "C" */
