/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043f878` (_code @ 0x43f878, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char DAT_005c0b00; /* 0x5c0b00 */
extern int DAT_005c0b04; /* 0x5c0b04 */
extern unsigned char DAT_0064600c; /* 0x64600c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0044045c. */
/* Supplied declaration required: nn_os_TransferMemoryBlock_Finalize. */


void FUN_0043f878(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  DAT_005c0b00 = 0;
  temp_v0 = DAT_005c0b04;
  FUN_0044045c(&temp_v0);
  if (DAT_005c0b04 != 0) {
    software_interrupt(0x23);
    DAT_005c0b04 = 0;
  }
  nn_os_TransferMemoryBlock_Finalize(&DAT_0064600c);
  return;
}
