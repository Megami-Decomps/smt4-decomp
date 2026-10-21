/* NON_MATCHING: romwright 0.5.0 decompilation of `debugDrawText` (_code @ 0x2916c0, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b2b88(unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_00464a78; /* 0x464a78 */

/* Supplied declaration required: FUN_002b2b88. */
extern unsigned int libc_strlen(unsigned int);


void debugDrawText(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = libc_strlen(param_2);
  FUN_002b2b88(param_1,DAT_00464a78,param_2,temp_v0);
  return;
}

} /* extern "C" */
