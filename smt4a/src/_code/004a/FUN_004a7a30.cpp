#include "classes/Obj55c920.h"

/* Both view states must be set before this operation is ready. */
extern "C" s32 FUN_004a7a30(const Obj55c920 *view)
{
    if (view->unk854 == 0) {
        return 0;
    }
    return view->unk858 != 0;
}
