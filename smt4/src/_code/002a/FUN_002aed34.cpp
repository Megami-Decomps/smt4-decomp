/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aed34` (_code @ 0x2aed34, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b2b88(unsigned int, unsigned int, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_00464a7c; /* 0x464a7c */

/* Supplied declaration required: FUN_002b2b88. */
extern int FUN_002c30c4(unsigned int);


void FUN_002aed34(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((param_1 < 9) && (temp_v0 = FUN_002c30c4(param_2), temp_v0 != 0)) {
    FUN_002b2b88(*(unsigned int *)(param_1 * 4 + 0x4093bc),DAT_00464a7c,param_2);
    return;
  }
  return;
}

} /* extern "C" */
