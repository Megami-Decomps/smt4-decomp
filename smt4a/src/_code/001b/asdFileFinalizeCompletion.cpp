#include "common.h"

// Private views of the request and completion records used by this function.
struct FileRequestView {
    u8 unk00[0x0C];       // 0x00
    void* data;          // 0x0C
    u8 unk10[0x08];       // 0x10
    u32 unk18;           // 0x18
};

typedef void (*FileCompletionCallback)(void* data, void* userData, u32 value);

struct FileCompletionView {
    FileRequestView* request;          // 0x00
    FileCompletionCallback callback;   // 0x04
    void* userData;                    // 0x08
    u8 unk0C[0x08];                    // 0x0C
    void** outputData;                 // 0x14
};

extern "C" {
s32 asdFileRequestHasFailed(FileRequestView* request);
void asdFileRequestRelease(FileRequestView* request);
void asdMemFree(void* memory);

// Delivers the request result, transfers successful data ownership, and frees the completion record.
void asdFileFinalizeCompletion(FileCompletionView* completion)
{
    FileRequestView* request = completion->request;
    s32 failed = asdFileRequestHasFailed(request);
    void** outputData = completion->outputData;

    if (failed != 0) {
        if (outputData != 0) {
            *outputData = 0;
        }
        if (completion->callback != 0) {
            completion->callback(0, completion->userData, 0);
        }
    } else {
        if (outputData != 0) {
            *outputData = request->data;
        }
        u32 completionValue = request->unk18;
        if (completion->callback != 0) {
            completion->callback(request->data, completion->userData, completionValue);
        }
        request->data = 0;
    }

    asdFileRequestRelease(completion->request);
    asdMemFree(completion);
}
}
