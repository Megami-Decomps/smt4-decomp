/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001468a8` (_code @ 0x1468a8, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_005c0ad4; /* 0x5c0ad4 */
extern unsigned char DAT_00643310; /* 0x643310 */

extern int FUN_001a0af4(unsigned char *, int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002e3140. */


void FUN_001468a8(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_005c0ad4 != '\0') && (*(int *)(param_1 + 8) == 0)) {
    temp_v0 = FUN_001a0af4(&DAT_00643310,param_1,(param_2 + 0xfffU) & 0xfffff000,0);
    if (temp_v0 == 0) {
      FUN_002e3140(0xd8601837);
    }
    *(unsigned char *)(param_1 + 0x10) = 0;
  }
  return;
}
