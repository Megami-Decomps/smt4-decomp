#include "common.h"

extern "C" {

typedef struct ListBoxView {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ int refreshCount;
} ListBoxView;

void asdListBoxViewRefresh(ListBoxView *view)
{
    view->refreshCount = view->refreshCount + 1;
}

} /* extern "C" */
