/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015fe40` (_code @ 0x15fe40, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_00178a54. */


void FUN_0015fe40(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    param_3 = (unsigned int)*(unsigned char *)(piVar1 + 1);
  }
  if ((piVar1 != (int *)0x0 && param_3 != 0) && (temp_v0 = (**(romwright_code **)(*piVar1 + 0xc))(), temp_v0 != 0)
     ) {
    return;
  }
  FUN_00178a54(*(unsigned int *)(param_1 + 4),param_2);
  return;
}
