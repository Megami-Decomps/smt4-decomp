/* NON_MATCHING: compiler combines the vtable/kind stores and splits the remaining initializer group differently from retail. */
#include "common.h"

struct OperationAllocator;
struct AllocatedOperation {
    const void *vtable; // 0x00
    u32 kind; // 0x04
    u32 operation; // 0x08
    OperationAllocator *owner; // 0x0c
    u32 argument; // 0x10
    s32 state; // 0x14
    u8 unk18[0xc];
};
struct OperationAllocatorVtable {
    AllocatedOperation *(*allocate)(OperationAllocator *, u32);
};
struct OperationAllocator {
    OperationAllocatorVtable *vtable;
};

extern "C" const u8 DAT_0055c95c[];

// Allocate and initialize an operation with kind two and opcode six.
extern "C" void FUN_004acdb4(OperationAllocator *allocator, u32 argument)
{
    AllocatedOperation *operation = allocator->vtable->allocate(allocator, sizeof(AllocatedOperation));
    if (operation != NULL) {
        operation->state = -1;
        operation->vtable = DAT_0055c95c;
        operation->kind = 2;
        operation->operation = 6;
        operation->owner = allocator;
        operation->argument = argument;
    }
}
