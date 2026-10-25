#include "nn/os/MappedMemoryBlock.h"
#include "nn/os/Handle.h"

MappedMemoryBlock g_addressSpaceMapping;
NnOsHandle g_addressSpaceProcessHandle = NnOsHandle();
