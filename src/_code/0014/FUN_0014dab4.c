/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014dab4` (_code @ 0x14dab4, 0x14 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_0014f464. */
/* Supplied declaration required: FUN_002a4588. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c6c10. */


void FUN_0014dab4(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  *(unsigned char *)(param_1 + 0x28) = 1;
  piVar2 = (int *)(param_1 + 0x68);
  do {
    temp_v1 = *piVar2 + 1;
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar2);
  } while (!temp_v0);
  *piVar2 = temp_v1;
  while( 1 ) {
    temp_v4 = param_1 + 0x4c;
    FUN_002c3aa8(temp_v4);
    temp_v2 = *(unsigned int *)(param_1 + 0x60);
    if (temp_v2 < *(unsigned int *)(param_1 + 0x58)) break;
    FUN_002c3a24(temp_v4);
    FUN_0014f464(param_1 + 0x44);
  }
  FUN_002c6c10(*(int *)(param_1 + 0x5c) + temp_v2,*(unsigned int *)(param_1 + 0x58),
               *(int *)(param_1 + 0x5c),temp_v2,temp_v1);
  *(unsigned int *)(*(int *)(param_1 + 0x38) + temp_v3 * 4) = 0;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  if (0 < *(int *)(param_1 + 100)) {
    FUN_002a4588(param_1 + 0x3c,1);
  }
  FUN_002c3a24(temp_v4);
  piVar2 = (int *)(param_1 + 0x68);
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar2);
  } while (!temp_v0);
  *piVar2 = *piVar2 - 1;
  return;
}
