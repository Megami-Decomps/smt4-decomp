/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c498c` (_code @ 0x2c498c, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned int DAT_00465124; /* 0x465124 */

/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: FUN_002c5300. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


int FUN_002c498c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5)

{
/* irregular: 4 native warning(s); review required */
  nn_os_CriticalSection_Enter(DAT_00465124);
  FUN_002c5300(param_1,param_2,param_3,param_4,param_5);
  if (param_1 != 0) {
    FUN_002c3944();
  }
  nn_os_CriticalSection_Leave(DAT_00465124);
  return param_1;
}
