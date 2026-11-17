/* NON_MATCHING: close: register allocation only (float constants are hoisted to different VFP registers and the loop temporaries swap r0/r1); control flow, offsets and calls match */
#include "map/mapDepart.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "game/GameState.h"
#include "map/MapGimicGlobal.h"

/* The model a gimic's object is bound to. */
struct GimicNode {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ s32 motion;
};

/* The model node, as far as the visibility toggle reads it. */
struct GimicModelOwner {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ u8 *model;       /* byte 0x1F6 is the visible flag */
};

extern "C" {
s32 FUN_0027cda0(void);
void FUN_002671f4(s32 id, f32 x, f32 y, f32 z, f32 w, f32 a, f32 b, f32 c);
void modelPartSetRotationDegrees(AsdMdlObject *object, s32 index, f32 a, f32 b, f32 c);
void modelSelectPrimaryMotion(AsdMdlObject *object, f32 speed);

/* Per-frame update of the map gimics: keeps their models' visibility and motion in sync with the map, and runs
 * the three-step teardown (mark, destroy, respawn effects) while a rebuild is pending. */
void FUN_00274fac(void)
{
    s32 i;

    if (g_mapGimic->busy != 0) {
        if (g_mapGimic->mode == 0) {
            for (i = 23; i >= 0; i--) {
                if (g_mapGimic->entries[i].model != NULL) {
                    asdMdlManagerMarkDestroy(g_mapGimic->entries[i].model);
                }
            }
        } else if (g_mapGimic->mode == 1) {
            for (i = 23; i >= 0; i--) {
                if (g_mapGimic->entries[i].model != NULL) {
                    asdMdlManagerDestroy(g_mapGimic->entries[i].model);
                    g_mapGimic->entries[i].model = NULL;
                }
            }
            for (i = 0; i < MAP_GIMIC_COUNT; i++) {
                g_mapGimic->entries[i].active = 0;
            }
        } else if (g_mapGimic->mode == 2) {
            if (FUN_0027cda0() == 0) {
                return;
            }
            for (i = 0; i < MAP_GIMIC_COUNT; i++) {
                MapGimicEntry *entry = &g_mapGimic->entries[i];

                if (entry->active != 0 && entry->kind == 12) {
                    FUN_002671f4((s16)entry->gimicId, entry->position[0], entry->position[1], entry->position[2],
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
    for (i = 0; i < MAP_GIMIC_COUNT; i++) {
        MapGimicEntry *entry = &g_mapGimic->entries[i];

        if (entry->active == 0) {
            continue;
        }
        if (g_gameState.loading != 0) {
            if ((entry->model->flags & 2) == 0) {
                entry->model->flags |= 2;
                reinterpret_cast<GimicModelOwner *>(entry->model->node)->model[0x1F6] = 0;
            }
        } else {
            if ((entry->model->flags & 2) != 0) {
                entry->model->flags &= ~2;
                reinterpret_cast<GimicModelOwner *>(entry->model->node)->model[0x1F6] = 1;
            }
            if (entry->dirty != 0) {
                /* TODO: retail passes the model object itself here as the node. */
                nodeSetTranslation(reinterpret_cast<AsdMdlNode *>(entry->model), 0, entry->position);
                modelPartSetRotationDegrees(entry->model, 0, 350.0f, entry->position[3], 350.0f);
                if (reinterpret_cast<GimicNode *>(entry->model)->motion != entry->motion) {
                    modelSelectPrimaryMotion(entry->model, 350.0f);
                }
                entry->dirty = 0;
            }
        }
    }
}

} /* extern "C" */
