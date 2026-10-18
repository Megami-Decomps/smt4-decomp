/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012b48c` (_code @ 0x12b48c, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_00421160; /* 0x421160 */

extern int FUN_0013d7a0(int *, unsigned int);
/* Supplied declaration required: FUN_0013da40. */
extern int *FUN_002b52b4(int, int *, int, unsigned int);


int * FUN_0012b48c(unsigned int param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_0013d7a0(param_2,0);
  temp_v1 = (**(romwright_code **)(*param_2 + 8))(param_2,0x188,4);
  piVar3 = (int *)0x0;
  temp_v3 = temp_v0;
  if (temp_v1 != 0) {
    temp_v3 = 0;
    piVar3 = (int *)FUN_002b52b4(temp_v1,param_2,temp_v0,param_1);
    piVar3[0x52] = 0;
    *piVar3 = (int)&DAT_00421160;
    piVar3[0x5d] = temp_v0;
    piVar3[0x5e] = (int)param_2;
    piVar3[0x5c] = 0;
    temp_v0 = piVar3[2];
    temp_v1 = *(int *)(temp_v0 + 0x10c);
    temp_v2 = *(int *)(temp_v0 + 0x110);
    piVar3[0x61] = *(int *)(temp_v0 + 0x114);
    piVar3[0x5f] = temp_v1;
    piVar3[0x60] = temp_v2;
  }
  (**(romwright_code **)(*piVar3 + 0x24))(piVar3,param_2);
  if (temp_v3 != 0) {
    FUN_0013da40(param_2,temp_v3);
  }
  return piVar3;
}
