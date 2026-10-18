/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00397208` (_code @ 0x397208, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00232a54. */
/* Supplied declaration required: FUN_00232ab4. */


void FUN_00397208(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  
  piVar1 = (int *)*param_1;
  temp_v0 = *(unsigned char *)(piVar1 + 3) - 1;
  if (((int)temp_v0 <= (int)(unsigned int)*(unsigned char *)(*piVar1 + 0xc)) &&
     ((int)temp_v0 <= (int)(unsigned int)*(unsigned char *)(piVar1[1] + 0xc))) {
    return;
  }
  *(char *)(piVar1 + 3) = (char)temp_v0;
  if ((temp_v0 & 0xff) < (unsigned int)*(unsigned char *)(*(int *)(*param_1 + 4) + 0xc)) {
    *(char *)(*(int *)(*param_1 + 4) + 0xc) = (char)temp_v0;
  }
  FUN_00232ab4(param_1);
  FUN_00232ab4(*param_1 + 4);
  FUN_00232ab4(*(int *)(*param_1 + 4) + 4);
  FUN_00232a54(param_1);
  FUN_00232a54(*param_1 + 4);
  return;
}
