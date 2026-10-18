/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a527c` (_code @ 0x4a527c, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00163aa4. */
extern unsigned int FUN_001654d8(int);
extern unsigned int FUN_001654e4(int);
extern int FUN_0026c3a0(void);
/* Supplied declaration required: FUN_002c8538. */
extern int FUN_002e19f8(void);
/* Supplied declaration required: FUN_004935b0. */
extern int FUN_004a6d44(int);


void FUN_004a527c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0026c3a0();
  if (temp_v0 != 0) {
    FUN_002c8538(0);
  }
  temp_v0 = param_1 + 0x5e8;
  *(unsigned short *)(param_1 + 0xa872) = 9;
  FUN_00163aa4(temp_v0);
  temp_v1 = FUN_001654e4(temp_v0);
  temp_v2 = FUN_001654d8(temp_v0);
  FUN_004935b0(param_1 + 200,temp_v2,temp_v1);
  temp_v0 = FUN_0026c3a0();
  if ((((temp_v0 != 0) && (*(char *)(param_1 + 0x672) != '\0')) &&
      (temp_v0 = FUN_002e19f8(), temp_v0 != 0)) && (temp_v0 = FUN_004a6d44(param_1 + 0x96), temp_v0 == 0)) {
    *(unsigned int *)(param_1 + 0x14) = 7;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}
