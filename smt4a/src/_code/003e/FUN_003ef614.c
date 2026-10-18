/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ef614` (_code @ 0x3ef614, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_0040a244. */


void FUN_003ef614(int param_1)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int *puVar8;
  int temp_v7;
  unsigned char temp_v8;
  
  if (*(int *)(param_1 + 0x3038) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x3038) = 0;
  }
  temp_v7 = 0;
  do {
    temp_v6 = 0;
    temp_v0 = param_1 + temp_v7 * 4;
    do {
      temp_v5 = *(int *)(temp_v0 + 0x216c);
      if ((temp_v5 != 0) && (*(int *)(temp_v5 + 4) == *(int *)(param_1 + temp_v6 * 0x48 + 0x3680))) {
        temp_v2 = (int)(short)*(int *)(temp_v5 + 4);
        temp_v1 = 0;
        do {
          temp_v3 = param_1 + temp_v1 * 2;
          temp_v4 = temp_v3 + 0x2200;
          temp_v8 = *(short *)(temp_v3 + 0x2214) == temp_v2;
          if (!temp_v8) {
            temp_v4 = (int)*(short *)(temp_v3 + 0x2216);
          }
          if (temp_v8 || temp_v4 == temp_v2) goto LAB_003ef6ac;
          temp_v1 = temp_v1 + 2;
        } while (temp_v1 < 0x2a);
        FUN_0040a244(temp_v5);
        *(unsigned int *)(temp_v0 + 0x216c) = 0;
      }
LAB_003ef6ac:
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x32);
    temp_v7 = temp_v7 + 1;
    if (temp_v7 >= 0x2a) {
      FUN_002e6354(param_1 + 0x367c,0xe10);
      temp_v0 = 0x2a;
      temp_v7 = 0;
      do {
        temp_v0 = temp_v0 - 1;
        *(unsigned int *)(*(int *)(param_1 + 0x1ed4) + temp_v7 * 0x1d0 + 0x79c0) = 0;
        puVar8 = (unsigned int *)(*(int *)(param_1 + 0x1ffc) + temp_v7 * 0x408 + 0x10e18);
        *puVar8 = 0;
        puVar8[1] = 0;
        temp_v7 = temp_v7 + 1;
      } while (temp_v0 != 0);
      return;
    }
  } while( 1 );
}
