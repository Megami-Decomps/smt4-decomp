#include "common.h"

extern "C" {

typedef struct GimicObject {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *model;
} GimicObject;

/* One 0x18-byte gimmick slot. */
typedef struct GimicSlot {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s16 id;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ GimicObject *object;
    /* 0x0C */ u8 unk0c[0xc];
} GimicSlot;

typedef struct MapGimic {
    /* 0x000 */ u8 unk000[0x8c4];
    /* 0x8C4 */ GimicSlot slots[10];
} MapGimic;

extern MapGimic *g_mapGimic;
extern u32 g_handleRegistry;

s32 FUN_0040ab8c(GimicObject *object);
void FUN_0040aad4(GimicObject *object, s32 a);
void FUN_003fe86c(void *model, u32 index, u8 flags, f32 time, f32 blend);
void animationSelectClip(void *model, u32 index, u8 flags, f32 time);
void handleRegistryRegisterObject(u32 registry, void *object);

/* Starts the loaded gimmick with the id from its first clip (clip 1 too for id 42) and registers its model; returns 1 when started. */
u32 mapGimicStartById(s32 id)
{
    s32 i;

    for (i = 0; i < 10; i++) {
        GimicSlot *slot = &g_mapGimic->slots[i];

        if (slot->active && slot->id == id) {
            void *model;

            if (!FUN_0040ab8c(slot->object)) {
                return 0;
            }
            FUN_0040aad4(slot->object, 0);
            model = slot->object->model;
            FUN_003fe86c(model, 0, 2, 0.0f, 0.0f);
            if (id == 42) {
                animationSelectClip(model, 1, 2, 0.0f);
            }
            handleRegistryRegisterObject(g_handleRegistry, model);
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
