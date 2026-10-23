/* NON_MATCHING: texture table IDs become immediates instead of retained saved-register values. */
#include "status/StatusBustUp.h"
#include "gamedata/DevilRecord.h"

extern "C" {
extern StatusBustUpResources DAT_0044e158;
extern void *g_aocSystem;
void FUN_002a60cc(void *system, u32 table, u32 node);
s32 asdTMTexTableNodeIsLoaded(u32 table, u32 node);
void asdTMTexTableReleaseNode(u32 table, u32 node);
Table00Record *dataTable00FindById(u16 id);

/* Drop the portrait reference, unloading normal or special portraits on the last user. */
void FUN_002958f8(s32 portrait, s32 isDevil)
{
    struct SpecialPortraitRecord {
        u8 unk00[3];
        u8 flags;
        u8 unk04[0x84];
        s16 portrait;
    };
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
            if (record->flags & 1) {
                portrait = record->portrait;
                if (portrait >= 129) {
                    return;
                }
                s8 *references = static_cast<s8 *>(DAT_0044e158.workB);
                s8 remaining = references[portrait] - 1;
                references[portrait] = remaining;
                if (remaining > 0) {
                    return;
                }
                if (asdTMTexTableNodeIsLoaded(0x23, portrait)) {
                    asdTMTexTableReleaseNode(0x23, portrait);
                }
                static_cast<s8 *>(DAT_0044e158.workB)[portrait] = 0;
                return;
            }
            portrait = devil->model + 1;
            if (portrait >= 614) {
                return;
            }
        }
    }
    s8 *references = static_cast<s8 *>(DAT_0044e158.workA);
    s8 remaining = references[portrait] - 1;
    references[portrait] = remaining;
    if (remaining > 0) {
        return;
    }
    if (asdTMTexTableNodeIsLoaded(0x17, portrait)) {
        asdTMTexTableReleaseNode(0x17, portrait);
        FUN_002a60cc(g_aocSystem, 0x17, portrait);
    }
    static_cast<s8 *>(DAT_0044e158.workA)[portrait] = 0;
}
}
