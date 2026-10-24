/* NON_MATCHING: request storage is shared across branches (184-byte frame versus retail 380), and wait loops are rotated; 83 instructions each. */
#include "shard/FileQueueRequest.h"

struct FileQueue;
extern "C" {
u32 libc_strlen(const char *text);
void _ZN9Obj422224C1Ev(FileQueueRequest *request);
char *FUN_002ba81c(char *destination, const char *source, u32 capacity);
FileQueueRequest *FUN_002a2f08(FileQueue *queue, const FileQueueRequest *request);
void FUN_002a2e08(FileQueue *queue);
void threadSleepDuration(s64 nanoseconds);

// Submit a single- or paired-path request and wait for its queued operation to finish.
u32 FUN_002a4584(FileQueue *queue, const char *path, const char *secondPath, u32 *transferredBytes,
                 u32 mode, u32 bytes, void *context)
{
    FileQueueRequest *operation;
    if (secondPath) {
        libc_strlen(path);
        libc_strlen(secondPath);
        FileQueueRequest request;
        _ZN9Obj422224C1Ev(&request);
        FUN_002ba81c(reinterpret_cast<char *>(request.path), path, 0x40);
        FUN_002ba81c(reinterpret_cast<char *>(request.path + 0x40), secondPath, 0x40);
        request.flags |= 2;
        request.mode = mode;
        request.bytes = bytes;
        request.context = context;
        operation = FUN_002a2f08(queue, &request);
        FUN_002a2e08(queue);
        while (operation->operation.state != 3)
            threadSleepDuration(3000000);
    } else {
        libc_strlen(path);
        FileQueueRequest request;
        _ZN9Obj422224C1Ev(&request);
        FUN_002ba81c(reinterpret_cast<char *>(request.path), path, 0x40);
        request.context = 0;
        request.mode = mode;
        request.bytes = bytes;
        operation = FUN_002a2f08(queue, &request);
        FUN_002a2e08(queue);
        while (operation->operation.state != 3)
            threadSleepDuration(3000000);
    }
    *transferredBytes = operation->output.transferredBytes;
    return operation->operation.result;
}
}
