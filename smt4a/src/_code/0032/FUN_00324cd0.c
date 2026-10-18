/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324cd0` (_code @ 0x324cd0, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_005f162e; /* 0x5f162e */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern unsigned int FUN_00184964(unsigned int, unsigned int);
/* Supplied declaration required: FUN_003d4ed8. */


void FUN_00324cd0(void)

{
/* irregular: irregular input(s): in_fpscr; 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int in_fpscr;
  
  temp_v0 = FUN_00184964(0xffffffec,0x14);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v0 = FUN_00184964(0xffffffec,0x14);
  VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_00184964(0,100);
  temp_v1 = temp_v1 & 3;
  switch(DAT_005f162e) {
  case 0:
    FUN_003d4ed8(temp_v1 + 0x10002ac);
    return;
  case 1:
    FUN_003d4ed8(temp_v1 + 0x10002b1);
    return;
  case 2:
    FUN_003d4ed8(temp_v1 + 0x10002b6);
    return;
  case 3:
    FUN_003d4ed8(temp_v1 + 0x10002bb);
    return;
  case 4:
    FUN_003d4ed8(temp_v1 + 0x10002c0);
    return;
  case 5:
    FUN_003d4ed8(temp_v1 + 0x10002d5);
    return;
  default:
    return;
  }
}
