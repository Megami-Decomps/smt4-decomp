#include "gamedata/DevilModel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code0029.h"
#include "gamedata/Table00Lookup.h"
extern "C" {

// Resolves a demon's model texture and checks that its table node is loaded.
s32 FUN_00293f10(s32 id, s32 mapped)
{
    u32 table = 0x17;
    s32 node = id;
    if (mapped != 0) {
        if (id < 0) {
            node = 0;
        } else {
            DevilRecord* record = reinterpret_cast<DevilRecord*>(devilGetRecord((u16)id));
            if (record == NULL) {
                return 0;
            }
            Table00Record* overrideRecord = dataTable00FindById((u16)id);
            if (overrideRecord->levelFlags & 1) {
                table = 0x23;
                node = overrideRecord->portraitId;
                if (node >= 0x81) {
                    return 0;
                }
            } else {
                node = record->model + 1;
                if (node >= 0x266) {
                    return 0;
                }
            }
        }
    }
    return asdTMTexTableNodeIsLoaded(table, node);
}
}
