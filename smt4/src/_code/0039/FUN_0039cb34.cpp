#include "common.h"

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

typedef struct GameState {
    /* 0x000 */ u8 unk000[0x251];
    /* 0x251 */ s8 muted;
} GameState;

extern GameState g_gameState;

void pointConvertToFloat(void *out, s32 x, s32 y);
void FUN_00233240(void *animation, s32 mode);
void FUN_002b827c(s32 sound);
s32 FUN_0026b564(void);
s32 vec2GetYInt(Vec2Point *point);
s32 vec2GetXInt(Vec2Point *point);
s32 FUN_002bf818(Vec2Point *point);

/* Opens the panel (playing sound 0x1b unless muted), then follows its pointer until a confirmed press closes it. */
void FUN_0039cb34(CursorPanel *panel)
{
    if (panel->state == 0) {
        FUN_00233240(panel->animation, 1);
        if (g_gameState.muted == 0) {
            FUN_002b827c(0x1b);
        }
        panel->flags |= 0x1000000;
        panel->state = 1;
    } else if (panel->state == 1) {
        Vec2Point *pointer = &panel->pointer;

        if (FUN_002bf818(pointer) != 0 && FUN_0026b564() != 0) {
            panel->state = 2;
            panel->flags |= 2;
        }
        pointConvertToFloat(panel->position, vec2GetXInt(pointer), vec2GetYInt(pointer));
    }
}

} /* extern "C" */
