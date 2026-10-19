/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019a318` (_code @ 0x19a318, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0016e144. */
/* Supplied declaration required: FUN_0017fc88. */
extern unsigned int FUN_0017fcf8(void);
/* Supplied declaration required: FUN_00188cb4. */
extern void nn_os_ThreadLocalStorage_ClearAllSlots(void);


unsigned int FUN_0019a318(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  nn_os_ThreadLocalStorage_ClearAllSlots();
  FUN_0016e144();
  FUN_0017fc88();
  (*(romwright_code *)param_1[1])(param_1[2],param_1[3]);
  (*(romwright_code *)*param_1)(param_1[3]);
  FUN_00188cb4();
  temp_v0 = 0;
  if (param_1[4] != 0) {
    temp_v0 = FUN_0017fcf8();
  }
  software_interrupt(9);
  return temp_v0;
}
