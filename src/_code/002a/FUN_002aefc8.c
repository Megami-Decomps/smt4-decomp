/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aefc8` (_code @ 0x2aefc8, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_00464a7c; /* 0x464a7c */

/* Supplied declaration required: FUN_002b2d6c. */
extern int FUN_002c3290(unsigned int);


void FUN_002aefc8(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((param_1 < 9) && (temp_v0 = FUN_002c3290(param_2), temp_v0 != 0)) {
    FUN_002b2d6c(*(unsigned int *)(param_1 * 4 + 0x409430),DAT_00464a7c,param_2);
    return;
  }
  return;
}
