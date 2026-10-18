/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027ff10` (_code @ 0x27ff10, 0x128 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_00447538; /* 0x447538 */
extern int DAT_0049fb38; /* 0x49fb38 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002920e4. */
extern unsigned int FUN_00297004(unsigned int, unsigned int);


void FUN_0027ff10(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  
  DAT_00447538 = (DAT_00447538 + 1) & 1;
  temp_v0 = FUN_00297004(0xfffffff6,10);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = FUN_00297004(0xfffffff1,0xf);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_00297004(0xfffffff1,0xf);
  temp_v2 = temp_v1;
  if (param_1 == 0) {
    temp_v2 = 0;
  }
  VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((param_1 != 0) && (temp_v2 = DAT_00447538, param_1 == 1)) {
    temp_v2 = 1;
  }
  DAT_00447538 = temp_v2;
  if (DAT_0049fb38 == 0) {
    FUN_002920e4(DAT_00447538 + 0x10001f5);
    return;
  }
  if (DAT_0049fb38 == 1) {
    FUN_002920e4(DAT_00447538 + 0x10001f7);
    return;
  }
  if (DAT_0049fb38 == 2) {
    FUN_002920e4(DAT_00447538 + 0x10001f9);
    return;
  }
  return;
}
