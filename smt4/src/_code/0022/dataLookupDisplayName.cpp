#include "gamedata/DisplayName.h"
#include "gamedata/MapSystemTable.h"
#include "bible/bibleAnalyze.h"

extern "C" {
extern DisplayNameOverride g_displayNameOverrides[999];
extern NaviNameStateView g_naviMain;

// Look up a display name in the override table or the ordinary name records.
const char *dataLookupDisplayName(s32 unused, s32 id)
{
    if (id >= 100) {
        for (s32 index = 0; index < 999; ++index) {
            if (g_displayNameOverrides[index].id == -1)
                break;
            if (g_displayNameOverrides[index].id == id)
                return g_displayNameOverrides[index].text;
        }
    } else {
        for (s32 index = 0; index < dataTable2eSub2GetCount(); ++index) {
            MapSystemMapRecord *record = dataTable2eSub2GetRecord(index);
            if (record->mapId == -1)
                break;
            if (record->mapId == id)
                return record->name;
        }
    }
    return g_naviMain.fallback;
}
}
