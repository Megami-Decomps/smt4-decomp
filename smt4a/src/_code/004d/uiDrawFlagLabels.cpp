#include "runtime/Stdio.h"
#include "status/StatusFlagLabels.h"

struct FlagLabelRecord {
    u64 flags; // 0x000
    u8 unk008[0x15e];
    u16 message; // 0x166
};
extern "C" {
extern const u64 g_btlDebugGlobals[];
extern const char DAT_00528128[];
extern const char DAT_00528130[];
extern const char DAT_00528138[];
extern const char DAT_00528140[];
u32 entryTableCallSlot3(u32 table);
const char *gameGetPlayerName();
const char *dataTable01GetRecordWithAocOverride(u16 message);
}

// Draw the first applicable flag label and its associated description.
extern "C" void uiDrawFlagLabels(void *, const FlagLabelRecord *record)
{
    if (record == NULL)
        return;
    u32 lineHeight = entryTableCallSlot3(3);
    char label[12] = {};
    const char *description = NULL;
    if (g_btlDebugGlobals[2] & record->flags) {
        __2sprintf(label, DAT_00528128);
        description = gameGetPlayerName();
    } else if (record->flags & g_btlDebugGlobals[3]) {
        __2sprintf(label, DAT_00528130);
        description = dataTable01GetRecordWithAocOverride(record->message);
    } else if (record->flags & g_btlDebugGlobals[5]) {
        __2sprintf(label, DAT_00528138);
        description = dataTable01GetRecordWithAocOverride(record->message);
    } else if (g_btlDebugGlobals[4] & record->flags) {
        __2sprintf(label, DAT_00528140);
        description = dataTable01GetRecordWithAocOverride(record->message);
    }
    drawFlagLabelLine(label, 0);
    drawFlagLabelLine(description, lineHeight);
}
