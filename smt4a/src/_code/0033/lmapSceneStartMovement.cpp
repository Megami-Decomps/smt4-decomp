/* NON_MATCHING: literal scheduling and the breakable animation index's lifetime differ. */
#include "gamedata/MapSaveBlockA.h"
#include "map/LmapGlobals.h"
#include "gfx/ControllerModel.h"

extern "C" {
u32 gameFlagIsSet(u32);
u32 saveSlotSelectedIsId175();
u32 mapHasFacingBreakableInReach();

/* Starts the map movement effect, selecting the breakable variant when needed. */
void lmapSceneStartMovement(s8 mode)
{
    enum {
        OPTIONAL_EFFECT_MODEL = 7,
        BREAKABLE_ANIMATION = 4,
        BREAKABLE_NEXT_ANIMATION = 13,
        MOVEMENT_ANIMATION = 10,
        MOVEMENT_ALTERNATE_ANIMATION = 5,
        DEFAULT_ANIMATION = 0
    };
    const MapSaveBlockA *flags = (const MapSaveBlockA *)gameFlagsGetBlock();
    if (!flags->fadeActive) {
        return;
    }

    const f32 defaultSpeed = 85.0f;
    const f32 noBlend = 0.0f;
    f32 distance = flags->moveDistance;
    LmapSceneA *scene = g_lmapScene;
    scene->unk1D4 = 0;
    scene->unk1EC = (f32)(s32)(distance / scene->movementStepSize);
    scene->unk224 = 1;
    if (mapHasFacingBreakableInReach()) {
        scene = g_lmapScene;
        scene->movementState = 10;
        scene->unk214 = mode;
        if (!gameFlagIsSet(0x4c9) || saveSlotSelectedIsId175()) {
            scene = g_lmapScene;
            scene->unk228 = BREAKABLE_ANIMATION;
            scene->unk238 = BREAKABLE_ANIMATION;
        }
        g_lmapScene->unk240 = 2.0f;
        if (gameFlagIsSet(0x4c9) && !saveSlotSelectedIsId175()) {
            Obj557b18 *actor = (Obj557b18 *)g_lmapScene->models[OPTIONAL_EFFECT_MODEL]->controller;
            moriModelUnitStartMaterialAnimation(actor, BREAKABLE_ANIMATION, 2, noBlend);
            g_lmapScene->unk238 = BREAKABLE_NEXT_ANIMATION;
            motionPlayerStartBlended(actor, BREAKABLE_NEXT_ANIMATION, 2, noBlend, noBlend);
            return;
        }
    } else {
        scene = g_lmapScene;
        scene->movementState = 2;
        scene->unk214 = mode;
        if (!gameFlagIsSet(0x4c9) || saveSlotSelectedIsId175()) {
            scene = g_lmapScene;
            scene->unk228 = MOVEMENT_ANIMATION;
            scene->unk238 = MOVEMENT_ANIMATION;
        }
        g_lmapScene->unk240 = noBlend;
        if (gameFlagIsSet(0x4c9) && !saveSlotSelectedIsId175()) {
            Obj557b18 *actor = (Obj557b18 *)g_lmapScene->models[OPTIONAL_EFFECT_MODEL]->controller;
            actor->speed = 1.0f;
            moriModelUnitStartMaterialAnimation(actor, MOVEMENT_ALTERNATE_ANIMATION, 2, 19.0f);
            return;
        }
    }
    moriModelUnitStartMaterialAnimation((Obj557b18 *)g_lmapScene->models[OPTIONAL_EFFECT_MODEL]->controller,
                                      DEFAULT_ANIMATION, 2, defaultSpeed);
}

} /* extern "C" */
