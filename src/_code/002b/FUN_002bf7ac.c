/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf7ac` (_code @ 0x2bf7ac, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern int *FUN_002b52b4(int, int *, unsigned int, unsigned int);


int * FUN_002bf7ac(unsigned int param_1,int *param_2)

{
  int temp_v0;
  int *piVar2;
  
  temp_v0 = (**(romwright_code **)(*param_2 + 8))(param_2,0x148,4);
  if (temp_v0 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_002b52b4(temp_v0,param_2,0,param_1);
  }
  (**(romwright_code **)(*piVar2 + 0x24))(piVar2,param_2);
  return piVar2;
}
