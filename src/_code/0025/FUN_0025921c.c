/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025921c` (_code @ 0x25921c, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_002866b4. */
extern unsigned int FUN_002893d8(void);
/* Supplied declaration required: FUN_0028dc98. */


void FUN_0025921c(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_0028dc98(0);
  temp_v0 = FUN_002893d8();
  FUN_002866b4(param_1,0,temp_v0,0xf,0,param_2);
  return;
}
