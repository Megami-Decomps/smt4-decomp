#include "common.h"
#include "classes/Obj422448.h"

extern "C" {

/* The sub-object at 0x188 of the entity: its position (passed to the vec2 accessors) and a flag at 0x8a. */
typedef struct Placement {
    /* 0x00 */ u8 unk00[0x8a];
    /* 0x8a */ s8 active;
} Placement;

typedef struct Entity003ab7c8 {
    /* 0x000 */ u8 unk000[0x14];
    /* 0x014 */ s32 state;
    /* 0x018 */ s32 stateArg;
    /* 0x01c */ u8 unk01c[0xac];
    /* 0x0c8 */ u8 target[0xc0];
    /* 0x188 */ Placement placement;
} Entity003ab7c8;

void FUN_002bf818(Placement *placement);
u32 vec2GetYInt(Placement *placement);
u32 vec2GetXInt(Placement *placement);
void pointConvertToFloat(u8 *target, u32 x, u32 y);
s8 uiSpriteGetCompletionState(const Placement *placement);
s32 FUN_0026b564(void);
s32 FUN_00241a44(void);
s32 FUN_00295618(void);

/* Syncs the entity's target to its placement and, when the placement is active and all three gates hold, switches to state 11. */
}

void Obj422448::FUN_003ab7c8()
{
    Entity003ab7c8 * entity = reinterpret_cast<Entity003ab7c8 *>(this);
    Placement *placement = &entity->placement;
    u32 y;
    u32 x;

    FUN_002bf818(placement);
    y = vec2GetYInt(placement);
    x = vec2GetXInt(placement);
    pointConvertToFloat(entity->target, x, y);
    if (uiSpriteGetCompletionState(placement) != 0 && FUN_0026b564() != 0 && FUN_00241a44() != 0 && FUN_00295618() != 0) {
        entity->state = 11;
        entity->stateArg = 0;
    }
}
