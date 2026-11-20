#include "AsdSDK/Source/Sys/File/AsdFileReadRequest.h"

extern "C" {
void pathSetWithRomPrefix(AsdFileReadRequestA *request, const char *path);
void *asdFileAddEntry(const AsdFileReadRequestA *request);

/* Enqueues a file read with its completion callback and callback argument. */
void *asdFileEnqueueRead(const char *path, u8 flag, void (*onDone)(void *), void *onDoneArg)
{
    AsdFileReadRequestA request;
    fileReadRequestReset(&request);
    pathSetWithRomPrefix(&request, path);
    request.flag = flag;
    request.onDone = onDone;
    request.onDoneArg = onDoneArg;
    return asdFileAddEntry(&request);
}
} /* extern "C" */
