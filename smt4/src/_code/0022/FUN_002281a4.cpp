/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002281a4` (_code @ 0x2281a4, 0x78 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002939f4(...);
int FUN_002aa568(...);

extern int FUN_00293230(void);
/* Supplied declaration required: FUN_002939f4. */
/* Supplied declaration required: FUN_002aa568. */


int FUN_002281a4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  
  FUN_002939f4();
  temp_v0 = FUN_00293230();
  if (temp_v0 != 0) {
    temp_v0 = -1;
  }
  else {
    temp_v0 = 0;
    do {
      temp_v1 = *(int *)(param_1 + 0x1cfc) + temp_v0 * 0x16 + 0x58;
      pcVar2 = "NOT_EFT";
      FUN_002aa568("NOT_EFT",temp_v1);
      if (pcVar2 == (char *)0x0) {
        return (int)*(short *)(temp_v1 + 0x10);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    temp_v0 = 0x1e;
  }
  return temp_v0;
}

} /* extern "C" */
