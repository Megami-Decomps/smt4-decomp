/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f6478` (_code @ 0x4f6478, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_0030ea58. */
extern int FUN_003e8430(void);


int FUN_004f6478(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  
  FUN_0014aa78();
  temp_v0 = FUN_003e8430();
  if (temp_v0 != 0) {
    temp_v0 = -1;
  }
  else {
    temp_v0 = 0;
    do {
      temp_v1 = *(int *)(param_1 + 0x1f54) + temp_v0 * 0x16 + 0x58;
      pcVar2 = "NOT_EFT";
      FUN_0030ea58("NOT_EFT",temp_v1);
      if (pcVar2 == (char *)0x0) {
        return (int)*(short *)(temp_v1 + 0x10);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    temp_v0 = 0x1e;
  }
  return temp_v0;
}
