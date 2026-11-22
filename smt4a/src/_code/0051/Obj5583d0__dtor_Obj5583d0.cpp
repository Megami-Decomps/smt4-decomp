#include "shard/Shard0051.h"

extern "C" {

extern u8 DAT_00558378;
extern void nn_fnd_ExpHeapBase_Finalize(u32 *heap);
extern u32 *FUN_001af814(u32 *heap);

/* Obj5583d0::~Obj5583d0() (slot 0 of _ZTV9Obj5583d0), in C form as IV's _ZN9Obj420eecD1Ev: restores the heap base's
 * vtable, finalizes the heap and runs the heap interface's destructor. A native empty destructor tail-calls
 * nn::fnd::ExpHeapBase's out-of-line destructor instead of inlining it. */
void _ZN9Obj5583d0D1Ev(u32 *heap)
{
    *heap = (u32)&DAT_00558378;
    nn_fnd_ExpHeapBase_Finalize(heap);
    FUN_001af814(heap);
}

} /* extern "C" */
