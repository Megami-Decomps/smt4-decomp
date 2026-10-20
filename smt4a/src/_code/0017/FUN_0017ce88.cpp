/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017ce88` (_code @ 0x17ce88, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017e22c(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_11: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_11_stack;

extern unsigned char DAT_0061a470; /* 0x61a470 */

/* Supplied declaration required: FUN_0017e22c. */


void FUN_0017ce88(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,
                 unsigned int param_9,unsigned int param_10,unsigned int param_11)

{
/* irregular: 1 native warning(s); review required */
  FUN_0017e22c((*(unsigned int *)((unsigned char *)&DAT_0061a470 + 0x9c)),param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10,param_11);
  return;
}

} /* extern "C" */
