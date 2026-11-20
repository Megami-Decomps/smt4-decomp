/* NON_MATCHING: the data release now matches (the accessor read again for the call); retail reloads *storage and recomputes the allocation for its second read (the build reuses the first, so the owner and allocator take other registers). */
#include "Model/ModelResource.h"

extern "C" void modelFileRelease(void** storage)
{
    AsdAllocatorObject* allocator = ((ModelFileHeader*)*storage)->getAllocation()->allocator;
    ModelFileAllocation* allocation = ((ModelFileHeader*)*storage)->getAllocation();
    if (allocation != NULL) {
        if (allocation->data.get() != NULL) {
            allocator->release(allocation->data.get());
        }
        allocator->release(allocation);
    }
    allocator->release(*storage);
    *storage = NULL;
}
