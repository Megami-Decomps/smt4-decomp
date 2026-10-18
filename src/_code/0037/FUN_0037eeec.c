/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037eeec` (_code @ 0x37eeec, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b4e44. */
/* Supplied declaration required: FUN_002b7770. */
extern unsigned int FUN_002bb360(void);
extern unsigned int FUN_002bd630(void);
/* Supplied declaration required: FUN_0037a4b8. */


void FUN_0037eeec(int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = *(unsigned int *)(param_1 + 0x60);
  temp_v0 = FUN_002bb360();
  FUN_0037a4b8(temp_v0,temp_v1);
  temp_v2 = 0;
  if (*(int *)(param_1 + 0xd0) != 0) {
    do {
      if (*(int *)(param_1 + temp_v2 * 0x340 + 0x108) != 0) {
        FUN_002b4e44();
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < *(unsigned int *)(param_1 + 0xd0));
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    temp_v0 = FUN_002bd630();
    FUN_002b7770(temp_v0,param_1 + 0x44);
    *(unsigned char *)(param_1 + 0xd) = 0;
  }
  return;
}
