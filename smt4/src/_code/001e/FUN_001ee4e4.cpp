#include "gamedata/DevilRecord.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/Table00Lookup.h"
extern "C" {
extern u32 g_aocSystem;
void texTableRecordCallWithParams(s32 layer, s32 category, s32 resource, u32 first, u32 second, u32 third);
void texDrawCompositeSprite(s32 layer, s32 category, s32 variant, u32 first, u32 second, u32 third);
void FUN_00389ddc(u32 system, s32 id, s32 layer, s32 resource, s32 mode, u32 first, u32 second, u32 third);

static inline s32 isDemonTextureLoaded(s32 id, s32 resolve)
{
    s32 category = 23;
    s32 resource = id;
    if (resolve) {
        if (id < 0) {
            resource = 0;
        } else {
            const DevilRecord *devil = (const DevilRecord *)devilGetRecord((u16)id);
            if (!devil)
                return 0;
            const Table00Record *record = dataTable00FindById((u16)id);
            if (record->levelFlags & 1) {
                resource = record->portraitId;
                category = 35;
                if (resource >= 129)
                    return 0;
            } else {
                resource = devil->model + 1;
                if (resource >= 614)
                    return 0;
            }
        }
    }
    return asdTMTexTableNodeIsLoaded(category, resource);
}

void FUN_001ee4e4(s32 id, u32 first, u32 second, u32 third, s32 resolve)
{
    s32 resource = id;
    s32 category = 23;
    s32 variant = 0;
    if (resolve) {
        if (id < 0) {
            resource = 0;
        } else {
            const DevilRecord *devil = (const DevilRecord *)devilGetRecord((u16)id);
            const Table00Record *record = dataTable00FindById((u16)id);
            if (!devil)
                return;
            if (record->levelFlags & 1) {
                resource = record->portraitId;
                category = 35;
                if (resource >= 129)
                    return;
            } else {
                resource = devil->model + 1;
                if (resource >= 614)
                    return;
            }
            variant = record->variant;
        }
    }
    if (isDemonTextureLoaded(id, resolve)) {
        if (aocRunByName(g_aocSystem, category, resource, 1)) {
            FUN_00389ddc(g_aocSystem, id, 2, resource, 0, first, second, third);
        } else if (variant > 0) {
            texDrawCompositeSprite(2, category, variant, first, second, third);
        } else {
            texTableRecordCallWithParams(2, category, resource * 1000, first, second, third);
        }
    }
}
}
