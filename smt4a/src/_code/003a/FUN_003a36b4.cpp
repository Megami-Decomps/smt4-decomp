/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a36b4` (_code @ 0x3a36b4, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6dd0(int, int);
int FUN_003e4e4c(int);
int FUN_003fd63c(int, int, int);
int FUN_004bd410(int);

extern int FUN_0014af84(void);
extern int FUN_00187010(short);
extern int FUN_00187168(int);
extern int FUN_0019e52c(short);
/* Supplied declaration required: FUN_002e6dd0. */
/* Supplied declaration required: FUN_003e4e4c. */
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: FUN_004bd410. */


unsigned int FUN_003a36b4(void)

{
/* irregular: 4 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v1 = FUN_0014af84();
  temp_v5 = 0;
  temp_v4 = 0;
  do {
    temp_v0 = *(short *)(temp_v1 + temp_v4 * 2 + 0x29814);
    if (temp_v0 != 0) {
      temp_v2 = FUN_00187010(temp_v0);
      temp_v3 = FUN_0019e52c(temp_v0);
      if ((temp_v3 != 0) && ((temp_v2 == 0 || (temp_v2 = FUN_00187168(temp_v2), temp_v2 == 0)))) {
        if (temp_v5 == 0) {
          FUN_003e4e4c(temp_v0);
        }
        FUN_004bd410(temp_v0);
        temp_v5 = temp_v5 + 1;
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0xc);
  FUN_002e6dd0(temp_v1 + 0x29814,0x18);
  FUN_003fd63c(0x4f8,0,1);
  return 1;
}

} /* extern "C" */
