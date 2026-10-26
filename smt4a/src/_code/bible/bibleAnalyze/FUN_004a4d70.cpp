/* NON_MATCHING: completion signed load, fallback-name lifetime, and final selected-entry tail call differ. */
#include "shard/Shard004A.h"
#include "code/Code0033.h"

namespace {
struct BibleAnalyzeTextGlobals {
    void *active;
    u32 unk04;
    const char *suffix;
};
}
extern "C" {
void FUN_00163aa4(UiAnimatedSprite *, f32 speed);
s32 vec2GetXInt(const UiAnimatedSprite *);
s32 vec2GetYInt(const UiAnimatedSprite *);
void pointConvertToFloat(f32 *point, s32 x, s32 y);
u8 buttonHelpIsNotActive(void);
void FUN_0032d0c8(s32 channel, s32 kind, u32 id, s32 mode);
const char *dataLookupDisplayName(void *storage, u32 id);
s32 textFormatBuffer(char *output, const char *format, ...);
void FUN_0019de98(const char *message, u32 color);
extern const char DAT_0052b5bc[];
extern const char DAT_0052b5c4[];
extern BibleAnalyzeTextGlobals DAT_0057f0a0;

// Finish the analyzer's selection animation and display the selected entry's information.
void FUN_004a4d70(Screen4A *screen)
{
    UiAnimatedSprite *selection = &screen->animation.selection;
    screen->unkA872 = 8;
    FUN_00163aa4(selection, 1.0f);
    s32 y = vec2GetYInt(selection);
    s32 x = vec2GetXInt(selection);
    pointConvertToFloat(screen->cursor.position, x, y);
    if (selection->finished && buttonHelpIsNotActive()) {
        FUN_003343f0(0);
        screen->state = 2;
        screen->unk18 = 0;
        pointConvertToFloat(screen->cursor.position, 0, 0);
        if (!screen->unk0860) {
            // The byte-aligned shared padding cannot contain a typed list without shifting it.
            struct AnalyzeListView {
                u8 unk000[0x864];
                BibleAnalyzeListEntry entries[1];
            };
            typedef char AnalyzeListOffsetCheck[offsetof(AnalyzeListView, entries) == 0x864 ? 1 : -1];
            BibleAnalyzeListEntry *entries = reinterpret_cast<AnalyzeListView *>(screen)->entries;
            s32 index = flaggedValueHolderGetTotal(reinterpret_cast<const FlaggedValueHolder *>(screen->listSelection.selectedIndex));
            FUN_0032d0c8(0, 1, entries[index].id, 0);
            return;
        }
        char message[80];
        u8 nameStorage[8];
        const char *name = dataLookupDisplayName(nameStorage, screen->displayNameId);
        if (!name)
            name = DAT_0052b5bc;
        textFormatBuffer(message, DAT_0052b5c4, name, DAT_0057f0a0.suffix);
        FUN_0019de98(message, 0x323232ff);
    }
}
}
