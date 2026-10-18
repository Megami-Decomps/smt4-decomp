/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013aa64` (_code @ 0x13aa64, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_00147bb8. */
extern unsigned int FUN_002ad4f0(void);


void FUN_0013aa64(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002ad4f0();
  FUN_00147bb8(temp_v0,param_1,param_2,param_3);
  return;
}
