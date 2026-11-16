#include "gamedata/DisplayName.h"
#include "bible/bibleAnalyze.h"

extern "C" {
extern DisplayNameOverride g_displayNameOverrides[999];
extern NaviNameStateView g_naviMain;
s32 dataTable2eSub2GetCount(void);
DisplayNameRecord *dataTable2eSub2GetRecord(s32);

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
            DisplayNameRecord *record = dataTable2eSub2GetRecord(index);
            if (record->id == -1)
                break;
            if (record->id == id)
                return record->text;
        }
    }
    return g_naviMain.fallback;
}
}
