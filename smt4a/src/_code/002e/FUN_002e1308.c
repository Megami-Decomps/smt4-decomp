/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1308` (_code @ 0x2e1308, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0059dbb8; /* 0x59dbb8 */

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_001add24. */


void FUN_002e1308(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  unsigned int *puVar5;
  
  FUN_001add24(0x1f);
  FUN_0019a7f4(0x1a,0);
  temp_v1 = DAT_0059dbb8;
  puVar5 = (unsigned int *)(DAT_0059dbb8 + 0x270);
  if (*(int *)(DAT_0059dbb8 + 0x274) != 0) {
    temp_v0 = *(int *)(*(int *)(DAT_0059dbb8 + 0x274) + 4);
    while (temp_v0 != 0) {
      temp_v2 = *(int *)(temp_v0 + 0x10);
      FUN_0019a5a0(*(unsigned int *)(temp_v0 + 0xc));
      FUN_0019a5a0(temp_v0);
      temp_v0 = temp_v2;
    }
    FUN_0019a5a0(**(unsigned int **)(temp_v1 + 0x274));
    FUN_0019a5a0(*(unsigned int *)(temp_v1 + 0x274));
    *(unsigned int *)(temp_v1 + 0x274) = 0;
  }
  piVar3 = (int *)*puVar5;
  if (*piVar3 != 0) {
    FUN_0019a5a0();
    *piVar3 = 0;
  }
  if (piVar3[2] != 0) {
    FUN_0019a5a0();
    piVar3[2] = 0;
  }
  FUN_0019a5a0(piVar3);
  *puVar5 = 0;
  return;
}
