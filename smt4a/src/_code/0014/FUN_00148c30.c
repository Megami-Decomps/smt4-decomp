/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00148c30` (_code @ 0x148c30, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern char s_____2_00588fa4[11]; /* 0x588fa4 */

extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);


int FUN_00148c30(unsigned int param_1,unsigned int param_2,int param_3)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  char *pcVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  
  temp_v0 = FUN_00187180(0x18,0);
  temp_v1 = FUN_00192798();
  temp_v2 = FUN_00192748(temp_v0);
  if (param_1 == 0) {
    pcVar4 = s_____2_00588fa4;
  }
  else {
    pcVar4 = (char *)0x588f9c;
  }
  temp_v6 = (unsigned int)(unsigned char)pcVar4[param_3];
  if ((int)temp_v2 < 1) {
    temp_v3 = 0;
  }
  else {
    temp_v3 = temp_v2 & 1;
    temp_v4 = 0;
    if (temp_v3 != 0) {
      do {
        if (*(unsigned char *)(temp_v1 + temp_v4 * 0x94) == param_2) {
          temp_v7 = temp_v1 + temp_v4 * 0x94;
          temp_v8 = *(unsigned char *)(temp_v7 + 1) == param_1;
          if (temp_v8) {
            temp_v7 = (unsigned int)*(unsigned short *)(temp_v7 + 2);
          }
          if (temp_v8 && temp_v7 == temp_v6) {
            return temp_v1 + temp_v4 * 0x94;
          }
        }
        temp_v4 = temp_v4 + 1;
      } while ((int)temp_v4 < (int)temp_v3);
    }
  }
  do {
    temp_v4 = temp_v3;
    if ((int)temp_v2 <= (int)temp_v4) {
      return 0;
    }
    if (*(unsigned char *)(temp_v1 + temp_v4 * 0x94) == param_2) {
      temp_v3 = temp_v1 + temp_v4 * 0x94;
      temp_v8 = *(unsigned char *)(temp_v3 + 1) == param_1;
      if (temp_v8) {
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v3 + 2);
      }
      if (temp_v8 && temp_v3 == temp_v6) {
        return temp_v1 + temp_v4 * 0x94;
      }
    }
    temp_v5 = temp_v1 + temp_v4 * 0x94;
    temp_v3 = (unsigned int)*(unsigned char *)(temp_v5 + 0x94);
    temp_v8 = temp_v3 == param_2;
    if (temp_v8) {
      temp_v3 = (unsigned int)*(unsigned char *)(temp_v5 + 0x95);
    }
    temp_v9 = temp_v8 && temp_v3 == param_1;
    if (temp_v8 && temp_v3 == param_1) {
      temp_v9 = *(unsigned short *)(temp_v5 + 0x96) == temp_v6;
    }
    if (temp_v9) {
      return temp_v1 + temp_v4 * 0x94 + 0x94;
    }
    temp_v3 = temp_v4 + 2;
  } while( 1 );
}
