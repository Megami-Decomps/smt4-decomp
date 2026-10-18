/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023716c` (_code @ 0x23716c, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp138; /* 0x138: local_138 */
} param_2_stack;

/* Supplied declaration required: FUN_001abae0. */
/* Supplied declaration required: FUN_001add78. */
/* Supplied declaration required: FUN_001c5b68. */


void FUN_0023716c(unsigned int param_1,unsigned char param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [32];
  unsigned char temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = 0xe7e3ffff;
  FUN_001c5b68(temp_v0);
  FUN_001add78(temp_v0,param_1);
  temp_v1 = param_2;
  FUN_001abae0(temp_v0);
  return;
}
