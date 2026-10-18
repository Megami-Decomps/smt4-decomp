/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00147914` (_code @ 0x147914, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00147cf4. */
extern unsigned int FUN_002ad264(void);


void FUN_00147914(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002ad264();
  FUN_00147cf4(temp_v0,0xffff8001,param_1,param_2);
  return;
}
