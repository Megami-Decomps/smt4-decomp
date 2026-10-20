/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037924c` (_code @ 0x379258, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(void);
int FUN_001cd3ec(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int g_lmapScene; /* 0x581288 */

/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_001cd3ec. */
extern unsigned int FUN_0040ac08(void);


void FUN_0037924c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_00178b04();
  temp_v0 = 0;
  if (param_1 != 0) {
    temp_v0 = FUN_0040ac08();
  }
  *(unsigned int *)(g_lmapScene + 400) = temp_v0;
  FUN_001cd3ec();
  return;
}

} /* extern "C" */
