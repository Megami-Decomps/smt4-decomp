/* NON_MATCHING: local label snapshot and format buffer have different frame placement; category/state-store scheduling differs. */
#include "common.h"
#include "code/Code0015.h"
#include "gamedata/SaveSlotTable.h"
#include "map/PopupStateA.h"
struct PopupSubstitutionNames { const char *names[12]; };
struct PopupSelectedUnit { u8 prefix[0x12C]; u16 id; };
extern "C" {
extern PopupSubstitutionNames DAT_00531a98;
s32 gameFlagIsSet(u32 flag);
s32 randRange(u32 maximum);
const char *popupSelectWeightedMessage(s32 category, s32 id);
void rt_memcpy(void *destination, const void *source, u32 size);
s32 textFormatBuffer(char *destination, const char *format, ...);

/* Request a context popup for the selected unit, substituting the action's label. */
u32 FUN_00234528(s32 action, s32 count)
{
    FUN_00152f44();
    PopupStateA *work = g_popupState;
    if (work->state != 0)
        return 0;
    PopupSelectedUnit *unit = reinterpret_cast<PopupSelectedUnit *>(saveSlotFindSelected());
    if (unit == NULL)
        return 0;
    if (gameFlagIsSet(0x8D) && !gameFlagIsSet(0xC2) && unit->id == 0xB1)
        return 0;
    if (gameFlagIsSet(0x1A2) && randRange(99) + 1 <= 50)
        return 0;
    s32 category = count >= 3 ? 13 : 12;
    PopupSubstitutionNames labels = DAT_00531a98;
    if (action == 11)
        category = 23;
    work = g_popupState;
    work->state = 8;
    work->timer = 0;
    const char *message = popupSelectWeightedMessage(category, unit->id);
    work = g_popupState;
    work->message = message;
    work->speakerId = unit->id;
    char format[84];
    rt_memcpy(format, message, 72);
    textFormatBuffer(work->text, format, labels.names[action]);
    work = g_popupState;
    work->message = work->text;
    return 1;
}
}
