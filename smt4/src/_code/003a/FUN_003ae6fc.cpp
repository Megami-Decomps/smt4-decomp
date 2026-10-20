#include "common.h"

extern "C" {

typedef struct BtlUiSub {
    /* 0x00 */ u8 unk00[0x4B];
    /* 0x4B */ u8 active;
} BtlUiSub;

typedef struct BtlUiPanel {
    /* 0x0000 */ u8 unk0000[0x7E00];
    /* 0x7E00 */ BtlUiSub sub;
} BtlUiPanel;

typedef struct BtlUiView {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ BtlUiPanel *panel;
} BtlUiView;

extern BtlUiView g_btlUi;

/* Returns whether the panel's active flag is clear. */
u8 FUN_003ae6fc(void)
{
    BtlUiSub *sub = &g_btlUi.panel->sub;

    return sub->active == 0;
}

} /* extern "C" */
