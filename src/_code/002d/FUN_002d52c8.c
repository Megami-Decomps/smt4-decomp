/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d52c8` (_code @ 0x2d52c8, 0x120 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_002d5400; /* 0x2d5400 */
extern unsigned char LAB_002d5420; /* 0x2d5420 */
extern short DAT_0049fb40; /* 0x49fb40 */
extern short DAT_0049fb42; /* 0x49fb42 */

extern unsigned int FUN_0025bd6c(unsigned int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0025ccb8. */
/* Supplied declaration required: FUN_002f465c. */


void FUN_002d52c8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  if (DAT_0049fb40 != DAT_0049fb42) {
    DAT_0049fb42 = DAT_0049fb40;
  }
  FUN_002f465c();
  temp_v0 = FUN_0025bd6c(1,&LAB_002d5400,0);
  FUN_0025ccb8(temp_v0,0);
  temp_v0 = FUN_0025bd6c(1,&LAB_002d5420,0);
  FUN_0025ccb8(temp_v0,0);
  return;
}
