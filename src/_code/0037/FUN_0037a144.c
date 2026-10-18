/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a144` (_code @ 0x37a144, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002b743c. */
/* Supplied declaration required: FUN_002bf59c. */
/* Supplied declaration required: FUN_00379a14. */
/* Supplied declaration required: FUN_0037c9e8. */


void FUN_0037a144(int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if (*(char *)((int)param_1 + 0x2bca) != '\0') {
    *(unsigned char *)((int)param_1 + 0x2bca) = 0;
    FUN_0037c9e8(param_1 + 0x754);
    FUN_00379a14(param_1);
    temp_v0 = param_1[0xa60];
    FUN_002b743c(temp_v0 + 8,param_1 + 0x35);
    (**(romwright_code **)(*param_1 + 0x10))(param_1);
    FUN_002bf59c(temp_v0 + 0x14,temp_v0 + 0x18,param_1 + 0x35);
    return;
  }
  return;
}
