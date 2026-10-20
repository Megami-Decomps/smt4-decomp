/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c25f0` (_code @ 0x3c25f0, 0x2ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable24Sub0Get(void);
int dataTable24Sub0GetEntries(void);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned short *FUN_00111a5c(char, char, short);
extern int gameFlagIsSet(unsigned int);
extern unsigned int randNextInRange(unsigned int);
extern unsigned short *FUN_002c0a2c(char, char, short);
extern int FUN_002c0a84(void);
/* Supplied declaration required: dataTable24Sub0Get. */
/* Supplied declaration required: dataTable24Sub0GetEntries. */


void FUN_003c25f0(int param_1)

{
/* irregular: 2 goto(s); 2 native warning(s); review required */
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
  unsigned short *puVar11;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  short temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned short temp_v13;
  
  dataTable24Sub0GetEntries();
  temp_v5 = param_1;
  dataTable24Sub0Get();
  temp_v11 = 0;
  if (temp_v11 < temp_v5) {
    do {
      temp_v6 = param_1 + temp_v11 * 0x94;
      temp_v1 = *(char *)(param_1 + temp_v11 * 0x94);
      temp_v2 = *(char *)(temp_v6 + 1);
      temp_v10 = *(short *)(temp_v6 + 2);
      if (temp_v2 != '\0') {
        if (temp_v10 == 6) {
          temp_v10 = 0;
        }
        else if (temp_v10 == 7) {
          temp_v10 = 1;
        }
      }
      else if (temp_v10 == 7) {
        temp_v10 = 6;
      }
      puVar8 = (unsigned short *)FUN_002c0a2c(temp_v2,temp_v1,temp_v10);
      *puVar8 = 0;
      *(unsigned char *)(puVar8 + 1) = 0;
      *(unsigned char *)((int)puVar8 + 3) = *(unsigned char *)((int)puVar8 + 3) & 0xc0;
      temp_v6 = FUN_002c0a84();
      puVar9 = (unsigned short *)FUN_002c0a2c(temp_v2,temp_v1,temp_v10);
      if (temp_v6 == 0) {
        *(unsigned char *)(puVar9 + 1) = 0;
      }
      temp_v4 = *(unsigned char *)((int)puVar9 + 3);
      if ((temp_v4 & 0x1f) >= 2) {
        *(unsigned char *)((int)puVar9 + 3) = (temp_v4 & 0xe0) | ((temp_v4 - 1) & 0x1f);
      }
      else {
        *(unsigned char *)((int)puVar9 + 3) = temp_v4 & 0xe0;
        puVar10 = (unsigned short *)FUN_00111a5c(temp_v2,temp_v1,temp_v10);
        temp_v13 = *puVar9;
        temp_v8 = (unsigned int)puVar10[temp_v6 * 3 + 3];
        if (temp_v8 == 0) {
          temp_v13 = 0;
        }
        else if (temp_v8 < 1000) {
          temp_v8 = randNextInRange(99);
          if ((temp_v8 < puVar10[temp_v6 * 3 + 3]) && (temp_v3 = puVar10[temp_v6 * 3 + 2], temp_v3 != 0)) {
            temp_v13 = temp_v3;
          }
        }
        else {
          temp_v8 = (temp_v8 * 0x4189 + 0x4189) >> 0x18;
          temp_v0 = 1 << ((temp_v8 - 1) & 0xff);
          if (((unsigned char)puVar9[1] & temp_v0) == 0) {
            temp_v7 = temp_v6 + 1;
            temp_v12 = 0;
            if (0 < temp_v7) {
              puVar11 = puVar10;
              do {
                puVar11 = puVar11 + 3;
                temp_v9 = (unsigned int)*puVar11;
                if ((temp_v8 * 1000 < temp_v9) && (temp_v9 < (temp_v8 + 1) * 1000)) {
                  temp_v12 = temp_v12 + temp_v8 * -1000 + temp_v9;
                }
                temp_v7 = temp_v7 - 1;
              } while (temp_v7 != 0);
            }
            temp_v8 = randNextInRange(99);
            if (temp_v8 < temp_v12) {
              temp_v13 = puVar10[temp_v6 * 3 + 2];
              *(unsigned char *)(puVar9 + 1) = (unsigned char)temp_v0 | (unsigned char)puVar9[1];
            }
          }
        }
        temp_v7 = gameFlagIsSet(0x668);
        if ((temp_v7 != 0) && (temp_v7 = gameFlagIsSet(0x1d7), temp_v7 == 0)) {
          if (temp_v2 != '\0') {
            if ((temp_v2 != '\x01') || (temp_v1 != '\t')) goto LAB_003c2834;
          }
          else if (temp_v1 != '\b') goto LAB_003c2834;
          *puVar9 = 0;
          *(unsigned char *)(puVar9 + 1) = 0;
          temp_v4 = *(unsigned char *)((int)puVar9 + 3) & 0xc0;
          *(unsigned char *)((int)puVar9 + 3) = temp_v4;
        }
        else {
LAB_003c2834:
          if (*puVar9 != 0) {
            if (temp_v13 == 0) {
              *puVar9 = temp_v13;
              temp_v4 = ((unsigned char)puVar10[temp_v6 * 3 + 4] & 0x1f) | (*(unsigned char *)((int)puVar9 + 3) & 0xe0);
              *(unsigned char *)((int)puVar9 + 3) = temp_v4;
            }
          }
          else if (temp_v13 != 0) {
            *puVar9 = temp_v13;
            temp_v4 = ((unsigned char)puVar10[temp_v6 * 3 + 4] & 0x1f) | (*(unsigned char *)((int)puVar9 + 3) & 0xe0);
            *(unsigned char *)((int)puVar9 + 3) = temp_v4;
          }
        }
      }
      temp_v11 = temp_v11 + 1;
    } while (temp_v11 < temp_v5);
  }
  return;
}

} /* extern "C" */
