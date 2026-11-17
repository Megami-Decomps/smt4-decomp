#include "gamedata/DevilRecordA.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "gamedata/Table00Lookup.h"
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
            const DevilTableRecordA *record =
                (const DevilTableRecordA *)devilGetRecord((u16)id);
            if (!record) {
                return false;
            }
            const Table00RecordA *base = dataTable00FindById((u16)id);
            if (base->level & 0x8000) {
                table = 25;
                index = base->battleTextureId;
                if (index >= 0x9a) {
                    return false;
                }
            } else {
                index = record->unk9C + 1;
                if (index >= 0x277) {
                    return false;
                }
            }
        }
    }
    return asdTMTexTableNodeIsLoaded(table, index);
}
}
