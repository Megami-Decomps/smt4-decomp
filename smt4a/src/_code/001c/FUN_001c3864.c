/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c3864` (_code @ 0x1c3864, 0x124 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char LAB_002dc6c0; /* 0x2dc6c0 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0019a364. */
/* Supplied declaration required: FUN_001bcd48. */
/* Supplied declaration required: FUN_001cc6d0. */
/* Supplied declaration required: FUN_002e3140. */


void FUN_001c3864(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  int uStack_20;
  
  uStack_20 = param_4;
  while (*param_1 != param_1[1]) {
    piVar3 = param_1 + 0x1148;
    while (*param_1 != param_1[1]) {
      software_interrupt(0x24);
      if (*piVar3 < 0) {
        FUN_002e3140();
      }
      temp_v0 = *param_1;
      puVar2 = (unsigned int *)&uStack_20;
      FUN_0019a364(&uStack_20,*piVar3,1);
      if ((int)puVar2 < 0) {
        FUN_002e3140();
      }
      FUN_001cc6d0(param_1,param_1 + temp_v0 * 0x2e + 3);
      software_interrupt(0x24);
      if (*piVar3 < 0) {
        FUN_002e3140();
      }
      if ((char)param_1[temp_v0 * 0x2e + 5] == '\x03') {
        (**(romwright_code **)param_1[*param_1 * 0x2e + 3])();
        temp_v0 = *param_1;
        *param_1 = temp_v0 + 1;
        if (temp_v0 + 1 >= 0x60) {
          *param_1 = 0;
        }
      }
      puVar2 = (unsigned int *)&uStack_20;
      FUN_0019a364(&uStack_20,*piVar3,1);
      if ((int)puVar2 < 0) {
        FUN_002e3140();
      }
    }
    FUN_001bcd48(&LAB_002dc6c0,0);
  }
  return;
}
