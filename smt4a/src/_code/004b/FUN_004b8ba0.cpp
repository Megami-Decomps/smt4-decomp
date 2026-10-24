/* NON_MATCHING: readable rebuild of the menu's entry-availability scan and mode switch (the draft's three copies of the availability script run are one helper here, inlined by retail); armcc here orders the entry loops, the 36-byte name buffer and the mode switch differently. */
#include "common.h"

/* One menu entry (only the fields read here). */
struct MenuEntry {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ char name[0x10];     /* "0" for an empty entry */
    /* 0x3C */ s16 requiredFlag;    /* must be set (0: none) */
    /* 0x3E */ s16 forbiddenFlag;   /* must not be set (0: none) */
    /* 0x40 */ u8 unk40[0x14];
    /* 0x54 */ s16 kind;
};

/* The menu (only the fields read here). */
struct ScriptMenu {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ u32 flags;
    /* 0x0024 */ u8 unk0024[4];
    /* 0x0028 */ s32 state;
    /* 0x002C */ s32 subState;
    /* 0x0030 */ u8 unk0030[0xC];
    /* 0x003C */ s16 selected;
    /* 0x003E */ u8 unk003E[0x5E];
    /* 0x009C */ u8 entries[0x7E8];
    /* 0x0884 */ s32 entryCount;
    /* 0x0888 */ u8 unk0888[0x202];
    /* 0x0A8A */ u8 scrolled;
    /* 0x0A8B */ u8 unk0A8B[0x695];
    /* 0x1120 */ s32 mode;
    /* 0x1124 */ u8 unk1124[0x20];
    /* 0x1144 */ u32 scriptTable;
    /* 0x1148 */ u8 unk1148[4];
    /* 0x114C */ u32 script;
    /* 0x1150 */ u8 unk1150[0xC8];
    /* 0x1218 */ u32 sound;
};

extern "C" {
extern const char DAT_005328fc[];
extern s32 DAT_0058800c;

void textFormatBuffer(char *buffer, const char *format, const char *name);
u32 tableGroupFindEntryIndex(u32 group, const char *name);
void scrScriptProcessStartEntry(u32 script, u32 entry);
s32 scrRunOpcodesStub(u32 script);
s32 gameFlagIsSet(s32 flag);
MenuEntry *menu4CGetEntry(void *entries, s32 index);
void menu4CScrollToKind(void *entries, s32 kind);
void FUN_004b6bc4(ScriptMenu *menu, s32 selected, s32 mode);
void FUN_004080bc(u32 sound, s32 a, u32 b);

/* Runs an entry's availability script and tests its flags: true when it is available. */
static bool entryAvailable(ScriptMenu *menu, MenuEntry *entry)
{
    char buffer[36];
    u32 script = menu->script;
    u32 table = menu->scriptTable;
    DAT_0058800c = 0;
    textFormatBuffer(buffer, DAT_005328fc, entry->name);
    scrScriptProcessStartEntry(script, tableGroupFindEntryIndex(table, buffer));
    while (scrRunOpcodesStub(script) != 2) {
    }
    return DAT_0058800c == 0 && (entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag) != 0) &&
           (entry->forbiddenFlag == 0 || gameFlagIsSet(entry->forbiddenFlag) == 0);
}

/* Scans the entries for available ones (kinds 3, 4 and 2) and then, by menu mode, either scrolls to
 * the first entry or opens the selected entry's detail. */
void FUN_004b8ba0(ScriptMenu *menu)
{
    bool noFourthKind = true;
    s32 count = menu->entryCount;
    for (s32 i = 0; i < count; i++) {
        MenuEntry *entry = menu4CGetEntry(menu->entries, i);
        if (entry->kind == 3 && entry->name[0] != '0') {
            if (entryAvailable(menu, entry))
                break;
        } else if (entry->kind == 4 && entry->name[0] != '0') {
            if (entryAvailable(menu, entry)) {
                noFourthKind = false;
                break;
            }
        }
    }
    for (s32 i = 0; i < count; i++) {
        MenuEntry *entry = menu4CGetEntry(menu->entries, i);
        if (entry->kind == 2 && entry->name[0] != '0' && entryAvailable(menu, entry))
            break;
    }
    switch (menu->mode) {
    case 1:
    case 2:
        break;
    case 5:
        if (!noFourthKind)
            return;
        break;
    case 6:
    case 7:
        FUN_004b6bc4(menu, menu->selected, (menu->flags & 0x10000000) != 0 ? 4 : 3);
        menu->state = 4;
        menu->subState = 0;
        FUN_004080bc(menu->sound, 0, 0xFFFFFFFF);
        return;
    default:
        return;
    }
    menu4CScrollToKind(menu->entries, 0xFF);
    menu->flags |= 0x40000000;
    menu->scrolled = 1;
}

} /* extern "C" */
