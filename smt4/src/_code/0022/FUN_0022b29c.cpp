/* NON_MATCHING: retail inlines the entry check twice (once per source) sharing one stack buffer for the script name and the iteration state (frame 300 vs 340 here) and orders the header-search/state selection blocks differently; the calls and stores are the same. */
#include "common.h"

namespace {
/* A selectable entry (0xd0 bytes): the bucket it belongs to, its availability script and the flags gating it. */
struct MenuEntry {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 bucket;                /* only one entry of a non-zero bucket is listed */
    /* 0x21 */ u8 unk21[0xb];
    /* 0x2c */ char name[0x10];          /* script name; "0" means none */
    /* 0x3c */ u16 requiredFlag;         /* must be set, when non-zero */
    /* 0x3e */ u16 forbiddenFlag;        /* must not be set, when non-zero */
    /* 0x40 */ u8 unk40[0x90];
};

/* A row of the first table (0x88 bytes): its id and the group it opens. */
struct GroupHeader {
    /* 0x00 */ s8 id;
    /* 0x01 */ s8 group;
    /* 0x02 */ u8 unk02[0x86];
};

/* An iteration state the table getters fill in. */
struct TableView {
    u8 data[44];
};

/* The selected row of the list: its position. */
struct ListRow {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ s16 x;
    /* 0x24 */ s16 y;
};

/* The menu window's state block. */
struct MenuWindow {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u32 flags;
    /* 0x024 */ u8 unk024[0x1c];
    /* 0x040 */ s16 forcedId;            /* list id to scroll to, when non-zero */
    /* 0x042 */ u8 unk042[0x16];
    /* 0x058 */ f32 originX;
    /* 0x05c */ f32 originY;
    /* 0x060 */ f32 viewX;
    /* 0x064 */ f32 viewY;
    /* 0x068 */ f32 cornerX;
    /* 0x06c */ f32 cornerY;
    /* 0x070 */ f32 sizeX;
    /* 0x074 */ f32 sizeY;
    /* 0x078 */ f32 sizeCopyX;
    /* 0x07c */ f32 sizeCopyY;
    /* 0x080 */ f32 targetX;
    /* 0x084 */ f32 targetY;
    /* 0x088 */ u32 unk088;
    /* 0x08c */ u32 unk08c;
    /* 0x090 */ u8 unk090[0xc];
    /* 0x09c */ u8 list[0xcc0];
    /* 0xd5c */ GroupHeader *header;
    /* 0xd60 */ u8 unkd60[4];
    /* 0xd64 */ s32 state;
    /* 0xd68 */ u8 unkd68[0x20];
    /* 0xd88 */ u32 scriptGroup;
    /* 0xd8c */ u8 unkd8c[4];
    /* 0xd90 */ u32 script;
};
}

extern "C" {
extern s32 DAT_0044cfb8;                 /* set by the script when it rejects the entry */
extern s32 g_aocSystem;
extern u8 g_gameState;
GroupHeader *dataTable33Sub0GetRecord(TableView *view, u32 index);
s32 dataTable33Sub0GetCount(TableView *view);
MenuEntry *dataTable33GroupGetRecord(TableView *view, u32 group, u32 index);
s32 dataTable33GroupGetCount(TableView *view, u32 group);
void entryListReset(void *list);
void entryListAppend(void *list, MenuEntry *entry);
void memClear(void *data, u32 size);
void textFormatBuffer(char *buffer, const char *format, ...);
u32 tableGroupFindEntryIndex(u32 group, const char *name);
void scrScriptProcessStartEntry(u32 script, u32 entry);
s32 scrRunOpcodesStub(u32 script);
s32 gameFlagIsSet(u32 flag);
s32 FUN_00387f88(s32 system, s32 kind);
MenuEntry *contentEntryGetFromFilesByKind(s32 system, s32 kind, s32 index);
void FUN_003bb9d4(void *list);
s32 gameStateIsFlagSetAndLarge(void);
void listScrollToId(void *list, s32 id);
ListRow *FUN_0022b8c0(void *list);
void FUN_0022b83c(MenuWindow *window, f32 *pair);
void FUN_0022b778(MenuWindow *window);
void FUN_0022b6c4(void *list);

/* Runs the entry's availability script and, when the entry passes its flags, lists it and marks its bucket. */
static void listIfAvailable(MenuWindow *window, MenuEntry *entry, char *buckets, u32 group, u32 script)
{
    char name[36];
    if (entry->bucket == 0 || buckets[entry->bucket] == '\0') {
        if (entry->name[0] != '0') {
            DAT_0044cfb8 = 0;
            textFormatBuffer(name, "%s", entry->name);
            scrScriptProcessStartEntry(script, tableGroupFindEntryIndex(group, name));
            while (scrRunOpcodesStub(script) != 2) {
            }
            if (DAT_0044cfb8 != 0) {
                return;
            }
        }
        if ((entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag) != 0) &&
            (entry->forbiddenFlag == 0 || gameFlagIsSet(entry->forbiddenFlag) == 0)) {
            buckets[entry->bucket] = 1;
            entryListAppend(window->list, entry);
        }
    }
}

/* Rebuilds the menu for row `selected` of the first table: lists the entries of the opened group (and the extra
   content entries of that kind) that pass their scripts and flags, restores the cursor and lays out the view. */
void FUN_0022b29c(MenuWindow *window, s32 selected, s32 state)
{
    TableView view;
    GroupHeader *rows = dataTable33Sub0GetRecord(&view, 0);
    s32 rowCount = dataTable33Sub0GetCount(&view);
    window->header = NULL;
    for (s32 i = 0; i < rowCount; i++) {
        if (rows[i].id == selected) {
            window->header = &rows[i];
            break;
        }
    }
    entryListReset(window->list);
    if (state != -1) {
        window->state = state;
    } else {
        window->state = window->header->group;
    }
    MenuEntry *entries = dataTable33GroupGetRecord(&view, window->state, 0);
    s32 entryCount = dataTable33GroupGetCount(&view, window->state);
    char buckets[256];
    memClear(buckets, 0x100);
    for (s32 i = 0; i < entryCount; i++) {
        listIfAvailable(window, &entries[i], buckets, window->scriptGroup, window->script);
    }
    s32 extraCount = FUN_00387f88(g_aocSystem, window->state + 1);
    for (s32 i = 0; i < extraCount; i++) {
        listIfAvailable(window, contentEntryGetFromFilesByKind(g_aocSystem, window->state + 1, i), buckets,
                        window->scriptGroup, window->script);
    }
    FUN_003bb9d4(window->list);
    s32 id = -1;
    if (gameStateIsFlagSetAndLarge() != 0) {
        id = *reinterpret_cast<s32 *>(&g_gameState + 0x300);
    }
    if (window->forcedId != 0) {
        id = window->forcedId;
    }
    if (id != -1) {
        listScrollToId(window->list, id);
    }
    ListRow *row = FUN_0022b8c0(window->list);
    s32 y = row->y;
    s32 x = row->x;
    window->flags = window->flags | 0x1000;
    window->viewX = window->originX;
    window->viewY = window->originY;
    window->cornerX = (f32)x - 200.0f;
    window->cornerY = (f32)y - 120.0f;
    FUN_0022b83c(window, &window->viewX);
    FUN_0022b83c(window, &window->cornerX);
    window->sizeCopyX = window->sizeX;
    window->sizeCopyY = window->sizeY;
    window->targetX = (f32)x;
    window->targetY = (f32)y;
    window->unk088 = 0;
    window->unk08c = 1;
    FUN_0022b778(window);
    FUN_0022b6c4(window->list);
}

} /* extern "C" */
