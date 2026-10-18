/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2890` (_code @ 0x2c2890, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern int iRam00000204; /* 0x204 */


unsigned int FUN_002c2890(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  unsigned int unaff_r4;
  
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 8) = param_2;
  *(unsigned int *)(param_1 + 0xc) = param_3;
  *(int *)(param_1 + 0x10) = param_4;
  *(unsigned short *)(param_1 + 8) = 0;
  if (*(int *)(param_4 + 0x4cc) != 0) {
    iRam00000204 = param_4 + 0x4bc;
    unaff_r4 = 1;
    *(unsigned char *)(param_4 + 0x508) = 0;
  }
  return unaff_r4;
}
