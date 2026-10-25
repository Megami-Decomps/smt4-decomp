/* NON_MATCHING: retail spills the script-table local (not the script) in the entry loop, keeps the s16 x/y in r2/r3 across FUN_004b9ff4 (needs multifile FUN_004b9ff4), and the tail pair stores differ (stm vs vstm/strd) */
#include "map/mapDepart.h"

/* A row of data table 33 (type 0): which group of list entries a menu type shows. */
struct ResultMenuType {
    /* 0x00 */ s8 id;
    /* 0x01 */ s8 group;
    /* 0x02 */ u8 unk02[0x86];
};

/* A row of the group's list (data table 33 group entries, or the AOC content files). */
struct ResultListEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 uniqueId;      /* entries sharing a nonzero id are listed once */
    /* 0x21 */ u8 unk21[0xb];
    /* 0x2c */ char scriptName[0x10]; /* condition script, "0" for none */
    /* 0x3c */ u16 requiredFlag;
    /* 0x3e */ u16 forbiddenFlag;
    /* 0x40 */ u8 unk40[0x90];
};

/* A row of the scrolling list menu: its on-screen position. */
struct ListMenuEntry {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ s16 x;
    /* 0x24 */ s16 y;
};

struct ResultMenu {
    /* 0x0000 */ u8 unk0000[0x20];
    /* 0x0020 */ u32 flags;
    /* 0x0024 */ u8 unk0024[0x1c];
    /* 0x0040 */ s16 startKind;
    /* 0x0042 */ u8 unk0042[0x16];
    /* 0x0058 */ f32 scroll[2];
    /* 0x0060 */ f32 scrollTarget[2];
    /* 0x0068 */ f32 focusTarget[2];
    /* 0x0070 */ f32 viewOrigin[2];
    /* 0x0078 */ f32 viewOriginCopy[2];
    /* 0x0080 */ f32 focus[2];
    /* 0x0088 */ u32 unk88;
    /* 0x008c */ u32 unk8c;
    /* 0x0090 */ u8 unk0090[0xc];
    /* 0x009c */ u8 list[0x107c]; /* embedded scrolling list menu */
    /* 0x1118 */ ResultMenuType *type;
    /* 0x111c */ u32 unk111c;
    /* 0x1120 */ s32 group;
    /* 0x1124 */ u8 unk1124[0x20];
    /* 0x1144 */ u32 scriptTable;
    /* 0x1148 */ u32 unk1148;
    /* 0x114c */ void *script;
};

typedef char ResultMenuLayoutCheck[offsetof(ResultMenu, list) == 0x9c && offsetof(ResultMenu, type) == 0x1118 &&
    offsetof(ResultMenu, group) == 0x1120 && offsetof(ResultMenu, scriptTable) == 0x1144 &&
    offsetof(ResultMenu, script) == 0x114c ? 1 : -1];

extern "C" {

ResultMenuType *dataTable33Type0GetEntry(u8 *table, u32 index);
s32 dataTable33Type0Count(u8 *table);
ResultListEntry *dataTable33GetEntryByGroup(u8 *table, u32 group, u32 index);
s32 dataTable33GroupCount(u8 *table, u32 group);
s32 textFormatBuffer(char *output, const char *format, ...);
s32 FUN_001b4a74(void *list);
s32 scrScriptProcessStartEntry(void *script, u32 entry);
s32 scrRunOpcodesStub(void *script);
void sysMemClear(char *buffer, s32 size);
u32 tableGroupFindEntryIndex(u32 table, char *name);
s32 gameFlagIsSet(u32 id);
s32 resultGetListEntryLabel(void *list, ResultListEntry *entry, s32 type);
s32 FUN_0046eb24(void *aocSystem, s32 kind);
ResultListEntry *contentEntryGetFromFilesByKind(void *aocSystem, s32 kind, s32 index);
s32 FUN_004b75d0(ResultMenu *menu);
void FUN_004b9ff4(ResultMenu *menu, f32 *offset);
s32 gameStateIsFlagSetAndLarge(void);
s32 menu4CScrollToKind(void *list, s32 kind);
ListMenuEntry *menu4CGetCurrentEntry(void *list);
void menu4CReset(void *list);
s32 widgetShow(void *list);

extern char DAT_005328fc[];
extern s32 DAT_0058800c;
extern void *g_aocSystem;
extern GameStateA g_gameState;

/* Fill the result menu's list for menu type `type` (group `group`, or the type's own when -1), then
   scroll it to the starting entry. */
void FUN_004b6bc4(ResultMenu *menu, s32 type, s32 group)
{
    u8 table[20];
    char listed[256];
    char scriptArg[32];
    ResultMenuType *types = dataTable33Type0GetEntry(table, 0);
    s32 typeCount = dataTable33Type0Count(table);
    ResultListEntry *entries;
    s32 count;
    s32 i;
    s32 kind;
    ListMenuEntry *current;
    s32 x;
    s32 y;

    menu->type = NULL;
    for (i = 0; i < typeCount; i++) {
        if (types[i].id == type) {
            menu->type = &types[i];
            break;
        }
    }
    FUN_001b4a74(menu->list);
    menu->group = group != -1 ? group : menu->type->group;

    entries = dataTable33GetEntryByGroup(table, menu->group, 0);
    count = dataTable33GroupCount(table, menu->group);
    sysMemClear(listed, 0x100);
    for (i = 0; i < count; i++) {
        ResultListEntry *entry = &entries[i];

        if (entry->uniqueId == 0 || listed[entry->uniqueId] == 0) {
            u32 scriptTable = menu->scriptTable;
            void *script = menu->script;

            if (entry->scriptName[0] != '0') {
                DAT_0058800c = 0;
                textFormatBuffer(scriptArg, DAT_005328fc, entry->scriptName);
                scrScriptProcessStartEntry(script, tableGroupFindEntryIndex(scriptTable, scriptArg));
                while (scrRunOpcodesStub(script) != 2) {
                }
                if (DAT_0058800c != 0) {
                    continue;
                }
            }
            if ((entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag) != 0) &&
                (entry->forbiddenFlag == 0 || gameFlagIsSet(entry->forbiddenFlag) == 0)) {
                listed[entry->uniqueId] = 1;
                resultGetListEntryLabel(menu->list, entry, type);
            }
        }
    }

    count = FUN_0046eb24(g_aocSystem, menu->group + 1);
    for (i = 0; i < count; i++) {
        ResultListEntry *entry = contentEntryGetFromFilesByKind(g_aocSystem, menu->group + 1, i);

        if (entry->uniqueId == 0 || listed[entry->uniqueId] == 0) {
            void *script = menu->script;
            u32 scriptTable = menu->scriptTable;

            if (entry->scriptName[0] != '0') {
                DAT_0058800c = 0;
                textFormatBuffer(scriptArg, DAT_005328fc, entry->scriptName);
                scrScriptProcessStartEntry(script, tableGroupFindEntryIndex(scriptTable, scriptArg));
                while (scrRunOpcodesStub(script) != 2) {
                }
                if (DAT_0058800c != 0) {
                    continue;
                }
            }
            if ((entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag) != 0) &&
                (entry->forbiddenFlag == 0 || gameFlagIsSet(entry->forbiddenFlag) == 0)) {
                listed[entry->uniqueId] = 1;
                resultGetListEntryLabel(menu->list, entry, type);
            }
        }
    }
    widgetShow(menu->list);

    kind = -1;
    if (gameStateIsFlagSetAndLarge() != 0) {
        kind = g_gameState.sourceArea;
    }
    if (menu->startKind != 0) {
        kind = menu->startKind;
    }
    if (kind != -1) {
        menu4CScrollToKind(menu->list, kind);
    }

    current = menu4CGetCurrentEntry(menu->list);
    x = current->x;
    y = current->y;
    menu->flags |= 0x1000;
    menu->scrollTarget[0] = menu->scroll[0];
    menu->scrollTarget[1] = menu->scroll[1];
    menu->focusTarget[0] = x - 200.0f;
    menu->focusTarget[1] = y - 120.0f;
    FUN_004b9ff4(menu, menu->scrollTarget);
    FUN_004b9ff4(menu, menu->focusTarget);
    menu->viewOriginCopy[0] = menu->viewOrigin[0];
    menu->viewOriginCopy[1] = menu->viewOrigin[1];
    menu->focus[0] = x;
    menu->focus[1] = y;
    menu->unk88 = 0;
    menu->unk8c = 1;
    FUN_004b75d0(menu);
    menu4CReset(menu->list);
}

} /* extern "C" */
