#include "common.h"

extern "C" {

int FUN_0022a478(void *panel, u32 a);
int FUN_00298d64(void *panel, u32 a);
int flaggedEntrySetValueB(void *panel, u32 a);
int flaggedEntrySetValueA(void *panel, u32 a);

typedef struct Panel {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[0xF];
    /* 0x10 */ u8 body[1];
} Panel;

/* Applies the scroll position (first, count) to the panel's body according to its kind (0 or 1). */
void panelSetScrollPosition(Panel *panel, u32 first, u32 count)
{
    if (panel->kind == 0) {
        FUN_00298d64(panel->body, first);
        flaggedEntrySetValueA(panel->body, count);
    }
    if (panel->kind == 1) {
        FUN_0022a478(panel->body, first);
        flaggedEntrySetValueB(panel->body, count);
        return;
    }
}

} /* extern "C" */
