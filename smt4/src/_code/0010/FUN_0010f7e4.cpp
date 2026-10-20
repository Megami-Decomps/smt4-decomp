/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010f7e4` (_code @ 0x10f7e4, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0011bba0(unsigned char *, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_5_stack;

extern unsigned char LAB_0010f818; /* 0x10f818 */

/* Supplied declaration required: FUN_0011bba0. */


void FUN_0010f7e4(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  FUN_0011bba0(&LAB_0010f818,param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
