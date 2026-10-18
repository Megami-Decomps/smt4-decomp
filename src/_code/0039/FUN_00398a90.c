/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00398a90` (_code @ 0x398a90, 0xac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023282c. */
/* Supplied declaration required: FUN_002329dc. */
/* Supplied declaration required: FUN_00297178. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002bdac0. */
extern unsigned int FUN_002bef7c(int);
extern int FUN_002bf9f0(void);


void FUN_00398a90(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002bf9f0();
  if (temp_v0 != 0) {
    if (*(char *)(param_1 + 0x29) != '\0') {
      *(unsigned char *)(param_1 + 0x20) = *(unsigned char *)(param_1 + 0x21);
      *(unsigned char *)(param_1 + 0x29) = 0;
      *(int *)(param_1 + 0x10) = (int)*(char *)(param_1 + 0x2a);
      *(int *)(param_1 + 0x14) = (int)*(char *)(param_1 + 0x2b);
      FUN_002329dc();
      FUN_0023282c(param_1);
      temp_v1 = 0x96;
    }
    else {
      *(unsigned int *)(param_1 + 0x10) = 0;
      *(unsigned char *)(param_1 + 0x29) = 1;
      *(unsigned int *)(param_1 + 0x14) = 0;
      FUN_0023282c(param_1);
      temp_v1 = 0x97;
    }
    FUN_002b8b78(temp_v1);
    FUN_00297178(param_1,0xb);
    FUN_002bdac0(param_1 + 0x708,0);
  }
  temp_v1 = FUN_002bef7c(param_1 + 0x708);
  *(unsigned int *)(param_1 + 0xa4) = temp_v1;
  return;
}
