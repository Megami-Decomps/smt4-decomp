/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00137690` (_code @ 0x137690, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0057f69c; /* 0x57f69c */
extern unsigned int DAT_0057f6a0; /* 0x57f6a0 */
extern unsigned int DAT_0057f6a4; /* 0x57f6a4 */
extern unsigned int DAT_0057f6a8; /* 0x57f6a8 */

/* Supplied declaration required: FUN_001630d4. */


void FUN_00137690(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (DAT_0057f69c == 0) {
    temp_v0 = 0x10000;
    FUN_001630d4(0x10000,0x100,0,0x2a7a4,1);
    temp_v1 = 0x10000;
    DAT_0057f69c = temp_v0;
    FUN_001630d4(0x10000,0x100,0,0x2a71c,1);
    temp_v2 = 0x100;
    DAT_0057f6a0 = temp_v1;
    FUN_001630d4(0x100,0x100,0,0xc,1);
    temp_v1 = 0x100;
    DAT_0057f6a4 = temp_v2;
    FUN_001630d4(0x100,0x100,0,0x20,1);
    DAT_0057f6a8 = temp_v1;
  }
  return;
}
