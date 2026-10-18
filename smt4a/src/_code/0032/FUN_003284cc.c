/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003284cc` (_code @ 0x3284cc, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
extern int FUN_00164a9c(void);


void FUN_003284cc(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00164a9c();
  temp_v1 = FUN_00163e40(*(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0xa4) * 4 + 0xc));
  if (temp_v1 != 0) {
    FUN_001631d0(*(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0xa4) * 4 + 0xc),0);
    return;
  }
  return;
}
