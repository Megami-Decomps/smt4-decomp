#include "common.h"
#include <stddef.h>
extern "C" void __aeabi_memset4(void *memory, u32 size, s32 byte);

// Remove an existing choice from the order before inserting it at the active slot.
extern "C" void FUN_003c3f8c(void *context, s32 choice, s32 insert)
{
    struct SelectionOrder { s32 choices[8]; };
    // These arrays overlap the shared fusion work's opaque selection region.
    struct SelectionState {
        s32 slot;
        u8 unk04[8];
        union {
            s32 insertionOrder[9];
            struct {
                s32 precedingChoice;
                SelectionOrder order;
            } ordered;
        };
    };
    struct SelectionOrderView {
        u8 unk0000[0x8b60];
        s16 selected[398]; // 0x8b60
        SelectionState selection; // 0x8e7c
    };
    typedef char LayoutCheck[offsetof(SelectionOrderView, selection) == 0x8e7c &&
        offsetof(SelectionState, ordered.order) == 0x10 ? 1 : -1];
    SelectionOrderView *view = static_cast<SelectionOrderView *>(context);
    s32 *slot = &view->selection.slot;
    if (view->selected[choice] == 0 && insert) {
        view->selection.ordered.order.choices[*slot] = choice;
    } else {
        SelectionOrder previous = view->selection.ordered.order;
        __aeabi_memset4(&view->selection.ordered.order, sizeof(previous), -1);
        u32 count = 0;
        for (s32 index = 0; index < 8; ++index) {
            if (previous.choices[index] != choice)
                view->selection.ordered.order.choices[count++] = previous.choices[index];
        }
        if (insert)
            view->selection.insertionOrder[*slot] = choice;
    }
}
