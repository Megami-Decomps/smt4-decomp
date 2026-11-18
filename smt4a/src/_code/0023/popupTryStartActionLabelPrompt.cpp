#include "common.h"
#include "code/Code0015.h"
#include "gamedata/SaveSlotTable.h"
#include "map/PopupStateA.h"
struct PopupSubstitutionNames { const char *names[12]; };
extern "C" {
extern PopupSubstitutionNames DAT_00531a98;
s32 gameFlagIsSet(u32 flag);
s32 randRange(u32 maximum);
const char *popupSelectWeightedMessage(s32 category, s32 id);
void rt_memcpy(void *destination, const void *source, u32 size);
s32 textFormatBuffer(char *destination, const char *format, ...);

/* Request a context popup for the selected unit, substituting the action's label. */
u32 popupTryStartActionLabelPrompt(s32 action, s32 count)
{
    char format[72]; /* the message, copied so the label can be substituted into it */
    FUN_00152f44();
    PopupStateA *work = g_popupState;
    if (work->state != 0)
        return 0;
    PartySlotA *unit = saveSlotFindSelected();
    if (unit == NULL)
        return 0;
    if (gameFlagIsSet(0x8D) && !gameFlagIsSet(0xC2) && unit->id == 0xB1)
        return 0;
    if (gameFlagIsSet(0x1A2) && randRange(99) + 1 <= 50)
        return 0;
    s32 category = 12;
    if (count >= 3)
        category = 13;
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
    rt_memcpy(format, message, sizeof(format));
    textFormatBuffer(work->text, format, labels.names[action]);
    work = g_popupState;
    work->message = work->text;
    return 1;
}
}
