#include "common.h"

extern "C" {

typedef struct ListCursor {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[0xD];
    /* 0x0E */ u8 page;
    /* 0x0F */ u8 unk0F;
    /* 0x10 */ u8 list[1];
} ListCursor;

s32 resourceRunOperationIfUnblocked(void *list);
s32 resourceRunEmbeddedOperationIfUnblocked(void *list);
s32 flaggedEntryGetValueA(void *list);
s32 flaggedEntryGetValueB(void *list);
void FUN_002a48e0(void *list, s32 top);
void recordTrackDirtyValue(void *list, s32 top);
void flaggedEntrySetValueA(void *list, s32 position);
void flaggedEntrySetValueB(void *list, s32 position);

static s32 listCursorGetTop(ListCursor *cursor)
{
    if (cursor->kind == 1) {
        return resourceRunEmbeddedOperationIfUnblocked(cursor->list);
    }
    return resourceRunOperationIfUnblocked(cursor->list);
}

static s32 listCursorGetPosition(ListCursor *cursor)
{
    if (cursor->kind == 1) {
        return flaggedEntryGetValueB(cursor->list);
    }
    return flaggedEntryGetValueA(cursor->list);
}

static void listCursorSet(ListCursor *cursor, s32 top, s32 position)
{
    if (cursor->kind == 0) {
        FUN_002a48e0(cursor->list, top);
        flaggedEntrySetValueA(cursor->list, position);
    }
    if (cursor->kind == 1) {
        recordTrackDirtyValue(cursor->list, top);
        flaggedEntrySetValueB(cursor->list, position);
    }
}

/* Switch the cursor to another page, keeping its scroll top and position. */
void listCursorSetPage(ListCursor *cursor, u8 page)
{
    cursor->page = page;
    listCursorSet(cursor, listCursorGetTop(cursor), listCursorGetPosition(cursor));
}

} /* extern "C" */
