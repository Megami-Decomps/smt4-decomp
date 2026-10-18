/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025beb8` (_code @ 0x25beb8, 0x12c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_0049f94a; /* 0x49f94a */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002920e4. */
extern unsigned int FUN_00297004(unsigned int, unsigned int);


void FUN_0025beb8(void)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  
  temp_v0 = FUN_00297004(0xffffffec,0x14);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = FUN_00297004(0xffffffec,0x14);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_00297004(0,100);
  temp_v1 = temp_v1 & 3;
  switch(DAT_0049f94a) {
  case 0:
    FUN_002920e4(temp_v1 + 0x1000203);
    return;
  case 1:
    FUN_002920e4(temp_v1 + 0x1000208);
    return;
  case 2:
    FUN_002920e4(temp_v1 + 0x100020d);
    return;
  case 3:
    FUN_002920e4(temp_v1 + 0x1000212);
    return;
  case 4:
    FUN_002920e4(temp_v1 + 0x1000217);
    return;
  default:
    return;
  }
}
