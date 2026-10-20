/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00314fd4` (_code @ 0x314fd4, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(...);
int FUN_0019c364(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int *DAT_00573898; /* 0x573898 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */


void FUN_00314fd4(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00164a9c();
  puVar1 = DAT_00573898;
  if (DAT_00573898 != (unsigned int *)0x0) {
    if (DAT_00573898[2] != 0) {
      FUN_0019a5a0();
      puVar1[2] = 0;
    }
    if (puVar1[3] != 0) {
      FUN_0019a5a0();
      puVar1[3] = 0;
    }
    if (puVar1[4] != 0) {
      FUN_0019a5a0();
      puVar1[4] = 0;
    }
    if (puVar1[5] != 0) {
      FUN_0019c364();
      puVar1[5] = 0;
    }
    *puVar1 = 0;
    FUN_0019a5a0(DAT_00573898);
    DAT_00573898 = (unsigned int *)0x0;
  }
  temp_v1 = FUN_00163e40(*(unsigned int *)(temp_v0 + 0x74));
  if (temp_v1 != 0) {
    FUN_001631d0(*(unsigned int *)(temp_v0 + 0x74),0);
    return;
  }
  return;
}

} /* extern "C" */
