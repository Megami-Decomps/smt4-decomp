/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00259454` (_code @ 0x259454, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_00286928. */
extern unsigned int FUN_00289640(void);
/* Supplied declaration required: FUN_0028df3c. */


void FUN_00259454(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_0028df3c(0);
  temp_v0 = FUN_00289640();
  FUN_00286928(param_1,0,temp_v0,0xf,0,param_2);
  return;
}
