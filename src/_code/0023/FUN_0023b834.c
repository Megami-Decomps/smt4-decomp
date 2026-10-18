/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023b834` (_code @ 0x23b834, 0x48 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern unsigned char DAT_004daec0; /* 0x4daec0 */
extern int DAT_004daed0; /* 0x4daed0 */


int FUN_0023b834(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = *(unsigned int *)(DAT_004daed0 * 4 + 0x4daec8);
  if ((temp_v0 & 0xf) != 0) {
    temp_v0 = temp_v0 * 2 + ((int)temp_v0 / 0x10) * -0x10;
  }
  temp_v1 = *(int *)(&DAT_004daec0 + DAT_004daed0 * 4);
  *(unsigned int *)(DAT_004daed0 * 4 + 0x4daec8) = temp_v0 + param_1;
  return temp_v1 + temp_v0;
}
