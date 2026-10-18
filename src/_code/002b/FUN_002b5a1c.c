/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5a1c` (_code @ 0x2b5a1c, 0xcc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

/* Supplied declaration required: FUN_0013b2a4. */
/* Supplied declaration required: FUN_002bb6b8. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b5a1c(unsigned int param_1,unsigned int *param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0;
  temp_v1 = 0;
  FUN_002bb6b8();
  if ((param_2 == (unsigned int *)0x0) || (param_3 == 0)) {
    param_2 = (unsigned int *)&temp_v0;
  }
  FUN_0013b2a4(param_1,param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
