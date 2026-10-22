#include "shard/Shard0042.h"

/* Consume one byte when available, or report end of input. */
extern "C" s32 _ZN9Obj4225406decodeEPKhj(CallbackState *work, const u8 *value, u32 count)
{
    if (count == 0) {
        return -1;
    }
    work->value = *value;
    return 1;
}
