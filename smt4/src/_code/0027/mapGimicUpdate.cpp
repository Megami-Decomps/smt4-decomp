/* NON_MATCHING: 132 lines. Retail loads 350.0f separately in the respawn step and the per-frame loop (this build
 * hoists it to the entry), the flag toggles' registers differ, and retail branches around
 * the motion change where this build predicates the call. (A local `model` pointer for the flag toggles alone,
 * mixed with `entry->model` reads below, gives 111; written through the local everywhere it gives 170: the form is
 * kept consistent, not chosen per block.) */
#include "map/mapDepart.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "game/GameState.h"
#include "map/MapGimicGlobal.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionControlApi.h"

extern "C" {
s32 FUN_0027cda0(void);
void FUN_002671f4(s32 id, f32 x, f32 y, f32 z, f32 w, f32 a, f32 b, f32 c);
void modelPartSetRotationDegrees(AsdMdlNode *node, s32 index, f32 x, f32 y, f32 z); // declcheck: local (the header's NodeVec3 by-value form builds a stack temporary here: 127 against 111 lines)

/* Per-frame update of the map gimics: keeps their models' visibility and motion in sync with the map, and runs
 * the three-step teardown (mark, destroy, respawn effects) while a rebuild is pending. */
void mapGimicUpdate(void)
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
                entry->model->node->sceneNode->positionFollowed = 0;
            }
        } else {
            if ((entry->model->flags & 2) != 0) {
                entry->model->flags &= ~2;
                entry->model->node->sceneNode->positionFollowed = 1;
            }
            if (entry->dirty != 0) {
                nodeSetTranslation(entry->model->node, 0, entry->position);
                modelPartSetRotationDegrees(entry->model->node, 0, 350.0f, entry->position[3], 350.0f);
                if (entry->model->node->currentMotion != entry->motion) {
                    modelSelectPrimaryMotion(entry->model->node, entry->motion, 350.0f);
                }
                entry->dirty = 0;
            }
        }
    }
}

} /* extern "C" */
