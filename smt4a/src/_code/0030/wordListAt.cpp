#include "common.h"

extern "C" {

typedef struct WordList {
    /* 0x0 */ u32 *items;
} WordList;

extern u32 vectorCount4_0030c8ce(WordList *list);
extern void _ZN4__rw10__rw_throwEiz(int kind, ...);

/* Returns word `index` of the list; an index past the count is reported through _ZN4__rw10__rw_throwEiz first. */
u32 *wordListAt(WordList *list, u32 index)
{
    if (vectorCount4_0030c8ce(list) <= index) {
        _ZN4__rw10__rw_throwEiz(9, "", "", index, vectorCount4_0030c8ce(list));
    }
    return &list->items[index];
}

}
