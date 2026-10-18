/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010430c` (_code @ 0x10430c, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern unsigned char DAT_004daec0; /* 0x4daec0 */
extern unsigned int DAT_004daed0; /* 0x4daed0 */
extern unsigned int DAT_004daed4; /* 0x4daed4 */

extern unsigned int FUN_002c32a0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


void FUN_0010430c(unsigned int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  do {
    temp_v1 = FUN_002c32a0(0x10000,0x100,0,param_1,0x10,1);
    *(unsigned int *)(&DAT_004daec0 + temp_v2 * 4) = temp_v1;
    temp_v0 = temp_v2 * 4;
    temp_v2 = temp_v2 + 1;
    *(unsigned int *)(temp_v0 + 0x4daec8) = 0;
  } while (temp_v2 < 2);
  DAT_004daed0 = 0;
  DAT_004daed4 = param_1;
  return;
}
