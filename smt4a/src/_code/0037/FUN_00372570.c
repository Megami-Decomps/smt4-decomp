/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00372570` (_code @ 0x372570, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f268; /* 0x57f268 */

/* Supplied declaration required: FUN_00184758. */
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_0026fa30. */
/* Supplied declaration required: FUN_002a4914. */
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: FUN_003f5220. */


unsigned int FUN_00372570(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = DAT_0057f268;
  temp_v2 = FUN_001ab888();
  temp_v4 = 0;
  if ((0 < *(int *)(temp_v0 + 0x9b8)) &&
     (temp_v2 = (int)*(char *)(*(int *)(temp_v0 + 0x9b8) + temp_v2 + 0x1c9f), -1 < temp_v2)) {
    temp_v3 = 0;
    do {
      if (temp_v2 == *(int *)(temp_v0 + temp_v3 * 8 + 0xa80)) {
        if (*(char *)(temp_v0 + 0x42) != '\0') {
          FUN_002a4914(temp_v0 + 0xcec,temp_v3 % 4);
          FUN_002a4964(temp_v0 + 0xcec,(int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2);
          return 0;
        }
        if (temp_v3 < 0xc) {
          if (param_1 == 0) {
            temp_v2 = *(int *)(temp_v0 + 0x2c);
          }
          else {
            temp_v2 = 0;
            *(unsigned int *)(temp_v0 + 0x2c) = 0;
          }
          temp_v1 = DAT_0057f268;
          if (param_1 == 0 && temp_v2 == 1) {
            temp_v4 = 1;
            *(unsigned int *)(DAT_0057f268 + 0x2c) = *(unsigned int *)(DAT_0057f268 + 0x2c) ^ 1;
            FUN_00184758(temp_v1 + 0x180,5,0);
            temp_v2 = 0;
            do {
              FUN_003f5220(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0xa10),*(unsigned int *)(temp_v1 + 0x2c))
              ;
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < 4);
            temp_v2 = 0;
            do {
              FUN_003f5220(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0xa20),*(unsigned int *)(temp_v1 + 0x2c))
              ;
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < 0x18);
            FUN_0026fa30();
          }
          FUN_002a4914(temp_v0 + 0xc88,temp_v3 % 4);
          FUN_002a4964(temp_v0 + 0xc88,(int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2);
          return temp_v4;
        }
        if (param_1 == 0) {
          temp_v2 = *(int *)(temp_v0 + 0x2c);
        }
        else {
          temp_v2 = 1;
          *(unsigned int *)(temp_v0 + 0x2c) = 1;
        }
        temp_v1 = DAT_0057f268;
        if (param_1 == 0 && temp_v2 == 0) {
          temp_v4 = 1;
          *(unsigned int *)(DAT_0057f268 + 0x2c) = *(unsigned int *)(DAT_0057f268 + 0x2c) ^ 1;
          FUN_00184758(temp_v1 + 0x180,4,0);
          temp_v2 = 0;
          do {
            FUN_003f5220(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0xa10),*(unsigned int *)(temp_v1 + 0x2c));
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 4);
          temp_v2 = 0;
          do {
            FUN_003f5220(*(unsigned int *)(temp_v1 + temp_v2 * 4 + 0xa20),*(unsigned int *)(temp_v1 + 0x2c));
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 0x18);
          FUN_0026fa30();
        }
        temp_v3 = temp_v3 - 0xc;
        FUN_002a4914(temp_v0 + 0xc88,temp_v3 % 4);
        FUN_002a4964(temp_v0 + 0xc88,(int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2);
        return temp_v4;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x18);
  }
  return 0;
}
