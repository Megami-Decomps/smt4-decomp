/* NON_MATCHING: disabled-entry branch layout, field-address CSE and callback flag-store scheduling differ. */
#include "shard/Shard004A.h"
#include "shard/W6_W6Match8_DevilRecordA.h"

namespace {
struct AnalyzeCallback;
struct AnalyzeCallbackTable {
    void (*unk00)();
    void (*unk04)();
    void (*activate)(AnalyzeCallback *, FlaggedValueHolder *);
};
struct AnalyzeCallback {
    const AnalyzeCallbackTable *vtable;
    u16 flags;
};
struct AnalyzePositionedButton {
    u8 unk00[0x20];
    f32 position[2];
    u8 unk28[0x64];
};
struct AnalyzeButtonsView {
    u8 unk000[0xDC];
    AnalyzePositionedButton buttons[13];
};
/* A typed list inside the shared byte-aligned padding would change its alignment. */
struct AnalyzeEntryListView {
    u8 unk000[0x864];
    BibleAnalyzeListEntry entries[1280];
};
/* The property lies beyond DevilRecordA's shared prefix. */
struct AnalyzeDemonFlagsView {
    DevilRecordA record;
    u8 unk40[0x73];
    u8 flags;
};
struct AnalyzeSuffixGlobals {
    void *active;
    u32 unk04;
    const char *suffix;
};
typedef char AnalyzeConfirmationOffsets[
    sizeof(AnalyzePositionedButton) == 0x8C &&
    offsetof(AnalyzeEntryListView, entries) == 0x864 &&
    offsetof(AnalyzeDemonFlagsView, flags) == 0xB3 &&
    offsetof(AnalyzeCallback, flags) == 4 ? 1 : -1];
}
extern "C" {
extern AnalyzeSuffixGlobals DAT_0057f0a0;
extern const char DAT_0052b5bc[], DAT_0052b5c4[];
s32 entryDispatchUpdate(void *buttons, s32 index);
s32 vec2GetYInt(const f32 *point);
s32 vec2GetXInt(const f32 *point);
void pointConvertToFloat(f32 *point, s32 x, s32 y);
void sysPlaySe(u32 sound);
s32 flaggedValueHolderGetTotal(FlaggedValueHolder *holder);
const char *dataLookupDisplayName(u32 *key, u32 id);
s32 textFormatBuffer(char *output, const char *format, ...);
void FUN_0019de98(const char *text, u32 color);
void FUN_0032d0c8(s32 first, s32 second, u16 id, s32 fourth);
void FUN_003343f0(u8 value);
void FUN_004d05c4(void *controls, s32 kind, u32 flags, s32 count);

void FUN_004a4658(Screen4A *screen)
{
    s32 activated = entryDispatchUpdate(screen->block0DC, screen->unkA872);
    AnalyzeButtonsView *buttons = reinterpret_cast<AnalyzeButtonsView *>(screen);
    f32 *position = buttons->buttons[screen->unkA872].position;
    s32 y = vec2GetYInt(position);
    s32 x = vec2GetXInt(position);
    pointConvertToFloat(screen->cursor.position, x, y);
    if (activated == 0)
        return;
    BibleAnalyzeListEntry *entries = reinterpret_cast<AnalyzeEntryListView *>(screen)->entries;
    if (screen->unk0860 != 0) {
        sysPlaySe(0x48);
    } else {
        s32 index = flaggedValueHolderGetTotal(&screen->selection.holder);
        const AnalyzeDemonFlagsView *record = reinterpret_cast<const AnalyzeDemonFlagsView *>(FUN_00184310(entries[index].id));
        sysPlaySe((record->flags & 2) ? 0x121 : 0x30);
    }
    if (screen->unk0860 != 0) {
        u32 key;
        const char *name = dataLookupDisplayName(&key, screen->displayNameId);
        if (name == NULL)
            name = DAT_0052b5bc;
        char message[80];
        textFormatBuffer(message, DAT_0052b5c4, name, DAT_0057f0a0.suffix);
        FUN_0019de98(message, 0x323232FF);
    } else {
        s32 index = flaggedValueHolderGetTotal(&screen->selection.holder);
        FUN_0032d0c8(0, 1, entries[index].id, 0);
    }
    FUN_003343f0(0);
    screen->state = 2;
    screen->unk18 = 0;
    pointConvertToFloat(screen->cursor.position, 0, 0);
    AnalyzeCallback *callback = static_cast<AnalyzeCallback *>(screen->confirmation.callback);
    callback->vtable->activate(callback, &screen->selection.holder);
    callback = static_cast<AnalyzeCallback *>(screen->confirmation.callback);
    callback->flags |= 0x1000;
    s32 count = screen->listCount.count;
    if (screen->unk0860 != 0) {
        if (count >= 10)
            count = 10;
        FUN_004d05c4(screen->confirmation.controls, 0x13, 0x1030, count);
    } else {
        if (count >= 10)
            count = 10;
        FUN_004d05c4(screen->confirmation.controls, 0x14, 0x40E, count);
    }
}
}
