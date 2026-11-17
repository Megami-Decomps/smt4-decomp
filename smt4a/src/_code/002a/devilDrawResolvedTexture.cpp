#include "gamedata/NkmBaseRecordA.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "gamedata/NkmEnemyLookup.h"
extern "C" {
extern u32 g_aocSystem;
s32 gameFlagIsSet(u32 flag);
s32 aocRunByName(u32 system, s32 category, s32 id, s32 mode);
void texDrawCompositeSprite(s32 channel, s32 category, s32 variant, u32 first, u32 second, u32 third);
void texTableRecordCallWithParams(s32 channel, s32 category, s32 resource, u32 first, u32 second, u32 third);
void texBindBindTableNode(u32 system, s32 id, s32 channel, s32 category, s32 resource, u32 first, u32 second, u32 third);
void FUN_00471244(u32 system, s32 id, s32 channel, s32 resource, s32 mode, u32 first, u32 second, u32 third);

void devilDrawResolvedTexture(s32 id, u32 first, u32 second, u32 third, s32 resolve)
{
    s32 resource = id;
    s32 category = 15;
    s32 variant = 0;
    if (resolve) {
        if (id < 0) {
            resource = !gameFlagIsSet(17) ? 606 : 0;
        } else {
            const NkmBaseRecordA *devil = nkmBaseGetRecord((u16)id);
            const NkmEnemyRecordA *record = nkmEnemyFindById((u16)id);
            if (devil == NULL)
                return;
            if (record->level & 0x8000) {
                resource = record->battleTextureId;
                category = 25;
                if (resource >= 154)
                    return;
            } else {
                resource = devil->model + 1;
                if (resource >= 631)
                    return;
            }
            variant = record->variant;
        }
    }
    if (devilIsTextureLoaded(id, resolve)) {
        if (aocRunByName(g_aocSystem, category, resource, 1)) {
            if (category == 25)
                texBindBindTableNode(g_aocSystem, id, 2, category, resource, first, second, third);
            else
                FUN_00471244(g_aocSystem, id, 2, resource, 0, first, second, third);
        } else {
            if (variant > 0)
                texDrawCompositeSprite(2, category, variant, first, second, third);
            else
                texTableRecordCallWithParams(2, category, resource * 1000, first, second, third);
        }
    }
}
}
