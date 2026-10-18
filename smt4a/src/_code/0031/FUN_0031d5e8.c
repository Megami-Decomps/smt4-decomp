/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031d5e8` (_code @ 0x31d5e8, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_0057f58c; /* 0x57f58c */

/* Supplied declaration required: FUN_00203da4. */
extern unsigned int FUN_002ba85c(void);


void FUN_0031d5e8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002ba85c();
  FUN_00203da4(DAT_0057f58c,temp_v0,param_1,6,0x1a,1,0);
  return;
}
