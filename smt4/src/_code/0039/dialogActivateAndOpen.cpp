#include "common.h"

extern "C" {

typedef struct Dialog {
    /* 0x000 */ u8 unk000[0x5F8];
    /* 0x5F8 */ u8 resource[0x48C];
    /* 0xA84 */ u8 unkA84;
    /* 0xA85 */ u8 active;
    /* 0xA86 */ u8 unkA86;
    /* 0xA87 */ u8 unkA87;
    /* 0xA88 */ u8 window[1];
} Dialog;

int timerStart(void *window, int arg1, int arg2);
int FUN_002beed0(void *window, int arg1, int arg2, int arg3, void *resource, int arg5, float scale);

/* Activates the dialog and opens its window (resource at 0x5F8, scale 1.0). */
void dialogActivateAndOpen(Dialog *dialog)
{
    dialog->active = 1;
    dialog->unkA84 = 0;
    dialog->unkA86 = 0;
    FUN_002beed0(dialog->window, 0x1c, 0x111a, 0x1c, dialog->resource, 0x15, 1.0f);
    timerStart(dialog->window, 5, 0);
}

} /* extern "C" */
