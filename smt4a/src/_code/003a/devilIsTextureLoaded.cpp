#include "gamedata/NkmBaseRecordA.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "gamedata/NkmEnemyLookup.h"
extern "C" bool asdTMTexTableNodeIsLoaded(u32 table, s32 index);

extern "C" {
bool gameFlagIsSet(u32 flag);

bool devilIsTextureLoaded(s32 id, s32 resolve)
{
    u32 table = 15;
    s32 index = id;
    if (resolve) {
        if (id < 0) {
            index = gameFlagIsSet(17) ? 0 : 0x25e;
        } else {
            const NkmBaseRecordA *record =
                (const NkmBaseRecordA *)nkmBaseGetRecord((u16)id);
            if (!record) {
                return false;
            }
            const NkmEnemyRecordA *base = nkmEnemyFindById((u16)id);
            if (base->level & 0x8000) {
                table = 25;
                index = base->battleTextureId;
                if (index >= 0x9a) {
                    return false;
                }
            } else {
                index = record->model + 1;
                if (index >= 0x277) {
                    return false;
                }
            }
        }
    }
    return asdTMTexTableNodeIsLoaded(table, index);
}
}
