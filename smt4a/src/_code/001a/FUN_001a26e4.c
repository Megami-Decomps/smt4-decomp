/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a26e4` (_code @ 0x1a26e4, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_001a08d8. */
/* Supplied declaration required: FUN_002e3140. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


void FUN_001a26e4(int param_1)

{
/* irregular: irregular input(s): in_r12; 6 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  unsigned char *pbVar3;
  int temp_v2;
  romwright_code *pcVar5;
  unsigned int temp_v3;
  unsigned int *puVar7;
  unsigned int in_r12;
  
  while( 1 ) {
    software_interrupt(0x24);
    if (*(int *)(param_1 + 0x2c) < 0) {
      FUN_002e3140();
    }
    software_interrupt(0x19);
    if (*(int *)(param_1 + 0x2c) < 0) {
      FUN_002e3140();
    }
    if (*(char *)(param_1 + 0x77) != '\0') break;
    while( 1 ) {
      pbVar3 = *(unsigned char **)(param_1 + 0x34);
      temp_v2 = -0x275fd408;
      if ((pbVar3 != (unsigned char *)0x0) && (temp_v2 = 0x2bef, pbVar3[1] != 0)) {
        in_r12 = (unsigned int)pbVar3[*pbVar3 + 0xc];
        do {
          puVar7 = *(unsigned int **)(param_1 + 0x34);
          temp_v3 = *puVar7;
          temp_v1 = (unsigned char)hasExclusiveAccess(puVar7);
        } while (!temp_v1);
        *puVar7 = (((temp_v3 & 0xff) + 1) % 0x34) | (temp_v3 & 0xffff0000) |
                  (((((temp_v3 & 0xff00) >> 8) - 1) * 0x100) & 0xff00);
        temp_v2 = 0;
        if (*(char *)(*(int *)(param_1 + 0x34) + 2) == '\x01') {
          temp_v2 = -0x275fd5fe;
        }
      }
      if (temp_v2 == 0x2bef) break;
      temp_v3 = in_r12 & 0xff;
      nn_os_CriticalSection_Enter(param_1);
      pcVar5 = *(romwright_code **)(param_1 + temp_v3 * 4 + 0x10);
      if (pcVar5 != (romwright_code *)0x0) {
        (*pcVar5)();
      }
      temp_v0 = *(char *)(param_1 + 0x76);
      *(unsigned char *)(param_1 + 0x76) = 2;
      if (temp_v0 == '\x01') {
        FUN_001a08d8(param_1 + 100);
      }
      nn_os_CriticalSection_Leave(param_1);
    }
  }
  return;
}
