/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c2818` (_code @ 0x3c2818, 0x2ac bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned short *FUN_00111968(char, char, short);
extern int FUN_002c0ba8(unsigned int);
extern unsigned int FUN_002c0bcc(unsigned int);
extern unsigned short *FUN_002c0c04(char, char, short);
extern int FUN_002c0c5c(void);
/* Supplied declaration required: FUN_002c0e34. */
extern int FUN_002c0e84(void);


void FUN_003c2818(void)

{
/* irregular: 2 goto(s); 1 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  char temp_v2;
  unsigned short temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned short *puVar9;
  unsigned short *puVar10;
  unsigned short *puVar11;
  unsigned short *puVar12;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  short temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned short temp_v14;
  
  temp_v5 = FUN_002c0e84();
  temp_v6 = temp_v5;
  FUN_002c0e34();
  temp_v12 = 0;
  if (temp_v12 < temp_v6) {
    do {
      temp_v7 = temp_v5 + temp_v12 * 0x94;
      temp_v1 = *(char *)(temp_v5 + temp_v12 * 0x94);
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
      puVar9 = (unsigned short *)FUN_002c0c04(temp_v2,temp_v1,temp_v11);
      *puVar9 = 0;
      *(unsigned char *)(puVar9 + 1) = 0;
      *(unsigned char *)((int)puVar9 + 3) = *(unsigned char *)((int)puVar9 + 3) & 0xc0;
      temp_v7 = FUN_002c0c5c();
      puVar10 = (unsigned short *)FUN_002c0c04(temp_v2,temp_v1,temp_v11);
      if (temp_v7 == 0) {
        *(unsigned char *)(puVar10 + 1) = 0;
      }
      temp_v4 = *(unsigned char *)((int)puVar10 + 3);
      if ((temp_v4 & 0x1f) >= 2) {
        *(unsigned char *)((int)puVar10 + 3) = (temp_v4 & 0xe0) | ((temp_v4 - 1) & 0x1f);
      }
      else {
        *(unsigned char *)((int)puVar10 + 3) = temp_v4 & 0xe0;
        puVar11 = (unsigned short *)FUN_00111968(temp_v2,temp_v1,temp_v11);
        temp_v14 = *puVar10;
        temp_v9 = (unsigned int)puVar11[temp_v7 * 3 + 3];
        if (temp_v9 == 0) {
          temp_v14 = 0;
        }
        else if (temp_v9 < 1000) {
          temp_v9 = FUN_002c0bcc(99);
          if ((temp_v9 < puVar11[temp_v7 * 3 + 3]) && (temp_v3 = puVar11[temp_v7 * 3 + 2], temp_v3 != 0)) {
            temp_v14 = temp_v3;
          }
        }
        else {
          temp_v9 = (temp_v9 * 0x4189 + 0x4189) >> 0x18;
          temp_v0 = 1 << ((temp_v9 - 1) & 0xff);
          if (((unsigned char)puVar10[1] & temp_v0) == 0) {
            temp_v8 = temp_v7 + 1;
            temp_v13 = 0;
            if (0 < temp_v8) {
              puVar12 = puVar11;
              do {
                puVar12 = puVar12 + 3;
                temp_v10 = (unsigned int)*puVar12;
                if ((temp_v9 * 1000 < temp_v10) && (temp_v10 < (temp_v9 + 1) * 1000)) {
                  temp_v13 = temp_v13 + temp_v9 * -1000 + temp_v10;
                }
                temp_v8 = temp_v8 - 1;
              } while (temp_v8 != 0);
            }
            temp_v9 = FUN_002c0bcc(99);
            if (temp_v9 < temp_v13) {
              temp_v14 = puVar11[temp_v7 * 3 + 2];
              *(unsigned char *)(puVar10 + 1) = (unsigned char)temp_v0 | (unsigned char)puVar10[1];
            }
          }
        }
        temp_v8 = FUN_002c0ba8(0x668);
        if ((temp_v8 != 0) && (temp_v8 = FUN_002c0ba8(0x1d7), temp_v8 == 0)) {
          if (temp_v2 != '\0') {
            if ((temp_v2 != '\x01') || (temp_v1 != '\t')) goto LAB_003c2a5c;
          }
          else if (temp_v1 != '\b') goto LAB_003c2a5c;
          *puVar10 = 0;
          *(unsigned char *)(puVar10 + 1) = 0;
          temp_v4 = *(unsigned char *)((int)puVar10 + 3) & 0xc0;
          *(unsigned char *)((int)puVar10 + 3) = temp_v4;
        }
        else {
LAB_003c2a5c:
          if (*puVar10 != 0) {
            if (temp_v14 == 0) {
              *puVar10 = temp_v14;
              temp_v4 = ((unsigned char)puVar11[temp_v7 * 3 + 4] & 0x1f) | (*(unsigned char *)((int)puVar10 + 3) & 0xe0);
              *(unsigned char *)((int)puVar10 + 3) = temp_v4;
            }
          }
          else if (temp_v14 != 0) {
            *puVar10 = temp_v14;
            temp_v4 = ((unsigned char)puVar11[temp_v7 * 3 + 4] & 0x1f) | (*(unsigned char *)((int)puVar10 + 3) & 0xe0);
            *(unsigned char *)((int)puVar10 + 3) = temp_v4;
          }
        }
      }
      temp_v12 = temp_v12 + 1;
    } while (temp_v12 < temp_v6);
  }
  return;
}
