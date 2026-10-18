/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001203d8` (_code @ 0x1203d8, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_004213c4; /* 0x4213c4 */

extern int FUN_0012d638(int *, unsigned int);
/* Supplied declaration required: FUN_0012d8d4. */
extern int *FUN_002b5498(int, int *, int, unsigned int);


int * FUN_001203d8(unsigned int param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  
  temp_v0 = FUN_0012d638(param_2,0);
  temp_v1 = (**(romwright_code **)(*param_2 + 8))(param_2,0x16c,4);
  piVar3 = (int *)0x0;
  temp_v2 = temp_v0;
  if (temp_v1 != 0) {
    temp_v2 = 0;
    piVar3 = (int *)FUN_002b5498(temp_v1,param_2,temp_v0,param_1);
    *piVar3 = (int)&DAT_004213c4;
    piVar3[0x52] = temp_v0;
    piVar3[0x53] = (int)param_2;
    piVar3[0x54] = 0;
    piVar3[0x55] = 0;
    piVar3[0x56] = 0;
    piVar3[0x57] = 0;
    piVar3[0x58] = 0;
    piVar3[0x59] = 0;
    piVar3[0x5a] = 0;
  }
  (**(romwright_code **)(*piVar3 + 0x24))(piVar3,param_2);
  if (temp_v2 != 0) {
    FUN_0012d8d4(param_2,temp_v2);
  }
  return piVar3;
}
