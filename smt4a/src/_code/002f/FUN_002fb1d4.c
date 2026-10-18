/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb1d4` (_code @ 0x2fb1d4, 0x16 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_4_stack;

/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002e726c. */


unsigned int
FUN_002fb1d4(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0 [2];
  
  puVar1 = temp_v0;
  temp_v0[0] = param_4;
  FUN_002e726c(puVar1,*param_1);
  if ((int)puVar1 < 0) {
    FUN_002e3140();
  }
  return temp_v0[0];
}
