#include "nn/svc.h"

extern "C" {
u32 *FUN_0042d1cc(u32 *handle)
{
    if (*handle != 0) {
        nn::svc::CloseHandle(*handle);
        *handle = 0;
    }
    return handle;
}
}
