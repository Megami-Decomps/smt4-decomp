/* NON_MATCHING: only the reference decrements swap r0/r1 (retail keeps the counter array in r1 and the count in r0); constants and layout now match. */
#include "status/StatusBustUp.h"
#include "gamedata/DevilRecord.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern StatusBustUpResources DAT_0044e158;
extern void *g_aocSystem;
void FUN_002a60cc(void *system, u32 table, u32 node);
void asdTMTexTableReleaseNode(u32 table, u32 node);
Table00Record *dataTable00FindById(u16 id);

/* Drop the portrait reference, unloading normal or special portraits on the last user. */
void statusBustUpPortraitRelease(s32 portrait, s32 isDevil)
{
    struct SpecialPortraitRecord {
        u8 unk00[3];
        u8 flags;
        u8 unk04[0x84];
        s16 portrait;
    };
    s32 table = 0x17;

    if (isDevil) {
        if (portrait < 0) {
            portrait = 0;
        } else {
            DevilRecord *devil = reinterpret_cast<DevilRecord *>(devilGetRecord((u16)portrait));
            if (devil == NULL) {
                return;
            }
            SpecialPortraitRecord *record =
                reinterpret_cast<SpecialPortraitRecord *>(dataTable00FindById((u16)portrait));
            if (!(record->flags & 1)) {
                portrait = devil->model + 1;
                if (portrait >= 614) {
                    return;
                }
            } else {
                s32 specialTable = 0x23;
                portrait = record->portrait;
                if (portrait >= 129) {
                    return;
                }
                s8 *references = static_cast<s8 *>(DAT_0044e158.workB);
                if (--references[portrait] > 0) {
                    return;
                }
                if (asdTMTexTableNodeIsLoaded(specialTable, portrait)) {
                    asdTMTexTableReleaseNode(specialTable, portrait);
                }
                static_cast<s8 *>(DAT_0044e158.workB)[portrait] = 0;
                return;
            }
        }
    }
    s8 *references = static_cast<s8 *>(DAT_0044e158.workA);
    if (--references[portrait] > 0) {
        return;
    }
    if (asdTMTexTableNodeIsLoaded(table, portrait)) {
        asdTMTexTableReleaseNode(table, portrait);
        FUN_002a60cc(g_aocSystem, table, portrait);
    }
    static_cast<s8 *>(DAT_0044e158.workA)[portrait] = 0;
}
}
