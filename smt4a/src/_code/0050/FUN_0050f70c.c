/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050f70c` (_code @ 0x50f70c, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_005894d8; /* 0x5894d8 */
extern unsigned char DAT_005894dc; /* 0x5894dc */
extern unsigned char DAT_005894dd; /* 0x5894dd */

/* Supplied declaration required: FUN_001d3ef8. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: FUN_002f4370. */


void FUN_0050f70c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)&temp_v0;
  DAT_005894d8 = 0;
  temp_v0 = 0;
  FUN_001d3ef8(puVar1,0xffff8000);
  if ((int)puVar1 < 0) {
    FUN_002e3140();
  }
  DAT_005894d8 = temp_v0;
  DAT_005894dc = 0;
  DAT_005894dd = 0;
  FUN_002f4370(&DAT_005894d8,0x2fd02b,0x100000,temp_v0);
  return;
}
