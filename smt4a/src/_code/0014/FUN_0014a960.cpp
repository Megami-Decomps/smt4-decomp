/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014a960` (_code @ 0x14a960, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016c4b8(unsigned int);
int FUN_0019e3d0(unsigned int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int DAT_0057f65c; /* 0x57f65c */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0019e3d0. */


void FUN_0014a960(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  
  temp_v1 = *(unsigned int *)(DAT_0057f65c + 0x147c);
  if ((param_1 == 0) && (*(char *)(DAT_0057f65c + 0x1451) != '\0')) {
    temp_v0 = *(int *)(DAT_0057f65c + 8);
  }
  else {
    temp_v0 = *(int *)(DAT_0057f65c + 4);
  }
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(temp_v0 + 0x40) = 1;
  VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x18),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(unsigned int *)(temp_v0 + 0x14),(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0016c4b8(DAT_0059dbb4);
  FUN_0019e3d0(temp_v1);
  return;
}

} /* extern "C" */
