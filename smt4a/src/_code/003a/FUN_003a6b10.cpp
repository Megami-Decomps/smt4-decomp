/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a6b10` (_code @ 0x3a6b10, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(int, int, unsigned int, int, int);
int FUN_001846d0(int, int);
int FUN_00184b80(int, int);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0057f590; /* 0x57f590 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184b80. */


unsigned int FUN_003a6b10(unsigned int param_1)

{
/* irregular: irregular input(s): in_fpscr; 5 native warning(s); review required */
  int temp_v0;
  unsigned int in_fpscr;
  unsigned int temp_v1;
  
  temp_v0 = DAT_0057f590;
  *(unsigned char *)(DAT_0057f590 + 0x17d) = 1;
  *(unsigned int *)(temp_v0 + 0x170) = 0x14;
  temp_v1 = VectorSignedToFloat(param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v0 + 0x178) = param_1;
  *(unsigned int *)(temp_v0 + 0x174) = 0x14;
  *(unsigned int *)(temp_v0 + 0x18c) = 0;
  *(unsigned char *)(temp_v0 + 0x17c) = 1;
  *(unsigned int *)(temp_v0 + 0x180) = param_1;
  *(unsigned int *)(temp_v0 + 0x184) = temp_v1;
  FUN_0014e188(temp_v0 + 0xb00,8,0xffffffff,temp_v0 + 0x194,0xb);
  FUN_00184b80(temp_v0 + 0xb00,0x17);
  FUN_001846d0(temp_v0 + 0xb00,6);
  return 1;
}

} /* extern "C" */
