/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050f964` (_code @ 0x50f964, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_003e329c; /* 0x3e329c */
extern unsigned char DAT_0061a404; /* 0x61a404 */

/* Supplied declaration required: FUN_0015a21c. */
/* Supplied declaration required: FUN_002f4370. */


void FUN_0050f964(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  FUN_0015a21c();
  temp_v0 = FUN_0015a21c(&DAT_0061a404,&LAB_003e329c,0x100000);
  FUN_002f4370(temp_v0 - 0x4a0,&LAB_003e329c,0x100000);
  return;
}
