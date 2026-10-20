/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00223fac` (_code @ 0x223fac, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int randRange(int);
int gameFlagSetValue(int, int);

extern int *g_popupState; /* 0x58104c */
extern int DAT_005f1ac4; /* 0x5f1ac4 */

/* Supplied declaration required: randRange. */
extern int gameFlagIsSet(unsigned int);
extern int FUN_002d0044(void);
extern int FUN_002d8b58(unsigned int, unsigned int);
/* Supplied declaration required: gameFlagSetValue. */


void FUN_00223fac(void)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  if ((*g_popupState == 0) && (temp_v0 = FUN_002d0044(), temp_v0 != 0)) {
    temp_v0 = gameFlagIsSet(0x111a);
    if (temp_v0 != 0) {
      randRange(99);
    }
    else {
      DAT_005f1ac4 = 0;
      gameFlagSetValue(0x111a,1);
    }
    piVar1 = g_popupState;
    if (DAT_005f1ac4 < 1) {
      DAT_005f1ac4 = 5;
      *g_popupState = 0x14;
      piVar1[1] = 0;
      temp_v0 = FUN_002d8b58(0x15,0xbb);
      g_popupState[5] = temp_v0;
    }
    else {
      DAT_005f1ac4 = DAT_005f1ac4 - 1;
    }
  }
  return;
}

} /* extern "C" */
