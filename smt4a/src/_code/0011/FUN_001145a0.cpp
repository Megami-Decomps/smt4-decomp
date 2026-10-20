/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001145a0` (_code @ 0x1145a0, 0x22 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00114aa0(void);
int FUN_002ed250(unsigned int *);

extern unsigned char DAT_005596a4; /* 0x5596a4 */

/* Supplied declaration required: FUN_00114aa0. */
/* Supplied declaration required: FUN_002ed250. */


void FUN_001145a0(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  *param_1 = (unsigned int)&DAT_005596a4;
  if (*(char *)(param_1 + 10) != '\0') {
    FUN_00114aa0();
    *(unsigned char *)(param_1 + 10) = 0;
  }
  FUN_002ed250(param_1);
  return;
}

} /* extern "C" */
