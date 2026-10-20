/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_Sound3DManager_GetRequiredMemSize` (_code @ 0x15e278, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int FUN_001784b0(unsigned int, int *);


int nw_snd_Sound3DManager_GetRequiredMemSize(unsigned int param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  int temp_v2 [2];
  int temp_v3;
  int temp_v4;
  
  temp_v1 = 0;
  temp_v0 = FUN_001784b0(param_2,temp_v2);
  if (temp_v0 != 0) {
    temp_v1 = temp_v4 + temp_v2[0] + temp_v3;
  }
  return temp_v1 * 0x2c;
}

} /* extern "C" */
