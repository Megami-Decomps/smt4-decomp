/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291964` (_code @ 0x291964, 0x64 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_00464a78; /* 0x464a78 */

/* Supplied declaration required: FUN_002b2d6c. */
extern unsigned int FUN_002c3290(unsigned int);


void FUN_00291964(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002c3290(param_2);
  FUN_002b2d6c(param_1,DAT_00464a78,param_2,temp_v0);
  return;
}
