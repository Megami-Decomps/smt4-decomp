/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019601c` (_code @ 0x19601c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019618c(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_8: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_8_stack;

extern unsigned int DAT_0061a50c; /* 0x61a50c */

/* Supplied declaration required: FUN_0019618c. */


void FUN_0019601c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 1 native warning(s); review required */
  FUN_0019618c(DAT_0061a50c,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

} /* extern "C" */
