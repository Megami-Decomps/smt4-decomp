/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024ecc0` (_code @ 0x24ecc0, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00138954(unsigned int, unsigned int, int);

extern int g_bustupCutAnim; /* 0x43dfc0 */

/* Supplied declaration required: FUN_00138954. */
extern int jobIsValid(unsigned int);


int FUN_0024ecc0(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v0 = g_bustupCutAnim;
  temp_v2 = 2;
  temp_v3 = g_bustupCutAnim + param_2 * 4;
  if (*(int *)(temp_v3 + 0x630) != param_1) {
    temp_v4 = *(int *)(g_bustupCutAnim + 0x630) == param_1;
    if (temp_v4) {
      *(unsigned int *)(g_bustupCutAnim + 0x630) = 0;
    }
    if (temp_v4) {
      temp_v2 = 3;
    }
    temp_v4 = *(int *)(temp_v0 + 0x634) == param_1;
    if (temp_v4) {
      *(unsigned int *)(temp_v0 + 0x634) = 0;
    }
    if (temp_v4) {
      temp_v2 = 3;
    }
    temp_v4 = *(int *)(temp_v0 + 0x638) == param_1;
    if (temp_v4) {
      *(unsigned int *)(temp_v0 + 0x638) = 0;
    }
    if (temp_v4) {
      temp_v2 = 3;
    }
    temp_v4 = *(int *)(temp_v0 + 0x63c) == param_1;
    if (temp_v4) {
      *(unsigned int *)(temp_v0 + 0x63c) = 0;
    }
    if (temp_v4) {
      temp_v2 = 3;
    }
    temp_v1 = jobIsValid(*(unsigned int *)(temp_v3 + 0x630));
    if ((temp_v1 != 0) &&
       (FUN_00138954(*(unsigned int *)(temp_v3 + 0x630),*(unsigned int *)(temp_v0 + 0x5e0),
                     (int)*(float *)(temp_v0 + 0x5d8)), temp_v2 != 3)) {
      temp_v2 = 1;
    }
    *(int *)(temp_v3 + 0x630) = param_1;
  }
  temp_v3 = 0;
  do {
    if (*(int *)(temp_v0 + temp_v3 * 4 + 0x608) == param_1) {
      if (*(int *)(temp_v0 + 0x5ec) == 5 || *(int *)(temp_v0 + 0x5ec) == 6) {
        temp_v2 = 0;
      }
      return temp_v2;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 10);
  temp_v3 = 0;
  do {
    if (*(int *)(temp_v0 + temp_v3 * 4 + 0x608) == 0) {
      *(int *)(temp_v0 + temp_v3 * 4 + 0x608) = param_1;
      break;
    }
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 10);
  if (*(int *)(temp_v0 + 0x5ec) == 5 || *(int *)(temp_v0 + 0x5ec) == 6) {
    temp_v2 = 0;
  }
  return temp_v2;
}

} /* extern "C" */
