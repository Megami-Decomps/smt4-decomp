#include "common.h"

extern "C" {

typedef struct PickerHud {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 selected;
} PickerHud;

typedef struct Picker {
    /* 0x0000 */ u8 unk0000[0x2000];
    /* 0x2000 */ PickerHud hud;
    /* 0x2006 */ u8 unk2006[0x1000];
    /* 0x3006 */ s16 list[12];     /* candidate values; negative = unused */
    /* 0x301e */ s16 index;        /* current position in `list`, negative = none */
} Picker;

void FUN_003f26d4(Picker *picker);

/* Advances the picker to the next used entry of its list (FUN_003f26d4 when it runs out) and publishes its value. */
void FUN_003e892c(Picker *picker)
{
    PickerHud *hud;
    s32 value;

    if (picker->index < 0) {
        FUN_003f26d4(picker);
        return;
    }
    do {
        picker->index++;
        if (picker->index >= 12) {
            FUN_003f26d4(picker);
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
