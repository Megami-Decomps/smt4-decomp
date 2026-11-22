/* NON_MATCHING: native constructors, as IV's twin FUN_003f20b0; armcc stores the heap's vtable pointer one slot before
 * retail does (before the word at +0x18). */
#include "classes/Obj5583d0.h"
#include "nn/os/MappedMemoryBlock.h"

Obj5583d0 g_nnExpHeap;
MappedMemoryBlock g_nnMappedMemoryBlock;
