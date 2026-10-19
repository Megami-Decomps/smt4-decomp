/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295660` (_code @ 0x295660, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004e0d88; /* 0x4e0d88 */

/* Supplied declaration required: FUN_001db608. */


void FUN_00295660(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5;
  unsigned char *puVar7;
  
  puVar7 = (unsigned char *)(param_1 * 0x60 + 0x4def48);
  FUN_001db608(puVar7,0x60);
  if (puVar7 == (unsigned char *)0x0) {
    puVar7 = &DAT_004e0d88;
  }
  temp_v1 = 0;
  temp_v2 = 0;
  do {
    temp_v0 = *(unsigned char *)(param_2 + temp_v2);
    temp_v5 = (unsigned int)temp_v0;
    temp_v3 = temp_v2 + 1;
    if (temp_v5 == 0) {
      puVar7[temp_v1] = 0;
      puVar7[temp_v1 + 1] = 0;
      return;
    }
    if ((temp_v0 & 0x80) != 0) {
      puVar7[temp_v1] = temp_v0;
      temp_v4 = *(unsigned char *)(param_2 + temp_v3);
      temp_v3 = temp_v2 + 2;
      puVar7[temp_v1 + 1] = temp_v4;
    }
    else {
      if (temp_v5 != 10) {
        puVar7[temp_v1] = *(unsigned char *)(temp_v5 * 2 + 0x4095f8);
        temp_v4 = *(unsigned char *)(temp_v5 * 2 + 0x4095f9);
        puVar7[temp_v1 + 1] = temp_v4;
        temp_v1 = temp_v1 + 2;
        temp_v2 = temp_v3;
        continue;
      }
      puVar7[temp_v1] = 0xf8;
      puVar7[temp_v1 + 1] = 1;
    }
    temp_v1 = temp_v1 + 2;
    temp_v2 = temp_v3;
  } while( 1 );
}
