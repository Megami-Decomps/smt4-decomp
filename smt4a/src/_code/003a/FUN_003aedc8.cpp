/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003aedc8` (_code @ 0x3aedc8, 0x180 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableReleaseNode(int, unsigned int);
int FUN_001acf98(int, unsigned int);

extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: asdTMTexTableReleaseNode. */
/* Supplied declaration required: FUN_001acf98. */
extern unsigned int FUN_002adba8(int);


void FUN_003aedc8(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v4 = 0;
  do {
    if (param_2 != temp_v4) {
      temp_v5 = param_1 + temp_v4 * 4;
      if (*(int *)(temp_v5 + 0x94) == 1) {
        *(unsigned int *)(temp_v5 + 0x94) = 0;
      }
      temp_v1 = FUN_002adba8(temp_v4);
      temp_v2 = asdTMTexTableNodeIsLoaded(0x2e,temp_v1);
      if (((temp_v2 != 0) && (*(int *)(temp_v5 + 0x94) == 3)) && (param_1 != 0)) {
        temp_v1 = FUN_002adba8(temp_v4);
        temp_v3 = asdTMTexTableNodeIsLoaded(0x2e,temp_v1);
        temp_v2 = 0;
        if (temp_v3 != 0) {
          temp_v2 = *(int *)(temp_v5 + 0x94);
        }
        if (temp_v3 != 0 && temp_v2 != 2) {
          temp_v1 = FUN_002adba8(temp_v4);
          asdTMTexTableReleaseNode(0x2e,temp_v1);
          *(unsigned int *)(temp_v5 + 0x94) = 0;
        }
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 9);
  temp_v0 = 0;
  temp_v4 = 0;
  do {
    temp_v5 = param_1 + temp_v4 * 4;
    if (*(int *)(temp_v5 + 0x94) == 2) {
      temp_v1 = FUN_002adba8(temp_v4);
      temp_v2 = asdTMTexTableNodeIsLoaded(0x2e,temp_v1);
      if (temp_v2 == 0) {
        temp_v0 = 1;
      }
      else {
        *(unsigned int *)(temp_v5 + 0x94) = 3;
      }
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 9);
  if (!temp_v0) {
    temp_v4 = 0;
    while (*(int *)(param_1 + temp_v4 * 4 + 0x94) != 1) {
      temp_v4 = temp_v4 + 1;
      if (temp_v4 >= 9) {
        return;
      }
    }
    if (param_1 != 0) {
      temp_v1 = FUN_002adba8(temp_v4);
      temp_v5 = asdTMTexTableNodeIsLoaded(0x2e,temp_v1);
      if ((temp_v5 == 0) &&
         (param_1 = param_1 + temp_v4 * 4, temp_v5 = *(int *)(param_1 + 0x94), temp_v5 != 3 && temp_v5 != 2)
         ) {
        temp_v1 = FUN_002adba8(temp_v4);
        FUN_001acf98(0x2e,temp_v1);
        *(unsigned int *)(param_1 + 0x94) = 2;
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
