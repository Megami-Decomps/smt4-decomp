/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005116b0` (_code @ 0x5116b0, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_0042ce3c; /* 0x42ce3c */
extern unsigned int DAT_0061a62c; /* 0x61a62c */

/* Supplied declaration required: FUN_00188b60. */
/* Supplied declaration required: FUN_002f4370. */
/* Supplied declaration required: FUN_002f5020. */


void FUN_005116b0(void)

{
/* irregular: 3 native warning(s); review required */
  FUN_002f5020();
  DAT_0061a62c = 0;
  FUN_00188b60(&DAT_0061a62c);
  FUN_002f4370(&DAT_0061a62c,&LAB_0042ce3c,0x100000);
  return;
}
