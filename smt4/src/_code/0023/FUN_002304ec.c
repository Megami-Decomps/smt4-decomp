/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002304ec` (_code @ 0x2304ec, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_5_stack;


void FUN_002304ec(int param_1,unsigned short param_2,unsigned short param_3,short param_4,short param_5)

{
  unsigned short temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  
  puVar3 = (unsigned short *)(param_1 + 0x1000);
  *(unsigned short *)(param_1 + (unsigned int)*puVar3 * 4) = param_2;
  temp_v1 = param_1 + (unsigned int)*puVar3 * 4;
  param_3 = param_3 | (*(unsigned short *)(temp_v1 + 2) & 0xfffe);
  *(unsigned short *)(temp_v1 + 2) = param_3;
  temp_v0 = (param_3 & 0xfffd) | (param_4 << 1);
  *(unsigned short *)(param_1 + (unsigned int)*puVar3 * 4 + 2) = temp_v0;
  *(unsigned short *)(param_1 + (unsigned int)*puVar3 * 4 + 2) = (temp_v0 & 0xfc03) | (param_5 << 2);
  *puVar3 = *puVar3 + 1;
  return;
}
