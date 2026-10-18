/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021e6f8` (_code @ 0x21e6f8, 0x1b0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */
extern int DAT_0044cd88; /* 0x44cd88 */

extern int FUN_0028fde4(unsigned short);
/* Supplied declaration required: FUN_00295cbc. */
extern int FUN_002b9100(unsigned short);
extern int FUN_002c0ba8(void);
extern int FUN_002c0bcc(unsigned int);
extern unsigned int FUN_002c0e4c(unsigned int);
extern int FUN_002c0e9c(void);
/* Supplied declaration required: FUN_002c0ec4. */
/* Supplied declaration required: FUN_00387e88. */


unsigned short FUN_0021e6f8(unsigned int param_1,int param_2)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  short *psVar9;
  int temp_v7;
  unsigned short temp_v8;
  
  *(unsigned char *)(DAT_0044cd88 + 0x14) = 0;
  temp_v0 = FUN_002c0ec4(0x20);
  temp_v1 = FUN_002c0e9c();
  temp_v2 = FUN_002c0e4c(temp_v0);
  if ((param_1 < temp_v2) && (puVar4 = (unsigned short *)(temp_v1 + param_1 * 4), puVar4 != (unsigned short *)0x0)) {
    temp_v2 = (unsigned int)*puVar4;
    temp_v1 = DAT_00433158;
    FUN_00387e88(DAT_00433158,temp_v2);
    if (temp_v1 == 0) {
      temp_v0 = FUN_002c0ec4(0x20,1);
      temp_v1 = FUN_002c0e9c();
      temp_v5 = FUN_002c0e4c(temp_v0);
      if (temp_v5 <= temp_v2) {
        return 0;
      }
      temp_v1 = temp_v1 + temp_v2 * 0x20;
    }
    if (temp_v1 != 0) {
      temp_v8 = 0;
      temp_v7 = 0;
      temp_v6 = 0;
      do {
        psVar9 = (short *)(temp_v1 + temp_v6 * 8);
        if ((*psVar9 != 0) && ((psVar9[2] == 0 || (temp_v3 = FUN_002c0ba8(), temp_v3 != 0)))) {
          temp_v7 = temp_v7 + (unsigned int)(unsigned short)psVar9[1];
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
      if (temp_v7 != 0) {
        temp_v6 = FUN_002c0bcc((temp_v7 - 1U) & 0xffff);
        temp_v3 = 0;
        temp_v7 = 0;
        while ((psVar9 = (short *)(temp_v1 + temp_v7 * 8), *psVar9 == 0 ||
               (((psVar9[2] != 0 && (temp_v4 = FUN_002c0ba8(), temp_v4 == 0)) ||
                (temp_v3 = temp_v3 + (unsigned int)(unsigned short)psVar9[1], temp_v3 < temp_v6))))) {
          temp_v7 = temp_v7 + 1;
          if (temp_v7 >= 4) {
LAB_0021e85c:
            if (param_2 != 0) {
              temp_v1 = FUN_002b9100(temp_v8);
              temp_v6 = FUN_0028fde4(temp_v8);
              if (temp_v6 >= temp_v1) {
                *(unsigned char *)(DAT_0044cd88 + 0x14) = 1;
              }
              else {
                FUN_00295cbc(temp_v8,1);
              }
            }
            return temp_v8;
          }
        }
        temp_v8 = *(unsigned short *)(temp_v1 + temp_v7 * 8);
        goto LAB_0021e85c;
      }
    }
  }
  return 0;
}
