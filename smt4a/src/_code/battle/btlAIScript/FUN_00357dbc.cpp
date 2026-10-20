/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00357dbc` (_code @ 0x357dbc, 0x64 bytes) from smt4a.cxi.
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

extern int *DAT_00571130; /* 0x571130 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */


void FUN_00357dbc(void)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  piVar1 = DAT_00571130;
  if (DAT_00571130 != (int *)0x0) {
    if (DAT_00571130[1] != 0) {
      FUN_0019c364();
      piVar1[1] = 0;
    }
    if (*piVar1 != 0) {
      FUN_0019a5a0();
      *piVar1 = 0;
    }
    FUN_0019a5a0(DAT_00571130);
    DAT_00571130 = (int *)0x0;
  }
  FUN_001631d0(*(unsigned int *)(temp_v0 + 0x6c),0);
  return;
}

} /* extern "C" */
