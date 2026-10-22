#include "classes/Obj55c920.h"

/* Both view states must be set before this operation is ready. */
extern "C" s32 _ZNK9Obj55c92013isScreenReadyEv(const Obj55c920 *view)
{
    if (view->unk854 == 0) {
        return 0;
    }
    return view->unk858 != 0;
}
