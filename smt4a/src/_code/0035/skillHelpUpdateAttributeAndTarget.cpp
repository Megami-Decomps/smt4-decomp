#include "common.h"
#include "gamedata/Table04Record.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
extern ButtonHelpGlobalsPrefixA g_buttonHelp;
u32 FUN_0016a0e8(void);
s32 idIsAbove400(s32 id);
Table04ExtraRecord *dataTable41FindById(s32 id);
Table04Record *dataTable04FindById(s32 id);
s32 battleAttributeFormatName(void *output, u32 attribute);
s32 skillFormatTargetLabel(void *output, u32 target);
s32 textFormatBuffer(void *output, const char *format, ...);
s32 asdTextDrawDirectoryEntry(u32 directory, s32 entry, u32 color,
                              s32 flags, s32 kind, u32 context, s32 id);

void skillHelpUpdateAttributeAndTarget(s32 id)
{
    ButtonHelpStatePrefixA *state = g_buttonHelp.state;
    if (id == 0) {
        state->selectionActive = 0;
        return;
    }

    state->refreshRequested = 1;
    state->selectionActive = 1;
    const u32 context = FUN_0016a0e8();

    if (idIsAbove400(id) != 0) {
        Table04ExtraRecord *record = dataTable41FindById(id);
        char text[0x6C];
        battleAttributeFormatName(text,
            (static_cast<u32>(record->flags) >> 11) & 31u);
        FUN_003180c4(0x24, reinterpret_cast<const char *>(text));
        // Shift-JIS full-width "Self", preserved byte for byte.
        textFormatBuffer(text, "\x82\x72\x82\x85\x82\x8c\x82\x86");
        FUN_003180c4(0x25, reinterpret_cast<const char *>(text));
    } else {
        Table04Record *record = dataTable04FindById(id);
        char text[0x6C];
        battleAttributeFormatName(text, (record->properties >> 11) & 31u);
        FUN_003180c4(0x24, reinterpret_cast<const char *>(text));
        skillFormatTargetLabel(text, (record->properties >> 5) & 15u);
        FUN_003180c4(0x25, reinterpret_cast<const char *>(text));
    }

    asdTextDrawDirectoryEntry(state->directory, 2, 0xffffffffu, 0,
                              3, context, id);
}
}
