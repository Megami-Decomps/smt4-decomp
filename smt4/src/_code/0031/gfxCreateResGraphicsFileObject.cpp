#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include <stddef.h>
#include <new>

extern "C" {
void FUN_002a65d8(void* file, u32 mask);
void graphicsResourceSetLeafValue(void* file, u32 mask);
void FUN_002a6264(void* file, u32 mask);
AsdAllocator* asdMemoryGetDefaultAllocator(void);
void nw_gfx_res_ResGraphicsFile_Setup(void* file, AsdAllocator* allocator, void* data);
void* FUN_0031dac4(void* file);

/* Wraps graphics resource data in a new resource-file handle, applies the fix-ups the flags ask for
 * (each pair of bits picks the 0x02020000 or the 0x02030000 variant), sets it up with the default
 * allocator and creates the object that owns it. */
void* gfxCreateResGraphicsFileObject(void* data, u32 flags)
{
    /* unit-local: the resource-file handle (one data pointer) and the two fields of the created object this function sets. */
    struct FileDataView {
        FileDataView(void* data) : data(data) {}
        void* data;
    };
    struct ResultView {
        u8 unk00[0x20];
        FileDataView* file;
        void* source;
    };
    typedef char FileLayoutChecks[sizeof(FileDataView) == 4 &&
        offsetof(ResultView, file) == 0x20 && offsetof(ResultView, source) == 0x24 ? 1 : -1];
    FileDataView* file = new (asdOperatorNew(sizeof(FileDataView))) FileDataView(data);
    if (flags & 8) {
        FUN_002a65d8(file, 0x02020000);
    } else if (flags & 0x40) {
        FUN_002a65d8(file, 0x02030000);
    }
    if (flags & 0x20) {
        graphicsResourceSetLeafValue(file, 0x02020000);
    } else if (flags & 0x100) {
        graphicsResourceSetLeafValue(file, 0x02030000);
    }
    if (flags & 0x10) {
        FUN_002a6264(file, 0x02020000);
    } else if (flags & 0x80) {
        FUN_002a6264(file, 0x02030000);
    }
    nw_gfx_res_ResGraphicsFile_Setup(file, asdMemoryGetDefaultAllocator(), file->data);
    ResultView* result = static_cast<ResultView*>(FUN_0031dac4(file));
    result->file = file;
    result->source = data;
    return result;
}
}
