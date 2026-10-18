/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c45b4` (_code @ 0x4c45b4, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp22; /* 0x22: local_22 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern unsigned int FUN_0014aa78(void);
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e20. */


unsigned int FUN_004c45b4(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  unsigned char temp_v2 [30];
  unsigned char temp_v3;
  
  temp_v0 = FUN_0014aa78();
  FUN_003f0e20(temp_v0,param_1);
  temp_v1 = FUN_0014aa78();
  FUN_003e8bb0(temp_v2,temp_v1,temp_v0);
  VectorUnsignedToFloat((unsigned int)temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  return (unsigned int)temp_v3;
}
