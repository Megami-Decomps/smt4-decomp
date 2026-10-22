#include "common.h"

extern "C" {

/* A battle help window, kept in the doubly linked g_btlHelp list. */
typedef struct BtlHelpWindow {
    /* 0x000 */ u16 unk000;
    /* 0x002 */ u16 state;
    /* 0x004 */ u16 unk004;
    /* 0x006 */ u16 flags;
    /* 0x008 */ u8 unk008[0x86A];
    /* 0x872 */ s16 dialogId;   /* negative when the window owns no dialog */
    /* 0x874 */ struct BtlHelpWindow *next;
    /* 0x878 */ struct BtlHelpWindow *prev;
} BtlHelpWindow;

typedef struct BtlHelpList {
    /* 0x00 */ BtlHelpWindow *head;
    /* 0x04 */ BtlHelpWindow *tail;
    /* 0x08 */ s32 count;
} BtlHelpList;

extern BtlHelpList *g_btlHelp;

s32 infoWinHasValue(void);
void dialogClose(s32 immediate);
void asdMemFree(void *ptr);

/* Unlinks `window` from `list` and frees it. */
static void btlHelpRemove(BtlHelpList *list, BtlHelpWindow *window)
{
    if (window->prev == NULL) {
        list->head = window->next;
    } else {
        window->prev->next = window->next;
    }
    if (window->next == NULL) {
        list->tail = window->prev;
    } else {
        window->next->prev = window->prev;
    }
    list->count--;
    asdMemFree(window);
}

/* Frees every battle help window, closing the dialog an open one still shows. */
void btlHelpFreeAll(void)
{
    BtlHelpWindow *window = g_btlHelp->head;

    while (window != NULL) {
        BtlHelpWindow *next = window->next;

        if (window->dialogId >= 0 && window->state == 1 && !(window->flags & 1)
            && infoWinHasValue()) {
            dialogClose(1);
        }
        btlHelpRemove(g_btlHelp, window);
        window = next;
    }
}

} /* extern "C" */
