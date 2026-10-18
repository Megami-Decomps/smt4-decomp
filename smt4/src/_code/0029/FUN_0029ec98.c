/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029ec98` (_code @ 0x29ec98, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00293f10. */
/* Supplied declaration required: FUN_002942c4. */
/* Supplied declaration required: FUN_002958f8. */
extern unsigned long long FUN_0029e93c(int);


void FUN_0029ec98(int *param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned long long temp_v11;
  
  temp_v8 = *param_1;
  temp_v11 = FUN_0029e93c(temp_v8 + 0x6214);
  if (*(char *)(temp_v8 + 0x420) == '\x01') {
    temp_v11 = FUN_0029e93c(temp_v8 + 0x92d4);
  }
  temp_v4 = (unsigned int)((unsigned long long)temp_v11 >> 0x20);
  temp_v7 = 0;
  temp_v0 = temp_v8 + (int)temp_v11 * 2;
  do {
    temp_v1 = temp_v8 + temp_v7 * 2;
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + 0x6660);
    if (temp_v2 != 0) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v0 + 0x6278);
    }
    if (temp_v2 != 0 && temp_v2 != temp_v4) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v0 + 0x627a);
      temp_v9 = temp_v2 != temp_v4;
      if (temp_v9) {
        temp_v4 = (unsigned int)*(unsigned short *)(temp_v0 + 0x627c);
      }
      temp_v10 = temp_v2 != temp_v4;
      if (temp_v9 && temp_v10) {
        temp_v4 = (unsigned int)*(unsigned short *)(temp_v0 + 0x627e);
      }
      if ((temp_v9 && temp_v10) && temp_v2 != temp_v4) {
        temp_v3 = (int)*(short *)(temp_v1 + 0x6660);
        FUN_00293f10(temp_v3,1);
        temp_v4 = temp_v5;
        if (temp_v3 != 0) {
          FUN_002958f8((int)*(short *)(temp_v1 + 0x6660),1);
          *(unsigned short *)(temp_v1 + 0x6660) = 0;
          temp_v4 = temp_v6;
        }
      }
    }
    temp_v7 = temp_v7 + 1;
  } while (temp_v7 < 4);
  temp_v0 = 0;
  do {
    temp_v7 = temp_v8 + ((int)temp_v11 + temp_v0) * 2;
    temp_v2 = (unsigned int)*(unsigned short *)(temp_v7 + 0x6278);
    if (temp_v2 != 0) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v8 + 0x6660);
    }
    if (temp_v2 != 0 && temp_v2 != temp_v4) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v8 + 0x6662);
      temp_v9 = temp_v2 != temp_v4;
      if (temp_v9) {
        temp_v4 = (unsigned int)*(unsigned short *)(temp_v8 + 0x6664);
      }
      if ((temp_v9 && temp_v2 != temp_v4) && (temp_v4 = (unsigned int)*(unsigned short *)(temp_v8 + 0x6666), temp_v2 != temp_v4))
      {
        temp_v1 = 0;
        do {
          if (*(short *)(temp_v8 + temp_v1 * 2 + 0x6660) == 0) {
            FUN_002942c4((int)*(short *)(temp_v7 + 0x6278),1);
            temp_v1 = temp_v8 + temp_v1 * 2;
            temp_v4 = temp_v1 + 0x6600;
            *(unsigned short *)(temp_v1 + 0x6660) = *(unsigned short *)(temp_v7 + 0x6278);
            break;
          }
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < 4);
      }
    }
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 4) {
      return;
    }
  } while( 1 );
}
