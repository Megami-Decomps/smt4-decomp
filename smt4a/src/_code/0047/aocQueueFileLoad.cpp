#include "shard/FileQueueRequest.h"

struct AocDisplay;

extern "C" {
void FUN_001b9fe4(AocDisplay *display);
void FUN_001ba0c8(AocDisplay *display, const FileQueueRequest *request);
void FUN_001a6c40(FileQueueRequest *request);
void FUN_0019a46c(u8 *destination, const char *path, u32 capacity);
u32 libc_strlen(const char *path);

void aocQueueFileLoad(AocDisplay *display, const char *path, u32 *completion,
                  u32 mode, u32 bytes, void *context)
{
    FileQueueRequest request;
    libc_strlen(path);
    FUN_001a6c40(&request);
    FUN_0019a46c(request.path, path, 0x40);
    request.mode = mode;
    request.bytes = bytes;
    request.completion = completion;
    request.context = context;
    request.flags |= 1;
    if (completion != 0) {
        *completion = 0;
    }
    FUN_001ba0c8(display, &request);
    FUN_001b9fe4(display);
}
}
