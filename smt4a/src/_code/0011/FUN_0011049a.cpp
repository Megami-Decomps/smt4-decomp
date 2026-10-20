/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011049a` (_code @ 0x11049a, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00110494(int);
int FUN_001104c0(int, int);
int FUN_001104d4(int);
int FUN_002fb208(void);

/* Supplied declaration required: FUN_00110494. */
/* Supplied declaration required: FUN_001104c0. */
/* Supplied declaration required: FUN_001104d4. */
/* Supplied declaration required: FUN_002fb208. */


void FUN_0011049a(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002fb208();
  *(unsigned char *)(param_1 + 0x1e) = 0;
  FUN_001104c0(param_1,temp_v0);
  FUN_00110494(param_1);
  *(unsigned char *)(param_1 + 0x1e) = 1;
  FUN_001104d4(param_1);
  return;
}

} /* extern "C" */
