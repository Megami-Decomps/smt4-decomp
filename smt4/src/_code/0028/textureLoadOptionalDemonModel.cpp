#include "addon/aocMain.h"
#include "gamedata/DevilModel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "addon/AocSystem.h"
#include "gamedata/Table00Lookup.h"

extern "C" {
s32 recordPrepareLinkedOwner(AocSystem*, u32 table, s32 node);
void texTableRecordCallWithParams(u32 kind, u32 table, u32 file, s32 x, s32 y, u32 layer);
void FUN_00388eb4(AocSystem*, s32 id, u32 kind, s32 node, s32 x, s32 y, u32 layer);

// Whether the texture of demon `id` (its model, or its override model) is loaded.
static inline s32 isDemonTextureLoaded(s32 id, s32 mapped)
{
    s32 category = 0x17;
    s32 resource = id;
    if (mapped) {
        if (id < 0) {
            resource = 0;
        } else {
            const DevilRecord* devil = reinterpret_cast<const DevilRecord*>(devilGetRecord(static_cast<u16>(id)));
            if (!devil)
                return 0;
            const Table00Record* record = dataTable00FindById(static_cast<u16>(id));
            if (record->levelFlags & 1) {
                resource = record->portraitId;
                category = 0x23;
                if (resource >= 0x81)
                    return 0;
            } else {
                resource = devil->model + 1;
                if (resource >= 0x266)
                    return 0;
            }
        }
    }
    return asdTMTexTableNodeIsLoaded(category, resource);
}

// Draw demon `id`'s model texture when it is loaded, through the add-on system when it owns the model.
void textureLoadOptionalDemonModel(s32 id, s32 x, s32 y, u32 layer, s32 mapped)
{
    s32 resource = id;
    s32 category = 0x17;
    if (mapped) {
        if (id < 0) {
            resource = 0;
        } else {
            const DevilRecord* devil = reinterpret_cast<const DevilRecord*>(devilGetRecord(static_cast<u16>(id)));
            if (!devil)
                return;
            const Table00Record* record = dataTable00FindById(static_cast<u16>(id));
            if (record->levelFlags & 1) {
                resource = record->portraitId;
                category = 0x23;
                if (resource >= 0x81)
                    return;
            } else {
                resource = devil->model + 1;
                if (resource >= 0x266)
                    return;
            }
        }
    }
    if (isDemonTextureLoaded(id, mapped)) {
        if (recordPrepareLinkedOwner(g_aocSystem, category, resource)) {
            FUN_00388eb4(g_aocSystem, id, 2, resource, x, y, layer);
        } else {
            texTableRecordCallWithParams(2, category, resource * 1000 + 1, x, y, layer);
        }
    }
}
}
