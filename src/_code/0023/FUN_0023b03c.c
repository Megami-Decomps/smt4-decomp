/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023b03c` (_code @ 0x23b03c, 0x12c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_003574e0; /* 0x3574e0 */
extern unsigned char LAB_003574ec; /* 0x3574ec */
extern unsigned char DAT_00420378; /* 0x420378 */

/* Supplied declaration required: FUN_0023d460. */
extern unsigned int FUN_002bf798(unsigned int, unsigned int, unsigned int, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_002c5f58. */


unsigned int * FUN_0023b03c(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned long long temp_v3;
  
  *param_1 = (unsigned int)&DAT_00420378;
  param_1[1] = param_2;
  param_1 = param_1 + 0x5c;
  FUN_002c5f58(param_1,&LAB_003574ec,0x70,0xc);
  param_1 = param_1 + 0x150;
  FUN_002c5f58(param_1,&LAB_003574e0,0x14,0xc);
  param_1[-0x1a8] = 0;
  FUN_002c4b30(param_1 + -0x1a7,0x150);
  temp_v3 = 0;
  temp_v1 = 0;
  do {
    *(unsigned char *)((int)param_1 + (temp_v1 - 0x54c)) = 0;
    FUN_0023d460(param_1 + (temp_v1 * 0x1c - 0x150));
    temp_v2 = temp_v1 + 1;
    *(unsigned char *)(param_1 + temp_v1 * 5) = 0;
    temp_v0 = (unsigned int)temp_v3;
    param_1[temp_v1 * 5 + 1] = temp_v0;
    param_1[temp_v1 * 5 + 2] = temp_v0;
    param_1[temp_v1 * 5 + 3] = temp_v0;
    param_1[temp_v1 * 5 + 4] = temp_v0;
    temp_v1 = temp_v2;
  } while (temp_v2 < 0xc);
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(unsigned char *)(param_1 + 0x3e) = 0;
  temp_v0 = FUN_002bf798(0x10000,0x100,0,param_1[-0x1ab] * 0x90,0x80,1);
  param_1[-0x1aa] = temp_v0;
  temp_v0 = FUN_002bf798(0x10000,0x100,0,param_1[-0x1ab] * 0xc,0x80,1);
  param_1[-0x1a9] = temp_v0;
  return param_1 + -0x1ac;
}
