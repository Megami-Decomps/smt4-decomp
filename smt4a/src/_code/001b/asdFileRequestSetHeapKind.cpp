#include "common.h"

namespace { struct FileRequest { u32 state; u8 padding[0x20]; u32 heapKind; }; }

extern "C" {
/* Updates or returns the requested state. */
bool asdFileRequestSetHeapKind(FileRequest *request, u32 kind)
{
    bool updated = false;
    if (request->state == 0) {
        request->heapKind = kind;
        updated = true;
    }
    return updated;
}
}
