#include "nn/os/ThreadLaunch.h"

// Unpack the copied queue pointer before calling the worker entry point.
extern "C" void fileWorkerInvokeEntry(ThreadEntryPoint entry, void *argument)
{
    entry(*static_cast<void **>(argument));
}
