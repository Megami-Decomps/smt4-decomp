/* NON_MATCHING: sentinel-link and zero-state store scheduling differs. */
#include "gfx/MaskWork.h"

// Start both intrusive lists empty and leave the mask's buffer/state unallocated.
MaskWorkBody::MaskWorkBody()
{
    output.allocator = NULL;
    output.previous = reinterpret_cast<MaskWorkNode *>(&output);
    pending.allocator = NULL;
    pending.previous = reinterpret_cast<MaskWorkNode *>(&pending);
    output.next = reinterpret_cast<MaskWorkNode *>(&output);
    storage = NULL;
    pending.next = reinterpret_cast<MaskWorkNode *>(&pending);
    baseline = NULL;
    byteCount = 0;
    active = 0;
}
