/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b77c` (_code @ 0x11b77c, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011b6e2(unsigned int *);
int FUN_001a0eb0(void);
int destroyObj00558c98(int);

extern unsigned char DAT_0055a5d0; /* 0x55a5d0 */
extern unsigned char DAT_0055a6d8; /* 0x55a6d8 */

/* Supplied declaration required: FUN_0011b6e2. */
/* Supplied declaration required: FUN_001a0eb0. */
/* Supplied declaration required: destroyObj00558c98. */
extern int FUN_003054b8(unsigned int *);


void FUN_0011b77c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  param_1[4] = (unsigned int)&DAT_0055a6d8;
  *param_1 = (unsigned int)&DAT_0055a5d0;
  if (*(char *)(param_1 + 5) != '\0') {
    FUN_0011b6e2(param_1);
  }
  FUN_001a0eb0();
  temp_v0 = FUN_003054b8(param_1 + 6);
  destroyObj00558c98(temp_v0 - 0x18);
  return;
}

} /* extern "C" */
