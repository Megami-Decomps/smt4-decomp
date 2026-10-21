/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5214` (_code @ 0x2c5214, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0040a378(unsigned int);
int gameAddPointsClamped(unsigned int);
int FUN_0040a3c8(unsigned int);
int questCenterAddPoints(unsigned int);

extern int gameGetCounters(void);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_0040a378. */
/* Supplied declaration required: gameAddPointsClamped. */
/* Supplied declaration required: FUN_0040a3c8. */
/* Supplied declaration required: questCenterAddPoints. */


unsigned int FUN_002c5214(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v0 = temp_v0 & 0xff;
  temp_v2 = gameGetCounters();
  puVar4 = (unsigned int *)(temp_v2 + temp_v0 * 4);
  if (temp_v1 < ~*puVar4) {
    *puVar4 = *puVar4 + temp_v1;
  }
  else {
    *puVar4 = 0xffffffff;
  }
  temp_v2 = gameGetCounters();
  puVar4 = (unsigned int *)(temp_v2 + temp_v0 * 4 + 0x200);
  if (temp_v1 < ~*puVar4) {
    *puVar4 = *puVar4 + temp_v1;
  }
  else {
    *puVar4 = 0xffffffff;
  }
  if (temp_v0 != 2) {
    if (temp_v0 != 9) {
      if (temp_v0 != 0x13) {
        if (temp_v0 == 0x26) {
          gameAddPointsClamped(temp_v1);
        }
      }
      else {
        FUN_0040a378(temp_v1);
      }
    }
    else {
      questCenterAddPoints(temp_v1);
    }
  }
  else {
    FUN_0040a3c8(temp_v1);
  }
  return 1;
}

} /* extern "C" */
