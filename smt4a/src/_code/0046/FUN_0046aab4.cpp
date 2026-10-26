/* NON_MATCHING: model flag clear uses r1 instead of retail r2; all other instructions agree. */
#include "map/NpcDummyBindings.h"
#include "code/Code0015.h"
#include "title/titleMain.h"

extern "C" {
void uiSetFloatPair(void *owner, f32 first, f32 second);
void textFormatBuffer(char *destination, const char *format, ...);
u8 lookupNameEntry(NpcDummyModel *model, const char *name, MapVector *position);
void controllerSetDestination(ControllerPose *owner, const MapVector *position);

// Bind paired NPC controllers to named dummy positions in the active model once.
void FUN_0046aab4(NpcDummyBindings *bindings)
{
    char name[32];
    MapVector position;
    if (!bindings->initialized) {
        if (bindings->mode == 1) {
            void *owner = reinterpret_cast<void *>(FUN_00152f54());
            uiSetFloatPair(owner, 0.25f, 0.3f);
            FUN_0036b824(reinterpret_cast<u32>(owner));
        }
        bindings->initialized = 1;
        for (s32 index = 0; index < bindings->count; ++index) {
            textFormatBuffer(name, "dummy_npc%d", index + 1);
            if (index == 7)
                textFormatBuffer(name, "dummy_npc8");
            else if (index == 8)
                textFormatBuffer(name, "dummy_npc4");
            NpcDummyModel *model;
            if (bindings->mode != 2) {
                model = bindings->holder->link->model;
            } else {
                model = bindings->direct->model;
                if (model->flags & 1)
                    model->flags &= ~1U;
            }
            lookupNameEntry(model, name, &position);
            controllerSetDestination(bindings->first[index]->controller, &position);
            controllerSetDestination(bindings->second[index]->controller, &position);
        }
    }
}
}
