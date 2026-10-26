/* NON_MATCHING: Debug help/leader/guest drawing is reconstructed; scratch initialization omits retail redundant zero stores, and float temporaries/frame layout differ. */
#include "shard/W6_W6Match8_BattleDebug.h"
#include "AsdSDK/AsdMemUtil.h"
#include "addon/LookupRecord.h"

struct DebugHelpText {
    /* 0x00 */ u32 messages[6];
    /* 0x18 */ u8 unk18[0x18];
    /* 0x30 */ f32 scaleX;
    /* 0x34 */ f32 scaleY;
    /* 0x38 */ u8 unk38[0x3c];
};
struct DebugHelpLabels {
    char names[2][32];
};
extern "C" {
extern s32 DAT_00435dc0;
extern const DebugHelpLabels DAT_004004a8;
void textDrawDefaultString(const char *text, f32 x, f32 y);
void FUN_003bc248(DebugHelpText *help, s32 index, s32 first, s32 second);
void *dataTable02GetEntryByIndex(s32 index);
void FUN_003bbfdc(DebugHelpText *help, void *entry);
u32 entryTableCallSlot3(s32 slot);
u32 dataTable02HasFlaggedItem(s32 index);
u16 spriteTemplateGetPreferredDevilId(s32 index);
void textFormatBuffer(char *destination, const char *format, ...);
}

/* Draw six help lines plus the selected leader and guest labels in the debug panel. */
extern "C" void FUN_003c2fe8(void *, s32 index)
{
    if (index < 0) {
        return;
    }
    if (DAT_00435dc0 > 0) {
        textDrawDefaultString(reinterpret_cast<const char *>(FUN_002bd06c(static_cast<u16>(DAT_00435dc0))), 256.0f, 0.0f);
        return;
    }
    DebugHelpText help;
    memClear(&help, sizeof(help));
    help.scaleX = 1.0f;
    help.scaleY = 1.0f;
    if (g_btlDebugState.category != 0) {
        aocGetTableRecordOrFallback(index);
        FUN_003bc248(&help, index, 0, 0);
    } else {
        FUN_003bbfdc(&help, dataTable02GetEntryByIndex(index));
    }
    u32 line = 0;
    u32 spacing = entryTableCallSlot3(3);
    for (u16 i = 0; i < 6; ++i) {
        if (help.messages[i] != 0) {
            const char *text = reinterpret_cast<const char *>(FUN_002bd06c(static_cast<u16>(help.messages[i])));
            textDrawDefaultString(text, 256.0f, static_cast<f32>(spacing * line));
            ++line;
        }
    }
    if (g_btlDebugState.category == 0) {
        DebugHelpLabels labels = DAT_004004a8;
        textDrawDefaultString(labels.names[dataTable02HasFlaggedItem(index)], 256.0f, 128.0f);
        const char *leader = reinterpret_cast<const char *>(FUN_002bd06c(spriteTemplateGetPreferredDevilId(index)));
        char text[32] = {};
        textFormatBuffer(text, "\x83\x8a\x81\x5b\x83\x5f\x81\x5b\x81\x46%s", leader);
        textDrawDefaultString(text, 256.0f, static_cast<f32>(spacing) + 128.0f);
    }
    textDrawDefaultString("\x83\x51\x83\x58\x83\x67", 256.0f, 170.0f);
    if (g_btlDebugState.selection > 0) {
        const char *guest = reinterpret_cast<const char *>(FUN_002bd06c(static_cast<u16>(g_btlDebugState.selection)));
        textDrawDefaultString(guest, 256.0f, static_cast<f32>(spacing) + 170.0f);
    }
}
