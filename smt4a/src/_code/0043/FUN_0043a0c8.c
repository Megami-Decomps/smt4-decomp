/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043a0c8` (_code @ 0x43a0c8, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_006462a4; /* 0x6462a4 */
extern int DAT_006462b0; /* 0x6462b0 */
extern int DAT_006462b4; /* 0x6462b4 */
extern int DAT_006462b8; /* 0x6462b8 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern int FUN_0016f864(void);
/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_0043a040. */
extern unsigned int *FUN_0043a1d8(unsigned int *);
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned int * FUN_0043a0c8(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  nn_os_CriticalSection_Enter(&DAT_006462a4);
  if (0 < DAT_006462b0) {
    DAT_006462b0 = DAT_006462b0 + 1;
    nn_os_CriticalSection_Leave(&DAT_006462a4);
    return (unsigned int *)0x0;
  }
  temp_v0 = FUN_0016f864();
  if (temp_v0 < 0) {
    FUN_00195fc8();
  }
  puVar2 = (unsigned int *)&DAT_006462b4;
  FUN_0043a040(&DAT_006462b4,"ssl:C");
  if (-1 < (int)puVar2) {
    DAT_006462b8 = DAT_006462b4;
    puVar3 = (unsigned int *)FUN_0043a1d8((unsigned int *)&DAT_006462b8);
    if (((unsigned int)puVar3 & 0x80000000) != 0) {
      if (DAT_006462b4 != 0) {
        software_interrupt(0x23);
        DAT_006462b4 = 0;
      }
      nn_os_CriticalSection_Leave(&DAT_006462a4);
      return puVar3;
    }
    DAT_006462b0 = 1;
  }
  nn_os_CriticalSection_Leave(&DAT_006462a4);
  return puVar2;
}
