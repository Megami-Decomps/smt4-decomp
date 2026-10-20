/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00373dcc` (_code @ 0x373dcc, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004a998c(unsigned int);
int FUN_004a9c04(unsigned int);
int FUN_004aa2bc(...);

extern unsigned int DAT_0057a9c8; /* 0x57a9c8 */

extern int scrGetArg(void);
/* Supplied declaration required: FUN_004a998c. */
/* Supplied declaration required: FUN_004a9c04. */
extern int FUN_004a9d40(unsigned int);
/* Supplied declaration required: FUN_004aa2bc. */


unsigned int FUN_00373dcc(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = scrGetArg();
  if (temp_v0 != 0) {
    temp_v0 = FUN_004aa2bc();
    if (temp_v0 != 0) {
      FUN_004a998c(DAT_0057a9c8);
    }
    temp_v0 = FUN_004a9d40(DAT_0057a9c8);
    if (temp_v0 == 0) {
      return 0;
    }
  }
  else {
    temp_v0 = FUN_004a9d40(DAT_0057a9c8);
    if (temp_v0 != 0) {
      FUN_004a9c04(DAT_0057a9c8);
    }
    temp_v0 = FUN_004aa2bc(DAT_0057a9c8);
    if (temp_v0 == 0) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
