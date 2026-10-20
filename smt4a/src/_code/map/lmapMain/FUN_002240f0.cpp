/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002240f0` (_code @ 0x2240f0, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagSetValue(int, int);

extern int *g_popupState; /* 0x58104c */
extern int DAT_005f1ac0; /* 0x5f1ac0 */

extern int randRange(unsigned int);
extern int gameFlagIsSet(unsigned int);
extern int gameFlagStateIsOne(void);
extern int FUN_002d8b58(unsigned int, unsigned int);
/* Supplied declaration required: gameFlagSetValue. */


void FUN_002240f0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int temp_v1;
  
  if ((*g_popupState == 0) && (temp_v1 = gameFlagStateIsOne(), temp_v1 != 0)) {
    temp_v0 = 1;
    temp_v1 = gameFlagIsSet(0x111b);
    if (temp_v1 != 0) {
      temp_v1 = randRange(99);
      if (temp_v1 + 1 < 0x1f) {
        temp_v0 = 0;
      }
    }
    else {
      temp_v0 = 0;
      DAT_005f1ac0 = 0;
      gameFlagSetValue(0x111b,1);
    }
    piVar2 = g_popupState;
    if (DAT_005f1ac0 >= 1) {
      DAT_005f1ac0 = DAT_005f1ac0 - 1;
    }
    else {
      DAT_005f1ac0 = 5;
      if (!temp_v0) {
        *g_popupState = 0x15;
        piVar2[1] = 0;
        temp_v1 = FUN_002d8b58(0x16,0xbb);
        g_popupState[5] = temp_v1;
      }
    }
  }
  return;
}

} /* extern "C" */
