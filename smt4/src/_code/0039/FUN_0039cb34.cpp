#include "common.h"
#include "game/GameState.h"
#include "ui/UiSpriteApi.h"

extern "C" {

typedef struct Vec2Point {
    /* 0x00 */ u8 unk00[8];
} Vec2Point;

/* A cursor-driven panel: opens on state 0, then tracks its pointer until it is confirmed. */
typedef struct CursorPanel {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s32 state;
    /* 0x00C */ u8 unk00c[4];
    /* 0x010 */ u32 flags;
    /* 0x014 */ u8 unk014[0x164 - 0x14];
    /* 0x164 */ u8 position[0x178 - 0x164];
    /* 0x178 */ u8 animation[0x224 - 0x178];
    /* 0x224 */ Vec2Point pointer;
} CursorPanel;



void pointConvertToFloat(void *out, s32 x, s32 y);
void FUN_00233240(void *animation, s32 mode);
void buttonHelpSetContext(s32 sound);
s32 buttonHelpStateIsNot3(void);

/* Opens the panel (playing sound 0x1b unless muted), then follows its pointer until a confirmed press closes it. */
void FUN_0039cb34(CursorPanel *panel)
{
    if (panel->state == 0) {
        FUN_00233240(panel->animation, 1);
        if (g_gameState.map.bgResetPending == 0) {
            buttonHelpSetContext(0x1b);
        }
        panel->flags |= 0x1000000;
        panel->state = 1;
    } else if (panel->state == 1) {
        Vec2Point *pointer = &panel->pointer;

        if (uiSpriteAdvanceAnimation((UiSpriteState *)pointer) != 0 && buttonHelpStateIsNot3() != 0) {
            panel->state = 2;
            panel->flags |= 2;
        }
        pointConvertToFloat(panel->position, vec2GetXInt((const UiSpriteState *)pointer), vec2GetYInt((const UiSpriteState *)pointer));
    }
}

} /* extern "C" */
