#include "sys/FileWorkerQueue.h"
extern "C" void fileWorkerCopyArgument(const void *source, void *destination)
{
    if (destination != NULL)
        *static_cast<FileQueue **>(destination) = *static_cast<FileQueue *const *>(source);
}
