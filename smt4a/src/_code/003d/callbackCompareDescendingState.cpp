#include "shard/Shard0042.h"

/* Order callback entries by their state value. */
extern "C" s32 callbackCompareDescendingState(const CallbackState *left, const CallbackState *right)
{
    return right->state - left->state;
}
