/* NON_MATCHING: local label snapshot and format buffer have different frame placement; category/state-store scheduling differs. */
#include "common.h"
#include "code/Code0015.h"
#include "gamedata/SaveSlotTable.h"
struct PopupSubstitutionNames { const char *names[12]; };
struct PopupSelectedUnit { u8 prefix[0x12C]; u16 id; };
extern "C" {
extern void *g_popupState;
extern PopupSubstitutionNames DAT_00531a98;
s32 gameFlagIsSet(u32 flag);
s32 randRange(u32 maximum);
const char *FUN_002d8b58(s32 category, s32 id);
void rt_memcpy(void *destination, const void *source, u32 size);
s32 textFormatBuffer(char *destination, const char *format, ...);

/* Request a context popup for the selected unit, substituting the action's label. */
u32 FUN_00234528(s32 action, s32 count)
{
    /* Formatting state follows the shared popup prefix. */
    struct PopupFormattingView {
        s32 state;
        s32 phase;
        u8 unk08[0xC];
        const char *message;
        s32 selectedId;
        void *selectedData;
        u8 unk20[5];
        char formatted[1];
    };
    FUN_00152f44();
    PopupFormattingView *work = static_cast<PopupFormattingView *>(g_popupState);
    if (work->state != 0)
        return 0;
    PopupSelectedUnit *unit = reinterpret_cast<PopupSelectedUnit *>(saveSlotFindSelected());
    if (unit == NULL)
        return 0;
    if (gameFlagIsSet(0x8D) && !gameFlagIsSet(0xC2) && unit->id == 0xB1)
        return 0;
    if (gameFlagIsSet(0x1A2) && randRange(99) + 1 <= 50)
        return 0;
    PopupSubstitutionNames labels = DAT_00531a98;
    s32 category = count >= 3 ? 13 : 12;
    if (action == 11)
        category = 23;
    work = static_cast<PopupFormattingView *>(g_popupState);
    work->state = 8;
    work->phase = 0;
    const char *message = FUN_002d8b58(category, unit->id);
    work = static_cast<PopupFormattingView *>(g_popupState);
    work->message = message;
    work->selectedId = unit->id;
    char format[84];
    rt_memcpy(format, message, 72);
    textFormatBuffer(work->formatted, format, labels.names[action]);
    work = static_cast<PopupFormattingView *>(g_popupState);
    work->message = work->formatted;
    return 1;
}
}
