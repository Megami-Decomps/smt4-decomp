/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e5780` (_code @ 0x2e5780, 0x42 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_0064c004; /* 0x64c004 */
extern unsigned char DAT_0064c010; /* 0x64c010 */

/* Supplied declaration required: FUN_001006ec. */


void FUN_002e5780(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  if ((unsigned char *)*param_1 != &DAT_0064c010) {
    piVar2 = (int *)((unsigned char *)*param_1 + -0xc);
    if ((*piVar2 == -1) ||
       ((piVar2 != (int *)&DAT_0064c004 && (temp_v0 = *piVar2 - 1, *piVar2 = temp_v0, temp_v0 == -1)))) {
      FUN_001006ec(*param_1 - 0xc,*(int *)(*param_1 - 8) + 0xe,0,param_4,param_4);
    }
  }
  return;
}
