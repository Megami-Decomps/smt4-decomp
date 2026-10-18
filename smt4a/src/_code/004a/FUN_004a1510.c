/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a1510` (_code @ 0x4a1510, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_00183bb0. */


void FUN_004a1510(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  romwright_code *pcVar2;
  
  FUN_00183bb0();
  *(unsigned int *)(param_1 + 0x850) = 0x1f;
  temp_v0 = param_1 + *(int *)(param_1 + 0x14) * 8;
  pcVar2 = *(romwright_code **)(temp_v0 + 0xa978);
  if ((pcVar2 != (romwright_code *)0x0) ||
     (((*(unsigned int *)(temp_v0 + 0xa97c) & 1) != 0 && (*(unsigned int *)(temp_v0 + 0xa97c) != 0)))) {
    if ((*(unsigned int *)(temp_v0 + 0xa97c) & 1) != 0) {
      pcVar2 = *(romwright_code **)(pcVar2 + *(int *)(param_1 + ((int)*(unsigned int *)(temp_v0 + 0xa97c) >> 1)));
    }
    (*pcVar2)();
  }
  FUN_0016c560(DAT_0059dbb4);
  FUN_0016c410(DAT_0059dbb4);
  return;
}
