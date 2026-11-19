#include "runtime/Stdio.h"
#include "status/StatusFlagLabels.h"
#include "gamedata/GameDataAccess.h"
#include "addon/LookupRecord.h"

struct StatusHelpRecord {
    /* 0x00 */ u32 flags;
    /* 0x04 */ u8 unk04[0xca];
    /* 0xCE */ u16 entryId;
};

extern "C" {
u32 entryTableCallSlot3(u32 slot);
extern const char DAT_0040056c[];
extern const char DAT_00400574[];
extern const char DAT_0040057c[];
extern const char DAT_00400584[];
}

// Draw the selected record's category and description in the status help area.
extern "C" void uiDrawFlagLabels(void *context, const StatusHelpRecord *record)
{
    if (record == NULL)
        return;
    u32 lineHeight = entryTableCallSlot3(3);
    char label[12] = {};
    const char *description = NULL;
    if (record->flags & 2) {
        __2sprintf(label, DAT_0040056c);
        description = reinterpret_cast<const char *>(gameGetPlayerName());
    } else if (record->flags & 8) {
        __2sprintf(label, DAT_00400574);
        description = reinterpret_cast<const char *>(dataTable01FindByIdWithAoc(record->entryId));
    } else if (record->flags & 0x20) {
        __2sprintf(label, DAT_0040057c);
        description = reinterpret_cast<const char *>(dataTable01FindByIdWithAoc(record->entryId));
    } else if (record->flags & 0x10) {
        __2sprintf(label, DAT_00400584);
        description = reinterpret_cast<const char *>(dataTable01FindByIdWithAoc(record->entryId));
    }
    drawFlagLabelLine(label, 0);
    drawFlagLabelLine(description, lineHeight);
}
