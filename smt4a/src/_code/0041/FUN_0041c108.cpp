#include "common.h"

struct PanelDrawState {
    /* 0x000 */ u8 unk000[5];
    /* 0x005 */ u8 unk05;
    /* 0x006 */ u8 unk06;
    /* 0x007 */ u8 type;
    /* 0x008 */ u8 unk08[6];
    /* 0x00E */ u8 unk0e;
    /* 0x00F */ u8 unk0f;
    /* 0x010 */ u8 unk10[0x3c8];
    /* 0x3D8 */ u8 unk3d8[0x24c];
    /* 0x624 */ u8 sub624[0xd4];
    /* 0x6F8 */ u8 sub6f8[0x18];
    /* 0x710 */ u8 sub710[1];
};

extern "C" {

void compositeSpriteDrawRequest(void *block);
void FUN_0041f9e4(PanelDrawState *self);
void effectRequestSubmit(void *effect, void *source);
void uiDrawScreenDimmer(void *block, u32 value);
void FUN_0041c1d4(void *ring);

/* Draws the composite sprite and its effect, dims the screen unless the panel is already settled, then draws the marker ring. */
static __inline void drawPanel(PanelDrawState *self)
{
    compositeSpriteDrawRequest(self->sub624);
    FUN_0041f9e4(self);
    effectRequestSubmit(self->sub710, self->unk3d8);
    if (self->unk0e == 0 || self->unk0f != 0) {
        return;
    }
    uiDrawScreenDimmer(self->sub6f8, 0);
    FUN_0041c1d4(self->sub6f8);
}

/* Virtual slot: for panel types 3..21 draws the composite sprite and its effect, dims the screen unless the panel is already
 * settled, then draws the marker ring. */
void FUN_0041c108(PanelDrawState *self)
{
    switch (self->type) {
    case 0: case 1: case 2:
        break;
    case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12:
    case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21:
        drawPanel(self);
        break;
    }
}

} /* extern "C" */
