#include "AsdSDK/Source/Sys/File/AsdFile.h"

extern "C" {

AsdFileRequest *asdFileQueueRequest(const char *path, u8 flag);

/* Queues a load request for `path` sets its completion callback and the argument it receives, and returns it. */
AsdFileRequest *FUN_00155cb0(const char *path, u8 flag, void (*onDone)(void *), void *onDoneArg)
{
    AsdFileRequest *request = asdFileQueueRequest(path, flag);

    request->onDone = onDone;
    request->onDoneArg = onDoneArg;
    return request;
}

} /* extern "C" */
