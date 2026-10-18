/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efdc0` (_code @ 0x2efdc0, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int DAT_00588fe4; /* 0x588fe4 */

/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_00280070. */


void FUN_002efdc0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  float temp_v1;
  float temp_v2;
  float temp_v3;
  float temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_14;
  
  temp_v0 = DAT_00588fe4;
  if (DAT_00588fe4 != 0) {
    temp_v1 = *(float *)(DAT_00588fe4 + 0x530);
    temp_v2 = *(float *)(DAT_00588fe4 + 0x50c) + *(float *)(DAT_00588fe4 + 0x518) * temp_v1;
    temp_v3 = *(float *)(DAT_00588fe4 + 0x510) + *(float *)(DAT_00588fe4 + 0x51c) * temp_v1;
    temp_v4 = *(float *)(DAT_00588fe4 + 0x514) + *(float *)(DAT_00588fe4 + 0x520) * temp_v1;
    temp_v5 = 0;
    temp_v6 = 0x3f800000;
    uStack_14 = 0;
    FUN_0014f0dc(DAT_00588fe4,DAT_00588fe4 + 0x50c,&temp_v2,&temp_v5);
    FUN_00280070(temp_v0,0);
  }
  return;
}
