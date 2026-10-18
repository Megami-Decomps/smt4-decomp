/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1c1c` (_code @ 0x2c1c1c, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: coprocessor_storelong (CALLOTHER). */
extern unsigned int FUN_002c5300(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int FUN_002c1c1c(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_cr0; 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int in_cr0;
  
  if ((param_1 < 4) && (*(int *)(param_1 * 0x50 + 0x4e2434) == 0)) {
    temp_v0 = FUN_002c5300(0x10000,0x100,0,param_2,1);
    *(unsigned int *)(param_1 * 0x50 + 0x4e2464) = temp_v0;
    do {
      coprocessor_storelong(0,in_cr0,temp_v0);
    } while( 1 );
  }
  return 0;
}
