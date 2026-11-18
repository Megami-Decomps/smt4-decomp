#include "gamedata/UnitStats.h"
#include "ui/UiControl.h"
#include "code/Code002b_Smt4.h"
#include "gamedata/UnitRecordAccess.h"

struct UnitNotificationView {
    u8 unk0000[0x356C];
    u32 messages;
    u8 unk3570[0x9A26];
    s16 order[25];
    s16 current;
    s16 count;
};
typedef char UnitNotificationOffsets[offsetof(UnitNotificationView, current) == 0xCFC8 &&
    offsetof(UnitNotificationView, count) == 0xCFCA ? 1 : -1];
extern "C" {
s32 dialogGetTimer();
void infoWinStartTimer(s32);
const char *dataTable01FindByIdWithAoc(u32);
const char *demonGetRaceLabel(u16, u32);
char *libc_strcpy(char *, const char *);
void textEncodeFontSlot(u32, const char *);
void infoWinSetMessage(u32, u32);
void infoWinSetTimer(s32);
void infoWinSetValue(s32);

/* Shows the next queued unit notification in the info window (the generic message for slot 0, else the unit's name and race). */
void unitNotificationShowNext(UnitNotificationView *notifications, s32)
{
    if (!notifications->count || notifications->count == notifications->current)
        return;
    if (infoWindowIsActive()) {
        if (dialogIsActive() && FUN_001ab9dc() > 90 && dialogGetTimer() == -1 &&
            notifications->count != notifications->current)
            infoWinStartTimer(1);
        return;
    }
    s16 index = -1;
    for (s32 i = 0; i < 25; ++i) {
        if (notifications->order[i] == notifications->current) {
            index = i;
            break;
        }
    }
    if (index == 0) {
        infoWinSetMessage(notifications->messages, 200);
    } else {
        const StatBlock *unit = gameGetUnitRecord(index - 1);
        char text[32] = {};
        libc_strcpy(text, dataTable01FindByIdWithAoc(unit->id));
        textEncodeFontSlot(8, text);
        libc_strcpy(text, demonGetRaceLabel(unit->id, 0));
        textEncodeFontSlot(16, text);
        infoWinSetMessage(notifications->messages, 201);
    }
    ++notifications->current;
    dialogOpen(1, 1);
    if (notifications->count == notifications->current) {
        infoWinSetTimer(-1);
        infoWinSetValue(0);
    } else {
        infoWinSetTimer(90);
    }
}
}
