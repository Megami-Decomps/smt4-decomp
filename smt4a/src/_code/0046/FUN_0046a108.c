/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046a108` (_code @ 0x46a108, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0014e314. */
extern unsigned int FUN_00156850(unsigned short, unsigned int);
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_0016c4b8. */
extern int FUN_0031d174(unsigned int *);


void FUN_0046a108(unsigned int *param_1)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  
  if ((*param_1 & 0x20) == 0) {
    return;
  }
  FUN_0016c4b8(DAT_0059dbb4,0);
  FUN_0014e314(0x80,0x80,0x80);
  temp_v2 = param_1[0xd7];
  if ((int)param_1[0xd8] < (int)param_1[0xd7]) {
    temp_v2 = param_1[0xd8];
  }
  if (temp_v2 == 0) {
    FUN_00162790(2,0xffffffff,0x533528);
    return;
  }
  temp_v1 = 0;
  if (temp_v1 < (int)temp_v2) {
    do {
      temp_v0 = FUN_00156850((short)param_1[temp_v1 + 0xf3],0);
      VectorSignedToFloat(temp_v1 * 0xe + 8,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00162790(2,0xffffffff,temp_v0);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < (int)temp_v2);
  }
  temp_v1 = FUN_0031d174(param_1 + 0xd6);
  VectorSignedToFloat(temp_v1 * 0xe + 8,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,0xffffffff,0x533560);
  return;
}
