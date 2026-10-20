/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c7d94` (_code @ 0x1c7d94, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001cdb78(unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int FUN_001a2a5c(void);
/* Supplied declaration required: FUN_001cdb78. */


void FUN_001c7d94(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_001a2a5c();
  FUN_001cdb78(temp_v0,0xffff8001,param_1,param_2);
  return;
}

} /* extern "C" */
