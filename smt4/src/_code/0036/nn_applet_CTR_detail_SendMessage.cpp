/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_SendMessage` (_code @ 0x3618cc, 0x38 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b563c(unsigned int, int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002b563c. */


void nn_applet_CTR_detail_SendMessage
               (unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  FUN_002b563c(param_1,5,param_2,param_3,param_4);
  return;
}

} /* extern "C" */
