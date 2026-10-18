/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002640a4` (_code @ 0x2640a4, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int DAT_004dad80; /* 0x4dad80 */

/* Supplied declaration required: FUN_002b74cc. */


void FUN_002640a4(int *param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  
  temp_v0 = *(int *)(*param_1 + param_2 * 4);
  temp_v1 = *(int *)(temp_v0 + 0xc);
  if (temp_v1 != 0) {
    for (piVar3 = *(int **)(temp_v1 + 0x18); (piVar3 != *(int **)(temp_v1 + 0x1c) && (*piVar3 != temp_v0))
        ; piVar3 = piVar3 + 1) {
    }
    if (piVar3 != *(int **)(temp_v1 + 0x1c)) {
      piVar3 = piVar3 + 1;
      FUN_002b74cc();
    }
    piVar2 = *(int **)(temp_v1 + 0x1c);
    *(int **)(temp_v1 + 0x1c) = piVar3;
    if (piVar2 != piVar3) {
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
  }
  DAT_004dad80 = DAT_004dad80 - 1;
  return;
}
