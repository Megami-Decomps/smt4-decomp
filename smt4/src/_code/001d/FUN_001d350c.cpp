/* NON_MATCHING: retail tests name bytes through the precomputed name address; this build folds the member offset into the loads. */
#include "map/DeferredModels.h"
#include "map/ModelSelectionLabel.h"
#include "map/mapDepart.h"

extern "C" {
extern DeferredModelWork *g_deferredMapModels;
extern GameState g_gameState;
void FUN_00266fac(s32 mode, s32 id);
f32 mathDistanceBetweenPoints(f32, f32, f32, f32, f32, f32);
f32 mathAbsHeadingErrorToPoint(f32, f32, f32, f32, f32, f32, f32);
ModelSelectionLabel *FUN_00266f30(u32);
char *libc_strcpy(char *, const char *);

/* Select the nearest active model within the interaction distance and facing cone. */
void FUN_001d350c(f32 x, f32 y, f32 z, f32 heading)
{
    s32 selected = -1;
    f32 nearest = 0.0f;
    if (g_deferredMapModels->updating)
        return;
    FUN_00266fac(0, 0);
    g_deferredMapModels->pending = 0;
    if (g_gameState.unk18)
        return;
    for (s32 i = 0; i < 64; ++i) {
        if (g_deferredMapModels->entries[i].active) {
            f32 distance = mathDistanceBetweenPoints(x, y, z,
                g_deferredMapModels->entries[i].offset,
                g_deferredMapModels->entries[i].x,
                g_deferredMapModels->entries[i].y);
            if (distance < 90.0f &&
                mathAbsHeadingErrorToPoint(x, y, z, heading,
                    g_deferredMapModels->entries[i].offset,
                    g_deferredMapModels->entries[i].x,
                    g_deferredMapModels->entries[i].y) < 70.0f &&
                (selected == -1 || distance < nearest)) {
                selected = i;
                nearest = distance;
            }
        }
    }
    if (selected != -1) {
        g_deferredMapModels->pending = 1;
        g_deferredMapModels->pendingCount = selected;
        g_deferredMapModels->selection.id = g_deferredMapModels->entries[selected].id;
        ModelSelectionLabel *label = FUN_00266f30(g_deferredMapModels->entries[selected].modelId);
        if (label->name != NULL && (label->name[0] != '0' || label->name[1] != '\0')) {
            libc_strcpy(g_deferredMapModels->selection.label, label->name);
        } else {
            g_deferredMapModels->selection.label[0] = '\0';
            g_deferredMapModels->selection.label[1] = '\0';
        }
    }
}
}
