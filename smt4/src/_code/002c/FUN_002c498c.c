/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c498c` (_code @ 0x2c498c, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_5_stack;

extern unsigned int DAT_00465124; /* 0x465124 */

/* Supplied declaration required: FUN_002c3944. */
extern int FUN_002c5300(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


int FUN_002c498c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                unsigned int param_5)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  nn_os_CriticalSection_Enter(DAT_00465124);
  temp_v0 = FUN_002c5300(param_1,param_2,param_3,param_4,param_5);
  if (temp_v0 != 0) {
    FUN_002c3944(temp_v0,param_4);
  }
  nn_os_CriticalSection_Leave(DAT_00465124);
  return temp_v0;
}
