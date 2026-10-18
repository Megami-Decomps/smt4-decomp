/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027079c` (_code @ 0x27079c, 0x78c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
} void_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447e88; /* 0x447e88 */
extern int DAT_0044cd88; /* 0x44cd88 */
extern int DAT_0049f91c; /* 0x49f91c */
extern signed char DAT_0049f934; /* 0x49f934 */
extern unsigned int DAT_0049f9a0; /* 0x49f9a0 */
extern unsigned int DAT_0049f9a4; /* 0x49f9a4 */
extern unsigned int DAT_0049f9a8; /* 0x49f9a8 */
extern unsigned char DAT_0049fa3a; /* 0x49fa3a */
extern int DAT_0049fa3c; /* 0x49fa3c */
extern unsigned char DAT_0049fa40; /* 0x49fa40 */
extern unsigned char DAT_0049fa58; /* 0x49fa58 */
extern int DAT_0049fa5c; /* 0x49fa5c */
extern unsigned char DAT_0049fa60; /* 0x49fa60 */
extern unsigned short DAT_0049fab0; /* 0x49fab0 */
extern unsigned int DAT_0049fc1c; /* 0x49fc1c */
extern int DAT_0049fc84; /* 0x49fc84 */

/* Supplied declaration required: FUN_00152af8. */
/* Supplied declaration required: FUN_001fc004. */
extern int FUN_0021e6f8(int, unsigned int);
extern int FUN_0027ee10(void);
/* Supplied declaration required: FUN_0027ee6c. */
/* Supplied declaration required: FUN_0027f094. */
extern int FUN_0027f10c(void);
extern unsigned int FUN_0027f13c(void);
/* Supplied declaration required: FUN_0027f150. */
extern int FUN_0027f170(void);
/* Supplied declaration required: FUN_00282600. */
/* Supplied declaration required: FUN_0028277c. */
/* Supplied declaration required: FUN_00287ce0. */
/* Supplied declaration required: FUN_002899c4. */
/* Supplied declaration required: FUN_00295cbc. */
/* Supplied declaration required: FUN_0029c0fc. */
/* Supplied declaration required: FUN_002a7aa0. */
/* Supplied declaration required: FUN_002b91c4. */
/* Supplied declaration required: FUN_002bf86c. */
/* Supplied declaration required: FUN_002bf9e8. */
extern int FUN_002c2b1c(void);
/* Supplied declaration required: FUN_002e8510. */
/* Supplied declaration required: FUN_002e8a38. */
/* Supplied declaration required: FUN_002f3acc. */
/* Supplied declaration required: FUN_002f3b78. */


unsigned int FUN_0027079c(void)

{
/* irregular: 3 goto(s); 19 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned char temp_v10;
  float temp_v11;
  unsigned long long temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  int temp_v16;
  int temp_v17 [2];
  int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int *temp_v23;
  
  temp_v8 = 0;
  temp_v1 = FUN_002c2b1c();
  FUN_001fc004();
  temp_v9 = 0;
  temp_v12 = 0x3c8efa3500000000;
  temp_v13 = 100.0f;
  temp_v23 = &DAT_0049fc1c;
  temp_v7 = 0;
  do {
    temp_v6 = DAT_0044cd88 + temp_v7 * 0x4c;
    if (*(char *)(temp_v6 + 0x58) != '\0') {
      switch(*(unsigned int *)(temp_v6 + 0x5c)) {
      case 1:
        temp_v11 = *(float *)(DAT_00447e88 + 0x20) - *(float *)(temp_v6 + 0x68);
        if (((unsigned int)temp_v11 < 0xc2c80001) && ((int)temp_v11 < 0x42c80001)) {
          if (*(short *)(DAT_0044cd88 + 4) < 100) {
            temp_v0 = *(short *)(temp_v6 + 0x7c);
            if ((temp_v0 != 3 && temp_v0 != 4) && temp_v0 != 5) {
              temp_v3 = FUN_0027f170();
              goto joined_r0x00270938;
            }
            temp_v3 = FUN_0027f170();
            if (temp_v3 == 0) break;
            temp_v3 = *(int *)(temp_v6 + 100);
            FUN_00287ce0();
            if (temp_v3 >= 0x41f00000) break;
            temp_v3 = *(int *)(temp_v6 + 0x70);
            FUN_0027f150();
            if (temp_v3 < 0x43160001) break;
          }
          else {
            temp_v3 = FUN_0027f170();
joined_r0x00270938:
            if (temp_v3 == 0) break;
          }
          temp_v17[0] = 0;
          if (DAT_0049f91c < 100) {
            temp_v2 = FUN_0027f13c();
            temp_v10 = temp_v2 == 1;
            if (temp_v10) {
              temp_v2 = (unsigned int)DAT_0049fab0;
            }
            if (temp_v10 && temp_v2 == 0) {
              temp_v17[0] = 1;
            }
          }
          else {
            temp_v17[0] = 1;
          }
          if ((*(char *)(temp_v23 + 0x12) == '\0') && (DAT_0049f934 == '\0')) {
            if ((DAT_0049fc84 == 0) || (DAT_0049fc84 == 4)) {
              temp_v3 = FUN_0027f10c();
              if (((temp_v3 != 0) && (*(char *)(DAT_004474f4 + 0xb0) == '\0')) && (temp_v17[0] != 0))
              {
                DAT_0049fa58 = 0;
                DAT_0049fa5c = 0;
                temp_v3 = *(int *)(temp_v6 + 0x80);
                if (temp_v3 < -1) {
                  temp_v16 = FUN_0021e6f8(-temp_v3,1);
                  temp_v0 = *(short *)(temp_v6 + 0x7c);
                  if (((temp_v0 == 3 || temp_v0 == 4) || ((temp_v0 == 5 || temp_v0 == 7) || temp_v0 == 1)) &&
                     (*(char *)(DAT_0044cd88 + 0x14) != '\0')) {
                    DAT_0049fa58 = 1;
                    DAT_0049fa5c = temp_v16;
                  }
                }
                else {
                  FUN_0027f094();
                  if (*(short *)(temp_v3 + 0x10) != 0) {
                    FUN_002899c4((int)*(short *)(temp_v3 + 0x10),1);
                  }
                  temp_v16 = (int)*(short *)(temp_v3 + 0x12);
                  if (temp_v16 != 0) {
                    FUN_00295cbc(temp_v16,1);
                  }
                  else {
                    temp_v16 = FUN_0021e6f8((int)*(short *)(temp_v3 + 0x14),1);
                    temp_v0 = *(short *)(temp_v6 + 0x7c);
                    if ((((temp_v0 == 3) || (temp_v0 == 4 || temp_v0 == 5)) || (temp_v0 == 7 || temp_v0 == 1))
                       && (*(char *)(DAT_0044cd88 + 0x14) != '\0')) {
                      DAT_0049fa58 = 1;
                      DAT_0049fa5c = temp_v16;
                    }
                  }
                  if (*(short *)(temp_v3 + 0x16) != 0) {
                    DAT_0049fa3a = 1;
                    DAT_0049fa3c = (int)*(short *)(temp_v3 + 0x16);
                    FUN_002bf86c(&DAT_0049fa40,temp_v3 + 0x18);
                  }
                }
                if (temp_v16 != 0) {
                  if (*(short *)(DAT_0044cd88 + 4) < 100) {
                    temp_v0 = *(short *)(temp_v6 + 0x7c);
                    if ((temp_v0 == 3 || temp_v0 == 4) || temp_v0 == 5) {
                      temp_v8 = *(unsigned int *)(temp_v6 + 0x68);
                      temp_v14 = *(float *)(temp_v6 + 100);
                      temp_v11 = *(float *)(temp_v6 + 0x70) * (float)((unsigned long long)temp_v12 >> 0x20);
                      temp_v15 = *(float *)(temp_v6 + 0x6c);
                      FUN_0028277c();
                      temp_v14 = temp_v14 + temp_v11 * temp_v13;
                      temp_v11 = *(float *)(temp_v6 + 0x70) * (float)((unsigned long long)temp_v12 >> 0x20);
                      FUN_00282600();
                      temp_v3 = DAT_00447e88;
                      *(float *)(DAT_00447e88 + 0x28) = temp_v14;
                      *(unsigned int *)(temp_v3 + 0x2c) = temp_v8;
                      *(float *)(temp_v3 + 0x30) = temp_v15 + temp_v11 * temp_v13;
                      goto LAB_00270c28;
                    }
LAB_00270b3c:
                    if (*(short *)(temp_v6 + 0x7c) != 7) {
                      temp_v17[0] = 1;
                      DAT_0049fa60 = 0;
                    }
                    else {
                      temp_v17[0] = 2;
                      DAT_0049fa60 = 1;
                    }
                  }
                  else {
LAB_00270c28:
                    temp_v0 = *(short *)(temp_v6 + 0x7c);
                    if ((temp_v0 != 3 && temp_v0 != 4) && temp_v0 != 5) goto LAB_00270b3c;
                    temp_v17[0] = 2;
                    DAT_0049fa60 = 1;
                  }
                  temp_v18 = temp_v16;
                  if (DAT_0049f91c >= 100) {
                    temp_v19 = *(unsigned int *)(DAT_00447e88 + 0x1c);
                    temp_v20 = *(unsigned int *)(DAT_00447e88 + 0x20);
                    temp_v21 = *(unsigned int *)(DAT_00447e88 + 0x24);
                    temp_v22 = *(unsigned int *)(temp_v6 + 0x70);
                  }
                  FUN_0027ee6c(temp_v17,0x20);
                }
                if (DAT_0049fa58 == 0) {
                  temp_v0 = *(short *)(temp_v6 + 0x7c);
                  if ((!(temp_v0 == 3 || temp_v0 == 4)) && (!((temp_v0 == 5 || temp_v0 == 7) || temp_v0 == 1))
                     ) {
                    temp_v3 = *(int *)(temp_v6 + 0x80);
                    temp_v5 = temp_v1 + ((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1b)) >> 5) * 4;
                    *(unsigned int *)(temp_v5 + 0x794) =
                         *(unsigned int *)(temp_v5 + 0x794) & ~(1 << ((temp_v3 % 0x20) & 0xffU));
                  }
                  else if (*(int *)(temp_v6 + 0x80) < -1) {
                    *(unsigned char *)(temp_v1 + 0xdd5) = 0;
                  }
                  else {
                    FUN_002e8510((int)(short)*(int *)(temp_v6 + 0x80),1);
                  }
                  temp_v0 = *(short *)(temp_v6 + 0x7c);
                  if ((temp_v0 == 3 || temp_v0 == 4) || (temp_v0 == 5 || temp_v0 == 7)) {
                    FUN_0029c0fc(0x18,1);
                  }
                  if (*(short *)(temp_v6 + 0x7c) == 1) {
                    FUN_0029c0fc(0x19,1);
                  }
                  temp_v0 = *(short *)(temp_v6 + 0x7c);
                  if ((temp_v0 == 0 || temp_v0 == 2) || temp_v0 == 6) {
                    FUN_0029c0fc(0x13,1);
                  }
                }
                DAT_0049f9a0 = *(unsigned int *)(temp_v6 + 100);
                DAT_0049f9a4 = *(unsigned int *)(temp_v6 + 0x68);
                DAT_0049f9a8 = *(unsigned int *)(temp_v6 + 0x6c);
                *(unsigned int *)(temp_v6 + 0x60) = 0;
                FUN_002b91c4(0x100016d);
                temp_v4 = 2;
                temp_v8 = 1;
                *(unsigned int *)(temp_v6 + 0x5c) = temp_v4;
                break;
              }
              if ((*(char *)(temp_v23 + 0x12) != '\0') || (DAT_0049f934 != '\0')) break;
            }
            FUN_002e8a38();
            temp_v9 = temp_v9 + 1;
          }
        }
        break;
      case 2:
        temp_v2 = *(int *)(temp_v6 + 0x60) + 1;
        temp_v10 = temp_v2 == 0x19;
        *(unsigned int *)(temp_v6 + 0x60) = temp_v2;
        if (temp_v10) {
          temp_v2 = (unsigned int)DAT_0049fa58;
        }
        if (temp_v10 && temp_v2 == 0) {
          temp_v0 = *(short *)(temp_v6 + 0x7c);
          *(unsigned char *)(temp_v6 + 0x78) = 1;
          *(unsigned int *)(temp_v6 + 0x74) = 1;
          if ((temp_v0 == 3 || temp_v0 == 4) || (temp_v0 == 5 || temp_v0 == 7)) {
            FUN_002bf9e8(0x10000a7);
          }
        }
        temp_v8 = 1;
        if ((*(int *)(temp_v6 + 0x60) >= 0x29) && (temp_v3 = FUN_0027ee10(), temp_v3 == 0)) {
          if (DAT_0049fa58 != 0) {
            *(unsigned int *)(temp_v6 + 0x5c) = 1;
          }
          else {
            temp_v0 = *(short *)(temp_v6 + 0x7c);
            if ((!(temp_v0 == 3 || temp_v0 == 4)) && (!(temp_v0 == 5 || temp_v0 == 7))) {
              FUN_002f3acc();
              if (*(char *)(temp_v6 + 0x84) != '\0') {
                if (*(int *)(temp_v6 + 0x88) == 0) {
                  DAT_0049fa60 = 0;
                  break;
                }
                FUN_00152af8();
                temp_v4 = 4;
                *(unsigned char *)(temp_v6 + 0x8c) = 0;
              }
              else {
                puVar5 = *(unsigned int **)(DAT_0044cd88 + *(int *)(temp_v6 + 0x90) * 8 + 0x1c);
                *puVar5 = *puVar5 | 2;
                *(unsigned char *)(*(int *)(puVar5[2] + 0x2c) + 0x1f6) = 0;
                temp_v4 = 3;
              }
              *(unsigned int *)(temp_v6 + 0x5c) = temp_v4;
            }
            else {
              *(unsigned char *)(temp_v6 + 0x78) = 1;
              *(unsigned int *)(temp_v6 + 0x5c) = 6;
              *(unsigned int *)(temp_v6 + 0x74) = 2;
              FUN_002f3acc();
            }
          }
          DAT_0049fa60 = 0;
        }
        break;
      case 4:
        temp_v8 = 1;
        *(unsigned int *)(temp_v6 + 0x5c) = 5;
        break;
      case 5:
        if (*(int *)(temp_v6 + 0x88) != 0) {
          FUN_002a7aa0();
          *(unsigned int *)(temp_v6 + 0x88) = 0;
        }
        temp_v4 = 0;
        *(char *)(temp_v6 + 0x58) = '\0';
        temp_v8 = 1;
        *(unsigned int *)(temp_v6 + 0x5c) = temp_v4;
      }
    }
    temp_v7 = temp_v7 + 1;
    if (temp_v7 >= 0x20) {
      if (temp_v9 == 0) {
        FUN_002f3b78();
      }
      return temp_v8;
    }
  } while( 1 );
}
