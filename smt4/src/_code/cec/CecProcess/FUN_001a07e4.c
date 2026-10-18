/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a07e4` (_code @ 0x1a07e4, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0043de68; /* 0x43de68 */

/* Supplied declaration required: FUN_002c222c. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c498c. */
extern unsigned int FUN_003bbe6c(void);


void FUN_001a07e4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = 0x100;
  FUN_002c498c(0x100,0x100,0,0x460,1);
  FUN_002c4938();
  temp_v1 = 0x14;
  DAT_0043de68 = temp_v0;
  FUN_002c222c();
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_003bbe6c();
  }
  *(unsigned int *)(temp_v0 + 4) = temp_v2;
  return;
}
