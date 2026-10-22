/* NON_MATCHING: Native self-relative accessors differ in writeback addressing and saved-register allocation. */
#include "Model/ModelResource.h"

extern "C" void FUN_00451550(void** storage)
{
    AsdAllocatorObject* allocator = ((ModelFileHeader*)*storage)->getAllocation()->allocator;
    ModelFileAllocation* allocation = ((ModelFileHeader*)*storage)->getAllocation();
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
