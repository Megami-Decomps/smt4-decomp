/* NON_MATCHING: retail inlines the availability check three times with separate stack buffers, keeps the script and group in stack slots and holds the three scan results in r8/r9/fp; this version shares one helper, so register allocation and frame size differ. The scan logic and calls are the same. */
#include "common.h"

namespace {
/* A row of the list window (the entry type, its script name and the two flags gating it). */
struct ListEntry {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ char name[0x10];          /* script name; "0" means none */
    /* 0x3c */ u16 requiredFlag;         /* must be set, when non-zero */
    /* 0x3e */ u16 forbiddenFlag;        /* must not be set, when non-zero */
    /* 0x40 */ u8 unk40[0x14];
    /* 0x54 */ u16 type;                 /* 2, 3, 4: which scan the row belongs to */
};

/* The list window's state block (only the fields this check reads and writes). */
struct ListWindow {
    /* 0x000 */ u8 unk000[0x20];
    /* 0x020 */ u32 flags;               /* 0x10, 0x40, 0x40000000, 0x10000000: window state bits */
    /* 0x024 */ u8 unk024[4];
    /* 0x028 */ u32 mode;
    /* 0x02c */ u32 counter;
    /* 0x030 */ u8 unk030[0xc];
    /* 0x03c */ s16 selected;
    /* 0x03e */ u8 unk03e[4];
    /* 0x042 */ u8 cursor[0x5a];         /* handed to FUN_002bd808 */
    /* 0x09c */ u8 list[0x52c];
    /* 0x5c8 */ s32 entryCount;
    /* 0x5cc */ u8 unk5cc[0x102];
    /* 0x6ce */ u8 closeRequested;
    /* 0x6cf */ u8 unk6cf[0x695];
    /* 0xd64 */ u32 state;
    /* 0xd68 */ u8 unkd68[0x20];
    /* 0xd88 */ u32 scriptGroup;
    /* 0xd8c */ u8 unkd8c[4];
    /* 0xd90 */ u32 script;
    /* 0xd94 */ u8 unkd94[0xc8];
    /* 0xe5c */ u32 animation;
};
}

extern "C" {
extern s32 DAT_0044cfb8;                 /* set by the script when it rejects the entry */
ListEntry *FUN_0022b238(void *list, s32 index);
void textFormatBuffer(char *buffer, const char *format, ...);
u32 tableGroupFindEntryIndex(u32 group, const char *name);
void scrScriptProcessStartEntry(u32 script, u32 entry);
s32 scrRunOpcodesStub(u32 script);
s32 gameFlagIsSet(u32 flag);
void listScrollToId(void *list, s32 id);
void FUN_002bd808(void *cursor, u16 *vector);
void messageMainFinishWindow(void);
void FUN_0022b29c(ListWindow *window, s32 selected, s32 kind);
void FUN_0022afc4(u32 animation, s32 a, s32 b);

/* Runs the entry's availability script and reports whether the entry is currently available. */
static s32 entryIsAvailable(ListWindow *window, ListEntry *entry)
{
    char name[36];
    u32 script = window->script;
    u32 group = window->scriptGroup;
    DAT_0044cfb8 = 0;
    textFormatBuffer(name, "%s", entry->name);
    scrScriptProcessStartEntry(script, tableGroupFindEntryIndex(group, name));
    while (scrRunOpcodesStub(script) != 2) {
    }
    return DAT_0044cfb8 == 0 && (entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag) != 0) &&
           (entry->forbiddenFlag == 0 || gameFlagIsSet(entry->forbiddenFlag) == 0);
}

/* Checks which kinds of entries are currently available (type 4 rows gate the window, type 3 and 2 rows
   only run their scripts) and then updates the window for its state: open, close or show the selection. */
void FUN_003b9c00(ListWindow *window)
{
    s32 noPassingEntry = 1;
    s32 count = window->entryCount;
    for (s32 i = 0; i < count; i++) {
        ListEntry *entry = FUN_0022b238(window->list, i);
        if (entry->type == 3 && entry->name[0] != '0' && entryIsAvailable(window, entry)) {
            break;
        }
        if (entry->type == 4 && entry->name[0] != '0' && entryIsAvailable(window, entry)) {
            noPassingEntry = 0;
            break;
        }
    }
    for (s32 i = 0; i < count; i++) {
        ListEntry *entry = FUN_0022b238(window->list, i);
        if (entry->type == 2 && entry->name[0] != '0' && entryIsAvailable(window, entry)) {
            break;
        }
    }
    u16 vector[3] = { 0, 0, 0 };
    switch (window->state) {
    case 0:
        if (noPassingEntry != 0 && gameFlagIsSet(0x15) != 0) {
            vector[0] = 4;
            listScrollToId(window->list, 0xff);
            FUN_002bd808(window->cursor, vector);
            u32 flags = window->flags | 0x10;
            window->flags = flags;
            if ((flags & 0x40) != 0) {
                window->flags = flags & ~0x40u;
                messageMainFinishWindow();
                return;
            }
        }
        break;
    case 5:
        if (noPassingEntry == 0) {
            return;
        }
        /* fall through */
    case 1:
    case 2:
        listScrollToId(window->list, 0xff);
        window->flags = window->flags | 0x40000000;
        window->closeRequested = 1;
        break;
    case 6:
    case 7:
        if ((window->flags & 0x10000000) != 0) {
            FUN_0022b29c(window, window->selected, 4);
        } else {
            FUN_0022b29c(window, window->selected, 3);
        }
        window->counter = 0;
        window->mode = 4;
        FUN_0022afc4(window->animation, 0, -1);
        return;
    }
}

} /* extern "C" */
