/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002240f0` (_code @ 0x2240f0, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fd63c(int, int);

extern int *DAT_0058104c; /* 0x58104c */
extern int DAT_005f1ac0; /* 0x5f1ac0 */

extern int FUN_0014bef4(unsigned int);
extern int FUN_0018719c(unsigned int);
extern int FUN_002d0044(void);
extern int FUN_002d8b58(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003fd63c. */


void FUN_002240f0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int temp_v1;
  
  if ((*DAT_0058104c == 0) && (temp_v1 = FUN_002d0044(), temp_v1 != 0)) {
    temp_v0 = 1;
    temp_v1 = FUN_0018719c(0x111b);
    if (temp_v1 != 0) {
      temp_v1 = FUN_0014bef4(99);
      if (temp_v1 + 1 < 0x1f) {
        temp_v0 = 0;
      }
    }
    else {
      temp_v0 = 0;
      DAT_005f1ac0 = 0;
      FUN_003fd63c(0x111b,1);
    }
    piVar2 = DAT_0058104c;
    if (DAT_005f1ac0 >= 1) {
      DAT_005f1ac0 = DAT_005f1ac0 - 1;
    }
    else {
      DAT_005f1ac0 = 5;
      if (!temp_v0) {
        *DAT_0058104c = 0x15;
        piVar2[1] = 0;
        temp_v1 = FUN_002d8b58(0x16,0xbb);
        DAT_0058104c[5] = temp_v1;
      }
    }
  }
  return;
}

} /* extern "C" */
