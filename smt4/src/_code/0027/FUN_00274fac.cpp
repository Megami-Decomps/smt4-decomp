/* NON_MATCHING: close: register allocation only (float constants are hoisted to different VFP registers and the loop temporaries swap r0/r1); control flow, offsets and calls match */
#include "map/mapDepart.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

/* The model a gimic's object is bound to. */
struct GimicNode {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 motion;
};

struct GimicModelOwner {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ u8 *model;       /* byte 0x1F6 is the visible flag */
};

struct GimicObject {
    /* 0x00 */ u32 flags;       /* bit 1: hidden */
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ GimicModelOwner *owner;
};

/* One map gimic slot (0x28 bytes). */
struct GimicEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 dirty;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ f32 position[4];
    /* 0x14 */ s16 motion;
    /* 0x16 */ u16 kind;
    /* 0x18 */ GimicObject *object;
    /* 0x1C */ s32 id;
    /* 0x20 */ u8 unk20[8];
};

struct GimicList {
    /* 0x00 */ s32 mode;
    /* 0x04 */ u8 busy;
    /* 0x05 */ u8 unk05[0x17];
    /* 0x1C */ GimicEntry entries[24];
};
typedef char GimicLayout[sizeof(GimicEntry) == 0x28 && offsetof(GimicList, entries) == 0x1C ? 1 : -1];

extern "C" {

extern GimicList *g_mapGimic;
extern GameState g_gameState;

void asdMdlManagerMarkDestroy(GimicObject *object);
s32 FUN_0027cda0(void);
void FUN_002671f4(s32 id, f32 x, f32 y, f32 z, f32 w, f32 a, f32 b, f32 c);
void nodeSetTranslation(GimicObject *object, s32 index, f32 *position);
void FUN_0028c618(GimicObject *object, s32 index, f32 a, f32 b, f32 c);
void modelSelectPrimaryMotion(GimicObject *object, f32 speed);

/* Per-frame update of the map gimics: keeps their models' visibility and motion in sync with the map, and runs
 * the three-step teardown (mark, destroy, respawn effects) while a rebuild is pending. */
void FUN_00274fac(void)
{
    s32 i;

    if (g_mapGimic->busy != 0) {
        if (g_mapGimic->mode == 0) {
            for (i = 23; i >= 0; i--) {
                if (g_mapGimic->entries[i].object != NULL) {
                    asdMdlManagerMarkDestroy(g_mapGimic->entries[i].object);
                }
            }
        } else if (g_mapGimic->mode == 1) {
            for (i = 23; i >= 0; i--) {
                if (g_mapGimic->entries[i].object != NULL) {
                    asdMdlManagerDestroy(reinterpret_cast<AsdMdlObject *>(g_mapGimic->entries[i].object));
                    g_mapGimic->entries[i].object = NULL;
                }
            }
            for (i = 0; i < 24; i++) {
                g_mapGimic->entries[i].active = 0;
            }
        } else if (g_mapGimic->mode == 2) {
            if (FUN_0027cda0() == 0) {
                return;
            }
            for (i = 0; i < 24; i++) {
                GimicEntry *entry = &g_mapGimic->entries[i];

                if (entry->active != 0 && entry->kind == 12) {
                    FUN_002671f4((s16)entry->id, entry->position[0], entry->position[1], entry->position[2],
                                 entry->position[3], 600.0f, 350.0f, 160.0f);
                }
            }
            g_mapGimic->busy = 0;
            g_mapGimic->mode = 0;
            return;
        } else {
            return;
        }
        g_mapGimic->mode++;
        return;
    }
    for (i = 0; i < 24; i++) {
        GimicEntry *entry = &g_mapGimic->entries[i];

        if (entry->active == 0) {
            continue;
        }
        if (g_gameState.controllerFlags.mapRangeModelsHidden != 0) {
            if ((entry->object->flags & 2) == 0) {
                entry->object->flags |= 2;
                entry->object->owner->model[0x1F6] = 0;
            }
        } else {
            if ((entry->object->flags & 2) != 0) {
                entry->object->flags &= ~2;
                entry->object->owner->model[0x1F6] = 1;
            }
            if (entry->dirty != 0) {
                nodeSetTranslation(entry->object, 0, entry->position);
                FUN_0028c618(entry->object, 0, 350.0f, entry->position[3], 350.0f);
                if (((GimicNode *)entry->object)->motion != entry->motion) {
                    modelSelectPrimaryMotion(entry->object, 350.0f);
                }
                entry->dirty = 0;
            }
        }
    }
}

} /* extern "C" */
