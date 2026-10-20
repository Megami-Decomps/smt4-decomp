/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010efb6` (_code @ 0x10efb6, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010ef4c(int *, unsigned int, unsigned int);
int FUN_002f1798(int, unsigned int);

/* Supplied declaration required: FUN_0010ef4c. */
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002f1798. */
extern int FUN_002f5928(int, unsigned int, unsigned int, unsigned int, unsigned int);


int * FUN_0010efb6(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  temp_v0 = FUN_002f5928(param_1 + 4,0x200000,param_3,param_4,param_4);
  piVar3 = (int *)(temp_v0 - 4);
  *(unsigned int *)(temp_v0 + 0x30) = 0;
  temp_v1 = FUN_002e760a(0x20);
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v1 = temp_v1 + 4;
    FUN_002f1798(temp_v1,param_2);
    temp_v0 = temp_v1 - 4;
    *(unsigned int *)(temp_v1 + 0xc) = 0;
    *(unsigned int *)(temp_v1 + 0x10) = 0;
    *(unsigned int *)(temp_v1 + 0x18) = param_2;
    *(unsigned int *)(temp_v1 + 0x14) = 0;
  }
  *piVar3 = temp_v0;
  FUN_0010ef4c(piVar3,param_3,param_2);
  return piVar3;
}

} /* extern "C" */
