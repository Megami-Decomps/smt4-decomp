#include <stddef.h>
#include "classes/Obj55ca08.h"

struct BibleViewDestructionState {
    /* 0x000 */ const void *vtable;
    /* 0x004 */ u8 unk004[0x814];
    /* 0x818 */ Obj55ca08 touchSelection;
};
extern "C" {
extern const u32 _ZTV9Obj55c920[];
Obj55ca08 *_ZN9Obj55ca08D1Ev(Obj55ca08 *object);
void asdOperatorDelete(void *object);
}

/* Restore the base view and destroy its touch-selection member before freeing. */
extern "C" void bibleViewDelete(BibleViewDestructionState *view)
{
    view->vtable = _ZTV9Obj55c920 + 2;
    Obj55ca08 *member = _ZN9Obj55ca08D1Ev(&view->touchSelection);
    asdOperatorDelete(reinterpret_cast<u8 *>(member) -
                      offsetof(BibleViewDestructionState, touchSelection));
}
