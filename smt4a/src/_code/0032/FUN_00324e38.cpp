/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324e38` (_code @ 0x324e38, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003d4ed8(unsigned int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_005806c0; /* 0x5806c0 */
extern int DAT_005f184c; /* 0x5f184c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_00184964(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003d4ed8. */


void FUN_00324e38(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  
  DAT_005806c0 = (DAT_005806c0 + 1) & 1;
  temp_v0 = FUN_00184964(0xfffffff6,10);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = FUN_00184964(0xfffffff1,0xf);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_00184964(0xfffffff1,0xf);
  temp_v2 = temp_v1;
  if (param_1 == 0) {
    temp_v2 = 0;
  }
  VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  if ((param_1 != 0) && (temp_v2 = DAT_005806c0, param_1 == 1)) {
    temp_v2 = 1;
  }
  DAT_005806c0 = temp_v2;
  if (DAT_005f184c == 0) {
    FUN_003d4ed8(DAT_005806c0 + 0x10002a0);
    return;
  }
  if (DAT_005f184c == 1) {
    FUN_003d4ed8(DAT_005806c0 + 0x10002a2);
    return;
  }
  if (DAT_005f184c == 2) {
    FUN_003d4ed8(DAT_005806c0 + 0x10002a4);
    return;
  }
  return;
}

} /* extern "C" */
