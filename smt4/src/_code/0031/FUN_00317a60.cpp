#include "common.h"

extern "C" {

typedef struct Panel {
    /* 0x000 */ u8 unk000[0x88];
    /* 0x088 */ u8 state;
    /* 0x089 */ u8 unk089[0x8FB];
    /* 0x984 */ u8 list[1];
} Panel;

typedef struct PanelTask {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ Panel *panel;
} PanelTask;

void FUN_002bee58(void *list, s32 mode);

/* Task step: sets the panel's list to mode 7 and its state to 4; always finishes. */
extern PanelTask g_messageMain;
u32 FUN_00317a60(void)
{
    Panel *panel = g_messageMain.panel;

    FUN_002bee58(panel->list, 7);
    panel->state = 4;
    return 1;
}

} /* extern "C" */
