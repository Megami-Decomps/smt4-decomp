#include "common.h"

extern "C" {

typedef struct WordList {
    /* 0x0 */ u32 *items;
} WordList;

extern u32 vectorCount4_0030c8ce(WordList *list);
extern void FUN_002e32a4(s32 kind, const char *a, const char *b, u32 index, u32 count);

/* Returns word `index` of the list; an index past the count is reported through FUN_002e32a4 first. */
u32 *wordListAt(WordList *list, u32 index)
{
    if (vectorCount4_0030c8ce(list) <= index) {
        FUN_002e32a4(9, "", "", index, vectorCount4_0030c8ce(list));
    }
    return &list->items[index];
}

}
