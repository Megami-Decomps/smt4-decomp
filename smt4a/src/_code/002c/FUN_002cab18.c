/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cab18` (_code @ 0x2cab18, 0x1fc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f268; /* 0x57f268 */

extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
extern int FUN_002919a4(void);
/* Supplied declaration required: FUN_002a4878. */
/* Supplied declaration required: FUN_002a4894. */


int FUN_002cab18(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 3 goto(s); 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  
  temp_v1 = DAT_0057f268;
  temp_v3 = *(int *)(DAT_0057f268 + 0x20);
  if (temp_v3 != 6) {
    param_3 = *(int *)(DAT_0057f268 + 0x1c);
  }
  if (!(temp_v3 == 6 || param_3 == 6)) {
    if (temp_v3 == 4 || param_3 == 4) {
      temp_v1 = FUN_002a4878(DAT_0057f268 + 0xc24);
      if (temp_v1 == 0) {
        return -1;
      }
      temp_v3 = FUN_001ab888();
      temp_v1 = (int)*(char *)(temp_v3 + temp_v1 + 0x1c9f);
      goto LAB_002cacd8;
    }
    if (temp_v3 == 8 || param_3 == 8) {
      temp_v5 = DAT_0057f268 + 0xd50;
      if (*(char *)(DAT_0057f268 + 0x42) != '\0') {
        temp_v5 = DAT_0057f268 + 0xdb4;
      }
      temp_v3 = FUN_002a4894(temp_v5);
      if (0 >= temp_v3) {
        temp_v3 = FUN_002a4878(temp_v5);
        if ((DAT_0057f268 == 0) || (*(char *)(DAT_0057f268 + 0x9b4) != '\x14')) {
          if (temp_v3 == 0) {
            return -1;
          }
          temp_v1 = FUN_001ab888();
          temp_v1 = (int)*(char *)(temp_v1 + temp_v3 + 0x1c9f);
        }
        else {
          temp_v1 = *(int *)(*(int *)(temp_v1 + temp_v3 * 4 + 0xa10) + 0x34);
        }
      }
      else {
        if (*(char *)(temp_v1 + 0x42) != '\0') {
          temp_v3 = FUN_002a4878();
          temp_v5 = FUN_002a4894(temp_v5);
          temp_v3 = temp_v3 + temp_v5 * 4;
        }
        else {
          temp_v2 = FUN_002a4894(temp_v5);
          temp_v4 = *(int *)(temp_v1 + 0x2c);
          temp_v3 = FUN_002a4878(temp_v5);
          temp_v3 = temp_v3 + temp_v2 * 4 + temp_v4 * 0xc;
        }
        temp_v3 = temp_v3 - 4;
        temp_v1 = *(int *)(temp_v1 + temp_v3 * 8 + 0xa80);
      }
      goto LAB_002cacd8;
    }
    if (temp_v3 == 10 || param_3 == 10) {
      temp_v1 = (int)*(short *)(DAT_0057f268 + 0x38);
      goto LAB_002cacd8;
    }
  }
  else {
    if (*(char *)(DAT_0057f268 + 0x42) != '\0') {
      temp_v5 = DAT_0057f268 + 0xcec;
      temp_v3 = FUN_002a4878();
      temp_v5 = FUN_002a4894(temp_v5);
      temp_v3 = temp_v3 + temp_v5 * 4;
    }
    else {
      temp_v3 = DAT_0057f268 + 0xc88;
      temp_v5 = FUN_002a4894();
      temp_v2 = *(int *)(temp_v1 + 0x2c);
      temp_v3 = FUN_002a4878(temp_v3);
      temp_v3 = temp_v3 + temp_v5 * 4 + temp_v2 * 0xc;
    }
    temp_v1 = *(int *)(temp_v1 + temp_v3 * 8 + 0xa80);
LAB_002cacd8:
    if (temp_v1 == -2) {
      temp_v1 = FUN_002919a4();
      if (temp_v1 == 0) {
        return -1;
      }
      temp_v0 = *(short *)(temp_v1 + 0x62);
      return (int)temp_v0;
    }
    if (temp_v1 < 0) {
      return -1;
    }
  }
  temp_v1 = FUN_001ab854();
  temp_v0 = *(short *)(temp_v1 + 0x62);
  return (int)temp_v0;
}
