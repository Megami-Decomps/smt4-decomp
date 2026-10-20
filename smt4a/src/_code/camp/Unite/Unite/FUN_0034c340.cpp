/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034c340` (_code @ 0x34c340, 0x574 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(unsigned short *, unsigned int, int, unsigned char *);
int asdMemoryAlloc(int, int, int, unsigned int, int);
int FUN_00184310(void);
int asdMemFree(unsigned short *);
int FUN_001aba54(void);
int sysMemClear(unsigned char [88], int);
int FUN_002e6dd0(...);
int FUN_0034a290(void);
int FUN_003c3f1c(void);
int FUN_003cd9e8(...);

/* stack frame of param_4: 18 slot(s), 69 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned char sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp160; /* 0x160: local_160 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
    unsigned int sp16C; /* 0x16c: local_16c */
    unsigned int sp170; /* 0x170: local_170 */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned int sp17C; /* 0x17c: local_17c */
    unsigned int sp180; /* 0x180: local_180 */
    unsigned int sp188; /* 0x188: local_188 */
} param_4_stack;

extern unsigned char LAB_0038e764; /* 0x38e764 */

/* Supplied declaration required: qsort. */
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_002e6dd0. */
/* Supplied declaration required: FUN_0034a290. */
/* Supplied declaration required: FUN_003c3f1c. */
/* Supplied declaration required: FUN_003cd9e8. */


/* WARNING: Removing unreachable block (ram,0x0034c888) */
/* WARNING: Removing unreachable block (ram,0x0034c858) */
/* WARNING: Removing unreachable block (ram,0x0034c840) */
/* WARNING: Removing unreachable block (ram,0x0034c870) */
/* WARNING: Removing unreachable block (ram,0x0034c8a0) */

void FUN_0034c340(unsigned short *param_1,unsigned int param_2,int param_3,unsigned short *param_4)

{
/* irregular: 15 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short temp_v1;
  unsigned short temp_v2;
  short temp_v3;
  unsigned short temp_v4;
  unsigned int temp_v5;
  unsigned short *puVar7;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned short *puVar12;
  unsigned short *puVar13;
  unsigned int temp_v10;
  int temp_v11;
  unsigned short *puVar16;
  unsigned short *puVar17;
  unsigned int temp_v12;
  unsigned char temp_v13 [88];
  unsigned int temp_v14;
  unsigned int uStack_e0;
  char acStack_dc [176];
  unsigned int temp_v15;
  
  sysMemClear(temp_v13,0x58);
  temp_v5 = 0;
  if (param_3 != 0) {
    temp_v5 = (*(unsigned int *)(param_3 + 4) & 0x1ffff) >> 2;
  }
  else if (param_4 != (unsigned short *)0x0) {
    temp_v5 = (unsigned int)*param_4;
  }
  FUN_00184310();
  puVar7 = (unsigned short *)0x100;
  asdMemoryAlloc(0x100,0x100,0,param_2 * 6,1);
  FUN_002e6dd0();
  FUN_002e6dd0(&uStack_e0,0xb0);
  temp_v11 = 0;
  if (temp_v11 < (int)param_2) {
    do {
      temp_v6 = (unsigned int)(unsigned short)param_1[temp_v11];
      FUN_003c3f1c();
      temp_v0 = *(unsigned char *)(temp_v6 + 2);
      temp_v11 = temp_v11 + 1;
      temp_v6 = *(unsigned char *)(temp_v6 + 3) & 0x1f;
      temp_v10 = (&uStack_e0)[(unsigned int)temp_v0 * 2];
      if ((int)temp_v6 < (int)temp_v10) {
        temp_v6 = temp_v10;
      }
      (&uStack_e0)[(unsigned int)temp_v0 * 2] = temp_v6;
      acStack_dc[(unsigned int)temp_v0 * 8] = '\x01';
    } while (temp_v11 < (int)param_2);
  }
  temp_v11 = 0;
  if (temp_v11 < (int)param_2) {
    do {
      puVar17 = param_1 + temp_v11;
      puVar16 = puVar7 + temp_v11 * 3;
      *puVar16 = *puVar17;
      temp_v7 = 0;
      do {
        if (*(unsigned short *)(temp_v5 + temp_v7 * 2 + 0x40) == *puVar17) {
          puVar16[1] = 999;
          break;
        }
        temp_v7 = temp_v7 + 1;
      } while (temp_v7 < 8);
      if ((short)puVar16[1] < 999) {
        temp_v6 = (unsigned int)*puVar17;
        FUN_003c3f1c();
        temp_v15 = *(unsigned char *)(temp_v6 + 3) & 0x1f;
        puVar16[1] = (short)temp_v15 + puVar16[1];
        temp_v10 = (unsigned int)*(unsigned char *)(temp_v6 + 2);
        temp_v6 = (unsigned int)*puVar17;
        FUN_001aba54();
        temp_v12 = 0;
        if (temp_v6 != 0) {
          temp_v12 = (unsigned int)*(unsigned short *)(temp_v6 + 0x26);
        }
        temp_v8 = (unsigned int)*puVar17;
        temp_v14 = temp_v6;
        FUN_0034a290();
        temp_v6 = 0;
        if (temp_v8 != 0) {
          temp_v6 = (*(unsigned int *)(temp_v8 + 0x44) & 0xffff) >> 0xb;
        }
        temp_v7 = 0;
        if (temp_v14 != 0) {
          temp_v7 = (int)*(char *)(temp_v12 + temp_v5 + 0xa0);
          temp_v3 = FUN_003cd9e8(temp_v7);
          puVar16[1] = temp_v3 + puVar16[1];
        }
        *(char *)(puVar16 + 2) = (char)temp_v7;
        if (temp_v10 != 10) {
          if ((((temp_v10 == 1 || temp_v10 == 2) || (temp_v10 == 3 || temp_v10 == 4)) ||
              (temp_v10 == 5 || temp_v10 == 6)) ||
             ((temp_v10 == 8 || temp_v10 == 9 || (temp_v10 == 7 || temp_v10 == 10)))) {
            if ((int)((&uStack_e0)[temp_v10 * 2] - temp_v15) >= 4) {
              puVar16[1] = puVar16[1] - 6;
            }
          }
        }
        else {
          if (-1 < temp_v7) {
            puVar16[1] = puVar16[1] + 3;
          }
          if ((int)((&uStack_e0)[temp_v10 * 2] - temp_v15) >= 4) {
            puVar16[1] = puVar16[1] - 6;
          }
        }
        if (temp_v10 != 0x10) {
          if (temp_v10 == 0x11) {
            temp_v7 = 0;
            temp_v9 = 0;
            if (temp_v6 == 5) {
              temp_v9 = 7;
              temp_v7 = 6;
            }
            else if (temp_v6 < 5) {
              switch(temp_v6) {
              case 0:
                temp_v7 = 1;
                temp_v9 = 1;
                break;
              case 1:
                temp_v7 = 2;
                temp_v9 = 3;
                break;
              case 2:
                temp_v7 = 3;
                temp_v9 = 4;
                break;
              case 3:
                temp_v7 = 4;
                temp_v9 = 5;
                break;
              case 4:
                temp_v7 = 5;
                temp_v9 = 6;
              }
            }
            else if (temp_v6 == 6) {
              temp_v9 = 8;
              temp_v7 = temp_v9;
            }
            else if (temp_v6 == 7) {
              temp_v9 = 9;
              temp_v7 = temp_v9;
            }
            else if (temp_v6 == 0x14) {
              temp_v7 = 7;
              temp_v9 = 10;
            }
            else if (temp_v6 == 0x19) {
              temp_v7 = 10;
              temp_v9 = 0xe;
            }
            if (acStack_dc[temp_v7 * 8] == '\0') {
              puVar16[1] = puVar16[1] - 7;
            }
            if (*(char *)(temp_v9 + temp_v5 + 0xa0) < '\0') {
              temp_v3 = FUN_003cd9e8();
              temp_v4 = temp_v3 + puVar16[1];
              puVar16[1] = temp_v4;
            }
          }
        }
        else if ((((temp_v6 < 2) || (temp_v6 == 2 || temp_v6 == 3)) ||
                 ((temp_v6 == 4 || temp_v6 == 5 || (temp_v6 == 6 || temp_v6 == 7)))) &&
                (*(unsigned short *)(temp_v5 + temp_v6 * 2 + 0x70) >> 10 == 2)) {
          temp_v4 = puVar16[1] + 7;
          puVar16[1] = temp_v4;
        }
        if ((short)puVar16[1] < 1) {
          puVar16[1] = 1;
        }
      }
      temp_v11 = temp_v11 + 1;
    } while (temp_v11 < (int)param_2);
  }
  qsort(puVar7,param_2,6,&LAB_0038e764);
  if (0 < (int)(param_2 - 1)) {
    puVar12 = puVar7 + -3;
    puVar13 = param_1 + -1;
    if ((param_2 & 1) == 0) {
      *param_1 = *puVar7;
      puVar12 = puVar7;
      puVar13 = param_1;
    }
    temp_v1 = puVar12[3];
    for (temp_v11 = (int)(param_2 - 1) >> 1; temp_v11 != 0; temp_v11 = temp_v11 - 1) {
      temp_v2 = puVar12[6];
      puVar13[1] = temp_v1;
      temp_v1 = puVar12[9];
      puVar13 = puVar13 + 2;
      *puVar13 = temp_v2;
      puVar12 = puVar12 + 6;
    }
  }
  temp_v11 = param_2 - 1;
  if (-1 < temp_v11) {
    param_1[temp_v11] = puVar7[temp_v11 * 3];
  }
  asdMemFree(puVar7);
  return;
}

} /* extern "C" */
