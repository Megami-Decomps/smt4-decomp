#include "common.h"
extern "C" {
s32 FUN_0022a030(u32 context, u32 value);
s32 FUN_004009d0(u32 value, u32 option);
s32 FUN_002ccdb4(u32 context, u32 value) {
    if (FUN_0022a030(context, value)) {
        if (FUN_004009d0(value, 0) == 0)
            return 1;
    }
    return 0;
}
}
