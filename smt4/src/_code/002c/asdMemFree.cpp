/* NON_MATCHING: romwright 0.5.0 decompilation of `asdMemFree` (_code @ 0x2c415c, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemoryFreeRegion(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_00465124; /* 0x465124 */
extern unsigned int DAT_00465144; /* 0x465144 */
extern unsigned int DAT_00465148; /* 0x465148 */
extern int DAT_00465154; /* 0x465154 */
extern int DAT_00465158; /* 0x465158 */

/* Supplied declaration required: asdMemoryFreeRegion. */
extern unsigned int FUN_001246cc(unsigned int);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void asdMemFree(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  nn_os_CriticalSection_Enter(DAT_00465124);
  if (((param_1 < DAT_00465144) || (DAT_00465154 + DAT_00465144 < param_1)) &&
     ((param_1 < DAT_00465148 || (DAT_00465148 + DAT_00465158 < param_1)))) {
    param_1 = FUN_001246cc(param_1);
  }
  asdMemoryFreeRegion(param_1);
  nn_os_CriticalSection_Leave(DAT_00465124);
  return;
}

} /* extern "C" */
