/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035db58` (_code @ 0x35db58, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_00588fd4; /* 0x588fd4 */

/* Supplied declaration required: FUN_001846d0. */


void FUN_0035db58(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_00588fd4;
  *(unsigned char *)(DAT_00588fd4 + 0x20ad) = 1;
  FUN_001846d0(temp_v0 + 0x274,7);
  FUN_001846d0(temp_v0 + 0x300,8);
  return;
}

} /* extern "C" */
