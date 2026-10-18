/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111910` (_code @ 0x111910, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002e995c. */
extern int *FUN_002ea704(void);
extern unsigned int FUN_002ea93c(unsigned int);
/* Supplied declaration required: FUN_002fd394. */


void FUN_00111910(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned char temp_v2 [32];
  
  FUN_002e995c(temp_v2);
  temp_v0 = FUN_002ea93c(param_2);
  piVar2 = (int *)FUN_002ea704();
  temp_v1 = (**(romwright_code **)(*piVar2 + 0x28))();
  FUN_002fd394(*(int *)(temp_v1 + 0xc) + 0x80,temp_v0,temp_v2);
  return;
}
