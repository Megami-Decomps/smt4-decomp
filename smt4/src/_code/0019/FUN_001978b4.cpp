/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001978b4` (_code @ 0x1978b4, 0x580 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0029e908(...);
int FUN_002bed98(...);
int FUN_002beda4(...);
int FUN_002bf288(...);
int FUN_002bf538(void);
int FUN_002ccc28(...);

typedef int romwright_code(...);
/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
} void_stack;

extern int DAT_0043da90; /* 0x43da90 */
extern int g_titleScene; /* 0x44ea00 */

extern int FUN_00198f84(unsigned int);
extern int FUN_00224090(void);
extern int FUN_0028f670(void);
extern unsigned int FUN_00292844(unsigned int);
extern unsigned int FUN_00299218(int, unsigned int);
extern int FUN_0029d65c(int);
/* Supplied declaration required: FUN_0029e908. */
extern unsigned int FUN_0029e958(int);
/* Supplied declaration required: FUN_002bed98. */
/* Supplied declaration required: FUN_002beda4. */
/* Supplied declaration required: FUN_002bf288. */
extern int FUN_002bf4f8(unsigned int, int);
/* Supplied declaration required: FUN_002bf538. */
extern int FUN_002c09d0(unsigned int);
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002ccc28. */


void FUN_001978b4(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int *piVar12;
  int temp_v11;
  int temp_v12;
  unsigned char temp_v13;
  unsigned char temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  int temp_v20;
  int temp_v21;
  
  temp_v0 = DAT_0043da90;
  temp_v19 = 0;
  temp_v15 = 0;
  temp_v16 = 0;
  temp_v1 = FUN_0028f670();
  if ((((temp_v1 == 0) && (temp_v1 = FUN_002c09d0(0x418), temp_v1 == 0)) ||
      ((temp_v1 = FUN_0028f670(), temp_v1 == 0 &&
       ((temp_v1 = FUN_002c09d0(0x453), temp_v1 != 0 && (temp_v1 = FUN_002c09d0(0x425), temp_v1 == 0))))))
     || ((temp_v1 = FUN_0028f670(), temp_v1 == 0 && (temp_v1 = FUN_00224090(), temp_v1 == 0)))) {
    temp_v19 = 1;
  }
  temp_v2 = FUN_002beda4();
  temp_v3 = FUN_002bed98(temp_v0 + 0x648);
  temp_v1 = temp_v2;
  if (temp_v2 < 0) {
    temp_v1 = -temp_v2;
  }
  if (temp_v1 < 0x140) {
    FUN_002bf288(2,0x1d,0,temp_v2,temp_v3,0xc9);
    FUN_002bf288(2,0x1d,1,temp_v2,temp_v3,0xc9);
    temp_v4 = FUN_0029e958(temp_v0 + 0x34);
    temp_v10 = 0;
    if (0 < (int)temp_v4) {
      temp_v20 = (int)(8 - temp_v4) / 2 + 4;
      temp_v21 = (int)(7 - temp_v4) / 2 + 0x14;
      do {
        temp_v11 = temp_v0 + temp_v10 * 0x8c + 0x904;
        temp_v1 = FUN_002beda4(temp_v11);
        temp_v2 = FUN_002bed98(temp_v11);
        temp_v5 = FUN_0029e908(temp_v0 + 0x34);
        temp_v13 = temp_v5 == temp_v10;
        if (temp_v13) {
          temp_v5 = (unsigned int)*(unsigned char *)(temp_v0 + 0xad);
        }
        temp_v14 = temp_v13 && temp_v5 == 3;
        if (temp_v13 && temp_v5 == 3) {
          temp_v14 = temp_v19 == 0;
        }
        if ((((!temp_v14) || (temp_v11 = FUN_002beda4(temp_v11), temp_v11 != 0)) ||
            (temp_v11 = *(int *)(temp_v0 + 0x18), temp_v11 == 3)) || (temp_v11 == 0x1e || temp_v11 == 0x1f)) {
          temp_v3 = FUN_00299218((int)*(char *)(temp_v0 + 0x98),temp_v10);
          temp_v11 = temp_v20;
          if ((temp_v4 & 1) != 0) {
            temp_v11 = temp_v21;
          }
          temp_v11 = FUN_002bf4f8(0x1d,temp_v11 + temp_v10);
          FUN_002bf288(2,0x1d,0x22,*(short *)(temp_v11 + 8) + temp_v1,*(short *)(temp_v11 + 10) + temp_v2,
                       0xce);
          temp_v2 = *(short *)(temp_v11 + 10) + temp_v2;
          temp_v1 = temp_v1 + *(short *)(temp_v11 + 8);
          temp_v6 = FUN_00292844(temp_v3);
          temp_v17 = 0;
          temp_v18 = 0;
          FUN_002ccc28(temp_v3,&temp_v17,&temp_v18,0);
          temp_v11 = FUN_00198f84(temp_v6);
          if (temp_v11 != 0) {
            FUN_002bf538();
          }
          FUN_002bf288(2,0x1d,temp_v17,temp_v1,temp_v2,0xd3);
          FUN_002bf288(2,0x1d,temp_v18,temp_v1,temp_v2,0xd3);
          FUN_002bf538();
        }
        temp_v10 = temp_v10 + 1;
      } while ((int)temp_v10 < (int)temp_v4);
    }
    temp_v1 = FUN_0029e908(temp_v0 + 0x34);
    temp_v5 = (unsigned int)*(unsigned char *)(temp_v0 + 0xad);
    temp_v10 = temp_v5;
    if (temp_v5 == 3) {
      temp_v10 = temp_v19;
    }
    if (temp_v5 == 3 && temp_v10 == 0) {
      temp_v2 = temp_v0 + temp_v1 * 0x8c + 0x904;
      temp_v11 = FUN_002beda4();
      if (((temp_v11 == 0) && (temp_v11 = *(int *)(temp_v0 + 0x18), temp_v11 != 3)) &&
         (temp_v11 != 0x1e && temp_v11 != 0x1f)) {
        temp_v11 = FUN_002beda4(temp_v2);
        temp_v2 = FUN_002bed98(temp_v2);
        temp_v1 = FUN_0029d65c((int)*(short *)(temp_v0 + temp_v1 * 2 + 0xdf0));
        if (temp_v1 == 2) {
          temp_v12 = 0;
          temp_v1 = temp_v12;
        }
        else {
          temp_v1 = FUN_002beda4();
          temp_v12 = FUN_002bed98(temp_v0 + 0xd64);
        }
        temp_v3 = FUN_0029e908(temp_v0 + 0x34);
        temp_v3 = FUN_00299218((int)*(char *)(temp_v0 + 0x98),temp_v3);
        if ((temp_v4 & 1) == 0) {
          temp_v7 = 8 - temp_v4;
          temp_v9 = 0xc;
        }
        else {
          temp_v7 = 7 - temp_v4;
          temp_v9 = 0x1b;
        }
        temp_v8 = FUN_0029e908(temp_v0 + 0x34);
        temp_v7 = FUN_002bf4f8(0x1d,temp_v8 + temp_v9 + temp_v7 / 2);
        temp_v12 = temp_v12 + temp_v2;
        temp_v1 = temp_v1 + temp_v11;
        FUN_002bf288(2,0x1d,0x23,*(short *)(temp_v7 + 8) + temp_v1,*(short *)(temp_v7 + 10) + temp_v12,0xd8)
        ;
        if (*(int *)(temp_v0 + 0x18) == 6) {
          FUN_002bf538();
          temp_v0 = g_titleScene;
          temp_v9 = packNibblesAndByte(6,1,0);
          piVar12 = (int *)(temp_v0 + 0x12ac);
          temp_v8 = piVar12[*piVar12 + 2];
          piVar12[*piVar12 + 2] = temp_v9;
          if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v8 != temp_v9) {
            (**(romwright_code **)(temp_v0 + 0x12c8))(temp_v9);
            *(unsigned char *)(temp_v0 + 0x12c4) = 0;
          }
          FUN_002bf288(2,0x1d,0x23,*(short *)(temp_v7 + 8) + temp_v1,*(short *)(temp_v7 + 10) + temp_v12,
                       0xdb);
          temp_v0 = g_titleScene;
          temp_v9 = packNibblesAndByte(6,7,0);
          piVar12 = (int *)(temp_v0 + 0x12ac);
          temp_v8 = piVar12[*piVar12 + 2];
          piVar12[*piVar12 + 2] = temp_v9;
          if (*(char *)(temp_v0 + 0x12c4) != '\0' || temp_v8 != temp_v9) {
            (**(romwright_code **)(temp_v0 + 0x12c8))();
            *(unsigned char *)(temp_v0 + 0x12c4) = 0;
          }
          FUN_002bf538();
        }
        FUN_002ccc28(temp_v3,&temp_v15,&temp_v16,1);
        FUN_002bf288(2,0x1d,temp_v15,*(short *)(temp_v7 + 8) + temp_v1,*(short *)(temp_v7 + 10) + temp_v12,
                     0xdd);
        FUN_002bf288(2,0x1d,temp_v16,*(short *)(temp_v7 + 8) + temp_v11,*(short *)(temp_v7 + 10) + temp_v2,
                     0xdd);
      }
    }
  }
  return;
}

} /* extern "C" */
