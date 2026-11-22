#include "runtime/Stdio.h"
#include "map/NpcDummyBindings.h"
#include "code/Code0015.h"
#include "title/titleMain.h"
#include "gfx/ControllerModel.h"
#include "gfx/CameraStereoDepth.h"

extern "C" {
u8 lookupNameEntry(NpcDummyModel *model, const char *name, MapVector *position);

static __inline void npcModelClearFlag(NpcDummyModel *model, u32 mask)
{
    if (model->flags & mask)
        model->flags &= ~mask;
}

// Bind paired NPC controllers to named dummy positions in the active model once.
void npcDummyBindingsBindPositions(NpcDummyBindings *bindings)
{
    char name[32];
    MapVector position;
    if (!bindings->initialized) {
        if (bindings->mode == 1) {
            void *owner = reinterpret_cast<void *>(asdCameraGetSavedRenderPairs());
            asdCameraSetStereoDepth(owner, 0.25f, 0.3f);
            FUN_0036b824(reinterpret_cast<u32>(owner));
        }
        bindings->initialized = 1;
        for (s32 index = 0; index < bindings->count; ++index) {
            __2sprintf(name, "dummy_npc%d", index + 1);
            if (index == 7)
                __2sprintf(name, "dummy_npc8");
            else if (index == 8)
                __2sprintf(name, "dummy_npc4");
            NpcDummyModel *model;
            if (bindings->mode != 2) {
                model = bindings->holder->link->model;
            } else {
                model = bindings->direct->model;
                npcModelClearFlag(model, 1);
            }
            lookupNameEntry(model, name, &position);
            controllerSetDestination(bindings->first[index]->controller, &position);
            controllerSetDestination(bindings->second[index]->controller, &position);
        }
    }
}
}
