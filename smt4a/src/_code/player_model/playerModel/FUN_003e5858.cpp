/* NON_MATCHING: register assignment (object/slot index) and the owned==NULL store is predicated instead of sharing retail's single `unk04 = 0` store */
#include "classes/Obj557ae8.h"
#include "Model/MoriModelManager.h"
#include "gfx/ControllerModel.h"

extern "C" {

u32 FUN_00340f80(Obj557ae8 *object);
void *asdMemoryAllocTraced(u32 size, const char *file, u32 line);
void namedResourceSlotAssign(Obj557ae8 *object, s32 index, const char *name, u16 kind);

/* Steps the player model: finishes loading the owned model, then advances each of the three slots
 * through its states (1 loading, 2 releasing, 3 released, 4 retry, 5 queued). */
void FUN_003e5858(Obj557ae8 *object)
{
    if (object->unk04 != 0 && object->unk04 == 1) {
        if (object->owned != NULL) {
            if (moriModelContentIsLoaded(object->owned) != 0) {
                FUN_0040ab7c(object->owned, 2);
                moriModelContentLoadBody(object->owned, NULL);
                Obj557b18 *model = object->owned->body;
                controllerSetPositionXyz(model, 0.0f, 0.0f, 0.0f);
                modelPlayClip(model, 0, 2, 0.0f, 0.0f);
                handleRegistryRegisterObject(g_handleRegistry, model);
                object->owned->body->flags |= 1;
                object->unk04 = 0;
            }
        } else {
            object->unk04 = 0;
        }
    }
    bool finished = false;
    for (s32 i = 0; i < 3; i++) {
        Obj557ae8Slot *slot = &object->slots[i];
        switch (slot->state) {
        case 1:
            if (moriModelContentIsLoaded(slot->child) != 0) {
                FUN_0040ab7c(slot->child, 2);
                moriModelContentLoadBody(slot->child, object->owned->body);
                Obj557b18 *model = slot->child->body;
                controllerSetPositionXyz(model, 0.0f, 0.0f, 0.0f);
                handleRegistryRegisterObject(g_handleRegistry, model);
                finished = true;
                slot->state = 0;
            }
            break;
        case 2: {
            slot->state = 3;
            Obj557b18 *model = slot->child->body;
            model->flags |= 3;
            ptrListRemoveClearOwner(g_handleRegistry, model);
            break;
        }
        case 3:
            if (slot->child != NULL) {
                delete slot->child;
                slot->child = NULL;
            }
            slot->state = 0;
            if (slot->name[0] != '\0') {
                void *storage = asdMemoryAllocTraced(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\player_model\\playerModel.cpp", 906);
                slot->child = storage != NULL ? modelListInit(storage) : NULL;
                namedResourceSlotAssign(object, i, slot->name, slot->kind);
            }
            break;
        case 5:
            if (object->unk04 == 0 && moriModelContentIsLoaded(object->owned) != 0) {
                namedResourceSlotAssign(object, i, slot->name, slot->kind);
            }
            break;
        case 4:
            slot->state = 1;
            break;
        }
    }
    if (finished && object->unk04 == 0) {
        FUN_00340f80(object);
    }
}

} /* extern "C" */
