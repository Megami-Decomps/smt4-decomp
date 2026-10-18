/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025f09c` (_code @ 0x25f09c, 0x49c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 12 slot(s), 48 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp78; /* 0x78: local_78 */
} param_1_stack;

/* Supplied declaration required: FUN_0021813c. */
extern int FUN_0023de14(void);
extern int FUN_00292bb8(int);
/* Supplied declaration required: FUN_00292c04. */
extern int FUN_002931cc(void);
extern int FUN_00293c2c(void);
/* Supplied declaration required: FUN_00293c98. */
extern int FUN_0029eba8(int);
extern unsigned int FUN_0029ebf8(int);
extern int FUN_002a89e4(void);
extern int FUN_002a8a08(void);
extern int FUN_002bef70(int);
/* Supplied declaration required: FUN_002bef7c. */
/* Supplied declaration required: FUN_002bf460. */
extern int FUN_002bf6d0(unsigned int, int);
extern int FUN_002c0ba8(void);
/* Supplied declaration required: FUN_003311b4. */


void FUN_0025f09c(int param_1)

{
/* irregular: 7 goto(s); 6 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  char *pcVar11;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  
  temp_v1 = 1;
  temp_v2 = *(int *)(param_1 + 0x3048);
  if ((temp_v2 == 0x10 || temp_v2 == 0x11) || (temp_v2 == 0x29 || temp_v2 == 0x2d)) {
    temp_v1 = 0;
  }
  temp_v2 = FUN_002bef7c(param_1 + 0x20);
  temp_v3 = param_1 + 0x12b8;
  temp_v4 = FUN_002bef7c();
  temp_v5 = FUN_002bef70(param_1 + 0x20);
  temp_v6 = FUN_002bef70(temp_v3);
  FUN_002bf460(2,0x15,0xdb,temp_v2 + temp_v4,temp_v5 + temp_v6,0x29);
  FUN_002bf460(2,0x15,0xdc,temp_v2 + temp_v4,temp_v5 + temp_v6,0x29);
  temp_v2 = FUN_0029eba8(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
  temp_v7 = FUN_0029ebf8(param_1 + *(int *)(param_1 + 0x305c) * 100 + 0x3088);
  temp_v4 = 0;
  if (temp_v4 < (int)temp_v7) {
    do {
      if ((!temp_v1) || (temp_v4 != temp_v2)) {
        temp_v11 = param_1 + temp_v4 * 0x8c;
        temp_v5 = FUN_002bef7c(temp_v11 + 0x138);
        temp_v6 = FUN_002bef7c(temp_v3);
        temp_v11 = FUN_002bef70(temp_v11 + 0x138);
        temp_v8 = FUN_002bef70(temp_v3);
        if ((temp_v7 & 1) != 0) {
          temp_v15 = FUN_002bf6d0(0x15,temp_v4 + (int)(7 - temp_v7) / 2 + 0xff);
        }
        else {
          temp_v15 = FUN_002bf6d0(0x15,temp_v4 + (int)(8 - temp_v7) / 2 + 0x106);
        }
        temp_v0 = '\0';
        temp_v14 = 0;
        temp_v9 = FUN_002a8a08();
        temp_v12 = 0;
        do {
          pcVar11 = (char *)(temp_v12 & 0xff);
          FUN_00292c04(pcVar11,*(int *)(param_1 + 0x305c) == 0);
          temp_v13 = 0;
          if ((*(int *)(param_1 + 0x305c) != 0) &&
             (-1 < *(char *)(*(int *)(param_1 + 0x305c) + temp_v9 + 0x9107))) {
            temp_v13 = FUN_002a89e4();
          }
          if (((((pcVar11 != (char *)0x0) && (pcVar11[1] == '\x01')) &&
               ((*(short *)(pcVar11 + 0x5c) == 0 || (temp_v10 = FUN_002c0ba8(), temp_v10 != 0)))) &&
              ((*(short *)(pcVar11 + 0x5e) == 0 || (temp_v10 = FUN_002931cc(), temp_v10 != 0)))) &&
             ((pcVar11[0x5b] == '\0' ||
              (temp_v10 = FUN_00293c98(), (*(unsigned int *)(temp_v10 + 0x44a0) & 0x40000) == 0)))) {
            if (*pcVar11 != '\x05') {
              if (*pcVar11 == '\x02') {
                FUN_00293c98();
                temp_v10 = FUN_00293c2c();
                if ((temp_v10 == 0) ||
                   (temp_v10 = FUN_00293c98(), (*(unsigned int *)(temp_v10 + 0x44a0) & 0x40000) != 0))
                goto LAB_0025f3f0;
              }
              if (*pcVar11 == '\x03') {
                if (*(int *)(param_1 + 0x305c) == 0) goto LAB_0025f3e0;
                if (temp_v13 == 0) goto LAB_0025f4ec;
                temp_v13 = FUN_00292bb8(temp_v13);
                if (temp_v13 == 0) goto LAB_0025f3f0;
              }
              if ((*pcVar11 != '\x06' && *pcVar11 != '\b') && (*(int *)(param_1 + 0x305c) == 0)) {
LAB_0025f3e0:
                temp_v13 = FUN_0023de14();
                if (temp_v13 != 0) goto LAB_0025f3f0;
              }
            }
            else {
              if (*(int *)(param_1 + 0x305c) == 0) goto LAB_0025f3e0;
              if (*(char *)(param_1 + 0x38d1) != '\0') goto LAB_0025f3f0;
            }
LAB_0025f4ec:
            if (temp_v14 == temp_v4) {
              temp_v0 = *pcVar11;
              break;
            }
            temp_v14 = temp_v14 + 1;
          }
LAB_0025f3f0:
          temp_v12 = temp_v12 + 1;
        } while ((int)temp_v12 < 9);
        FUN_0021813c(param_1,temp_v0,(int)*(short *)(temp_v15 + 8) + temp_v6 + temp_v5,
                     temp_v8 + temp_v11 + (int)*(short *)(temp_v15 + 10),0);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < (int)temp_v7);
  }
  if (temp_v1) {
    temp_v6 = param_1 + temp_v2 * 0x8c;
    temp_v4 = FUN_002bef7c(temp_v6 + 0x138);
    temp_v5 = FUN_002bef7c(temp_v3);
    temp_v6 = FUN_002bef70(temp_v6 + 0x138);
    temp_v3 = FUN_002bef70(temp_v3);
    if ((temp_v7 & 1) != 0) {
      temp_v11 = FUN_002bf6d0(0x15,temp_v2 + (int)(7 - temp_v7) / 2 + 0x182);
    }
    else {
      temp_v11 = FUN_002bf6d0(0x15,temp_v2 + (int)(8 - temp_v7) / 2 + 0x189);
    }
    temp_v8 = param_1;
    FUN_003311b4(param_1,temp_v2);
    FUN_0021813c(param_1,temp_v8,(int)*(short *)(temp_v11 + 8) + temp_v4 + temp_v5,
                 (int)*(short *)(temp_v11 + 10) + temp_v6 + temp_v3,1);
  }
  return;
}
