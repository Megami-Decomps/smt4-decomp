/* NON_MATCHING: allocation-result guard and first fixup dispatch are optimized differently. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include <stddef.h>

extern "C" {
void* asdOperatorNew(u32 size);
void FUN_002a65d8(void* file, u32 mask);
void FUN_002a63d8(void* file, u32 mask);
void FUN_002a6264(void* file, u32 mask);
AsdAllocator* asdMemoryGetDefaultAllocator(void);
void nw_gfx_res_ResGraphicsFile_Setup(void* file, AsdAllocator* allocator, void* data);
void* FUN_0031dac4(void* file);

void* FUN_00316f70(void* data, u32 flags)
{
    struct FileView {
        void* data;
    };
    struct ResultView {
        u8 unk00[0x20];
        FileView* file;
        void* source;
    };
    typedef char FileLayoutChecks[sizeof(FileView) == 4 &&
        offsetof(ResultView, file) == 0x20 && offsetof(ResultView, source) == 0x24 ? 1 : -1];
    FileView* file = static_cast<FileView*>(asdOperatorNew(sizeof(FileView)));
    if (file) {
        file->data = data;
    }
    if ((flags & 8) || (flags & 0x40)) {
        FUN_002a65d8(file, (flags & 8) ? 0x02020000 : 0x02030000);
    }
    if (flags & 0x20) {
        FUN_002a63d8(file, 0x02020000);
    } else if (flags & 0x100) {
        FUN_002a63d8(file, 0x02030000);
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
