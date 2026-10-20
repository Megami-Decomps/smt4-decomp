/* NON_MATCHING: the handle->screen load is scheduled before the two constants (mov r2, #1; mvn r1, #0); retail loads it after them. */
#include "common.h"

extern "C" {

struct View;

/* Virtual table of a screen view: slot 1 destroys it, slot 4 closes it. */
typedef struct ViewVtbl {
    /* 0x00 */ void *unk00;
    /* 0x04 */ void (*destroy)(struct View *view);
    /* 0x08 */ void *unk08[2];
    /* 0x10 */ void (*close)(struct View *view);
} ViewVtbl;

typedef struct View {
    /* 0x0 */ ViewVtbl *vtbl;
} View;

typedef struct JyoucyuScreen {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 closing;
    /* 0x0D */ u8 unk0d[0xB];
    /* 0x18 */ View *view;
} JyoucyuScreen;

typedef struct JyoucyuHandle {
    /* 0x0 */ JyoucyuScreen *screen;
    /* 0x4 */ s32 state;
} JyoucyuHandle;

extern int jyoucyuGetTableEntry(int index);

/* Closes the screen: flags it as closing, closes and destroys its view, then resets the table entry. */
void FUN_002c9d98(JyoucyuHandle *handle)
{
    JyoucyuScreen *screen = handle->screen;

    screen->closing = 1;
    handle->state = -1;
    if (screen->view != NULL) {
        screen->view->vtbl->close(screen->view);
        if (screen->view != NULL) {
            screen->view->vtbl->destroy(screen->view);
        }
        screen->view = NULL;
    }
    jyoucyuGetTableEntry(0);
}

}
