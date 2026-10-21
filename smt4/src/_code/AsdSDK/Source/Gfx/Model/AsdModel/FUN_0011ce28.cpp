/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011ce28` (_code @ 0x11ce28, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001383a8(unsigned int *, unsigned int);
int threadSleepDuration(int, int);

extern int DAT_00471b90; /* 0x471b90 */
extern unsigned int DAT_00471ba4; /* 0x471ba4 */

extern unsigned int *FUN_001295ec(void);
/* Supplied declaration required: FUN_001383a8. */
/* Supplied declaration required: threadSleepDuration. */


unsigned int * FUN_0011ce28(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  while( 1 ) {
    puVar1 = &DAT_00471ba4;
    FUN_001383a8(&DAT_00471ba4,param_1);
    if (((unsigned int)puVar1 & 0x80000000) != 0) {
      temp_v0 = ((unsigned int)puVar1 >> 0x1b) - 0x20;
    }
    else {
      temp_v0 = (unsigned int)puVar1 >> 0x1b;
    }
    if (temp_v0 != 0xfffffffb) break;
    temp_v0 = (unsigned int)puVar1 & 0x7e00000;
    temp_v1 = temp_v0 == 0x800000;
    if (temp_v1) {
      temp_v0 = (unsigned int)puVar1 & 0x3ff;
    }
    if (!temp_v1 || temp_v0 != 0x3fa) break;
    threadSleepDuration(500000,0);
  }
  if (-1 < (int)puVar1) {
    puVar1 = (unsigned int *)FUN_001295ec();
    DAT_00471b90 = DAT_00471b90 + 1;
  }
  return puVar1;
}

} /* extern "C" */
