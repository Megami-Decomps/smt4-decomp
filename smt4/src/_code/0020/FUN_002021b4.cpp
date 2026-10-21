/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002021b4` (_code @ 0x2021b4, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00343a04(unsigned int);
int gameAddPointsClamped(unsigned int);
int FUN_00343a74(unsigned int);
int questCenterAddPoints(unsigned int);

extern int gameGetCounters(void);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_00343a04. */
/* Supplied declaration required: gameAddPointsClamped. */
/* Supplied declaration required: FUN_00343a74. */
/* Supplied declaration required: questCenterAddPoints. */


unsigned int FUN_002021b4(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar5;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v0 = temp_v0 & 0xff;
  temp_v2 = gameGetCounters();
  puVar5 = (unsigned int *)(temp_v2 + temp_v0 * 4);
  temp_v3 = *puVar5;
  if (temp_v1 < ~temp_v3) {
    temp_v3 = temp_v3 + temp_v1;
  }
  else {
    temp_v3 = 0xffffffff;
  }
  *puVar5 = temp_v3;
  if (temp_v0 != 2) {
    if (temp_v0 != 9) {
      if (temp_v0 != 0x13) {
        if (temp_v0 == 0x26) {
          gameAddPointsClamped(temp_v1);
        }
      }
      else {
        FUN_00343a04(temp_v1);
      }
    }
    else {
      questCenterAddPoints(temp_v1);
    }
  }
  else {
    FUN_00343a74(temp_v1);
  }
  return 1;
}

} /* extern "C" */
