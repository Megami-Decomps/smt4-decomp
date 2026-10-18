/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00359ce8` (_code @ 0x359ce8, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00238c80. */
extern int FUN_00239560(unsigned char *);
/* Supplied declaration required: FUN_002634f4. */
/* Supplied declaration required: FUN_002ad8b4. */


unsigned int FUN_00359ce8(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5 [8];
  unsigned char temp_v6 [8];
  unsigned char temp_v7 [8];
  
  if (param_2 == 0) {
    return 0xe0e10bfd;
  }
  if ((param_3 & 3) != 0) {
    temp_v1 = 0xc8a10bf2;
  }
  else {
    temp_v1 = 0xc8e10be9;
    if (((param_3 + 0x70 < 0x19001) && (param_3 != 0)) && (param_3 < 0x18001)) {
      FUN_002634f4(temp_v5);
      temp_v1 = FUN_00238c80(temp_v7,param_1 + 0x20);
      FUN_002ad8b4(temp_v5,temp_v1);
      FUN_00238c80(temp_v6,param_1 + 0x20);
      if ((*(char *)(param_1 + 0x131) != '\0') || (temp_v2 = FUN_00239560(temp_v5), temp_v2 == 0)) {
        return 0xc8810bea;
      }
      temp_v4 = 0x70;
      *(unsigned int *)(param_1 + 0x134) = param_3;
      *(int *)(param_1 + 0x138) = param_2;
      *(unsigned int *)(param_1 + 0xc) = param_3;
      temp_v2 = (int)*(char *)(param_1 + 0x130);
      if (temp_v2 != 0) {
        temp_v3 = 0;
        do {
          temp_v0 = temp_v3 * 0xc;
          temp_v2 = temp_v2 - 1;
          temp_v3 = temp_v3 + 1;
          temp_v4 = temp_v4 + 8 + ((*(int *)(param_1 + temp_v0 + 0x74) + 3U) & 0xfffffffc);
        } while (temp_v2 != 0);
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 0x134) + temp_v4 + 0x20;
      *(int *)(param_1 + 8) = temp_v4;
      temp_v1 = 0;
    }
  }
  return temp_v1;
}
