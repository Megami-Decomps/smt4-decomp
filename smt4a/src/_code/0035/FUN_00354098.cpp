/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00354098` (_code @ 0x354098, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030354c(void);
int FUN_003d2158(int, int);

extern int g_lmapScene; /* 0x581288 */
extern int g_gameState; /* 0x5f15fc */
extern int DAT_005f1600; /* 0x5f1600 */

extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: FUN_0030354c. */
/* Supplied declaration required: FUN_003d2158. */


void FUN_00354098(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (g_gameState != 1) {
    if (g_gameState != 2) {
      if (g_gameState == 4) {
        if (DAT_005f1600 == 2) {
          return;
        }
        temp_v0 = gameFlagIsSet(0xf4);
        if (temp_v0 != 0) {
          temp_v0 = gameFlagIsSet(0xf6);
          if (temp_v0 == 0) {
            if (*(int *)(g_lmapScene + 0x288) != 0) {
              return;
            }
            *(unsigned int *)(g_lmapScene + 0x288) = 1;
            return;
          }
        }
      }
    }
    else {
      if (DAT_005f1600 == 5) {
        return;
      }
      temp_v0 = gameFlagIsSet(0x91);
      if (temp_v0 == 0) {
        if (*(int *)(g_lmapScene + 0x288) != 0) {
          return;
        }
        *(unsigned int *)(g_lmapScene + 0x288) = 1;
        return;
      }
    }
  }
  else {
    if (DAT_005f1600 == 1) {
      return;
    }
    temp_v0 = gameFlagIsSet(0x72);
    if (temp_v0 != 0) {
      temp_v0 = gameFlagIsSet(0xb1);
      if (temp_v0 == 0) {
        if (*(int *)(g_lmapScene + 0x288) != 0) {
          return;
        }
        *(unsigned int *)(g_lmapScene + 0x288) = 1;
        return;
      }
    }
  }
  if (*(int *)(g_lmapScene + 0x288) == 0) {
    return;
  }
  if (*(int *)(g_lmapScene + 0x288) == 3) {
    FUN_0030354c();
    if (*(int *)(g_lmapScene + 0x28c) != 0) {
      FUN_003d2158(*(int *)(g_lmapScene + 0x28c),0);
    }
  }
  temp_v0 = g_lmapScene;
  *(unsigned int *)(g_lmapScene + 0x280) = 0;
  *(unsigned int *)(temp_v0 + 0x288) = 0;
  *(unsigned int *)(temp_v0 + 0x284) = 0;
  *(unsigned int *)(temp_v0 + 0x28c) = 0;
  return;
}

} /* extern "C" */
