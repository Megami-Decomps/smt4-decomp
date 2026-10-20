/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cd960` (_code @ 0x4cd960, 0x270 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00148bb8(unsigned int, int);
int dataTable18Sub0GetCount(void);
int dataTable18Sub0GetEntries(void);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned short *FUN_00145f04(char, unsigned int, short);
/* Supplied declaration required: FUN_00148bb8. */
extern unsigned short *FUN_00148c30(char, unsigned int, short);
extern unsigned int randRange(unsigned int);
extern int FUN_0015fb68(void);
/* Supplied declaration required: dataTable18Sub0GetCount. */
/* Supplied declaration required: dataTable18Sub0GetEntries. */


void FUN_004cd960(int param_1)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  unsigned short temp_v1;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned short *puVar6;
  unsigned short *puVar7;
  unsigned int temp_v5;
  unsigned short *puVar9;
  unsigned short *puVar10;
  int temp_v6;
  unsigned int temp_v7;
  short temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned short temp_v12;
  
  dataTable18Sub0GetEntries();
  temp_v3 = param_1;
  dataTable18Sub0GetCount();
  temp_v9 = 0;
  if (temp_v9 < temp_v3) {
    do {
      temp_v4 = param_1 + temp_v9 * 0x94;
      temp_v11 = (unsigned int)*(unsigned char *)(param_1 + temp_v9 * 0x94);
      temp_v0 = *(char *)(temp_v4 + 1);
      temp_v8 = *(short *)(temp_v4 + 2);
      if (temp_v0 != '\0') {
        if (temp_v8 == 6) {
          temp_v8 = 0;
        }
        else if (temp_v8 == 7) {
          temp_v8 = 1;
        }
      }
      else if (temp_v8 == 7) {
        temp_v8 = 6;
      }
      puVar6 = (unsigned short *)FUN_00145f04(temp_v0,temp_v11,temp_v8);
      *puVar6 = 0;
      *(unsigned char *)(puVar6 + 1) = 0;
      *(unsigned char *)((int)puVar6 + 3) = *(unsigned char *)((int)puVar6 + 3) & 0xc0;
      temp_v4 = FUN_0015fb68();
      puVar7 = (unsigned short *)FUN_00145f04(temp_v0,temp_v11,temp_v8);
      temp_v5 = temp_v11;
      FUN_00148bb8(temp_v11,temp_v0);
      if (temp_v5 == 0) {
        *puVar7 = 0;
        *(unsigned char *)((int)puVar7 + 3) = *(unsigned char *)((int)puVar7 + 3) & 0xe0;
      }
      if (temp_v4 == 0) {
        *(unsigned char *)(puVar7 + 1) = 0;
      }
      temp_v2 = *(unsigned char *)((int)puVar7 + 3);
      if ((temp_v2 & 0x1f) >= 2) {
        temp_v2 = (temp_v2 & 0xe0) | ((temp_v2 - 1) & 0x1f);
        *(unsigned char *)((int)puVar7 + 3) = temp_v2;
      }
      else {
        *(unsigned char *)((int)puVar7 + 3) = temp_v2 & 0xe0;
        puVar9 = (unsigned short *)FUN_00148c30(temp_v0,temp_v11,temp_v8);
        temp_v12 = *puVar7;
        temp_v11 = (unsigned int)puVar9[temp_v4 * 3 + 3];
        if ((-temp_v5 & temp_v11) == 0) {
          temp_v12 = 0;
        }
        else if (temp_v11 < 1000) {
          temp_v11 = randRange(99);
          if ((temp_v11 < puVar9[temp_v4 * 3 + 3]) && (temp_v1 = puVar9[temp_v4 * 3 + 2], temp_v1 != 0)) {
            temp_v12 = temp_v1;
          }
        }
        else {
          temp_v11 = (temp_v11 * 0x4189 + 0x4189) >> 0x18;
          temp_v5 = 1 << ((temp_v11 - 1) & 0xff);
          if ((temp_v5 & (unsigned char)puVar7[1]) == 0) {
            temp_v6 = temp_v4 + 1;
            temp_v10 = 0;
            if (0 < temp_v6) {
              puVar10 = puVar9;
              do {
                puVar10 = puVar10 + 3;
                temp_v7 = (unsigned int)*puVar10;
                if ((temp_v11 * 1000 < temp_v7) && (temp_v7 < (temp_v11 + 1) * 1000)) {
                  temp_v10 = temp_v10 + temp_v11 * -1000 + temp_v7;
                }
                temp_v6 = temp_v6 - 1;
              } while (temp_v6 != 0);
            }
            temp_v11 = randRange(99);
            if (temp_v11 < temp_v10) {
              temp_v12 = puVar9[temp_v4 * 3 + 2];
              *(unsigned char *)(puVar7 + 1) = (unsigned char)temp_v5 | (unsigned char)puVar7[1];
            }
          }
        }
        if (*puVar7 != 0) {
          if (temp_v12 == 0) {
            *puVar7 = temp_v12;
            temp_v2 = ((unsigned char)puVar9[temp_v4 * 3 + 4] & 0x1f) | (*(unsigned char *)((int)puVar7 + 3) & 0xe0);
            *(unsigned char *)((int)puVar7 + 3) = temp_v2;
          }
        }
        else if (temp_v12 != 0) {
          *puVar7 = temp_v12;
          temp_v2 = ((unsigned char)puVar9[temp_v4 * 3 + 4] & 0x1f) | (*(unsigned char *)((int)puVar7 + 3) & 0xe0);
          *(unsigned char *)((int)puVar7 + 3) = temp_v2;
        }
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < temp_v3);
  }
  return;
}

} /* extern "C" */
