#include "shard/W8X15_ModelStatePlayer.h"
#include "shard/FUN_00420f08.h"

extern "C" {
/* Enters state 5, then starts the current motion on the owner's model 2. */
void FUN_00420f08(ModelStatePlayer *player)
{
    player->state = 5;
    FUN_00421858(player);
    void *model = modelStateOwnerGetModel(player->owner, 2);
    if (model != NULL) {
        u32 name = FUN_003fdadc();
        u32 motion = ownerSlotSetText(model, name);
        if (motion != MODEL_MOTION_NONE) {
            FUN_003fd924(model, motion, 2, 0.0f, 0.0f);
        }
        motion = FUN_001a79e8(model, name);
        if (motion != MODEL_MOTION_NONE) {
            FUN_003fd7c0(model, motion, 2, 0.0f);
        }
    }
}
}
