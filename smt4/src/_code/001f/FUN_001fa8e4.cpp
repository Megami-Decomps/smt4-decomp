/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fa8e4` (_code @ 0x1fa8e4, 0x9d8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f9188(void);
int FUN_00280988(void);
int FUN_002d2aa0(void);

int CONCAT44(...);
int FUN_001e2670(void);
int FUN_001e26e8(void);
int FUN_001e2be4(void);
int FUN_002562e4(int, int);
int FUN_00256370(int, int);
int FUN_0027f48c(int, int);
int FUN_0027f848(void);
int FUN_0027f958(float *, unsigned int *, int);
int FUN_0027fa98(...);
int FUN_00280364(void);
int FUN_002804ec(...);
int FUN_00281e34(void);
int FUN_00282390(void);
int FUN_0028250c(void);
int FUN_00287aec(void);
int FUN_00287b0c(void);
int FUN_0029be5c(...);
int FUN_003a66c4(void);
int FUN_003a6988(void);
int SBORROW4(...);
int VectorSignedToFloat(unsigned int, int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} void_stack;

extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447e88; /* 0x447e88 */
extern int DAT_0049f91c; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */
extern signed char DAT_0049f934; /* 0x49f934 */
extern int DAT_0049f938; /* 0x49f938 */
extern signed char DAT_0049f93d; /* 0x49f93d */
extern unsigned char DAT_0049f94f; /* 0x49f94f */
extern signed char DAT_0049fc64; /* 0x49fc64 */
extern int DAT_0049fc84; /* 0x49fc84 */
extern signed char DAT_0049fce8; /* 0x49fce8 */
extern int DAT_0049fd04; /* 0x49fd04 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_001e2670. */
/* Supplied declaration required: FUN_001e26e8. */
/* Supplied declaration required: FUN_001e2be4. */
/* Supplied declaration required: FUN_001f9188. */
/* Supplied declaration required: FUN_002562e4. */
/* Supplied declaration required: FUN_00256370. */
extern int FUN_00256510(void);
extern unsigned int FUN_00256540(void);
extern int FUN_0025a140(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0027f48c. */
/* Supplied declaration required: FUN_0027f848. */
/* Supplied declaration required: FUN_0027f958. */
/* Supplied declaration required: FUN_0027fa98. */
/* Supplied declaration required: FUN_00280364. */
/* Supplied declaration required: FUN_002804ec. */
/* Supplied declaration required: FUN_00280988. */
/* Supplied declaration required: FUN_00281e34. */
/* Supplied declaration required: FUN_00282390. */
/* Supplied declaration required: FUN_0028250c. */
/* Supplied declaration required: FUN_00287aec. */
/* Supplied declaration required: FUN_00287b0c. */
extern unsigned int FUN_00291e40(unsigned int);
/* Supplied declaration required: FUN_0029be5c. */
extern int FUN_002b8cec(unsigned int);
extern int FUN_002bfde4(unsigned int);
extern int FUN_002c2950(void);
/* Supplied declaration required: FUN_002d2aa0. */
/* Supplied declaration required: FUN_003a66c4. */
/* Supplied declaration required: FUN_003a6988. */


void FUN_001fa8e4(void)

{
/* irregular: irregular input(s): in_fpscr; 25 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int *puVar8;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned int *puVar14;
  unsigned int in_fpscr;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  unsigned int temp_v23;
  float temp_v24;
  unsigned int temp_v25;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  
  temp_v2 = FUN_002c2950();
  temp_v21 = 20.0f;
  temp_v0 = 0;
  temp_v17 = 0.0f;
  temp_v9 = 0;
  temp_v13 = temp_v21;
  temp_v3 = FUN_00256540();
  temp_v18 = 2.0f;
  temp_v12 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v12 = temp_v12 * 0.01f;
  temp_v11 = SBORROW4((int)temp_v12,0x40000000);
  temp_v8 = (int)temp_v12 - 0x40000000;
  temp_v10 = temp_v12 == 2.0f;
  temp_v20 = temp_v18;
  if ((int)temp_v12 < 0x40000001) {
    temp_v11 = SBORROW4((int)temp_v12,0x3f800000);
    temp_v8 = (int)temp_v12 - 0x3f800000;
    temp_v10 = temp_v12 == 1.0f;
    temp_v20 = temp_v12;
  }
  if ((!temp_v10 && temp_v8 < 0 == temp_v11) && (temp_v21 = temp_v21 * temp_v20, (int)temp_v21 >= 0x420c0001)) {
    temp_v21 = 35.0f;
  }
  if (DAT_0049fd04 != 0) {
    temp_v21 = temp_v21 * 2.5f;
  }
  temp_v1 = DAT_0049fc64;
  if (DAT_0049fc64 == '\0') {
    temp_v1 = DAT_0049f934;
  }
  if ((DAT_0049fc64 == '\0' && temp_v1 == '\0') && (DAT_0049f938 < 1)) {
    if (0 < *(int *)(temp_v2 + 0xd98)) {
      *(int *)(temp_v2 + 0xd98) = *(int *)(temp_v2 + 0xd98) - 1;
    }
    temp_v15 = *(unsigned long long *)(DAT_00447e88 + 0x28);
    temp_v16 = CONCAT44(temp_v21,*(unsigned int *)(DAT_00447e88 + 0x30));
    FUN_0027f958(&temp_v24,&temp_v23,0);
    temp_v8 = DAT_00447e88;
    *(unsigned char *)(DAT_00447e88 + 0x6c) = 0;
    if (DAT_0049fc84 == 0 || DAT_0049fc84 == 3) {
      temp_v7 = *(int *)(temp_v8 + 0x188);
      if (temp_v7 >= 1) {
        *(int *)(temp_v8 + 0x188) = temp_v7 - 1;
      }
      else {
        temp_v7 = FUN_00256510();
        temp_v8 = 0;
        if (temp_v7 != 0) {
          temp_v8 = DAT_0049f91c;
        }
        if ((temp_v7 != 0 && temp_v8 != 0x24) && (*(int *)(DAT_004474f4 + 0xac) == 0)) {
          *(unsigned int *)(temp_v2 + 0xd94) = 0;
          FUN_0027fa98(3);
          FUN_0029be5c(0x14,1);
          FUN_002804ec(DAT_00447e88 + 0x28);
          FUN_00280364();
          return;
        }
      }
    }
    if (DAT_0049fc84 == 1) {
      if (DAT_0049fce8 != '\0') {
        temp_v8 = FUN_002bfde4(1);
        if (temp_v8 != 0) {
          DAT_0049fce8 = '\0';
        }
        temp_v8 = FUN_002b8cec(5);
        temp_v20 = 50.0f;
        if (temp_v8 != 0) {
          *(float *)(DAT_00447e88 + 0x2c) = *(float *)(DAT_00447e88 + 0x2c) + 50.0f;
        }
        temp_v8 = FUN_002b8cec(6);
        if (temp_v8 != 0) {
          *(float *)(DAT_00447e88 + 0x2c) = *(float *)(DAT_00447e88 + 0x2c) - temp_v20;
        }
      }
      else {
        temp_v8 = FUN_002bfde4(1);
        if (temp_v8 != 0) {
          DAT_0049fce8 = '\x01';
        }
      }
    }
    if (((((unsigned int)temp_v24 < 0xbf000000) && ((int)temp_v24 < 0x3f000000)) && (temp_v23 < 0xbf000000))
       && ((int)temp_v23 < 0x3f000000)) {
      temp_v0 = 1;
    }
    temp_v22 = CONCAT44(0x447a0000,temp_v13);
    if (*(int *)(DAT_004474f4 + 0xac) != 0) {
      temp_v0 = 1;
    }
    if ((DAT_0049f93d != '\0') && (DAT_0049fce8 == '\0')) {
      if ((!temp_v0) ||
         ((temp_v4 = *(unsigned int *)(DAT_00447e88 + 0x68), 0xbdcccccc < temp_v4 ||
          (temp_v9 = (unsigned int)((int)temp_v4 < 0x3dcccccd), (int)temp_v4 >= 0x3dcccccd)))) {
        *(float *)(DAT_00447e88 + 0x2c) =
             (*(float *)(DAT_00447e88 + 0x2c) - temp_v18) - *(float *)(DAT_00447e88 + 0x68);
      }
      if (0xc69c4000 < *(unsigned int *)(DAT_00447e88 + 0x2c)) {
        *(unsigned int *)(DAT_00447e88 + 0x2c) = 0x447a0000;
      }
    }
    temp_v8 = DAT_00447e88;
    temp_v20 = 0.5f;
    *(unsigned int *)(DAT_00447e88 + 0x54) = 0;
    *(unsigned int *)(temp_v8 + 0x58) = 0x40a00000;
    if (temp_v0) {
      *(unsigned char *)(temp_v8 + 0x10) = 0;
      if ((*(int *)(temp_v2 + 0xd98) == 0) &&
         (temp_v8 = *(int *)(temp_v2 + 0xd94) + 1, *(int *)(temp_v2 + 0xd94) = temp_v8, temp_v8 >= 901)) {
        FUN_001e2be4();
        *(unsigned int *)(temp_v2 + 0xd98) = 0xe10;
        *(unsigned int *)(temp_v2 + 0xd94) = 0;
      }
      temp_v8 = *(int *)(temp_v2 + 0xdb8);
      temp_v7 = temp_v8 + 1;
      *(int *)(temp_v2 + 0xdb8) = temp_v7;
      if (temp_v7 >= 0x1f) {
        *(int *)(temp_v2 + 0xdb8) = temp_v8 - 0x1d;
        FUN_0029be5c(0x1d,1);
      }
    }
    else {
      *(unsigned int *)(temp_v2 + 0xd94) = 0;
      FUN_00281e34();
      temp_v13 = 1.0f;
      temp_v24 = temp_v24 * 57.32484f;
      if (*(char *)(DAT_00447e88 + 0x10) != '\0') {
        temp_v21 = *(float *)(DAT_00447e88 + 0x14);
        FUN_00287b0c();
        temp_v12 = temp_v21;
        if (temp_v21 < temp_v17) {
          temp_v12 = -temp_v21;
        }
        if ((int)temp_v12 < 0x42700001) {
          temp_v14 = temp_v12 * temp_v20;
          if ((int)(temp_v12 * temp_v20) < 0x3f800000) {
            temp_v14 = temp_v13;
          }
          if (temp_v14 < temp_v12) {
            if (temp_v17 <= temp_v21) {
              temp_v24 = *(float *)(DAT_00447e88 + 0x14) + temp_v14;
            }
            else {
              temp_v24 = *(float *)(DAT_00447e88 + 0x14) - temp_v14;
            }
          }
        }
        *(float *)(DAT_00447e88 + 0x14) = temp_v24;
        temp_v24 = *(float *)(DAT_00447e88 + 0x14);
      }
      *(unsigned char *)(DAT_00447e88 + 0x10) = 1;
      temp_v19 = CONCAT44(0x43b40000,temp_v18);
      temp_v12 = temp_v24 - *(float *)(DAT_004474f4 + 0x18);
      if (temp_v12 < temp_v17) {
        temp_v12 = temp_v12 + 360.0f;
      }
      if ((int)temp_v12 >= 0x43b40001) {
        temp_v12 = temp_v12 - 360.0f;
      }
      if (*(int *)(DAT_004474f4 + 0xc4) != 3) {
        FUN_001e26e8();
      }
      else {
        FUN_001e2670();
      }
      temp_v12 = -temp_v12;
      temp_v21 = *(float *)(DAT_00447e88 + 0x50);
      FUN_00287b0c();
      temp_v18 = temp_v21;
      if (temp_v21 < temp_v17) {
        temp_v18 = -temp_v21;
      }
      if ((int)temp_v18 < 0x41f00001) {
        temp_v14 = temp_v18 * temp_v20;
        if ((int)(temp_v18 * temp_v20) < 0x3f800000) {
          temp_v14 = temp_v13;
        }
        if (temp_v14 < temp_v18) {
          if (temp_v17 <= temp_v21) {
            temp_v12 = *(float *)(DAT_00447e88 + 0x50) + temp_v14;
          }
          else {
            temp_v12 = *(float *)(DAT_00447e88 + 0x50) - temp_v14;
          }
        }
      }
      *(float *)(DAT_00447e88 + 0x50) = temp_v12;
      temp_v8 = DAT_00447e88;
      temp_v13 = *(float *)(DAT_00447e88 + 0x50);
      temp_v12 = 0.017453292f;
      temp_v18 = (float)((unsigned long long)temp_v19 >> 0x20);
      if (temp_v13 < temp_v17) {
        temp_v13 = temp_v13 + temp_v18;
        *(float *)(DAT_00447e88 + 0x50) = temp_v13;
      }
      if ((int)temp_v13 >= 0x43b40001) {
        temp_v13 = temp_v13 - temp_v18;
        *(float *)(temp_v8 + 0x50) = temp_v13;
      }
      temp_v13 = temp_v13 * 0.017453292f;
      *(unsigned char *)(temp_v8 + 0x6c) = 1;
      *(int *)(temp_v8 + 0x7c) = (int)((unsigned long long)temp_v16 >> 0x20);
      FUN_0028250c();
      temp_v8 = DAT_00447e88;
      temp_v18 = (float)temp_v19;
      *(float *)(DAT_00447e88 + 0x28) =
           *(float *)(DAT_00447e88 + 0x28) + temp_v13 * (float)((unsigned long long)temp_v16 >> 0x20);
      temp_v12 = *(float *)(temp_v8 + 0x50) * temp_v12;
      FUN_00282390();
      temp_v8 = DAT_00447e88;
      *(float *)(DAT_00447e88 + 0x30) =
           *(float *)(DAT_00447e88 + 0x30) + temp_v12 * (float)((unsigned long long)temp_v16 >> 0x20);
      *(unsigned int *)(temp_v8 + 0x54) = 2;
    }
    temp_v3 = (unsigned int)temp_v16;
    temp_v4 = 0;
    FUN_0027f848();
    temp_v8 = DAT_00447e88;
    *(unsigned int *)(DAT_00447e88 + 0x28) = temp_v25;
    *(unsigned int *)(temp_v8 + 0x2c) = uStack_5c;
    *(unsigned int *)(temp_v8 + 0x30) = uStack_58;
    *(int *)(temp_v8 + 0x34) = (int)temp_v15;
    *(int *)(temp_v8 + 0x38) = (int)((unsigned long long)temp_v15 >> 0x20);
    *(unsigned int *)(temp_v8 + 0x3c) = temp_v3;
    if (((DAT_0049fce8 == '\0') && (DAT_0049f93d != '\0')) && ((temp_v9 & ~temp_v4) == 0)) {
      temp_v5 = temp_v8 + 0x28;
      FUN_0027f48c(temp_v5,temp_v8 + 0x34);
      temp_v8 = DAT_00447e88;
      temp_v7 = 0;
      if (temp_v5 != 0) {
        temp_v7 = DAT_00447e88;
      }
      if (temp_v5 != 0) {
        *(float *)(temp_v7 + 0x68) = temp_v17;
      }
      else {
        temp_v18 = *(float *)(DAT_00447e88 + 0x68) + temp_v18;
        *(float *)(DAT_00447e88 + 0x68) = temp_v18;
        if ((int)temp_v18 < 0x41a00001) {
          temp_v22 = CONCAT44((int)((unsigned long long)temp_v22 >> 0x20),temp_v18);
        }
        *(int *)(temp_v8 + 0x68) = (int)temp_v22;
      }
    }
    temp_v6 = (unsigned int)((unsigned long long)temp_v22 >> 0x20);
    if (((DAT_0049f91c != 0x24) && (temp_v8 = FUN_0025a140(2,5), temp_v8 != 0)) && (!temp_v0)) {
      temp_v13 = (float)temp_v15;
      FUN_00287aec();
      temp_v13 = *(float *)(DAT_00447e88 + 0x160) - temp_v13;
      *(float *)(DAT_00447e88 + 0x160) = temp_v13;
      if (temp_v13 < temp_v17) {
        FUN_00256370(2,5);
        *(unsigned int *)(DAT_00447e88 + 0x160) = temp_v6;
        FUN_002562e4(0xf,0x50);
        temp_v6 = FUN_00291e40(0x1000186);
        temp_v8 = DAT_00447e88;
        *(unsigned int *)(DAT_00447e88 + 0x18c) = temp_v6;
        *(unsigned int *)(temp_v8 + 400) = 0x14;
      }
    }
    temp_v12 = (float)temp_v15;
    FUN_00287aec();
    temp_v13 = *(float *)(temp_v2 + 0xdb4) + temp_v12;
    *(float *)(temp_v2 + 0xdb4) = temp_v13;
    if ((int)temp_v13 >= 0x47c35001) {
      *(float *)(temp_v2 + 0xdb4) = temp_v13 - 100000.0f;
      FUN_0029be5c(0x12,1);
    }
    temp_v6 = 0x44bb8000;
    temp_v13 = *(float *)(temp_v2 + 0xdbc) + temp_v12;
    *(float *)(temp_v2 + 0xdbc) = temp_v13;
    if ((int)temp_v13 >= 0x44bb8001) {
      *(float *)(temp_v2 + 0xdbc) = temp_v13 - 1500.0f;
      FUN_003a66c4();
      FUN_003a6988();
    }
    temp_v12 = *(float *)(temp_v2 + 0xdc4) + temp_v12;
    *(float *)(temp_v2 + 0xdc4) = temp_v12;
    temp_v10 = *(int *)(temp_v2 + 0xdc0) != 0;
    if (temp_v10) {
      temp_v13 = 30000.0f;
      temp_v8 = (int)temp_v12 - 0x46ea6000;
    }
    else {
      *(float *)(temp_v2 + 0xdc4) = temp_v17;
      temp_v8 = 0;
      temp_v13 = 0.0f;
    }
    if ((temp_v10 && temp_v12 != temp_v13) && temp_v8 < 0 == (temp_v10 && SBORROW4((int)temp_v12,(int)temp_v13)))
    {
      *(float *)(temp_v2 + 0xdc4) = temp_v17;
      *(unsigned int *)(temp_v2 + 0xdc0) = 0;
      *(unsigned char *)(temp_v2 + 0xdc8) = 1;
    }
    temp_v9 = DAT_00447e88 + 0x28;
    FUN_002804ec();
    temp_v13 = (float)temp_v15;
    if ((temp_v9 & 2) != 0) {
      if (!temp_v0) {
        FUN_00287aec();
        temp_v8 = DAT_00447e88;
        temp_v13 = *(float *)(DAT_00447e88 + 0x15c) - temp_v13;
        *(float *)(DAT_00447e88 + 0x15c) = temp_v13;
        if (temp_v13 < temp_v17) {
          temp_v2 = DAT_0049f91c;
          if (DAT_0049f91c == 5) {
            temp_v2 = DAT_0049f920;
          }
          if (!(DAT_0049f91c == 5 && temp_v2 == 9)) {
            *(unsigned int *)(temp_v8 + 0x15c) = 0x43fa0000;
          }
          else {
            *(unsigned int *)(temp_v8 + 0x15c) = temp_v6;
          }
          FUN_0027fa98(0x20);
        }
      }
      DAT_0049f94f = 4;
    }
    else {
      if (temp_v17 < *(float *)(DAT_00447e88 + 0x15c)) {
        FUN_00287aec();
        *(float *)(DAT_00447e88 + 0x15c) = *(float *)(DAT_00447e88 + 0x15c) - temp_v13;
      }
      temp_v13 = *(float *)(DAT_00447e88 + 0x15c);
      if (*(float *)(DAT_00447e88 + 0x15c) <= temp_v17) {
        temp_v13 = temp_v17;
      }
      *(float *)(DAT_00447e88 + 0x15c) = temp_v13;
      DAT_0049f94f = 0xff;
    }
    if ((temp_v9 & 4) != 0) {
      FUN_0027fa98(0x1f);
      FUN_0029be5c(0x16,1);
    }
    FUN_00280364();
    if ((temp_v9 & 0x800) != 0) {
      FUN_002d2aa0();
    }
    if ((temp_v9 & 0x2000) != 0) {
      FUN_001f9188();
    }
    temp_v8 = DAT_00447e88;
    if (temp_v0) {
      *(float *)(DAT_00447e88 + 0x7c) = temp_v17;
      *(float *)(temp_v8 + 0x1c) =
           *(float *)(temp_v8 + 0x1c) +
           (*(float *)(temp_v8 + 0x28) - *(float *)(temp_v8 + 0x1c)) * temp_v20;
      *(float *)(temp_v8 + 0x20) =
           *(float *)(temp_v8 + 0x20) +
           (*(float *)(temp_v8 + 0x2c) - *(float *)(temp_v8 + 0x20)) * 0.33333334f;
      *(float *)(temp_v8 + 0x24) =
           *(float *)(temp_v8 + 0x24) +
           (*(float *)(temp_v8 + 0x30) - *(float *)(temp_v8 + 0x24)) * temp_v20;
    }
    else {
      *(float *)(DAT_00447e88 + 0x1c) =
           *(float *)(DAT_00447e88 + 0x1c) +
           (*(float *)(DAT_00447e88 + 0x28) - *(float *)(DAT_00447e88 + 0x1c)) * 0.33333334f;
      *(float *)(temp_v8 + 0x20) =
           *(float *)(temp_v8 + 0x20) +
           (*(float *)(temp_v8 + 0x2c) - *(float *)(temp_v8 + 0x20)) * 0.33333334f;
      *(float *)(temp_v8 + 0x24) =
           *(float *)(temp_v8 + 0x24) +
           (*(float *)(temp_v8 + 0x30) - *(float *)(temp_v8 + 0x24)) * 0.33333334f;
    }
    FUN_00280988();
    temp_v8 = DAT_00447e88;
    puVar14 = (unsigned int *)(DAT_00447e88 + 0x20);
    temp_v6 = *(unsigned int *)(DAT_00447e88 + 0x24);
    puVar8 = (unsigned int *)(DAT_00447e88 + 0x34);
    *(unsigned int *)(DAT_00447e88 + 0x40) = *(unsigned int *)(DAT_00447e88 + 0x1c);
    *(unsigned int *)(temp_v8 + 0x44) = *puVar14;
    *(unsigned int *)(temp_v8 + 0x48) = temp_v6;
    *puVar8 = (int)temp_v15;
    *(int *)(temp_v8 + 0x38) = (int)((unsigned long long)temp_v15 >> 0x20);
    *(unsigned int *)(temp_v8 + 0x3c) = temp_v3;
    return;
  }
  *(unsigned int *)(temp_v2 + 0xd94) = 0;
  FUN_002804ec(DAT_00447e88 + 0x28);
  FUN_00280364();
  return;
}

} /* extern "C" */
