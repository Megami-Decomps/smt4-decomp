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

int FUN_002ae554(void *holder, s16 value);

/* Forwards `value` (as a 16-bit value) to FUN_002ae554 for the battle UI panel's holder. */
void FUN_004a9c24(u32 unused, s32 value)
{
    FUN_002ae554(g_btlUi.panel->holder, value);
}

} /* extern "C" */
