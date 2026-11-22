/* NON_MATCHING: 220 lines. The two kind tests as separate ifs, the u16 flag ids, the per-mode scroll blocks and the two contentMenuRebuildGroup calls now follow retail. Retail reads the entry count as `add r0, r0, #156; ldr r0, [r0, #2024]` (probably a one-instruction getter on the entry list that armlink inlined; unverified, no inlined.txt row), gives the three inlined availability runs their own 36-byte buffers (sp+40, sp+32), keeps a kind-2 hit flag on the stack whose only reader is a dead load in case 1 (an if/else with identical arms on such a flag lets armcc drop the load here, so the flag is not written: wave 76 review) and hoists 0/1 into r6/r5 before the switch. */
#include "common.h"
#include "runtime/Stdio.h"

/* One menu entry (only the fields read here). */
struct MenuEntry {
    /* 0x00 */ u8 unk00[0x2C];
    /* 0x2C */ char name[0x10];     /* "0" for an empty entry */
    /* 0x3C */ u16 requiredFlag;    /* must be set (0: none) */
    /* 0x3E */ u16 forbiddenFlag;   /* must not be set (0: none) */
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
extern s32 g_scrConditionRejected;

u32 tableGroupFindEntryIndex(u32 group, const char *name);
void scrScriptProcessStartEntry(u32 script, u32 entry);
s32 scrRunOpcodesStub(u32 script);
s32 gameFlagIsSet(s32 flag);
MenuEntry *menu4CGetEntry(void *entries, s32 index);
void menu4CScrollToKind(void *entries, s32 kind);
void contentMenuRebuildGroup(ScriptMenu *menu, s32 selected, s32 mode);
void moveCameraCtrlSnapToNode(u32 sound, s32 a, u32 b); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* Runs an entry's availability script and tests its flags: true when it is available. */
static bool entryAvailable(ScriptMenu *menu, MenuEntry *entry)
{
    char buffer[36];
    u32 script = menu->script;
    u32 table = menu->scriptTable;
    g_scrConditionRejected = 0;
    __2sprintf(buffer, DAT_005328fc, entry->name);
    scrScriptProcessStartEntry(script, tableGroupFindEntryIndex(table, buffer));
    while (scrRunOpcodesStub(script) != 2) {
    }
    return g_scrConditionRejected == 0 && (entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag) != 0) &&
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
        if (entry->kind == 3 && entry->name[0] != '0' && entryAvailable(menu, entry))
            break;
        if (entry->kind == 4 && entry->name[0] != '0' && entryAvailable(menu, entry)) {
            noFourthKind = false;
            break;
        }
    }
    for (s32 i = 0; i < count; i++) {
        MenuEntry *entry = menu4CGetEntry(menu->entries, i);
        /* Retail records the hit in a stack flag that only a dead load in case 1 reads. */
        if (entry->kind == 2 && entry->name[0] != '0' && entryAvailable(menu, entry))
            break;
    }
    switch (menu->mode) {
    case 1:
        menu4CScrollToKind(menu->entries, 0xFF);
        menu->flags |= 0x40000000;
        menu->scrolled = 1;
        break;
    case 2:
        menu4CScrollToKind(menu->entries, 0xFF);
        menu->flags |= 0x40000000;
        menu->scrolled = 1;
        break;
    case 5:
        if (noFourthKind) {
            menu4CScrollToKind(menu->entries, 0xFF);
            menu->flags |= 0x40000000;
            menu->scrolled = 1;
        }
        break;
    case 6:
    case 7:
        if (menu->flags & 0x10000000)
            contentMenuRebuildGroup(menu, menu->selected, 4);
        else
            contentMenuRebuildGroup(menu, menu->selected, 3);
        menu->state = 4;
        menu->subState = 0;
        moveCameraCtrlSnapToNode(menu->sound, 0, 0xFFFFFFFF);
        break;
    }
}

} /* extern "C" */
