/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00500fe4` (_code @ 0x500fe4, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern int DAT_005893b8; /* 0x5893b8 */


unsigned int * FUN_00500fe4(unsigned int param_1,unsigned int *param_2,int *param_3)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_005893b8;
  if ((char)param_3[2] == '\0') {
    temp_v2 = 0x80000000;
  }
  else {
    temp_v2 = 0;
  }
  temp_v1 = *param_3;
  *param_2 = 1;
  param_2[1] = 0xf025f;
  param_2[2] = temp_v2 | (temp_v1 + temp_v0 * -8);
  param_2[3] = 0xf0227;
  param_2[4] = param_3[1];
  param_2[5] = 0xf0228;
  param_2[6] = 0;
  param_2[7] = 0x10245;
  param_2[8] = 1;
  param_2[9] = 0xf022f;
  param_2[10] = 1;
  param_2[0xb] = 0x10245;
  param_2[0xc] = 1;
  param_2[0xd] = 0xf0231;
  param_2[0xe] = 0;
  param_2[0xf] = 0x8025e;
  param_2[0x10] = 0;
  param_2[0x11] = 0x8025e;
  return param_2 + 0x12;
}

} /* extern "C" */
