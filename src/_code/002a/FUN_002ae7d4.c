/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae7d4` (_code @ 0x2ae7d4, 0x14 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0044ea28; /* 0x44ea28 */

/* Supplied declaration required: FUN_002ae898. */
/* Supplied declaration required: FUN_002c415c. */


void FUN_002ae7d4(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  unsigned int *puVar5;
  
  FUN_002ae898();
  temp_v1 = DAT_0044ea28;
  puVar5 = (unsigned int *)(DAT_0044ea28 + 0x360);
  if (*(int *)(DAT_0044ea28 + 0x364) != 0) {
    temp_v0 = *(int *)(*(int *)(DAT_0044ea28 + 0x364) + 4);
    while (temp_v0 != 0) {
      temp_v2 = *(int *)(temp_v0 + 0x10);
      FUN_002c415c(*(unsigned int *)(temp_v0 + 0xc));
      FUN_002c415c(temp_v0);
      temp_v0 = temp_v2;
    }
    FUN_002c415c(**(unsigned int **)(temp_v1 + 0x364));
    FUN_002c415c(*(unsigned int *)(temp_v1 + 0x364));
    *(unsigned int *)(temp_v1 + 0x364) = 0;
  }
  piVar3 = (int *)*puVar5;
  if (*piVar3 != 0) {
    FUN_002c415c();
    *piVar3 = 0;
  }
  if (piVar3[2] != 0) {
    FUN_002c415c();
    piVar3[2] = 0;
  }
  FUN_002c415c(piVar3);
  *puVar5 = 0;
  return;
}
