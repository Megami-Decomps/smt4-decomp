/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013bb34` (_code @ 0x13bb34, 0x280 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_00145ec8(void);
extern unsigned short *FUN_00145f04(char, unsigned int, short);
extern int FUN_00145f5c(unsigned int);
/* Supplied declaration required: FUN_00148bb8. */
extern unsigned short *FUN_00148c30(char, unsigned int, short);
extern unsigned int FUN_0014bef4(unsigned int);
extern int FUN_0015fb68(void);
/* Supplied declaration required: FUN_00192730. */
/* Supplied declaration required: FUN_00192780. */


void FUN_0013bb34(int param_1)

{
/* irregular: 1 goto(s); 3 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned short *puVar6;
  unsigned short *puVar7;
  unsigned int temp_v5;
  unsigned short *puVar9;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  short temp_v12;
  unsigned short temp_v13;
  
  FUN_00192780();
  temp_v3 = param_1;
  FUN_00192730();
  temp_v10 = 0;
  if (temp_v10 < temp_v3) {
    do {
      temp_v6 = param_1 + temp_v10 * 0x94;
      temp_v4 = (unsigned int)*(unsigned char *)(param_1 + temp_v10 * 0x94);
      temp_v0 = *(char *)(temp_v6 + 1);
      temp_v12 = *(short *)(temp_v6 + 2);
      if (temp_v0 != '\0') {
        if (temp_v12 == 6) {
          temp_v12 = 0;
        }
        else if (temp_v12 == 7) {
          temp_v12 = 1;
        }
      }
      else if (temp_v12 == 7) {
        temp_v12 = 6;
      }
      temp_v6 = FUN_0015fb68();
      puVar6 = (unsigned short *)FUN_00145f04(temp_v0,temp_v4,temp_v12);
      temp_v5 = temp_v4;
      FUN_00148bb8(temp_v4,temp_v0);
      if (temp_v5 == 0) {
        *puVar6 = 0;
        *(unsigned char *)((int)puVar6 + 3) = *(unsigned char *)((int)puVar6 + 3) & 0xe0;
      }
      if (temp_v6 == 0) {
        *(unsigned char *)(puVar6 + 1) = 0;
      }
      temp_v2 = *(unsigned char *)((int)puVar6 + 3);
      if ((temp_v2 & 0x1f) >= 2) {
        temp_v2 = (temp_v2 & 0xe0) | ((temp_v2 - 1) & 0x1f);
        *(unsigned char *)((int)puVar6 + 3) = temp_v2;
      }
      else {
        *(unsigned char *)((int)puVar6 + 3) = temp_v2 & 0xe0;
        puVar7 = (unsigned short *)FUN_00148c30(temp_v0,temp_v4,temp_v12);
        temp_v13 = *puVar6;
        temp_v7 = (unsigned int)puVar7[temp_v6 * 3 + 3];
        if ((-temp_v5 & temp_v7) == 0) {
          temp_v13 = 0;
        }
        else if (temp_v7 < 1000) {
          temp_v5 = FUN_0014bef4(99);
          if ((temp_v5 < puVar7[temp_v6 * 3 + 3]) && (temp_v1 = puVar7[temp_v6 * 3 + 2], temp_v1 != 0)) {
            temp_v13 = temp_v1;
          }
        }
        else {
          temp_v5 = (temp_v7 * 0x4189 + 0x4189) >> 0x18;
          temp_v7 = 1 << ((temp_v5 - 1) & 0xff);
          if ((temp_v7 & (unsigned char)puVar6[1]) == 0) {
            temp_v8 = temp_v6 + 1;
            temp_v11 = 0;
            if (0 < temp_v8) {
              puVar9 = puVar7;
              do {
                puVar9 = puVar9 + 3;
                temp_v9 = (unsigned int)*puVar9;
                if ((temp_v5 * 1000 < temp_v9) && (temp_v9 < (temp_v5 + 1) * 1000)) {
                  temp_v11 = temp_v11 + temp_v5 * -1000 + temp_v9;
                }
                temp_v8 = temp_v8 - 1;
              } while (temp_v8 != 0);
            }
            temp_v5 = FUN_0014bef4(99);
            if (temp_v5 < temp_v11) {
              temp_v13 = puVar7[temp_v6 * 3 + 2];
              *(unsigned char *)(puVar6 + 1) = (unsigned char)temp_v7 | (unsigned char)puVar6[1];
            }
          }
        }
        if (*puVar6 != 0) {
          if (temp_v13 == 0) {
LAB_0013bd60:
            *puVar6 = temp_v13;
            *(unsigned char *)((int)puVar6 + 3) =
                 ((unsigned char)puVar7[temp_v6 * 3 + 4] & 0x1f) | (*(unsigned char *)((int)puVar6 + 3) & 0xe0);
            if (temp_v0 != '\0') {
              temp_v6 = FUN_00145ec8();
            }
            else {
              temp_v6 = FUN_00145f5c(temp_v4);
            }
            if (temp_v6 != 0) {
              temp_v2 = *(unsigned char *)((int)puVar6 + 3) | 0x20;
              *(unsigned char *)((int)puVar6 + 3) = temp_v2;
            }
          }
        }
        else if (temp_v13 != 0) goto LAB_0013bd60;
      }
      temp_v10 = temp_v10 + 1;
    } while (temp_v10 < temp_v3);
  }
  return;
}
