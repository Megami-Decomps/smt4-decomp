/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00228338` (_code @ 0x228338, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002934d4(void);
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_002aa7f4. */


int FUN_00228338(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  
  FUN_00293c98();
  temp_v0 = FUN_002934d4();
  if (temp_v0 != 0) {
    temp_v0 = -1;
  }
  else {
    temp_v0 = 0;
    do {
      temp_v1 = *(int *)(param_1 + 0x1cfc) + temp_v0 * 0x16 + 0x58;
      pcVar2 = "NOT_EFT";
      FUN_002aa7f4("NOT_EFT",temp_v1);
      if (pcVar2 == (char *)0x0) {
        return (int)*(short *)(temp_v1 + 0x10);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    temp_v0 = 0x1e;
  }
  return temp_v0;
}
