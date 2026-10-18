/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047f314` (_code @ 0x47f314, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_00573cc0; /* 0x573cc0 */
extern unsigned int DAT_00573cc4; /* 0x573cc4 */

extern unsigned int *FUN_0014aa78(void);
/* Supplied declaration required: FUN_0015f490. */
/* Supplied declaration required: FUN_003f0e20. */


void FUN_0047f314(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_0014aa78();
  FUN_003f0e20(puVar1,param_1);
  if (((puVar1 != (unsigned int *)0x0) && ((puVar1[1] & DAT_00573cc4) != 0 || (*puVar1 & DAT_00573cc0) != 0)
      ) && (*(short *)((int)puVar1 + 0x166) != 0)) {
    FUN_0015f490(*(short *)((int)puVar1 + 0x166),4,0);
    return;
  }
  return;
}
