/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022e8d4` (_code @ 0x22e8d4, 0xc0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0022e994; /* 0x22e994 */
extern unsigned char LAB_0022e9a0; /* 0x22e9a0 */

/* Supplied declaration required: FUN_0019dfbc. */
extern unsigned int FUN_0022ebcc(unsigned int *, int);
/* Supplied declaration required: FUN_002356d4. */
extern unsigned int FUN_00291018(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002971e4. */
extern unsigned int FUN_002bd1b0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c4b30. */


void FUN_0022e8d4(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int uStack_20;
  
  uStack_20 = param_4;
  FUN_002c4b30(param_1 + 0x170,0x200);
  temp_v2 = 0;
  if (temp_v2 < *(int *)(param_1 + 0x15d3c)) {
    do {
      piVar1 = (int *)(param_1 + temp_v2 * 4 + 0x15d2c);
      if (param_2 == 0) {
        temp_v1 = *piVar1;
      }
      else {
        temp_v1 = *piVar1 + 4;
      }
      temp_v0 = FUN_0022ebcc((unsigned int *)&uStack_20,temp_v1);
      temp_v0 = FUN_002bd1b0(temp_v0,0);
      FUN_002be7fc(param_1 + 0x170,&LAB_0022e9a0,param_1 + 0x170,temp_v0);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(int *)(param_1 + 0x15d3c));
  }
  temp_v0 = FUN_00291018(*(unsigned int *)(param_1 + 0x160),&LAB_0022e994);
  FUN_002971e4(*(unsigned int *)(param_1 + 0x16c),temp_v0);
  FUN_0019dfbc(*(unsigned int *)(param_1 + 0x16c));
  FUN_002356d4(1);
  return;
}
