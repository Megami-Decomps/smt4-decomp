/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a8304` (_code @ 0x1a8304, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0044ea00; /* 0x44ea00 */

/* Supplied declaration required: FUN_00288310. */
/* Supplied declaration required: FUN_002c3ba8. */
/* Supplied declaration required: FUN_002c5188. */


void FUN_001a8304(int param_1)

{
/* irregular: 5 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(char *)(DAT_0044ea00 + 0x5f4);
  if (temp_v0 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x001a838c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(romwright_code **)(*(int *)(param_1 + 0x18) * 0x18 + 0x47248c))(param_1);
    return;
  }
  temp_v1 = *(unsigned int *)(DAT_0044ea00 + 0x6f8);
  FUN_002c3ba8();
  (**(romwright_code **)(*(int *)(param_1 + 0x18) * 0x18 + 0x47248c))(param_1);
  if (temp_v0 != '\x03' && temp_v0 != '\x04') {
    if (temp_v0 == '\x05') {
      FUN_002c5188(DAT_0044ea00,temp_v1);
      return;
    }
    return;
  }
  FUN_00288310(DAT_0044ea00);
  return;
}
