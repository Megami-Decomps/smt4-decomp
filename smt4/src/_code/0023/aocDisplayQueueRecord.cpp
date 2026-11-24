/* NON_MATCHING: eight lines. Both paths build the mode/bytes address in r0, where retail uses r2. */
#include "shard/FileQueueRequest.h"
#include "util/BitsAndBytes.h"

struct AocDisplay;

extern "C" {
void fileWorkerQueueRestartIfIdle(AocDisplay *display);
void fileQueuePush(AocDisplay *display, const FileQueueRequest *request);
void _ZN9Obj422224C1Ev(FileQueueRequest *request);
void stringCopyTruncated(u8 *destination, const char *path, u32 capacity);
u32 libc_strlen(const char *path);

/* aocQueueFileLoad's body, inlined here (retail copies the path argument again for it): queues a load
 * of one path. */
static __inline void queueFileLoad(AocDisplay *display, const char *path, u32 *completion,
                                   u32 mode, u32 bytes, void *context)
{
    FileQueueRequest request;
    libc_strlen(path);
    _ZN9Obj422224C1Ev(&request);
    stringCopyTruncated(request.path, path, 0x40);
    request.mode = mode;
    request.bytes = bytes;
    request.completion = completion;
    request.context = context;
    flagsSetBits(&request.flags, 1);
    if (completion != 0) {
        *completion = 0;
    }
    fileQueuePush(display, &request);
    fileWorkerQueueRestartIfIdle(display);
}

/* Queues a file load for the display: one path, or two (the second is stored after the first). */
void aocDisplayQueueRecord(AocDisplay *display, const char *path, const char *secondPath, u32 *completion,
                           u32 mode, u32 bytes, void *context)
{
    FileQueueRequest request;
    if (secondPath != NULL) {
        libc_strlen(path);
        libc_strlen(secondPath);
        _ZN9Obj422224C1Ev(&request);
        stringCopyTruncated(request.path, path, 0x40);
        stringCopyTruncated(request.path + 0x40, secondPath, 0x40);
        request.mode = mode;
        request.bytes = bytes;
        request.completion = completion;
        request.context = context;
        flagsSetBits(&request.flags, 2);
        flagsSetBits(&request.flags, 1);
        if (completion != 0) {
            *completion = 0;
        }
        fileQueuePush(display, &request);
        fileWorkerQueueRestartIfIdle(display);
        return;
    }
    queueFileLoad(display, path, completion, mode, bytes, NULL);
}
} /* extern "C" */
