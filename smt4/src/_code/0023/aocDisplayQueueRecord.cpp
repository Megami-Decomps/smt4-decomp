/* NON_MATCHING: frame (0x180), the s16-s18 argument loads and both paths' instruction order match retail; retail puts the one-path record at sp+0 and the two-path record at sp+0xb8 (here the reverse), keeps `orr #2; orr #1` as two steps, and has linker NOPs between the length call and the constructor. */
#include "shard/FileQueueRequest.h"

struct AocDisplay;

/* The one-path record: the same layout, 0x10 bytes longer. */
struct FileQueueSingleRequest : FileQueueRequest {
    u32 unkB8[4];
};

extern "C" {
void FUN_002a2e08(AocDisplay *display);
void FUN_002a2f08(AocDisplay *display, const FileQueueRequest *request);
void FUN_002a301c(FileQueueRequest *request);
void FUN_002ba81c(u8 *destination, const char *path, u32 capacity);
u32 libc_strlen(const char *path);

/* Queues a file load for the display: one path, or two (the second is stored after the first). */
void aocDisplayQueueRecord(AocDisplay *display, const char *path, const char *secondPath, u32 *completion,
                           u32 mode, u32 bytes, void *context)
{
    if (secondPath != NULL) {
        FileQueueRequest request;
        libc_strlen(path);
        libc_strlen(secondPath);
        FUN_002a301c(&request);
        FUN_002ba81c(request.path, path, 0x40);
        FUN_002ba81c(request.path + 0x40, secondPath, 0x40);
        request.mode = mode;
        request.bytes = bytes;
        request.completion = completion;
        request.context = context;
        request.flags |= 2;
        request.flags |= 1;
        if (completion != 0) {
            *completion = 0;
        }
        FUN_002a2f08(display, &request);
        FUN_002a2e08(display);
        return;
    }
    FileQueueSingleRequest request;
    libc_strlen(path);
    FUN_002a301c(&request);
    FUN_002ba81c(request.path, path, 0x40);
    request.mode = mode;
    request.bytes = bytes;
    request.completion = completion;
    request.context = NULL;
    request.flags |= 1;
    if (completion != 0) {
        *completion = 0;
    }
    FUN_002a2f08(display, &request);
    FUN_002a2e08(display);
}
}
