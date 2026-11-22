/* NON_MATCHING: 268 lines. listGetEntryCount is a getter armlink inlined (retail's lone `ldr r0, [r0, #1324]`, inlined.txt). Retail keeps all three scan results live (r9/r8/fp, the type 3 and type 2 ones never read afterwards) and so spills the script and group to the stack in each inlined availability check; armcc drops the unread two here and keeps the script in fp. */
#include "common.h"
#include "runtime/Stdio.h"

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
    /* 0x042 */ u8 cursor[0x5a];         /* handed to __ARM_common_memcpy4_6 */
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
extern const char DAT_00404e04[];        /* "%s" */
ListEntry *FUN_0022b238(void *list, s32 index);
u32 tableGroupFindEntryIndex(u32 group, const char *name);
void scrScriptProcessStartEntry(u32 script, u32 entry);
s32 scrRunOpcodesStub(u32 script);
s32 gameFlagIsSet(u32 flag);
void listScrollToId(void *list, s32 id);
s32 listGetEntryCount(const void *list);
void __ARM_common_memcpy4_6(void *cursor, u16 *vector);
void messageMainFinishWindow(void);
void contentMenuRebuildGroup(ListWindow *window, s32 selected, s32 kind);
void FUN_0022afc4(u32 animation, s32 a, s32 b);

/* Runs the entry's availability script and reports whether the entry is currently available (an entry named "0"
   has none). */
static __inline s32 entryIsAvailable(ListWindow *window, ListEntry *entry)
{
    if (entry->name[0] == '0') {
        return 0;
    }
    char name[36];
    u32 script = window->script;
    u32 group = window->scriptGroup;
    DAT_0044cfb8 = 0;
    __2sprintf(name, DAT_00404e04, entry->name);
    scrScriptProcessStartEntry(script, tableGroupFindEntryIndex(group, name));
    while (scrRunOpcodesStub(script) != 2) {
    }
    return DAT_0044cfb8 == 0 && (entry->requiredFlag == 0 || gameFlagIsSet(entry->requiredFlag) != 0) &&
           (entry->forbiddenFlag == 0 || gameFlagIsSet(entry->forbiddenFlag) == 0);
}

/* Checks which kinds of entries are currently available (one scan for type 3 and 4 rows, one for type 2 rows; only
   the type 4 result gates the window) and then updates the window for its state: open, close or show the
   selection. */
void FUN_003b9c00(ListWindow *window)
{
    s32 noType3 = 1;
    s32 noType4 = 1;
    s32 noType2 = 1;
    s32 count = listGetEntryCount(window->list);
    for (s32 i = 0; i < count; i++) {
        ListEntry *entry = FUN_0022b238(window->list, i);
        if (entry->type == 3 && entryIsAvailable(window, entry)) {
            noType3 = 0;
            break;
        }
        if (entry->type == 4 && entryIsAvailable(window, entry)) {
            noType4 = 0;
            break;
        }
    }
    for (s32 i = 0; i < count; i++) {
        ListEntry *entry = FUN_0022b238(window->list, i);
        if (entry->type == 2 && entryIsAvailable(window, entry)) {
            noType2 = 0;
            break;
        }
    }
    u16 vector[3] = { 0, 0, 0 };
    switch (window->state) {
    case 0:
        if (noType4 != 0 && gameFlagIsSet(0x15) != 0) {
            vector[0] = 4;
            listScrollToId(window->list, 0xff);
            __ARM_common_memcpy4_6(window->cursor, vector);
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
        if (noType4 == 0) {
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
            contentMenuRebuildGroup(window, window->selected, 4);
        } else {
            contentMenuRebuildGroup(window, window->selected, 3);
        }
        window->counter = 0;
        window->mode = 4;
        FUN_0022afc4(window->animation, 0, -1);
        return;
    }
}

} /* extern "C" */
