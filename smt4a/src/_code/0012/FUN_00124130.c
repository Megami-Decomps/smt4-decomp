/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00124130` (_code @ 0x124130, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char LAB_0011cdf9; /* 0x11cdf9 */

extern int FUN_00106db4(void);
/* Supplied declaration required: FUN_0010afbc. */
/* Supplied declaration required: FUN_0010b168. */
extern int *FUN_001144a4(int, unsigned int);
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_00306d92. */


int * FUN_00124130(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *piVar3;
  int temp_v1;
  
  if (*(romwright_code **)(param_1 + 0x324) != (romwright_code *)0x0) {
    piVar1 = (int *)(**(romwright_code **)(param_1 + 0x324))();
  }
  else {
    temp_v0 = FUN_002e760a(0x2c);
    if (temp_v0 != 0) {
      piVar1 = (int *)FUN_001144a4(temp_v0,10);
    }
    else {
      piVar1 = (int *)0x0;
    }
  }
  temp_v0 = *(int *)(param_1 + 0x198);
  piVar3 = piVar1;
  FUN_0010afbc(piVar1,*(unsigned short *)(temp_v0 + 0x7c),*(unsigned char *)(temp_v0 + 0x7e),
               *(unsigned int *)(temp_v0 + 0x80));
  if (piVar3 != (int *)0x0) {
    temp_v1 = FUN_002e760a(0x24);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = FUN_00106db4();
    }
    *(int *)(temp_v0 + 0x14) = piVar1[3];
    FUN_0010b168(piVar1,temp_v0,&LAB_0011cdf9);
  }
  else if (*(int *)(param_1 + 0x324) == 0) {
    FUN_00306d92(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(romwright_code **)(*piVar1 + 4))(piVar1);
    }
    piVar1 = (int *)0x0;
  }
  return piVar1;
}
