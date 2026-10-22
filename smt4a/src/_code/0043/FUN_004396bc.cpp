/* NON_MATCHING: forwarding the buffer arguments uses VFP block copies instead of the retail core-register copies. */
#include "common.h"

extern "C" {
s32 FUN_00426204();
u32 FUN_004398b4(u32 first, u32 second,
                  void *buffer0, u32 length0, void *buffer1, u32 length1,
                  void *buffer2, u32 length2, void *buffer3, u32 length3,
                  void *buffer4, u32 length4, void *buffer5, u32 length5,
                  void *buffer6, u32 length6, void *buffer7, u32 length7,
                  u32 *output, void *extraAddress, void *extraBuffer, u32 extraLength);

u32 FUN_004396bc(u32 first, u32 second,
                  void *buffer0, u32 length0, void *buffer1, u32 length1,
                  void *buffer2, u32 length2, void *buffer3, u32 length3,
                  void *buffer4, u32 length4, void *buffer5, u32 length5,
                  void *buffer6, u32 length6, void *buffer7, u32 length7,
                  u32 *output, void *extraBuffer, u32 extraLength)
{
    if (FUN_00426204() == 0) {
        return 0xc8a0d018;
    }
    return FUN_004398b4(first, second, buffer0, length0, buffer1, length1,
                        buffer2, length2, buffer3, length3, buffer4, length4,
                        buffer5, length5, buffer6, length6, buffer7, length7,
                        output, extraBuffer, extraBuffer, extraLength);
}
}
