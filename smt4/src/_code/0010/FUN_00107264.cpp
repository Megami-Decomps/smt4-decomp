/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107264` (_code @ 0x107264, 0x2c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c0c5c(void);
int FUN_002c0cac(void);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_0010f498(void);
extern int FUN_0010f4d4(char);
extern unsigned short *FUN_00111a5c(char, char, short);
extern int FUN_002c09d0(unsigned int);
extern unsigned int FUN_002c09f4(unsigned int);
extern unsigned short *FUN_002c0a2c(char, char, short);
extern int FUN_002c0a84(void);
/* Supplied declaration required: FUN_002c0c5c. */
/* Supplied declaration required: FUN_002c0cac. */


void FUN_00107264(int param_1)

{
/* irregular: 3 goto(s); 2 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  char temp_v2;
  unsigned short temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  unsigned short *puVar7;
  unsigned short *puVar8;
  unsigned short *puVar9;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  short temp_v11;
  unsigned int temp_v12;
  unsigned short temp_v13;
  
  FUN_002c0cac();
  temp_v5 = param_1;
  FUN_002c0c5c();
  temp_v10 = 0;
  if (temp_v10 < temp_v5) {
    do {
      temp_v7 = param_1 + temp_v10 * 0x94;
      temp_v1 = *(char *)(param_1 + temp_v10 * 0x94);
      temp_v2 = *(char *)(temp_v7 + 1);
      temp_v11 = *(short *)(temp_v7 + 2);
      if (temp_v2 != '\0') {
        if (temp_v11 == 6) {
          temp_v11 = 0;
        }
        else if (temp_v11 == 7) {
          temp_v11 = 1;
        }
      }
      else if (temp_v11 == 7) {
        temp_v11 = 6;
      }
      temp_v7 = FUN_002c0a84();
      puVar7 = (unsigned short *)FUN_002c0a2c(temp_v2,temp_v1,temp_v11);
      if (temp_v7 == 0) {
        *(unsigned char *)(puVar7 + 1) = 0;
      }
      temp_v4 = *(unsigned char *)((int)puVar7 + 3);
      if ((temp_v4 & 0x1f) >= 2) {
        temp_v4 = (temp_v4 & 0xe0) | ((temp_v4 - 1) & 0x1f);
        *(unsigned char *)((int)puVar7 + 3) = temp_v4;
      }
      else {
        *(unsigned char *)((int)puVar7 + 3) = temp_v4 & 0xe0;
        puVar8 = (unsigned short *)FUN_00111a5c(temp_v2,temp_v1,temp_v11);
        temp_v13 = *puVar7;
        temp_v8 = (unsigned int)puVar8[temp_v7 * 3 + 3];
        if (temp_v8 == 0) {
          temp_v13 = 0;
        }
        else if (temp_v8 < 1000) {
          temp_v8 = FUN_002c09f4(99);
          if ((temp_v8 < puVar8[temp_v7 * 3 + 3]) && (temp_v3 = puVar8[temp_v7 * 3 + 2], temp_v3 != 0)) {
            temp_v13 = temp_v3;
          }
        }
        else {
          temp_v8 = (temp_v8 * 0x4189 + 0x4189) >> 0x18;
          temp_v0 = 1 << ((temp_v8 - 1) & 0xff);
          if ((temp_v0 & (unsigned char)puVar7[1]) == 0) {
            temp_v6 = temp_v7 + 1;
            temp_v12 = 0;
            if (0 < temp_v6) {
              puVar9 = puVar8;
              do {
                puVar9 = puVar9 + 3;
                temp_v9 = (unsigned int)*puVar9;
                if ((temp_v8 * 1000 < temp_v9) && (temp_v9 < (temp_v8 + 1) * 1000)) {
                  temp_v12 = temp_v12 + temp_v8 * -1000 + temp_v9;
                }
                temp_v6 = temp_v6 - 1;
              } while (temp_v6 != 0);
            }
            temp_v8 = FUN_002c09f4(99);
            if (temp_v8 < temp_v12) {
              temp_v13 = puVar8[temp_v7 * 3 + 2];
              *(unsigned char *)(puVar7 + 1) = (unsigned char)temp_v0 | (unsigned char)puVar7[1];
            }
          }
        }
        temp_v6 = FUN_002c09d0(0x668);
        if ((temp_v6 != 0) && (temp_v6 = FUN_002c09d0(0x1d7), temp_v6 == 0)) {
          if (temp_v2 != '\0') {
            if ((temp_v2 != '\x01') || (temp_v1 != '\t')) goto LAB_0010749c;
          }
          else if (temp_v1 != '\b') goto LAB_0010749c;
          *puVar7 = 0;
          *(unsigned char *)(puVar7 + 1) = 0;
          *(unsigned char *)((int)puVar7 + 3) = *(unsigned char *)((int)puVar7 + 3) & 0xc0;
        }
        else {
LAB_0010749c:
          if (*puVar7 != 0) {
            if (temp_v13 == 0) {
LAB_001074d8:
              *puVar7 = temp_v13;
              *(unsigned char *)((int)puVar7 + 3) =
                   ((unsigned char)puVar8[temp_v7 * 3 + 4] & 0x1f) | (*(unsigned char *)((int)puVar7 + 3) & 0xe0);
              if (temp_v2 != '\0') {
                temp_v7 = FUN_0010f498();
              }
              else {
                temp_v7 = FUN_0010f4d4(temp_v1);
              }
              if (temp_v7 != 0) {
                temp_v4 = *(unsigned char *)((int)puVar7 + 3) | 0x20;
                *(unsigned char *)((int)puVar7 + 3) = temp_v4;
              }
            }
          }
          else if (temp_v13 != 0) goto LAB_001074d8;
        }
      }
      temp_v10 = temp_v10 + 1;
    } while (temp_v10 < temp_v5);
  }
  return;
}

} /* extern "C" */
