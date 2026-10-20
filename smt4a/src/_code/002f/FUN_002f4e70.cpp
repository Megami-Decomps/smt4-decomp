/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4e70` (_code @ 0x2f4e70, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9ec8(unsigned int, unsigned int);
int FUN_0031144c(void);

/* Supplied declaration required: FUN_002e9ec8. */
extern int FUN_002ea4bc(void);
/* Supplied declaration required: FUN_0031144c. */


void FUN_002f4e70(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_0031144c();
  temp_v0 = FUN_002ea4bc();
  FUN_002e9ec8(*(unsigned int *)(temp_v0 + 0x10),param_1);
  return;
}

} /* extern "C" */
