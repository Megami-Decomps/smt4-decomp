/* NON_MATCHING: writeback addressing of the self-relative accessor now matches (RelativePointer::get() called directly on the field); retail does not share the two loads of the allocation and keeps zero in r7, the build merges them. */
#include "Model/ModelResource.h"

extern "C" void FUN_001108e4(void** storage)
{
    AsdAllocatorObject* allocator = ((ModelFileAllocation*)((ModelFileHeader*)*storage)->allocation.get())->allocator;
    ModelFileAllocation* allocation = (ModelFileAllocation*)((ModelFileHeader*)*storage)->allocation.get();
    if (allocation != NULL) {
        void* data = allocation->data.get();
        if (data != NULL) {
            allocator->release(data);
        }
        allocator->release(allocation);
    }
    allocator->release(*storage);
    *storage = NULL;
}
