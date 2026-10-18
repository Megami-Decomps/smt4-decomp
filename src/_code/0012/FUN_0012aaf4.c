/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012aaf4` (_code @ 0x12aaf4, 0xec bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00420ca8; /* 0x420ca8 */

extern int FUN_0013cf50(int *, unsigned int);
extern int *FUN_002b5498(int, int *, int, unsigned int);


int * FUN_0012aaf4(unsigned int param_1,int *param_2)

{
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_0013cf50(param_2,0);
  temp_v1 = (**(romwright_code **)(*param_2 + 8))(param_2,0x188,4);
  piVar3 = (int *)0x0;
  temp_v3 = temp_v0;
  if (temp_v1 != 0) {
    temp_v3 = 0;
    piVar3 = (int *)FUN_002b5498(temp_v1,param_2,temp_v0,param_1);
    piVar3[0x52] = 0;
    *piVar3 = (int)&DAT_00420ca8;
    piVar3[0x5d] = temp_v0;
    piVar3[0x5e] = (int)param_2;
    piVar3[0x5c] = 0;
    temp_v0 = piVar3[2];
    temp_v1 = *(int *)(temp_v0 + 0xdc);
    temp_v2 = *(int *)(temp_v0 + 0xe0);
    piVar3[0x61] = *(int *)(temp_v0 + 0xe4);
    piVar3[0x5f] = temp_v1;
    piVar3[0x60] = temp_v2;
  }
  (**(romwright_code **)(*piVar3 + 0x24))(piVar3,param_2);
  if (temp_v3 != 0) {
    if (*(int *)(temp_v3 + 0xc) != 0 && *(int *)(temp_v3 + 0xc) + temp_v3 + 0xc != 0) {
      (**(romwright_code **)(*param_2 + 0xc))();
    }
    (**(romwright_code **)(*param_2 + 0xc))(param_2,temp_v3);
  }
  return piVar3;
}
