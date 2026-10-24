/* NON_MATCHING: register assignment (object/slot index) and the owned==NULL store is predicated instead of sharing retail's single `unk04 = 0` store */
#include "classes/Obj557ae8.h"

struct ModelList;

extern "C" {

extern u32 g_handleRegistry;

void FUN_003fe86c(ControllerModel *model, u32 index, u8 flags, f32 time, f32 blend);
u32 FUN_00340f80(Obj557ae8 *object);
void *FUN_00178b04(u32 size, const char *file, u32 line);
ModelList *modelListInit(ModelList *list);
void ptrListRemoveClearOwner(u32 registry, ControllerModel *model);
void FUN_003e573c(Obj557ae8 *object, s32 index, const char *name, u16 kind);
void FUN_003fd7b4(ControllerModel *model, f32 x, f32 y, f32 z);
void FUN_0040aad4(Obj557ae8Child *child, ControllerModel *parent);
void FUN_0040ab7c(Obj557ae8Child *child, s32 mode);
s32 FUN_0040ab8c(Obj557ae8Child *child);
void handleRegistryRegisterObject(u32 registry, ControllerModel *model);

/* Steps the player model: finishes loading the owned model, then advances each of the three slots
 * through its states (1 loading, 2 releasing, 3 released, 4 retry, 5 queued). */
void FUN_003e5858(Obj557ae8 *object)
{
    if (object->unk04 != 0 && object->unk04 == 1) {
        if (object->owned != NULL) {
            if (FUN_0040ab8c(object->owned) != 0) {
                FUN_0040ab7c(object->owned, 2);
                FUN_0040aad4(object->owned, NULL);
                ControllerModel *model = object->owned->model;
                FUN_003fd7b4(model, 0.0f, 0.0f, 0.0f);
                FUN_003fe86c(model, 0, 2, 0.0f, 0.0f);
                handleRegistryRegisterObject(g_handleRegistry, model);
                object->owned->model->flags |= 1;
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
            if (FUN_0040ab8c(slot->child) != 0) {
                FUN_0040ab7c(slot->child, 2);
                FUN_0040aad4(slot->child, object->owned->model);
                ControllerModel *model = slot->child->model;
                FUN_003fd7b4(model, 0.0f, 0.0f, 0.0f);
                handleRegistryRegisterObject(g_handleRegistry, model);
                finished = true;
                slot->state = 0;
            }
            break;
        case 2: {
            slot->state = 3;
            ControllerModel *model = slot->child->model;
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
                void *storage = FUN_00178b04(0x20, "c:\\SMT4F\\SMT4F\\sdds4\\program\\player_model\\playerModel.cpp", 906);
                slot->child = storage != NULL ? (Obj557ae8Child *)modelListInit((ModelList *)storage) : NULL;
                FUN_003e573c(object, i, slot->name, slot->kind);
            }
            break;
        case 5:
            if (object->unk04 == 0 && FUN_0040ab8c(object->owned) != 0) {
                FUN_003e573c(object, i, slot->name, slot->kind);
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
