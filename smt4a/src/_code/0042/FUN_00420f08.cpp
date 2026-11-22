#include "shard/W8X15_ModelStatePlayer.h"

extern "C" {
/* Enters state 5, then starts the current motion on the owner's model 2. */
void FUN_00420f08(ModelStatePlayer *player)
{
    player->state = 5;
    FUN_00421858(player);
    Obj557b18 *model = modelStateOwnerGetModel(player->owner, 2);
    if (model != NULL) {
        u32 name = FUN_003fdadc(model);
        u32 motion = ownerSlotSetText(model, name);
        if (motion != MODEL_MOTION_NONE) {
            motionPlayerStartBlended(model, motion, 2, 0.0f, 0.0f);
        }
        motion = FUN_001a79e8(model, name);
        if (motion != MODEL_MOTION_NONE) {
            moriModelUnitStartMaterialAnimation(model, motion, 2, 0.0f);
        }
    }
}
}
