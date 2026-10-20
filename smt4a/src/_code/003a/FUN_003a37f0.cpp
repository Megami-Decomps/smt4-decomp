/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a37f0` (_code @ 0x3a37f0, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6dd0(int, int);
int FUN_003e48dc(int);
int FUN_003e4e4c(int);
int FUN_003e503c(void);
int FUN_003fd63c(int, int);

extern int FUN_0014af84(void);
extern int FUN_00187010(short);
extern int FUN_00187168(void);
/* Supplied declaration required: FUN_002e6dd0. */
/* Supplied declaration required: FUN_003e48dc. */
/* Supplied declaration required: FUN_003e4e4c. */
/* Supplied declaration required: FUN_003e503c. */
/* Supplied declaration required: FUN_003fd63c. */


unsigned int FUN_003a37f0(void)

{
/* irregular: 5 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v1 = FUN_0014af84();
  FUN_002e6dd0(temp_v1 + 0x29814,0x18);
  temp_v5 = 0;
  temp_v4 = 0;
  do {
    temp_v2 = temp_v4;
    FUN_003e503c();
    if ((temp_v2 != 0) && (temp_v3 = FUN_00187168(), temp_v3 != 0)) {
      temp_v3 = temp_v5 * 2;
      temp_v5 = temp_v5 + 1;
      *(unsigned short *)(temp_v1 + temp_v3 + 0x29814) = *(unsigned short *)(temp_v2 + 300);
    }
    temp_v4 = temp_v4 + 1;
  } while ((int)temp_v4 < 0xc);
  FUN_003e4e4c(0);
  temp_v5 = 0;
  do {
    temp_v0 = *(short *)(temp_v1 + temp_v5 * 2 + 0x29814);
    if (((temp_v0 != 0) && (temp_v3 = FUN_00187010(temp_v0), temp_v3 != 0)) &&
       (temp_v3 = FUN_00187168(), temp_v3 != 0)) {
      FUN_003e48dc(temp_v0);
    }
    temp_v5 = temp_v5 + 1;
  } while (temp_v5 < 0xc);
  FUN_003fd63c(0x4f8,1);
  return 1;
}

} /* extern "C" */
