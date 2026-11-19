/* NON_MATCHING: the compiler combines the last cached-node/count stores and omits retail's otherwise unused callee-saved frame. */
#include "mobiclip/MoLiveTree.h"

MoLive::TreeBase::TreeBase(void (*hook)())
    : root(&nil), first(&nil), last(&nil), count(0), callback(hook)
{
}
