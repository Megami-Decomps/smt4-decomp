/* NON_MATCHING: frame (0x180), the s16-s18 argument loads and both paths' instruction order match retail; retail puts the one-path record at sp+0 and the two-path record at sp+0xb8 (here the reverse), keeps `orr #2; orr #1` as two steps, and has linker NOPs between the length call and the constructor. */
#include "shard/FileQueueRequest.h"

struct AocDisplay;

/* The one-path record: the same layout, 0x10 bytes longer. */
struct FileQueueSingleRequest : FileQueueRequest {
    u32 unkB8[4];
};

extern "C" {
void FUN_001b9fe4(AocDisplay *display);
void FUN_001ba0c8(AocDisplay *display, const FileQueueRequest *request);
void FUN_001a6c40(FileQueueRequest *request);
void FUN_0019a46c(u8 *destination, const char *path, u32 capacity);
u32 wstrlen(const char *path);

/* Queues a file load for the display: one path, or two (the second is stored after the first). */
void aocDisplayQueueRecord(AocDisplay *display, const char *path, const char *secondPath, u32 *completion,
                           u32 mode, u32 bytes, void *context)
{
    if (secondPath != NULL) {
        FileQueueRequest request;
        wstrlen(path);
        wstrlen(secondPath);
        FUN_001a6c40(&request);
        FUN_0019a46c(request.path, path, 0x40);
        FUN_0019a46c(request.path + 0x40, secondPath, 0x40);
        request.mode = mode;
        request.bytes = bytes;
        request.completion = completion;
        request.context = context;
        request.flags |= 2;
        request.flags |= 1;
        if (completion != 0) {
            *completion = 0;
        }
        FUN_001ba0c8(display, &request);
        FUN_001b9fe4(display);
        return;
    }
    FileQueueSingleRequest request;
    wstrlen(path);
    FUN_001a6c40(&request);
    FUN_0019a46c(request.path, path, 0x40);
    request.mode = mode;
    request.bytes = bytes;
    request.completion = completion;
    request.context = NULL;
    request.flags |= 1;
    if (completion != 0) {
        *completion = 0;
    }
    FUN_001ba0c8(display, &request);
    FUN_001b9fe4(display);
}
}
