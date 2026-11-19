/* NON_MATCHING: stack frame (key/message placement), saved-register numbering and the state/step STRD pair differ; branch layout now matches. */
#include "runtime/Stdio.h"
#include "ui/UiSpriteApi.h"
#include "shard/Shard004A.h"
#include "classes/Obj55c8d0.h"
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
struct AnalyzeSuffixGlobals {
    void *active;
    u32 unk04;
    const char *suffix;
};
typedef char AnalyzeConfirmationOffsets[
    sizeof(AnalyzePositionedButton) == 0x8C &&
    offsetof(AnalyzeEntryListView, entries) == 0x864 &&
    offsetof(AnalyzeCallback, flags) == 4 ? 1 : -1];
}
extern "C" {
u32 shopListItemGetId(const BibleAnalyzeListEntry *entry);
extern AnalyzeSuffixGlobals DAT_0057f0a0;
extern const char DAT_0052b5bc[], DAT_0052b5c4[];
s32 entryDispatchUpdate(void *buttons, s32 index);
void pointConvertToFloat(f32 *point, s32 x, s32 y);
void sysPlaySe(u32 sound);
const char *dataLookupDisplayName(u32 *key, u32 id);
void buttonHelpSetText(const char *text, u32 color);
void FUN_0032d0c8(s32 first, s32 second, u16 id, s32 fourth);
void gameGlobalsSetMenuOpenFlag(u8 value);
void messageIdListSetRange(void *controls, s32 kind, u32 flags, s32 count);

}

void Obj55c8d0::FUN_004a4658()
{
    Screen4A * screen = reinterpret_cast<Screen4A *>(this);
    s32 activated = entryDispatchUpdate(screen->block0DC, screen->unkA872);
    AnalyzeButtonsView *buttons = reinterpret_cast<AnalyzeButtonsView *>(screen);
    f32 *position = buttons->buttons[screen->unkA872].position;
    s32 y = vec2GetYInt((UiSpriteState *)position);
    s32 x = vec2GetXInt((UiSpriteState *)position);
    pointConvertToFloat(screen->cursor.position, x, y);
    if (activated == 0)
        return;
    BibleAnalyzeListEntry *entries = reinterpret_cast<AnalyzeEntryListView *>(screen)->entries;
    if (screen->unk0860 == 0) {
        s32 index = flaggedValueHolderGetTotal(&screen->selection.holder);
        const NkmBaseRecordA *record = nkmBaseGetRecord(entries[index].id);
        sysPlaySe((record->extraFlags & 2) ? 0x121 : 0x30);
    } else {
        sysPlaySe(0x48);
    }
    if (screen->unk0860 != 0) {
        u32 key;
        const char *name = dataLookupDisplayName(&key, screen->displayNameId);
        if (name == NULL)
            name = DAT_0052b5bc;
        char message[80];
        __2sprintf(message, DAT_0052b5c4, name, DAT_0057f0a0.suffix);
        buttonHelpSetText(message, 0x323232FF);
    } else {
        s32 index = flaggedValueHolderGetTotal(&screen->selection.holder);
        u16 id = shopListItemGetId(&entries[index]);
        FUN_0032d0c8(0, 1, id, 0);
    }
    gameGlobalsSetMenuOpenFlag(0);
    screen->state = 2;
    screen->unk18 = 0;
    pointConvertToFloat(screen->cursor.position, 0, 0);
    AnalyzeCallback *callback = static_cast<AnalyzeCallback *>(screen->confirmation.callback);
    callback->vtable->activate(callback, &screen->selection.holder);
    callback = static_cast<AnalyzeCallback *>(screen->confirmation.callback);
    callback->flags |= 0x1000;
    s32 count = screen->listCount.count;
    if (screen->unk0860 != 0) {
        count = count < 10 ? count : 10;
        messageIdListSetRange(screen->confirmation.controls, 0x13, 0x1030, count);
    } else {
        count = count < 10 ? count : 10;
        messageIdListSetRange(screen->confirmation.controls, 0x14, 0x40E, count);
    }
}
