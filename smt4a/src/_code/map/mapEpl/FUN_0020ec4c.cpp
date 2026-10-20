/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020ec4c` (_code @ 0x20ec4c, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00163060(int, int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int *DAT_00580c88; /* 0x580c88 */

/* Supplied declaration required: FUN_00163060. */


void FUN_0020ec4c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0x188,1);
  DAT_00580c88 = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0 + 1;
    puVar1[temp_v0 * 6 + 6] = 0;
    puVar1[temp_v0 * 6 + 7] = 0;
    puVar1[temp_v0 * 6 + 2] = 0;
    puVar1[temp_v0 * 6 + 3] = 0;
    puVar1[temp_v0 * 6 + 4] = 0;
    puVar1[temp_v0 * 6 + 5] = 0;
    temp_v0 = temp_v1;
  } while (temp_v1 < 0x10);
  return;
}

} /* extern "C" */
