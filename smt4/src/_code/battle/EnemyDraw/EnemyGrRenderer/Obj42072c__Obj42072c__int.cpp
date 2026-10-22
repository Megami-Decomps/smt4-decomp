/* NON_MATCHING: retail stores the three tail fields with a writeback (`str r6, [r5, #1936]!`) and rederives `this` from r5; here they are plain offsets from r5 and `this` is r5 - 16. */
#include "classes/Obj42072c.h"
#include "AsdSDK/AsdDebug.h"

extern "C" void *asdMemoryAllocAligned(int heap, int align, int fill, u32 size, int alignment, int flags);

/* Sets up the (empty) state and allocates the per-enemy buffers from the extra heap. */
Obj42072c::Obj42072c(s32 count)
    : count(count)
{
    tail.clear();
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\EnemyDraw\\EnemyGrRenderer.cpp", 11);
    buffer08 = asdMemoryAllocAligned(0x10000, 0x100, 0, this->count * 0x90, 0x80, 1);
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\battle\\EnemyDraw\\EnemyGrRenderer.cpp", 12);
    buffer0C = asdMemoryAllocAligned(0x10000, 0x100, 0, this->count * 0xC, 0x80, 1);
}
