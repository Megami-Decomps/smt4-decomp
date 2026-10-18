/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5820` (_code @ 0x2b5820, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_8_stack;

extern int DAT_0044e370; /* 0x44e370 */
extern int DAT_0044e374; /* 0x44e374 */
extern int DAT_0044e378; /* 0x44e378 */
extern int DAT_0044e37c; /* 0x44e37c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002bce48. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b5820(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
                 ,unsigned int param_6,int param_7,int param_8)

{
/* irregular: 4 native warning(s); review required */
  if ((DAT_0044e378 != param_7 || DAT_0044e37c != param_8) &&
     (param_7 != DAT_0044e370 || param_8 != DAT_0044e374)) {
    software_interrupt(0x28);
  }
  if (param_4 >= 0x1001) {
    FUN_002bce48(param_2 & 0x10000);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
