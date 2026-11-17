#include "gamedata/DevilRecordA.h"
#include <stddef.h>
#include "camp/GauntletAppMenu/GauntletAppMenu.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "addon/AocSystemA.h"
#include "gamedata/Table00Lookup.h"

extern "C" {
s32 gameFlagIsSet(u32);
s32 recordPrepareLinkedOwner(AocSystemA *, u32, s32);
void texTableRecordCallWithParams(s32, u32, s32, u32, u32, u32);
void texBindBindTableNode(AocSystemA *, u32, s32, u32, s32, u32, u32, u32);

/* Resolve the demon's texture resource and dispatch or request its operation. */
void devilDispatchTextureResource(u32 id, u32 argument, u32 first, u32 second, s32 resolveDemon)
{
    u32 category = 15;
    s32 resource = id;
    if (resolveDemon) {
        if ((s32)id < 0) {
            resource = gameFlagIsSet(0x11) ? 0 : 0x25E;
        } else {
            const DevilRecordA *saved = devilGetRecord((u16)id);
            if (saved == NULL) {
                return;
            }
            const Table00RecordA *definition = dataTable00FindById((u16)id);
            if (definition->level & 0x8000) {
                resource = definition->battleTextureId;
                category = 25;
                if (resource >= 0x9A) {
                    return;
                }
            } else {
                resource = saved->model + 1;
                if (resource >= 0x277) {
                    return;
                }
            }
        }
    }
    if (devilIsTextureLoaded(id, resolveDemon)) {
        if (!recordPrepareLinkedOwner(g_aocSystem, category, resource)) {
            texTableRecordCallWithParams(2, category, resource * 1000 + 1, argument, first, second);
            return;
        }
        texBindBindTableNode(g_aocSystem, id, 2, category, resource, argument, first, second);
    }
}
}
