/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00256224` (_code @ 0x256224, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b2b88(unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_00464a78; /* 0x464a78 */
extern unsigned int DAT_00464a80; /* 0x464a80 */

/* Supplied declaration required: FUN_002b2b88. */
extern unsigned int FUN_002c30c4(void);


void FUN_00256224(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002c30c4();
  FUN_002b2b88(DAT_00464a80,DAT_00464a78,param_1,temp_v0);
  return;
}

} /* extern "C" */
