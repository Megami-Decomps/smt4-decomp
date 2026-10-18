/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033a16c` (_code @ 0x33a16c, 0x6c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00420420; /* 0x420420 */

/* Supplied declaration required: FUN_00288990. */
/* Supplied declaration required: FUN_00294a64. */
extern unsigned int *FUN_00294a98(void);
/* Supplied declaration required: FUN_002c23f8. */


void FUN_0033a16c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  if (*(int *)(param_1 + 0x4394) != 0) {
    FUN_00288990();
    if (*(int **)(param_1 + 0x4394) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(param_1 + 0x4394) + 4))();
    }
    *(unsigned int *)(param_1 + 0x4394) = 0;
  }
  temp_v0 = 0x100;
  FUN_002c23f8();
  puVar2 = (unsigned int *)0x0;
  if (temp_v0 != 0) {
    puVar2 = (unsigned int *)FUN_00294a98();
    *puVar2 = (unsigned int)&DAT_00420420;
  }
  *(unsigned int **)(param_1 + 0x4394) = puVar2;
  FUN_00294a64();
  return;
}
