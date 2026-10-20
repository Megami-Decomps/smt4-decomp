/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146e30` (_code @ 0x146e30, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015a450(unsigned char *);
int FUN_00195fc8(void);
int software_interrupt(int);

extern int DAT_0058928c; /* 0x58928c */
extern int DAT_00589290; /* 0x589290 */
extern unsigned int DAT_00589298; /* 0x589298 */
extern unsigned char DAT_0061a6a4; /* 0x61a6a4 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0015a450. */
/* Supplied declaration required: FUN_00195fc8. */


void FUN_00146e30(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0058928c != 0) {
    if (DAT_00589290 != 0) {
      FUN_00195fc8();
    }
    temp_v0 = 0;
    do {
      if (*(int *)(temp_v0 * 4 + 0x61a644) != 0) {
        FUN_00195fc8();
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 8);
    FUN_0015a450(&DAT_0061a6a4);
    software_interrupt(0x23);
    DAT_0058928c = 0;
    DAT_00589298 = 0;
  }
  return;
}

} /* extern "C" */
