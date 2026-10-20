#include "common.h"

extern "C" {

typedef struct BtlUiPanel {
    /* 0x0000 */ u8 unk0000[0x28C4];
    /* 0x28C4 */ u8 holder[1];
} BtlUiPanel;

typedef struct BtlUiView {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ BtlUiPanel *panel;
} BtlUiView;

extern BtlUiView g_btlUi;

u8 FUN_00270bfc(void *holder);

/* Returns 1 when there is no panel, otherwise FUN_00270bfc's result for the panel's holder. */
u8 FUN_004a96d4(void)
{
    BtlUiPanel *panel = g_btlUi.panel;

    if (panel == NULL) {
        return 1;
    }
    return FUN_00270bfc(panel->holder);
}

} /* extern "C" */
