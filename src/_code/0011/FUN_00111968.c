/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111968` (_code @ 0x111968, 0x130 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: while (COPY). */
extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


int FUN_00111968(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  
  temp_v0 = FUN_002c0ec4(0x18,0);
  temp_v1 = FUN_002c0e9c();
  temp_v2 = FUN_002c0e4c(temp_v0);
  if (param_1 == 0) {
    temp_v3 = 0x44e070;
  }
  else {
    temp_v3 = 0x44e068;
  }
  temp_v6 = (unsigned int)*(unsigned char *)(temp_v3 + param_3);
  if ((int)temp_v2 < 1) {
    temp_v4 = 0;
  }
  else {
    temp_v4 = temp_v2 & 1;
    temp_v5 = 0;
    if (temp_v4 != 0) {
      do {
        if (*(unsigned char *)(temp_v1 + temp_v5 * 0x94) == param_2) {
          temp_v7 = temp_v1 + temp_v5 * 0x94;
          temp_v8 = *(unsigned char *)(temp_v7 + 1) == param_1;
          if (temp_v8) {
            temp_v7 = (unsigned int)*(unsigned short *)(temp_v7 + 2);
          }
          if (temp_v8 && temp_v7 == temp_v6) {
            return temp_v1 + temp_v5 * 0x94;
          }
        }
        temp_v5 = temp_v5 + 1;
      } while ((int)temp_v5 < (int)temp_v4);
    }
  }
  do {
    temp_v5 = temp_v4;
    if ((int)temp_v2 <= (int)temp_v5) {
      return 0;
    }
    if (*(unsigned char *)(temp_v1 + temp_v5 * 0x94) == param_2) {
      temp_v4 = temp_v1 + temp_v5 * 0x94;
      temp_v8 = *(unsigned char *)(temp_v4 + 1) == param_1;
      if (temp_v8) {
        temp_v4 = (unsigned int)*(unsigned short *)(temp_v4 + 2);
      }
      if (temp_v8 && temp_v4 == temp_v6) {
        return temp_v1 + temp_v5 * 0x94;
      }
    }
    temp_v3 = temp_v1 + temp_v5 * 0x94;
    temp_v4 = (unsigned int)*(unsigned char *)(temp_v3 + 0x94);
    temp_v8 = temp_v4 == param_2;
    if (temp_v8) {
      temp_v4 = (unsigned int)*(unsigned char *)(temp_v3 + 0x95);
    }
    temp_v9 = temp_v8 && temp_v4 == param_1;
    if (temp_v8 && temp_v4 == param_1) {
      temp_v9 = *(unsigned short *)(temp_v3 + 0x96) == temp_v6;
    }
    if (temp_v9) {
      return temp_v1 + temp_v5 * 0x94 + 0x94;
    }
    temp_v4 = temp_v5 + 2;
  } while( 1 );
}
