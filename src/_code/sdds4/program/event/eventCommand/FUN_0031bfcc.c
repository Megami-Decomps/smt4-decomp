/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031bfcc` (_code @ 0x31bfcc, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int *DAT_0043e088; /* 0x43e088 */

extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c45b8. */


void FUN_0031bfcc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_0043e088 != (unsigned int *)0x0) && (temp_v0 = FUN_002bf41c(*DAT_0043e088), temp_v0 != 0)) {
    FUN_002c45b8(*DAT_0043e088,0);
    return;
  }
  return;
}
