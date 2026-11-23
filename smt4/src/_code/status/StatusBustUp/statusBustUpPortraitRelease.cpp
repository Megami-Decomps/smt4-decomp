#include "status/StatusBustUp.h"
#include "gamedata/NkmBaseRecord.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/NkmEnemyLookup.h"

extern "C" {
extern StatusBustUpResources g_statusBustUpResources;
extern void *g_aocSystem;
void packageFileDisableByKindName(void *system, u32 table, u32 node);
void asdTMTexTableReleaseNode(u32 table, u32 node);

/* Drop the portrait reference, unloading normal or special portraits on the last user. */
void statusBustUpPortraitRelease(s32 portrait, s32 isDevil)
{
    s32 table = 0x17;

    if (isDevil) {
        if (portrait < 0) {
            portrait = 0;
        } else {
            NkmBaseRecord *devil = reinterpret_cast<NkmBaseRecord *>(nkmBaseGetRecord((u16)portrait));
            if (devil == NULL) {
                return;
            }
            NkmEnemyRecord *record = nkmEnemyFindById((u16)portrait);
            if (!(record->levelFlags & 1)) {
                portrait = devil->model + 1;
                if (portrait >= 614) {
                    return;
                }
            } else {
                s32 specialTable = 0x23;
                portrait = record->portraitId;
                if (portrait >= 129) {
                    return;
                }
                --((s8 *)g_statusBustUpResources.workB)[portrait];
                if (((s8 *)g_statusBustUpResources.workB)[portrait] > 0) {
                    return;
                }
                if (asdTMTexTableNodeIsLoaded(specialTable, portrait)) {
                    asdTMTexTableReleaseNode(specialTable, portrait);
                }
                ((s8 *)g_statusBustUpResources.workB)[portrait] = 0;
                return;
            }
        }
    }
    --((s8 *)g_statusBustUpResources.workA)[portrait];
    if (((s8 *)g_statusBustUpResources.workA)[portrait] > 0) {
        return;
    }
    if (asdTMTexTableNodeIsLoaded(table, portrait)) {
        asdTMTexTableReleaseNode(table, portrait);
        packageFileDisableByKindName(g_aocSystem, table, portrait);
    }
    ((s8 *)g_statusBustUpResources.workA)[portrait] = 0;
}
}
