/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015e420` (_code @ 0x15e420, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp70; /* 0x70: local_70 */
} param_8_stack;

extern int FUN_001739c4(void);
/* Supplied declaration required: FUN_00173f38. */
/* Supplied declaration required: FUN_001784b0. */
extern int FUN_00188c94(void);
extern unsigned int FUN_00188ca4(void);
/* Supplied declaration required: nw_snd_internal_driver_StreamBufferPool_Initialize. */


unsigned int
FUN_0015e420(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
            ,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4 [4];
  unsigned int temp_v5;
  unsigned char temp_v6 [16];
  int temp_v7;
  
  temp_v0 = FUN_001739c4();
  if (temp_v0 != 0) {
    if (param_7 != 0) {
      temp_v1 = FUN_00188ca4();
      temp_v0 = FUN_00188c94();
      if (param_6 < temp_v1) {
        return 0;
      }
      if (temp_v0 + temp_v1 < param_6 + param_7) {
        return 0;
      }
    }
    temp_v0 = param_1;
    temp_v4[0] = param_8;
    FUN_00173f38(param_1,param_2,param_4,param_5);
    if (temp_v0 != 0) {
      temp_v2 = FUN_001784b0(param_2,temp_v6);
      temp_v0 = 0;
      if (temp_v2 != 0) {
        temp_v0 = temp_v7;
      }
      if ((unsigned int)(temp_v0 * 0xa000) < param_7 || temp_v0 * 0xa000 - param_7 == 0) {
        temp_v0 = FUN_001784b0(param_2,temp_v4);
        temp_v3 = 0;
        if (temp_v0 != 0) {
          temp_v3 = temp_v5;
        }
        nw_snd_internal_driver_StreamBufferPool_Initialize(param_1 + 0xd8,param_6,param_7,temp_v3);
        *(int *)(param_1 + 0xf0) = param_1 + 0xf4;
        *(unsigned int *)(param_1 + 0x110) = param_3;
        return 1;
      }
    }
  }
  return 0;
}
