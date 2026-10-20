/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00341e80` (_code @ 0x341e80, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern unsigned char DAT_00636f40; /* 0x636f40 */
extern int DAT_00636f50; /* 0x636f50 */


int FUN_00341e80(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = *(unsigned int *)(DAT_00636f50 * 4 + 0x636f48);
  if ((temp_v0 & 0xf) != 0) {
    temp_v0 = temp_v0 * 2 + ((int)temp_v0 / 0x10) * -0x10;
  }
  temp_v1 = *(int *)(&DAT_00636f40 + DAT_00636f50 * 4);
  *(unsigned int *)(DAT_00636f50 * 4 + 0x636f48) = temp_v0 + param_1;
  return temp_v1 + temp_v0;
}

} /* extern "C" */
