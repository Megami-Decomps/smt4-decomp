#include "common.h"

struct PanelObject;
struct PanelObjectFuncs {
    void *unk00;
    void (*release)(PanelObject *object);
};
struct PanelObject {
    const PanelObjectFuncs *funcs;
};

struct PanelVec2 {
    f32 x;
    f32 y;
};

struct PanelState {
    /* 0x0000 */ u8 unk0000[0x339C];
    /* 0x339C */ u32 flags;
    /* 0x33A0 */ u8 unk33A0[0xE];
    /* 0x33AE */ s16 unk33AE;
    /* 0x33B0 */ s16 unk33B0;
    /* 0x33B2 */ s16 unk33B2;
    /* 0x33B4 */ u8 unk33B4;
    /* 0x33B5 */ u8 unk33B5;
    /* 0x33B6 */ s16 unk33B6;
    /* 0x33B8 */ s16 unk33B8;
    /* 0x33BA */ s16 unk33BA;
    /* 0x33BC */ u8 unk33BC[4];
    /* 0x33C0 */ PanelObject *object;
    /* 0x33C4 */ u32 unk33C4;
    /* 0x33C8 */ u32 unk33C8;
    /* 0x33CC */ u32 callbackA;
    /* 0x33D0 */ u32 callbackB;
    /* 0x33D4 */ PanelVec2 offsetA;
    /* 0x33DC */ PanelVec2 offsetB;
};

static void panelVec2Set(PanelVec2 *v, f32 x, f32 y)
{
    v->y = y;
    v->x = x;
}

extern "C" {
void uiFreeCallback(u32 callback);

/* Clears the panel's state, releases its object and frees both callbacks. */
void panelReset(PanelState *panel)
{
    panel->unk33AE = 0;
    panel->unk33B0 = 0;
    panel->unk33B2 = 0;
    panel->unk33B4 = 0;
    panel->unk33B5 = 0;
    panel->unk33BA = 0;
    panel->unk33B6 = 0;
    panel->unk33B8 = 0;
    panel->unk33C4 = 0;
    panel->unk33C8 = 0;
    panelVec2Set(&panel->offsetA, 0.0f, 0.0f);
    panelVec2Set(&panel->offsetB, 0.0f, 0.0f);
    panel->flags &= ~0x7000;
    if (panel->object != NULL) {
        panel->object->funcs->release(panel->object);
        panel->object = NULL;
    }
    if (panel->callbackA != 0) {
        uiFreeCallback(panel->callbackA);
        panel->callbackA = 0;
    }
    if (panel->callbackB != 0) {
        uiFreeCallback(panel->callbackB);
        panel->callbackB = 0;
    }
}

} /* extern "C" */
