/* NON_MATCHING: retail gives each branch its own request (380-byte frame, the paired one at sp+184) where this
 * build shares one (184 bytes), and loads mode/bytes into s17/s16 with single stores (this build: vldmia/vstmia). */
#include "shard/FileQueueRequest.h"
#include "nn/fnd/TimeSpan.h"

struct FileQueue;
extern "C" {
u32 libc_strlen(const char *text);
void _ZN9Obj422224C1Ev(FileQueueRequest *request);
char *stringCopyTruncated(char *destination, const char *source, u32 capacity);
FileQueueRequest *fileQueuePush(FileQueue *queue, const FileQueueRequest *request);
void fileWorkerQueueRestartIfIdle(FileQueue *queue);
void threadSleepDuration(nn::fnd::TimeSpan delay);

/* Submits a single- or paired-path request and waits for its queued operation to finish. */
u32 fileQueueRequestAndWait(FileQueue *queue, const char *path, const char *secondPath, u32 *transferredBytes,
                 u32 mode, u32 bytes, void *context)
{
    FileQueueRequest *operation;
    if (secondPath) {
        libc_strlen(path);
        libc_strlen(secondPath);
        FileQueueRequest request;
        _ZN9Obj422224C1Ev(&request);
        stringCopyTruncated(reinterpret_cast<char *>(request.path), path, 0x40);
        stringCopyTruncated(reinterpret_cast<char *>(request.path + 0x40), secondPath, 0x40);
        request.mode = mode;
        request.bytes = bytes;
        request.context = context;
        request.flags |= 2;
        operation = fileQueuePush(queue, &request);
        fileWorkerQueueRestartIfIdle(queue);
        for (;;) {
            if (operation->operation.state == 3)
                break;
            threadSleepDuration(nn::fnd::TimeSpan::FromMilliSeconds(3));
        }
    } else {
        libc_strlen(path);
        FileQueueRequest request;
        _ZN9Obj422224C1Ev(&request);
        stringCopyTruncated(reinterpret_cast<char *>(request.path), path, 0x40);
        request.mode = mode;
        request.bytes = bytes;
        request.context = 0;
        operation = fileQueuePush(queue, &request);
        fileWorkerQueueRestartIfIdle(queue);
        for (;;) {
            if (operation->operation.state == 3)
                break;
            threadSleepDuration(nn::fnd::TimeSpan::FromMilliSeconds(3));
        }
    }
    *transferredBytes = operation->output.transferredBytes;
    return operation->operation.result;
}
}
