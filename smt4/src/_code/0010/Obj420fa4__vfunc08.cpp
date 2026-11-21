/* NON_MATCHING: the stream construction through the VTT, the wide path literal and the pc-tagged result checks match; retail destroys the stream with an out-of-line call FUN_002bb484(&stream, 0) at both exits where the header's inline destructor is expanded here, and it lays the locals out read, value, size (sp+24/28/32) where the build puts size first. */
#include "classes/Obj420fa4.h"
#include "classes/Obj420c60.h"
#include "nn/Result.h"
#include "util/PlatformResultCheck.h"

extern "C" {
u32 nn_fs_detail_FileBase_TryGetSize(u32 *file, s64 *size);
u32 nn_fs_detail_FileBase_TryRead(u32 *file, s32 *read, void *destination, u32 size);
}

/* Reads the NG-word list version (one word) from ngword:/version.dat; 0 when it cannot be read. */
u32 Obj420fa4::vfunc08()
{
    Obj420c60 stream;
    s32 result = stream.TryInitialize(L"ngword:/version.dat", 1);
    if (nnResultIsSuccess(result)) {
        s64 size;
        checkPlatformResult(nn_fs_detail_FileBase_TryGetSize(&stream.handle, &size), __current_pc());
        if (size == 4) {
            u32 value = 0;
            s32 read;
            checkPlatformResult(nn_fs_detail_FileBase_TryRead(&stream.handle, &read, &value, 4), __current_pc());
            if (read == 4) {
                return value;
            }
        }
    }
    return 0;
}
