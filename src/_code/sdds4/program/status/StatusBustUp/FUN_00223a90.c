/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00223a90` (_code @ 0x223a90, 0xb8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern signed char DAT_0044e158; /* 0x44e158 */
extern int DAT_0044e15c; /* 0x44e15c */
extern int DAT_0044e160; /* 0x44e160 */

/* Supplied declaration required: FUN_002c3b48. */
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4e28. */
/* Supplied declaration required: FUN_002c5b04. */


void FUN_00223a90(void)

{
/* irregular: 3 native warning(s); review required */
  if (DAT_0044e158 < '\x01') {
    FUN_002c4e28(0x17);
    FUN_002c5b04(0x23,0);
    if (DAT_0044e15c == 0) {
      DAT_0044e15c = FUN_002c4b84(0x100,0x100,0,0x266,1);
      FUN_002c3b48(DAT_0044e15c,0x266);
    }
    if (DAT_0044e160 == 0) {
      DAT_0044e160 = FUN_002c4b84(0x100,0x100,0,0x81,1);
      FUN_002c3b48(DAT_0044e160,0x81);
    }
  }
  DAT_0044e158 = DAT_0044e158 + '\x01';
  return;
}
