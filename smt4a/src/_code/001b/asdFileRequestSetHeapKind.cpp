/* NON_MATCHING: compiler places the success boolean in r0 rather than retail's r2 accumulator. */
#include "common.h"

namespace { struct FileRequest { u32 state; u8 padding[0x20]; u32 heapKind; }; }

extern "C" {
/* Updates or returns the requested state. */
bool asdFileRequestSetHeapKind(FileRequest *request, u32 kind)
{
    if (request->state == 0) {
        request->heapKind = kind;
        return true;
    }
    return false;
}
}
