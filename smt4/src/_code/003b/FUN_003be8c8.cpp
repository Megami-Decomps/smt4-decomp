/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003be8c8` (_code @ 0x3be8c8, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00247478(unsigned char [29], unsigned int, unsigned int);
int FUN_00282924(unsigned int, unsigned int);
int VectorUnsignedToFloat(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp13; /* 0x13: local_13 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00247478. */
/* Supplied declaration required: FUN_00282924. */
extern unsigned int btlGetMainState(void);


unsigned int FUN_003be8c8(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  unsigned char temp_v2 [29];
  unsigned char temp_v3;
  
  temp_v0 = btlGetMainState();
  FUN_00282924(temp_v0,param_1);
  temp_v1 = btlGetMainState();
  FUN_00247478(temp_v2,temp_v1,temp_v0);
  VectorUnsignedToFloat((unsigned int)temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  return (unsigned int)temp_v3;
}

} /* extern "C" */
