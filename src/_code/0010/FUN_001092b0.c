/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001092b0` (_code @ 0x1092b0, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00118f6c. */
extern int FUN_002bf8d4(unsigned int);


unsigned int FUN_001092b0(unsigned int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002bf8d4(param_1);
  if (temp_v0 == 0) {
    FUN_00118f6c(param_1,param_2,0);
  }
  return 1;
}
