#include "shard/W6_W6Match5_RecordCallParameters.h"
#include "gamedata/DevilPortraitDraw.h"
extern "C" {
extern u32 g_aocSystem;

void texDrawCompositeSprite(s32 layer, s32 category, s32 variant, u32 first, u32 second, u32 third);
void fieldPlacementGroupSpawn(u32 system, s32 id, s32 layer, s32 resource, s32 mode, u32 first, u32 second, u32 third);

/* Draws the loaded portrait, choosing its override variant when present. */
void FUN_001ee4e4(s32 id, u32 first, u32 second, u32 third, s32 resolve)
{
    s32 resource = id;
    s32 category = DEMON_PORTRAIT_BANK;
    s32 variant = 0;
    if (resolve) {
        if (id < 0) {
            resource = 0;
        } else {
            const NkmBaseRecord *devil = (const NkmBaseRecord *)nkmBaseGetRecord((u16)id);
            const NkmEnemyRecord *record = nkmEnemyFindById((u16)id);
            if (devil == NULL)
                return;
            if (record->levelFlags & DEMON_PORTRAIT_OVERRIDE) {
                resource = record->portraitId;
                category = ALTERNATE_PORTRAIT_BANK;
                if (resource >= ALTERNATE_PORTRAIT_COUNT)
                    return;
            } else {
                resource = devil->model + 1;
                if (resource >= DEMON_PORTRAIT_COUNT)
                    return;
            }
            variant = record->variant;
        }
    }
    if (devilIsTextureLoaded(id, resolve)) {
        if (aocRunByName(g_aocSystem, category, resource, 1)) {
            fieldPlacementGroupSpawn(g_aocSystem, id, 2, resource, 0, first, second, third);
        } else if (variant > 0) {
            texDrawCompositeSprite(2, category, variant, first, second, third);
        } else {
            texTableRecordCallWithParams(2, category, resource * 1000, first, second, third);
        }
    }
}
}
