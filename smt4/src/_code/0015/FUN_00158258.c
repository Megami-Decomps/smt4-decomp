/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00158258` (_code @ 0x158258, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002c4038. */
/* Supplied declaration required: nw_snd_internal_driver_StreamBufferPool_Alloc. */
/* Supplied declaration required: nw_snd_internal_driver_StreamBufferPool_Free. */


unsigned int
FUN_00158258(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned char param_5,
            unsigned char param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  if (param_3 >= 9) {
    param_3 = 8;
  }
  *(unsigned int *)(param_1 + 0xd0) = param_3;
  *(unsigned char *)(param_1 + 0xc4) = param_5;
  *(unsigned char *)(param_1 + 0xc5) = param_6;
  *(unsigned int *)(param_1 + 0xcc) = param_8;
  temp_v0 = 0;
  *(unsigned int *)(param_1 + 200) = param_7;
  for (; param_4 != 0; param_4 = param_4 >> 1) {
    if ((param_4 & 1) != 0) {
      if (temp_v0 >= 4) break;
      *(unsigned char *)(param_1 + temp_v0 * 0x20 + 0x1ad8) = 1;
    }
    temp_v0 = temp_v0 + 1;
  }
  if (temp_v0 >= 5) {
    temp_v0 = 4;
  }
  *(unsigned int *)(param_1 + 0xd4) = temp_v0;
  if (temp_v0 == 0) {
    temp_v1 = 2;
  }
  else {
    *(unsigned int *)(param_1 + 100) = param_2;
    temp_v0 = 0;
    if (*(int *)(param_1 + 0xd0) != 0) {
      do {
        temp_v2 = *(int *)(param_1 + 100);
        nw_snd_internal_driver_StreamBufferPool_Alloc();
        if (temp_v2 == 0) {
          temp_v3 = 0;
          if (temp_v3 < temp_v0) {
            do {
              temp_v2 = param_1 + temp_v3 * 0x340;
              nw_snd_internal_driver_StreamBufferPool_Free
                        (*(unsigned int *)(param_1 + 100),*(unsigned int *)(temp_v2 + 0xd8));
              temp_v3 = temp_v3 + 1;
              *(unsigned int *)(temp_v2 + 0xd8) = 0;
            } while (temp_v3 < temp_v0);
          }
          FUN_002c4038(param_1);
          *(unsigned char *)(param_1 + 0x10) = 1;
          return 1;
        }
        temp_v3 = temp_v0 + 1;
        *(int *)(param_1 + temp_v0 * 0x340 + 0xd8) = temp_v2;
        temp_v0 = temp_v3;
      } while (temp_v3 < *(unsigned int *)(param_1 + 0xd0));
    }
    temp_v1 = 0;
    *(unsigned char *)(param_1 + 0x50) = 1;
  }
  return temp_v1;
}
