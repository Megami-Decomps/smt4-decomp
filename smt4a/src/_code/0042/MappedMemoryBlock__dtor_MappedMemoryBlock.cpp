/* NON_MATCHING: retail recovers the owner through the native handle member; current prefix view leaves the handle as a raw word. */
#include "nn/os/MappedMemoryBlock.h"
#include "nn/svc.h"

extern "C" void FUN_00188c28(MappedMemoryBlock* block);

MappedMemoryBlock::~MappedMemoryBlock()
{
    FUN_00188c28(this);
    if (handle != 0) {
        nn::svc::CloseHandle(handle);
        handle = 0;
    }
}
