/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00364e28` (_code @ 0x364e28, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00364ebc. */


void FUN_00364e28(unsigned int param_1,int *param_2)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int in_fpscr;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_28;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v5 = 0;
  temp_v1 = temp_v5;
  temp_v2 = temp_v5;
  if (param_2 != (int *)0x0) {
    puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 0xc))(param_2);
    temp_v2 = VectorSignedToFloat(*puVar1,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v0 = (**(romwright_code **)(*param_2 + 0xc))(param_2);
    temp_v5 = VectorSignedToFloat(*(unsigned int *)(temp_v0 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v7 = 0x3f800000;
  temp_v3 = temp_v1;
  temp_v4 = temp_v1;
  uStack_28 = temp_v2;
  temp_v6 = temp_v1;
  FUN_00364ebc(param_1,param_2,&temp_v3);
  return;
}
