/* NON_MATCHING: ARMCC emits a comparison chain for the two-state switch, changing retail's jump table, hint NOP, and pool layout. */
#include "classes/Obj4209cc.h"
#include "code/Code003f.h"

extern "C" {
extern const char DAT_005271fc[];
extern void *g_handleRegistry;
void *FUN_00178b04(u32 size, const char *file, u32 line);
ModelResourceList *modelListInit(ModelResourceList *models);
void FUN_0040a884(ModelResourceList *models, void *source, u32 flags);
u32 ownerSlotSetText(ModelResourceItem *item, const void *name);
void FUN_003fd924(ModelResourceItem *item, u32 index, u32 mode, f32 first, f32 second);
u32 FUN_001a79e8(ModelResourceItem *item, const void *name);
void FUN_003fd7c0(ModelResourceItem *item, u32 index, u32 mode, f32 value);
void handleRegistryRegisterObject(void *registry, ModelResourceItem *item);

/* Build the source's model list, initialize its named channels, and register each model. */
void modelResourceOwnerInitialize(ModelResourceOwner *owner)
{
    switch (owner->state) {
    case 0:
        break;
    case 1:
        if (owner->source == NULL) {
            break;
        }
        ModelResourceList *models = (ModelResourceList *)FUN_00178b04(32, DAT_005271fc, 0x451);
        if (models != NULL) {
            models = modelListInit(models);
        }
        owner->models = models;
        FUN_0040a884(owner->models, owner->source, 0);
        s32 count = owner->models->items->count;
        for (s32 index = 0; index < count; ++index) {
            ModelResourceItem *item = reinterpret_cast<ModelResourceItem *>(FUN_0040619c(owner->models->items, index));
            if (item != NULL) {
                const void *name = reinterpret_cast<const void *>(FUN_003fdadc(item));
                u32 channel = ownerSlotSetText(item, name);
                if (channel != 0xFFFF) {
                    FUN_003fd924(item, channel, 2, 1.0f, 1.0f);
                }
                channel = FUN_001a79e8(item, name);
                if (channel != 0xFFFF) {
                    FUN_003fd7c0(item, channel, 2, 1.0f);
                }
                handleRegistryRegisterObject(g_handleRegistry, item);
            }
        }
        if (owner->models != NULL) {
            count = owner->models->items->count;
            for (s32 index = 0; index < count; ++index) {
                ModelResourceItem *item = reinterpret_cast<ModelResourceItem *>(FUN_0040619c(owner->models->items, index));
                if (item != NULL) {
                    item->flags |= 3;
                }
            }
        }
        owner->state = 2;
        break;
    }
}
}
