/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d212c` (_code @ 0x1d212c, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_001d212c_arg0 fn_001d212c_arg0;
struct fn_001d212c_arg0 {
    unsigned char pad_0x0[0x18];
    int field_0x18; /* +0x18 */
    unsigned char pad_0x1c[0x4];
    int field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x4];
    void *field_0x28; /* +0x28 */
};

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002c0a6c. */
/* Supplied declaration required: FUN_002c4360. */


void FUN_001d212c(fn_001d212c_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  
  if (param_1->field_0x20 != 0) {
    (**(romwright_code **)(param_1->field_0x18 * 0x18 + 0x472484))();
  }
  piVar2 = param_1->field_0x28;
  if ((piVar2 != (int *)0x0) && (temp_v0 = piVar2[1], piVar2[1] = temp_v0 - 1, temp_v0 - 1 == 0)) {
    if (*piVar2 != 4) {
      FUN_002c0a6c(piVar2[2]);
    }
    FUN_002c4360(piVar2);
  }
  FUN_002c4360(param_1);
  return;
}
