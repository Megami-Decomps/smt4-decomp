/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120000` (_code @ 0x120000, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_004212f0; /* 0x4212f0 */

extern int FUN_0012c264(int *, unsigned int);
extern int *FUN_002b52b4(int, int *, int, unsigned int);


int * FUN_00120000(unsigned int param_1,int *param_2)

{
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  
  temp_v0 = FUN_0012c264(param_2,0);
  temp_v1 = (**(romwright_code **)(*param_2 + 8))(param_2,0x17c,4);
  piVar3 = (int *)0x0;
  temp_v2 = temp_v0;
  if (temp_v1 != 0) {
    temp_v2 = 0;
    piVar3 = (int *)FUN_002b52b4(temp_v1,param_2,temp_v0,param_1);
    piVar3[0x52] = 0;
    *piVar3 = (int)&DAT_004212f0;
    piVar3[0x5d] = temp_v0;
    piVar3[0x5e] = (int)param_2;
    piVar3[0x5c] = 0;
  }
  (**(romwright_code **)(*piVar3 + 0x24))(piVar3,param_2);
  if (temp_v2 != 0) {
    if (*(int *)(temp_v2 + 0xc) != 0 && *(int *)(temp_v2 + 0xc) + temp_v2 + 0xc != 0) {
      (**(romwright_code **)(*param_2 + 0xc))();
    }
    (**(romwright_code **)(*param_2 + 0xc))(param_2,temp_v2);
  }
  return piVar3;
}
