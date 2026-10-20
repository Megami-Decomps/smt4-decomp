/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328c94` (_code @ 0x328c94, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

/* Supplied declaration required: FUN_0028dcb0. */
extern int FUN_00295408(void);
extern int FUN_002a8740(int);


unsigned int FUN_00328c94(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *param_1;
  if (temp_v0 != 0) {
    temp_v0 = FUN_002a8740((int)*(char *)(temp_v0 + *(int *)(temp_v0 + 0xcf78) * 0x620 + 0x3654));
    temp_v1 = FUN_00295408();
    FUN_0028dcb0(*(unsigned short *)(temp_v0 + temp_v1 * 2 + 0x34));
  }
  return 1;
}

} /* extern "C" */
