/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00107208` (_code @ 0x107208, 0x2c8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int FUN_0010f474(void);
extern int FUN_0010f4b0(char);
extern unsigned short *FUN_00111968(char, char, short);
extern int FUN_002c0ba8(unsigned int);
extern unsigned int FUN_002c0bcc(unsigned int);
extern unsigned short *FUN_002c0c04(char, char, short);
extern int FUN_002c0c5c(void);
/* Supplied declaration required: FUN_002c0e34. */
extern int FUN_002c0e84(void);


void FUN_00107208(void)

{
/* irregular: 3 goto(s); 1 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  char temp_v2;
  unsigned short temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned short *puVar8;
  unsigned short *puVar9;
  unsigned short *puVar10;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  short temp_v12;
  unsigned int temp_v13;
  unsigned short temp_v14;
  
  temp_v5 = FUN_002c0e84();
  temp_v6 = temp_v5;
  FUN_002c0e34();
  temp_v11 = 0;
  if (temp_v11 < temp_v6) {
    do {
      temp_v8 = temp_v5 + temp_v11 * 0x94;
      temp_v1 = *(char *)(temp_v5 + temp_v11 * 0x94);
      temp_v2 = *(char *)(temp_v8 + 1);
      temp_v12 = *(short *)(temp_v8 + 2);
      if (temp_v2 != '\0') {
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
      temp_v8 = FUN_002c0c5c();
      puVar8 = (unsigned short *)FUN_002c0c04(temp_v2,temp_v1,temp_v12);
      if (temp_v8 == 0) {
        *(unsigned char *)(puVar8 + 1) = 0;
      }
      temp_v4 = *(unsigned char *)((int)puVar8 + 3);
      if ((temp_v4 & 0x1f) >= 2) {
        temp_v4 = (temp_v4 & 0xe0) | ((temp_v4 - 1) & 0x1f);
        *(unsigned char *)((int)puVar8 + 3) = temp_v4;
      }
      else {
        *(unsigned char *)((int)puVar8 + 3) = temp_v4 & 0xe0;
        puVar9 = (unsigned short *)FUN_00111968(temp_v2,temp_v1,temp_v12);
        temp_v14 = *puVar8;
        temp_v9 = (unsigned int)puVar9[temp_v8 * 3 + 3];
        if (temp_v9 == 0) {
          temp_v14 = 0;
        }
        else if (temp_v9 < 1000) {
          temp_v9 = FUN_002c0bcc(99);
          if ((temp_v9 < puVar9[temp_v8 * 3 + 3]) && (temp_v3 = puVar9[temp_v8 * 3 + 2], temp_v3 != 0)) {
            temp_v14 = temp_v3;
          }
        }
        else {
          temp_v9 = (temp_v9 * 0x4189 + 0x4189) >> 0x18;
          temp_v0 = 1 << ((temp_v9 - 1) & 0xff);
          if ((temp_v0 & (unsigned char)puVar8[1]) == 0) {
            temp_v7 = temp_v8 + 1;
            temp_v13 = 0;
            if (0 < temp_v7) {
              puVar10 = puVar9;
              do {
                puVar10 = puVar10 + 3;
                temp_v10 = (unsigned int)*puVar10;
                if ((temp_v9 * 1000 < temp_v10) && (temp_v10 < (temp_v9 + 1) * 1000)) {
                  temp_v13 = temp_v13 + temp_v9 * -1000 + temp_v10;
                }
                temp_v7 = temp_v7 - 1;
              } while (temp_v7 != 0);
            }
            temp_v9 = FUN_002c0bcc(99);
            if (temp_v9 < temp_v13) {
              temp_v14 = puVar9[temp_v8 * 3 + 2];
              *(unsigned char *)(puVar8 + 1) = (unsigned char)temp_v0 | (unsigned char)puVar8[1];
            }
          }
        }
        temp_v7 = FUN_002c0ba8(0x668);
        if ((temp_v7 != 0) && (temp_v7 = FUN_002c0ba8(0x1d7), temp_v7 == 0)) {
          if (temp_v2 != '\0') {
            if ((temp_v2 != '\x01') || (temp_v1 != '\t')) goto LAB_00107440;
          }
          else if (temp_v1 != '\b') goto LAB_00107440;
          *puVar8 = 0;
          *(unsigned char *)(puVar8 + 1) = 0;
          *(unsigned char *)((int)puVar8 + 3) = *(unsigned char *)((int)puVar8 + 3) & 0xc0;
        }
        else {
LAB_00107440:
          if (*puVar8 != 0) {
            if (temp_v14 == 0) {
LAB_0010747c:
              *puVar8 = temp_v14;
              *(unsigned char *)((int)puVar8 + 3) =
                   ((unsigned char)puVar9[temp_v8 * 3 + 4] & 0x1f) | (*(unsigned char *)((int)puVar8 + 3) & 0xe0);
              if (temp_v2 != '\0') {
                temp_v8 = FUN_0010f474();
              }
              else {
                temp_v8 = FUN_0010f4b0(temp_v1);
              }
              if (temp_v8 != 0) {
                temp_v4 = *(unsigned char *)((int)puVar8 + 3) | 0x20;
                *(unsigned char *)((int)puVar8 + 3) = temp_v4;
              }
            }
          }
          else if (temp_v14 != 0) goto LAB_0010747c;
        }
      }
      temp_v11 = temp_v11 + 1;
    } while (temp_v11 < temp_v6);
  }
  return;
}
