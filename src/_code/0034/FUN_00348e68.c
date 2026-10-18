/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348e68` (_code @ 0x348e68, 0x1fc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00287afc(unsigned int);
extern int FUN_002adf14(void);
/* Supplied declaration required: FUN_002b6700. */
extern int FUN_002c2b1c(void);


void FUN_00348e68(unsigned int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10;
  
  temp_v1 = FUN_002adf14();
  temp_v2 = FUN_002adf14();
  temp_v9 = (unsigned int)*(unsigned short *)(temp_v2 + 0x840);
  temp_v0 = (unsigned short)param_1;
  if (temp_v9 != 0) {
    temp_v2 = FUN_00287afc(temp_v9);
    if (temp_v2 == 1) {
      temp_v4 = temp_v9;
      FUN_002b6700();
      temp_v2 = FUN_002c2b1c();
      temp_v3 = 0;
      while( 1 ) {
        temp_v5 = temp_v4 + temp_v3 * 8;
        temp_v8 = temp_v5 + 0x100;
        temp_v10 = *(short *)(temp_v5 + 0x16c) == 2;
        if (temp_v10) {
          temp_v8 = (unsigned int)*(unsigned short *)(temp_v5 + 0x16e);
        }
        if (temp_v10 && temp_v8 == param_1) break;
        temp_v3 = temp_v3 + 1;
        if (temp_v3 >= 6) {
          return;
        }
      }
      temp_v1 = temp_v1 + 0x87a + temp_v3 * 2;
      temp_v8 = (unsigned int)*(unsigned short *)(temp_v1 + 2);
      temp_v10 = *(unsigned int *)(temp_v4 + temp_v3 * 8 + 0x170) <= temp_v8;
      temp_v8 = temp_v8 + param_2;
      if ((int)temp_v8 < 0xffff) {
        *(short *)(temp_v1 + 2) = (short)temp_v8;
        if (temp_v10) {
          return;
        }
        if ((temp_v8 & 0xffff) >= *(unsigned int *)(temp_v5 + 0x170)) {
          *(unsigned short *)(temp_v2 + 0x1064) = temp_v0;
        }
        else {
          *(unsigned short *)(temp_v2 + 0x1066) = temp_v0;
        }
      }
      else {
        *(unsigned short *)(temp_v1 + 2) = 0xffff;
        if (temp_v10) {
          return;
        }
      }
      temp_v1 = FUN_002adf14();
      temp_v1 = temp_v1 + temp_v9 * 4;
      *(unsigned char *)(temp_v1 + 0x202) = *(unsigned char *)(temp_v1 + 0x202) | 2;
    }
    return;
  }
  temp_v2 = 0;
  do {
    temp_v9 = (unsigned int)*(unsigned short *)(temp_v1 + temp_v2 * 0xe + 0x842);
    if ((temp_v9 != 0) && (temp_v4 = temp_v9, FUN_002b6700(), *(char *)(temp_v4 + 6) == '\x01')) {
      temp_v3 = FUN_002c2b1c();
      temp_v5 = 0;
      do {
        temp_v7 = temp_v4 + temp_v5 * 8;
        temp_v8 = temp_v7 + 0x100;
        temp_v10 = *(short *)(temp_v7 + 0x16c) == 2;
        if (temp_v10) {
          temp_v8 = (unsigned int)*(unsigned short *)(temp_v7 + 0x16e);
        }
        if (temp_v10 && temp_v8 == param_1) {
          temp_v6 = temp_v1 + 0x87a + temp_v5 * 2;
          temp_v8 = (unsigned int)*(unsigned short *)(temp_v6 + 2);
          temp_v10 = *(unsigned int *)(temp_v4 + temp_v5 * 8 + 0x170) <= temp_v8;
          temp_v8 = temp_v8 + param_2;
          if ((int)temp_v8 < 0xffff) {
            *(short *)(temp_v6 + 2) = (short)temp_v8;
            if (temp_v10) break;
            if ((temp_v8 & 0xffff) >= *(unsigned int *)(temp_v7 + 0x170)) {
              *(unsigned short *)(temp_v3 + 0x1064) = temp_v0;
            }
            else {
              *(unsigned short *)(temp_v3 + 0x1066) = temp_v0;
            }
          }
          else {
            *(unsigned short *)(temp_v6 + 2) = 0xffff;
            if (temp_v10) break;
          }
          temp_v3 = FUN_002adf14();
          temp_v3 = temp_v3 + temp_v9 * 4;
          *(unsigned char *)(temp_v3 + 0x202) = *(unsigned char *)(temp_v3 + 0x202) | 2;
          break;
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < 6);
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 4) {
      return;
    }
  } while( 1 );
}
