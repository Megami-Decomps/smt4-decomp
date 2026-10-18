/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036e5a0` (_code @ 0x36e5a0, 0xa4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Supplied declaration required: FUN_002c00b4. */


unsigned int FUN_0036e5a0(int param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  puVar1 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0xcc,4);
  if (puVar1 != (unsigned int *)0x0) {
    puVar2 = *(unsigned int **)(param_1 + 8);
    temp_v0 = puVar2[1];
    temp_v1 = puVar2[2];
    temp_v2 = puVar2[3];
    temp_v3 = puVar2[4];
    temp_v4 = puVar2[5];
    temp_v5 = puVar2[6];
    temp_v6 = puVar2[7];
    *puVar1 = *puVar2;
    puVar1[1] = temp_v0;
    puVar1[2] = temp_v1;
    puVar1[3] = temp_v2;
    puVar1[4] = temp_v3;
    puVar1[5] = temp_v4;
    puVar1[6] = temp_v5;
    puVar1[7] = temp_v6;
    temp_v0 = puVar2[9];
    temp_v1 = puVar2[10];
    temp_v2 = puVar2[0xb];
    puVar1[8] = puVar2[8];
    puVar1[9] = temp_v0;
    puVar1[10] = temp_v1;
    puVar1[0xb] = temp_v2;
    temp_v0 = puVar2[0xd];
    temp_v1 = puVar2[0xe];
    temp_v2 = puVar2[0xf];
    temp_v3 = puVar2[0x10];
    temp_v4 = puVar2[0x11];
    temp_v5 = puVar2[0x12];
    temp_v6 = puVar2[0x13];
    puVar1[0xc] = puVar2[0xc];
    puVar1[0xd] = temp_v0;
    puVar1[0xe] = temp_v1;
    puVar1[0xf] = temp_v2;
    puVar1[0x10] = temp_v3;
    puVar1[0x11] = temp_v4;
    puVar1[0x12] = temp_v5;
    puVar1[0x13] = temp_v6;
    puVar1[0x14] = puVar2[0x14];
    FUN_002c00b4(puVar1 + 0x15,puVar2 + 0x15);
    FUN_002c00b4(puVar1 + 0x21,puVar2 + 0x21);
    temp_v0 = puVar2[0x2e];
    temp_v1 = puVar2[0x2f];
    temp_v2 = puVar2[0x30];
    puVar1[0x2d] = puVar2[0x2d];
    puVar1[0x2e] = temp_v0;
    puVar1[0x2f] = temp_v1;
    puVar1[0x30] = temp_v2;
    puVar1[0x31] = puVar2[0x31];
    puVar1[0x32] = puVar2[0x32];
  }
  *(unsigned int **)(param_1 + 0x168) = puVar1;
  return 0;
}
