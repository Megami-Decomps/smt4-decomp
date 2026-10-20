/* NON_MATCHING: only the order of `add r0, r0, #8` and `mov r3, #312` (the tail call's argument setup) differs */
/* Tail call into the function that follows (nw::snd::internal::PoolImpl::CreateImpl for the pool at +8, with the element size). */
#include "common.h"

extern "C" {

void nw_snd_internal_PoolImpl_CreateImpl(void *pool, void *a, void *b, u32 size);

struct PoolFUN_001a6458 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 pool[1];
};

void FUN_001a6458(PoolFUN_001a6458 *owner, void *a, void *b)
{
    nw_snd_internal_PoolImpl_CreateImpl(owner->pool, a, b, 312);
}

}
