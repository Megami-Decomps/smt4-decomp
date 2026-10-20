/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c940c` (_code @ 0x1c940c, 0x1b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bc2ec(...);
int vramAreaGetBaseAddress(int);

typedef int romwright_code(...);
extern unsigned char DAT_0055b620; /* 0x55b620 */

/* Supplied declaration required: FUN_001bc2ec. */
/* Supplied declaration required: vramAreaGetBaseAddress. */


unsigned int * FUN_001c940c(unsigned int *param_1,int param_2,int *param_3,int *param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar8;
  int temp_v6;
  
  if ((param_1 == (unsigned int *)0x0) || ((~*param_1 & 0x10000002) != 0)) {
    param_1 = (unsigned int *)0x0;
  }
  temp_v6 = param_2 * 2 + 0x10;
  temp_v0 = (**(romwright_code **)(*param_4 + 8))(param_4,((param_2 * 2 + 0x2fU) & 0xffffffe0) + temp_v6,0x20);
  puVar2 = (unsigned int *)0x0;
  if (temp_v0 != 0) {
    puVar2 = (unsigned int *)(**(romwright_code **)(*param_3 + 8))(param_3,0x860,0x20);
    if (puVar2 == (unsigned int *)0x0) {
      (**(romwright_code **)(*param_4 + 0xc))(param_4,temp_v0);
      return (unsigned int *)0x0;
    }
    puVar2[0xb] = param_2;
    *puVar2 = (unsigned int)&DAT_0055b620;
    puVar2[1] = (unsigned int)param_3;
    puVar2[2] = (unsigned int)param_1;
    *(unsigned char *)(puVar2 + 0xc) = 0;
    puVar2[0xd] = 0;
    puVar2[0x7e] = 0;
    puVar2[0x7f] = 0;
    puVar2[0x80] = 0;
    puVar2[0x81] = 0;
    puVar2[0x82] = (unsigned int)param_4;
    puVar2[0x83] = temp_v0;
    temp_v3 = 0;
    do {
      temp_v4 = temp_v3 + 1;
      puVar2[temp_v3 * 7 + 0x11] = 0;
      puVar2[temp_v3 * 7 + 0x13] = 0;
      puVar2[temp_v3 * 7 + 0x12] = 0;
      puVar2[temp_v3 * 7 + 0x14] = 0;
      temp_v3 = temp_v4;
    } while (temp_v4 < 0x10);
    puVar2[3] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar8 = puVar2 + 0x84;
    puVar2[10] = 0;
    temp_v3 = 0;
    do {
      temp_v1 = (temp_v0 + 0x1fU) & 0xffffffe0;
      temp_v0 = temp_v1 + temp_v6;
      puVar2[temp_v3 + 0x7e] = temp_v1;
      vramAreaGetBaseAddress(0x20000);
      temp_v4 = FUN_001bc2ec();
      temp_v2 = FUN_001bc2ec(puVar2[temp_v3 + 0x7e]);
      temp_v5 = temp_v3 + 1;
      puVar2[temp_v3 + 0x80] = temp_v2 - temp_v4;
      temp_v3 = temp_v5;
    } while (temp_v5 < 2);
    temp_v0 = 0;
    do {
      temp_v1 = ((int)puVar8 + 0x1fU) & 0xffffffe0;
      temp_v6 = temp_v0 + 1;
      puVar8 = (unsigned int *)(temp_v1 + 0x220);
      puVar2[temp_v0 + 3] = temp_v1;
      temp_v0 = temp_v6;
    } while (temp_v6 < 2);
    puVar2[7] = temp_v1 + 0x220;
    puVar2[9] = temp_v1 + 0x3a0;
  }
  return puVar2;
}

} /* extern "C" */
