/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003961ec` (_code @ 0x3961ec, 0x60 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_00421f64; /* 0x421f64 */

/* Supplied declaration required: FUN_00152af8. */
/* Supplied declaration required: FUN_002a7aa0. */
/* Supplied declaration required: FUN_002b2520. */


void FUN_003961ec(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  
  piVar1 = (int *)param_1[0x1a];
  *param_1 = (unsigned int)&DAT_00421f64;
  if (piVar1 != (int *)0x0) {
    (**(romwright_code **)(*piVar1 + 4))(piVar1);
    param_1[0x1a] = 0;
  }
  if (param_1[0x1b] != 0) {
    FUN_00152af8();
    FUN_002a7aa0(param_1[0x1b]);
    param_1[0x1b] = 0;
  }
  FUN_002b2520(param_1);
  return;
}
