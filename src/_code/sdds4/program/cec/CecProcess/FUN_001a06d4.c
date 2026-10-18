/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a06d4` (_code @ 0x1a06d4, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0043de68; /* 0x43de68 */

/* Supplied declaration required: FUN_002c23f8. */
/* Supplied declaration required: FUN_002c4b30. */
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern unsigned int FUN_003bc094(void);


void FUN_001a06d4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002c4b84(0x100,0x100,0,0x460,1);
  FUN_002c4b30(temp_v0,0x460);
  temp_v1 = 0x14;
  DAT_0043de68 = temp_v0;
  FUN_002c23f8();
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_003bc094();
  }
  *(unsigned int *)(temp_v0 + 4) = temp_v2;
  return;
}
