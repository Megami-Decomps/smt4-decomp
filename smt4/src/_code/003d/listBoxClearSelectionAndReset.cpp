#include "common.h"

struct ListBoxState {
    /* 0x0000 */ u8 unk00[0x3048];
    /* 0x3048 */ s32 selection;
};

extern "C" {

void FUN_0022708c(ListBoxState *list);

/* Clears the selection and releases the list box's active resources. */
void listBoxClearSelectionAndReset(ListBoxState *list)
{
    list->selection = 0;
    FUN_0022708c(list);
}

}
