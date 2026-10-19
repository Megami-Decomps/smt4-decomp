/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105ef8` (_code @ 0x105ef8, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_0044e0b1; /* 0x44e0b1 */
extern unsigned char DAT_004c5404; /* 0x4c5404 */

/* Supplied declaration required: FUN_0010e5a4. */
/* Supplied declaration required: FUN_0010e8e8. */
/* Supplied declaration required: FUN_0010edbc. */
/* Supplied declaration required: FUN_0011a324. */
/* Supplied declaration required: FUN_002c1d78. */
/* Supplied declaration required: FUN_002c1dd8. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c564c. */


void FUN_00105ef8(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c564c(1);
  if (temp_v0 == 0) {
    FUN_002c1dd8(0);
    FUN_002c1d78(0x6000000);
    FUN_002c1dd8(1);
    FUN_002c1d78(0x6000002);
    FUN_002c1dd8(3);
    FUN_002c1d78(0x6000001);
    FUN_0010e5a4();
    FUN_0010e8e8();
    FUN_0010edbc();
    FUN_0011a324(DAT_0044e0b1);
    FUN_002c4938(&DAT_004c5404,0x80);
    FUN_002c564c(1);
    return;
  }
  return;
}
