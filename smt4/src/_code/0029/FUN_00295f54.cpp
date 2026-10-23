/* NON_MATCHING: message-resource address lifetime, search scratch registers and constant-load placement differ. */
#include "gamedata/UnitStats.h"

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
s32 FUN_002b6b04();
s32 dialogIsActive();
s32 FUN_001ab9dc();
s32 dialogGetTimer();
void infoWinStartTimer(s32);
const StatBlock *gameGetUnitRecord(s32);
const char *FUN_002bd06c(u32);
const char *demonGetRaceLabel(u16, u32);
char *libc_strcpy(char *, const char *);
void textEncodeFontSlot(u32, const char *);
void infoWinSetMessage(u32, u32);
void dialogOpen(s32);
void infoWinSetTimer(s32);
void infoWinSetValue(s32);

void FUN_00295f54(UnitNotificationView *notifications, s32)
{
    if (!notifications->count || notifications->count == notifications->current)
        return;
    if (FUN_002b6b04()) {
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
    u32 message = 200;
    if (index != 0) {
        const StatBlock *unit = gameGetUnitRecord(index - 1);
        char text[32] = {};
        libc_strcpy(text, FUN_002bd06c(unit->id));
        textEncodeFontSlot(8, text);
        libc_strcpy(text, demonGetRaceLabel(unit->id, 0));
        textEncodeFontSlot(16, text);
        message = 201;
    }
    infoWinSetMessage(notifications->messages, message);
    ++notifications->current;
    dialogOpen(1);
    if (notifications->count == notifications->current) {
        infoWinSetTimer(-1);
        infoWinSetValue(0);
    } else {
        infoWinSetTimer(90);
    }
}
}
