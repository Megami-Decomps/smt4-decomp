#include "shard/W6_W6Match5_RecordCallParameters.h"
#include "addon/aocMain.h"
#include "gamedata/DevilModel.h"
#include "addon/AocSystem.h"
#include "gamedata/DevilPortraitDraw.h"

extern "C" {
s32 recordPrepareLinkedOwner(AocSystem*, u32 table, s32 node);

void textResourceApplyFile(AocSystem*, s32 id, u32 kind, s32 node, s32 x, s32 y, u32 layer);

/* Draws demon `id`'s model texture when it is loaded, through the add-on system when it owns the model. */
void textureLoadOptionalDemonModel(s32 id, s32 x, s32 y, u32 layer, s32 mapped)
{
    s32 resource = id;
    s32 category = DEMON_PORTRAIT_BANK;
    if (mapped) {
        if (id < 0) {
            resource = 0;
        } else {
            const NkmBaseRecord *devil = (const NkmBaseRecord *)nkmBaseGetRecord((u16)id);
            if (devil == NULL)
                return;
            const NkmEnemyRecord *record = nkmEnemyFindById((u16)id);
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
        }
    }
    if (devilIsTextureLoaded(id, mapped)) {
        if (recordPrepareLinkedOwner(g_aocSystem, category, resource)) {
            textResourceApplyFile(g_aocSystem, id, 2, resource, x, y, layer);
        } else {
            texTableRecordCallWithParams(2, category, resource * 1000 + 1, x, y, layer);
        }
    }
}
}
