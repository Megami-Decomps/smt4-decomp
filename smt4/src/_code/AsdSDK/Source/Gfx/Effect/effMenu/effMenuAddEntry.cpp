#include "AsdSDK/AsdDebug.h"

/* One effect-menu entry, kept in a doubly linked list. */
struct EffMenuEntry {
    /* 0x00 */ u32 first;
    /* 0x04 */ u32 second;
    /* 0x08 */ f32 value;
    /* 0x0C */ char name[0x30];
    /* 0x3C */ EffMenuEntry *prev;
    /* 0x40 */ EffMenuEntry *next;
};

struct EffMenu {
    /* 0x00 */ s32 count;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ EffMenuEntry *head;
};

extern "C" {

void *memAlloc(s32 heap, s32 alignment, s32 region, s32 size, s32 pageSize, s32 flags);
char *libc_strcpy(char *dst, const char *src);

/* Allocates a named entry and appends it to the end of the menu's list. Retail takes `value` on
 * the stack (software floating-point linkage), hence __softfp. */
__softfp void effMenuAddEntry(EffMenu *menu, const char *name, u32 first, u32 second, f32 value)
{
    EffMenuEntry *entry;
    EffMenuEntry *last;

    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Effect\\effMenu.cpp", 2736);
    entry = (EffMenuEntry *)memAlloc(0x10000, 0x100, 0, sizeof(EffMenuEntry), 0x10, 1);
    entry->first = first;
    entry->second = second;
    entry->value = value;
    libc_strcpy(entry->name, name);
    if (menu->head == NULL) {
        menu->head = entry;
        entry->prev = NULL;
        entry->next = NULL;
    } else {
        last = menu->head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = entry;
        entry->prev = last;
        entry->next = NULL;
    }
    menu->count++;
}

} /* extern "C" */
