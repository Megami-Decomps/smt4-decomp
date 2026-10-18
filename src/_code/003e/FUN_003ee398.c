/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ee398` (_code @ 0x3ee398, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_0044e7b4; /* 0x44e7b4 */
extern unsigned char DAT_0044e7b8; /* 0x44e7b8 */
extern unsigned char DAT_0044e7b9; /* 0x44e7b9 */

/* Supplied declaration required: FUN_0015f764. */
/* Supplied declaration required: FUN_002c5468. */


unsigned long long FUN_003ee398(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)&temp_v0;
  DAT_0044e7b4 = 0;
  temp_v0 = 0;
  FUN_0015f764(puVar1,0xffff8000);
  if ((int)puVar1 < 0) {
    FUN_002c5468();
  }
  DAT_0044e7b4 = temp_v0;
  DAT_0044e7b8 = 0;
  DAT_0044e7b9 = 0;
  return 0x3579380044e7b4;
}
