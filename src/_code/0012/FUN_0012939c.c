/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012939c` (_code @ 0x12939c, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_0044e7c0; /* 0x44e7c0 */
extern unsigned char DAT_0044e7c1; /* 0x44e7c1 */
extern unsigned char DAT_0044e7c2; /* 0x44e7c2 */
extern unsigned char DAT_0044e7c4; /* 0x44e7c4 */
extern unsigned char DAT_0044e7c8; /* 0x44e7c8 */
extern unsigned char DAT_004e6f14; /* 0x4e6f14 */
extern unsigned char DAT_004e6f64; /* 0x4e6f64 */
extern unsigned char uRam1ff810c0; /* 0x1ff810c0 */

/* Unsupported intrinsic, declaration required: coproc_moveto_Data_Synchronization (CALLOTHER). */
/* Supplied declaration required: FUN_00129138. */
/* Supplied declaration required: FUN_00146d58. */
/* Supplied declaration required: FUN_002c4244. */


void FUN_0012939c(void)

{
/* irregular: 4 native warning(s); review required */
  if ((DAT_0044e7c0 & DAT_0044e7c1) != 0) {
    FUN_00129138(&DAT_004e6f64,1);
    DAT_0044e7c4 = uRam1ff810c0;
    FUN_00146d58(&DAT_004e6f14);
    DAT_0044e7c1 = 0;
    DAT_0044e7c2 = 0;
    coproc_moveto_Data_Synchronization(0);
    FUN_002c4244(&DAT_0044e7c8);
    return;
  }
  return;
}
