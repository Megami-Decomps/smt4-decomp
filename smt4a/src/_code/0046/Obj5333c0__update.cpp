#include "classes/Obj5333c0.h"
#include <stddef.h>
#include "gfx/NamedEffectAttachment.h"

extern "C" {
s32 textFormatBuffer(char *output, const char *format, ...);
u8 lookupNameEntry(AsdMdlNode *node, const char *name, EffectAttachmentPosition *position);
void controllerSetDestination(void *model, EffectAttachmentPosition *position);
void FUN_00407eb0(SceneTransform *transform, u32 wanted, u32 flags);
void spatialAdvanceTransformTransition(SceneTransform *transform);
}

void Obj5333c0::update()
{
    typedef char Layout[offsetof(Obj5333c0, frozen) == 0x1A && offsetof(Obj5333c0, script) == 0x2B4 &&
                        offsetof(Obj5333c0, steps) == 0x2B8 && offsetof(Obj5333c0, npcControllersA) == 0xA10 &&
                        offsetof(Obj5333c0, npcControllersB) == 0xA34 && offsetof(Obj5333c0, npcsPlaced) == 0xA58 &&
                        offsetof(Obj5333c0, npcCount) == 0xABC && offsetof(Obj5333c0, transform) == 0xCDC &&
                        offsetof(Obj5333c0, transformCurrent) == 0xCE4 ? 1 : -1];
    if (steps[state]) {
        (this->*steps[state])();
    }
    if (!frozen) {
        if (transformCurrent != transformWanted) {
            transformCurrent = transformWanted;
            FUN_00407eb0(transform, transformWanted, 0);
        }
        spatialAdvanceTransformTransition(transform);
    }
    if (!npcsPlaced && !frozen) {
        npcsPlaced = 1;
        for (s32 i = 0; i < npcCount; ++i) {
            char name[32];
            EffectAttachmentPosition position;
            textFormatBuffer(name, "dummy_npc%d", i + 1);
            if (i == 7) {
                textFormatBuffer(name, "dummy_npc5");
            } else if (i == 8) {
                textFormatBuffer(name, "dummy_npc4");
            }
            lookupNameEntry(transform->model->node, name, &position);
            controllerSetDestination(npcControllersA[i]->model, &position);
            controllerSetDestination(npcControllersB[i]->model, &position);
        }
    }
}
