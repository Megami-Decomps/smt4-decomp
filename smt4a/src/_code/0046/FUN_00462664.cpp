/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00462664` (_code @ 0x462664, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001d1f5c(unsigned int *);
int FUN_001d2384(int);
int FUN_001d239c(int);

extern unsigned char DAT_0055c1b0; /* 0x55c1b0 */

/* Supplied declaration required: FUN_001d1f5c. */
/* Supplied declaration required: FUN_001d2384. */
/* Supplied declaration required: FUN_001d239c. */


unsigned int * FUN_00462664(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = (unsigned int)&DAT_0055c1b0;
  FUN_001d1f5c(param_1);
  for (temp_v0 = param_1[0x4c]; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x1ac)) {
    if (*(char *)(temp_v0 + 0x139) != '\0') {
      FUN_001d239c(temp_v0);
    }
  }
  for (temp_v0 = param_1[0x4c]; temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x1ac)) {
    FUN_001d2384(temp_v0);
  }
  param_1[0x4c] = 0;
  *(unsigned char *)((int)param_1 + 5) = 0;
  return param_1;
}

} /* extern "C" */
