/* NON_MATCHING: the scratch VFP register for unsigned line-height conversion is s1 instead of retail s2. */
#include "common.h"
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
s32 textFormatBuffer(char *output, const char *format, ...);
void textDrawDefaultString(const char *text, f32 x, f32 y);
}

// Draw the selected record's category and description in the status help area.
extern "C" void FUN_003c3238(void *context, const StatusHelpRecord *record)
{
    if (record == NULL)
        return;
    u32 lineHeight = entryTableCallSlot3(3);
    char label[12] = {};
    const char *description = NULL;
    if (record->flags & 2) {
        textFormatBuffer(label, DAT_0040056c);
        description = reinterpret_cast<const char *>(gameGetPlayerName());
    } else if (record->flags & 8) {
        textFormatBuffer(label, DAT_00400574);
        description = reinterpret_cast<const char *>(FUN_002bd06c(record->entryId));
    } else if (record->flags & 0x20) {
        textFormatBuffer(label, DAT_0040057c);
        description = reinterpret_cast<const char *>(FUN_002bd06c(record->entryId));
    } else if (record->flags & 0x10) {
        textFormatBuffer(label, DAT_00400584);
        description = reinterpret_cast<const char *>(FUN_002bd06c(record->entryId));
    }
    textDrawDefaultString(label, 228, 42);
    textDrawDefaultString(description, 228, (f32)lineHeight + 42);
}
