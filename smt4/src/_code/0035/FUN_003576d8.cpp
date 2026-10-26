#include "nn/os/Handle.h"

extern "C" {

/* Closes the kernel handle if one is held. */
NnOsHandle *FUN_003576d8(NnOsHandle *handle)
{
    handle->~NnOsHandle();
    return handle;
}

}
