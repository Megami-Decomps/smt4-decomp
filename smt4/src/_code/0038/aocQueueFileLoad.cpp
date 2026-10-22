#include "shard/FileQueueRequest.h"

struct AocDisplay;

extern "C" {
void FUN_002a2e08(AocDisplay *display);
void FUN_002a2f08(AocDisplay *display, const FileQueueRequest *request);
void FUN_002a301c(FileQueueRequest *request);
void FUN_002ba81c(u8 *destination, const char *path, u32 capacity);
u32 libc_strlen(const char *path);

void aocQueueFileLoad(AocDisplay *display, const char *path, u32 *completion,
                  u32 mode, u32 bytes, void *context)
{
    FileQueueRequest request;
    libc_strlen(path);
    FUN_002a301c(&request);
    FUN_002ba81c(request.path, path, 0x40);
    request.mode = mode;
    request.bytes = bytes;
    request.completion = completion;
    request.context = context;
    request.flags |= 1;
    if (completion != 0) {
        *completion = 0;
    }
    FUN_002a2f08(display, &request);
    FUN_002a2e08(display);
}
}
