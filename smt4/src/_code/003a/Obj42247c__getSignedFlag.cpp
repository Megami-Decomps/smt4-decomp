#include "classes/Obj42247c.h"

/* The selection view is ready only when both state words are set. */
extern "C" s32 _ZNK9Obj42247c13getSignedFlagEv(const Obj42247c *view)
{
    if (view->unk598 == 0) {
        return 0;
    }
    return view->unk59c != 0;
}
