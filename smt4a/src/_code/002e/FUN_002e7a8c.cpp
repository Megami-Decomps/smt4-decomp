/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e7a8c` (_code @ 0x2e7a8c, 0x1830 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_0014e314(...);
int FUN_0016c410(...);
int FUN_0016c4b8(...);
int FUN_0016c560(...);
int FUN_00180310(...);
int FUN_001835b4(...);
int FUN_00184e64(...);
int FUN_0025c848(...);
int FUN_002ace4c(...);
int VectorFloatToUnsigned(...);
int VectorSignedToFloat(...);

int CONCAT44(...);
int FUN_00157558(int);
int FUN_00164b5c(int, int, int, unsigned int, unsigned int, int);
int FUN_001654d8(...);
int FUN_001654e4(...);
int FUN_001677c0(void);
int FUN_00183bb0(void);
int FUN_002892a8(...);
int FUN_002a4878(...);
int FUN_003f3fe4(...);
int FUN_003f4cc0(...);

typedef int romwright_code(...);
/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp160; /* 0x160: local_160 */
} param_2_stack;

extern unsigned char LAB_002e87dc; /* 0x2e87dc */
extern int DAT_0057f268; /* 0x57f268 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0014e314. */
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001654d8. */
/* Supplied declaration required: FUN_001654e4. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c4b8. */
/* Supplied declaration required: FUN_0016c560. */
/* Supplied declaration required: FUN_00180310. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184e64. */
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_0025c848. */
extern int FUN_002618f8(void);
extern int FUN_00284140(int);
/* Supplied declaration required: FUN_002892a8. */
/* Supplied declaration required: FUN_002a4878. */
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_002ace4c. */
extern int FUN_003f3d44(unsigned int);
/* Supplied declaration required: FUN_003f3fe4. */
/* Supplied declaration required: FUN_003f4cc0. */


unsigned int FUN_002e7a8c(unsigned int param_1,int param_2)

{
/* irregular: 10 goto(s); irregular input(s): in_fpscr; 23 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar11;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int in_fpscr;
  float temp_v12;
  long long temp_v13;
  unsigned long long temp_v14;
  unsigned long long temp_v15;
  long long temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  float temp_v19;
  int aiStack_154 [26];
  unsigned int temp_v20 [31];
  int temp_v21;
  unsigned char temp_v22 [68];
  
  temp_v2 = DAT_0057f268;
  if (DAT_0057f268 == 0) {
    return 0;
  }
  temp_v18 = 0x3f80000000000000;
  temp_v3 = *(int *)(DAT_0057f268 + 0x1c);
  if (temp_v3 == 0x1b || temp_v3 == 0xb) {
    return 0;
  }
  if (temp_v3 != 0x19) {
    param_2 = *(int *)(DAT_0057f268 + 0x24);
  }
  if ((temp_v3 == 0x19 || param_2 == 0x19) && (*(int *)(DAT_0057f268 + 0x20) != 8)) {
    return 0;
  }
  if ((temp_v3 == 0xd) && (*(int *)(DAT_0057f268 + 0x24) != 8)) {
    return 0;
  }
  if (((*(short *)(DAT_0057f268 + 0x2e8) == 8) || (*(short *)(DAT_0057f268 + 0x2e8) == 7)) &&
     (*(char *)(DAT_0057f268 + 0x322) != '\0')) {
    return 0;
  }
  FUN_00157558(DAT_0059dbb4);
  temp_v3 = DAT_0059dbb4;
  temp_v4 = FUN_001692ac(1,0);
  piVar11 = (int *)(temp_v3 + 0x1258);
  temp_v7 = *piVar11;
  temp_v8 = piVar11[temp_v7 + 2];
  *piVar11 = temp_v7 + 1;
  piVar11[temp_v7 + 3] = temp_v4;
  if (*(char *)(temp_v3 + 0x1270) != '\0' || temp_v8 != temp_v4) {
    (**(romwright_code **)(temp_v3 + 0x1274))();
    *(unsigned char *)(temp_v3 + 0x1270) = 0;
  }
  temp_v19 = 0.5f;
  if (*(char *)(temp_v2 + 0x42) != '\0') {
    temp_v3 = temp_v2 + 0x4c8;
    temp_v5 = FUN_001654d8();
    temp_v6 = FUN_001654e4(temp_v3);
    FUN_001677c0();
    FUN_00164b5c(2,0x11,3,temp_v5,temp_v6,0x5b);
    FUN_001677c0();
    temp_v4 = 0;
    do {
      temp_v7 = FUN_003f3d44(*(unsigned int *)(temp_v2 + 0xa10));
      if (temp_v7 != 0) {
        temp_v6 = 0;
        temp_v5 = temp_v6;
      }
      else {
        temp_v5 = FUN_001654d8(temp_v3);
        temp_v6 = FUN_001654e4(temp_v3);
      }
      FUN_003f3fe4(*(unsigned int *)(temp_v2 + temp_v4 * 4 + 0xa10),temp_v5,temp_v6);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    if (*(int *)(temp_v2 + 0x1218) == 0) {
      temp_v4 = 0;
      temp_v3 = FUN_001ab888();
      if (*(char *)(temp_v3 + 0x1ca3) != '\0') {
        do {
          temp_v3 = temp_v2 + (temp_v4 % 4) * 0x8c;
          temp_v5 = FUN_001654d8(temp_v3 + 0x298);
          temp_v6 = FUN_001654e4(temp_v3 + 0x298);
          FUN_003f3fe4(*(unsigned int *)(temp_v2 + temp_v4 * 4 + 0xa20),temp_v5,temp_v6);
          temp_v4 = temp_v4 + 1;
          temp_v3 = FUN_001ab888();
        } while (temp_v4 < (int)(unsigned int)*(unsigned char *)(temp_v3 + 0x1ca3));
      }
    }
    temp_v3 = FUN_003f3d44(*(unsigned int *)(temp_v2 + 0xa10));
    if (temp_v3 == 0) {
      temp_v3 = *(int *)(temp_v2 + 0x1c);
      if (temp_v3 != 8) {
        if (temp_v3 < 8) {
          switch(temp_v3) {
          default:
            break;
          case 4:
            temp_v0 = *(char *)(temp_v2 + 0x9b4);
            if ((temp_v0 == '\n' || temp_v0 == '\v') || (temp_v0 == '\x02' || temp_v0 == '\x12')) {
              temp_v3 = 0;
              do {
                temp_v4 = temp_v2 + temp_v3 * 4;
                if ((*(char *)(*(int *)(temp_v4 + 0xa10) + 0x20) == '\0') &&
                   (*(int *)(*(int *)(temp_v4 + 0xa10) + 0x34) == (int)*(short *)(temp_v2 + 0x38))) {
                  FUN_002892a8(temp_v3,temp_v5,temp_v6,0x79,0);
                }
                temp_v3 = temp_v3 + 1;
              } while (temp_v3 < 4);
            }
            temp_v3 = FUN_002a4878(temp_v2 + 0xc24);
            FUN_002892a8(temp_v3,temp_v5,temp_v6,0x79,1);
            break;
          case 6:
            temp_v0 = *(char *)(temp_v2 + 0x9b4);
            if ((temp_v0 == '\n' || temp_v0 == '\v') ||
               ((temp_v0 == '\x02' || temp_v0 == '\x03') || temp_v0 == '\x12')) {
              temp_v3 = 0;
              do {
                temp_v4 = temp_v2 + temp_v3 * 4;
                if ((*(char *)(*(int *)(temp_v4 + 0xa10) + 0x20) == '\0') &&
                   (*(int *)(*(int *)(temp_v4 + 0xa10) + 0x34) == (int)*(short *)(temp_v2 + 0x38))) {
                  FUN_002892a8(temp_v3,temp_v5,temp_v6,0x79,0);
                }
                temp_v3 = temp_v3 + 1;
              } while (temp_v3 < 4);
            }
            temp_v3 = FUN_002a4878();
            temp_v4 = FUN_002a4894(temp_v2 + 0xcec);
            temp_v3 = temp_v3 + temp_v4 * 4 + 4;
            FUN_002892a8(temp_v3,temp_v5,temp_v6,0x79,1);
          }
          goto LAB_002e90ec;
        }
        if (temp_v3 == 0x15) {
          if ((*(char *)(temp_v2 + 0x9b4) == '\x05') || (*(char *)(temp_v2 + 0x9b4) == '\x06')) {
            temp_v1 = 0;
            temp_v3 = 0;
            do {
              temp_v4 = temp_v2 + temp_v3 * 4;
              if ((*(char *)(*(int *)(temp_v4 + 0xa10) + 0x20) == '\0') &&
                 (*(int *)(*(int *)(temp_v4 + 0xa10) + 0x34) == (int)*(short *)(temp_v2 + 0x38))) {
                FUN_002892a8(temp_v3,temp_v5,temp_v6,0x79,0);
                temp_v1 = 1;
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < 4);
            if (!temp_v1) {
              temp_v3 = 0;
              do {
                temp_v4 = temp_v2 + temp_v3 * 4;
                if ((*(char *)(*(int *)(temp_v4 + 0xa20) + 0x20) == '\0') &&
                   (*(int *)(*(int *)(temp_v4 + 0xa20) + 0x34) == (int)*(short *)(temp_v2 + 0x38))) {
                  FUN_002892a8(temp_v3 + 4,temp_v5,temp_v6,0x79,0);
                }
                temp_v3 = temp_v3 + 1;
              } while (temp_v3 < 3);
            }
          }
          goto LAB_002e90ec;
        }
        if (temp_v3 >= 0x15) goto LAB_002e90ec;
        if (temp_v3 == 10) {
          temp_v3 = 0;
          do {
            temp_v4 = temp_v2 + temp_v3 * 4;
            if ((*(char *)(*(int *)(temp_v4 + 0xa10) + 0x20) == '\0') &&
               (*(char *)(*(int *)(temp_v4 + 0xa10) + 0x23) == '\0')) {
              FUN_002892a8(temp_v3,temp_v5,temp_v6,0x79,1);
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < 4);
          temp_v3 = 0;
          do {
            temp_v4 = temp_v2 + temp_v3 * 4;
            if ((*(char *)(*(int *)(temp_v4 + 0xa20) + 0x20) == '\0') &&
               (*(char *)(*(int *)(temp_v4 + 0xa20) + 0x23) == '\0')) {
              FUN_002892a8(temp_v3 + 4,temp_v5,temp_v6,0x79,1);
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < 0x18);
          goto LAB_002e90ec;
        }
        if (temp_v3 != 0xd) goto LAB_002e90ec;
      }
      if (*(char *)(temp_v2 + 0x9b4) == '\x05' || *(char *)(temp_v2 + 0x9b4) == '\x06') {
        temp_v4 = 0;
        temp_v3 = temp_v4;
        do {
          temp_v7 = temp_v2 + temp_v4 * 4;
          if ((*(char *)(*(int *)(temp_v7 + 0xa10) + 0x20) == '\0') &&
             (*(int *)(*(int *)(temp_v7 + 0xa10) + 0x34) == (int)*(short *)(temp_v2 + 0x38))) {
            FUN_002892a8(temp_v4,temp_v5,temp_v6,0x79,0);
            temp_v3 = 1;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 4);
        if (temp_v3 == 0) {
          temp_v3 = 0;
          do {
            temp_v4 = temp_v2 + temp_v3 * 4;
            if ((*(char *)(*(int *)(temp_v4 + 0xa20) + 0x20) == '\0') &&
               (*(int *)(*(int *)(temp_v4 + 0xa20) + 0x34) == (int)*(short *)(temp_v2 + 0x38))) {
              FUN_002892a8(temp_v3 + 4,temp_v5,temp_v6,0x79,0);
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < 3);
        }
      }
      temp_v0 = *(char *)(temp_v2 + 0x9b4);
      if ((temp_v0 == '\n' || temp_v0 == '\v') || (temp_v0 == '\x02' || temp_v0 == '\x12')) {
        temp_v3 = 0;
        do {
          temp_v4 = temp_v2 + temp_v3 * 4;
          if ((*(char *)(*(int *)(temp_v4 + 0xa10) + 0x20) == '\0') &&
             (*(int *)(*(int *)(temp_v4 + 0xa10) + 0x34) == (int)*(short *)(temp_v2 + 0x38))) {
            FUN_002892a8(temp_v3,temp_v5,temp_v6,0x79,0);
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 4);
      }
      temp_v3 = FUN_002a4878();
      temp_v4 = FUN_002a4894(temp_v2 + 0xdb4);
      FUN_002892a8(temp_v3 + temp_v4 * 4,temp_v5,temp_v6,0x79,1);
    }
  }
  else {
    temp_v3 = 0;
    do {
      temp_v7 = temp_v2 + temp_v3 * 0x8c;
      temp_v4 = FUN_001654d8(temp_v7 + 0x298);
      aiStack_154[temp_v3] = temp_v4;
      temp_v5 = FUN_001654e4(temp_v7 + 0x298);
      temp_v20[temp_v3] = temp_v5;
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 4);
    temp_v10 = (unsigned int)((unsigned long long)temp_v18 >> 0x20);
    temp_v15 = (unsigned long long)temp_v10;
    temp_v13 = (unsigned long long)temp_v10 << 0x20;
    FUN_001677c0();
    temp_v3 = DAT_0059dbb4;
    temp_v4 = FUN_00169294(6,1,0);
    piVar11 = (int *)(temp_v3 + 0x12b8);
    temp_v7 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v4;
    if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v7 != temp_v4) {
      (**(romwright_code **)(temp_v3 + 0x12d4))();
      *(unsigned char *)(temp_v3 + 0x12d0) = 0;
    }
    temp_v3 = 0;
    do {
      temp_v12 = (float)temp_v15;
      if (*(char *)(temp_v2 + temp_v3 + 0x9c0) == '\0') {
        temp_v12 = temp_v19;
      }
      in_fpscr = (in_fpscr & 0xfffffff) |
                 ((unsigned int)((float)((unsigned long long)temp_v13 >> 0x20) == temp_v12) << 0x1e);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        temp_v13 = (unsigned long long)(unsigned int)temp_v12 << 0x20;
        FUN_001677c0();
      }
      FUN_003f4cc0(*(unsigned int *)(temp_v2 + temp_v3 * 4 + 0xa10),0,aiStack_154[temp_v3],temp_v20[temp_v3]
                  );
      temp_v4 = DAT_0059dbb4;
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 4);
    temp_v3 = FUN_00169294(6,7,0);
    piVar11 = (int *)(temp_v4 + 0x12b8);
    temp_v7 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v3;
    if (*(char *)(temp_v4 + 0x12d0) != '\0' || temp_v7 != temp_v3) {
      (**(romwright_code **)(temp_v4 + 0x12d4))();
      *(unsigned char *)(temp_v4 + 0x12d0) = 0;
    }
    temp_v13 = temp_v15 << 0x20;
    FUN_001677c0();
    temp_v3 = 0;
    do {
      temp_v12 = (float)temp_v15;
      if (*(char *)(temp_v2 + temp_v3 + 0x9c0) == '\0') {
        temp_v12 = temp_v19;
      }
      in_fpscr = (in_fpscr & 0xfffffff) |
                 ((unsigned int)((float)((unsigned long long)temp_v13 >> 0x20) == temp_v12) << 0x1e);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        temp_v13 = (unsigned long long)(unsigned int)temp_v12 << 0x20;
        FUN_001677c0();
      }
      FUN_003f4cc0(*(unsigned int *)(temp_v2 + temp_v3 * 4 + 0xa10),1,aiStack_154[temp_v3],temp_v20[temp_v3]
                  );
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 4);
    FUN_001677c0();
    temp_v14 = temp_v15 & 0xffffffff;
    temp_v13 = (unsigned long long)(unsigned int)temp_v19 << 0x20;
    temp_v3 = 0;
    do {
      temp_v19 = (float)temp_v14;
      if (*(char *)(temp_v2 + temp_v3 + 0x9c0) == '\0') {
        temp_v19 = (float)((unsigned long long)temp_v13 >> 0x20);
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)temp_v15 == temp_v19) << 0x1e);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        temp_v15 = (unsigned long long)(unsigned int)temp_v19;
        FUN_001677c0();
      }
      FUN_003f4cc0(*(unsigned int *)(temp_v2 + temp_v3 * 4 + 0xa10),2,aiStack_154[temp_v3],temp_v20[temp_v3]
                  );
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 4);
    FUN_00183bb0();
    temp_v16 = temp_v14 << 0x20;
    FUN_001677c0();
    temp_v3 = 0;
    do {
      temp_v12 = (float)((unsigned long long)temp_v16 >> 0x20);
      temp_v19 = (float)temp_v14;
      if (*(char *)(temp_v2 + temp_v3 + 0x9c0) == '\0') {
        temp_v19 = (float)((unsigned long long)temp_v13 >> 0x20);
      }
      temp_v16 = CONCAT44(temp_v12,temp_v19);
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 == temp_v19) << 0x1e);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        temp_v16 = (unsigned long long)(unsigned int)temp_v19 << 0x20;
        FUN_001677c0();
      }
      FUN_003f4cc0(*(unsigned int *)(temp_v2 + temp_v3 * 4 + 0xa10),3,aiStack_154[temp_v3],temp_v20[temp_v3]
                  );
      temp_v19 = (float)temp_v14;
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 4);
    FUN_001677c0();
    temp_v3 = 0;
    temp_v12 = temp_v19;
    do {
      temp_v17 = temp_v12;
      if (*(char *)(temp_v2 + temp_v3 + 0x9c0) == '\0') {
        temp_v17 = (float)((unsigned long long)temp_v13 >> 0x20);
      }
      in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v19 == temp_v17) << 0x1e);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
        temp_v19 = temp_v17;
        FUN_001677c0();
      }
      FUN_003f4cc0(*(unsigned int *)(temp_v2 + temp_v3 * 4 + 0xa10),4,aiStack_154[temp_v3],temp_v20[temp_v3]
                  );
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 4);
    temp_v15 = CONCAT44(temp_v12,(int)((unsigned long long)temp_v13 >> 0x20));
    temp_v3 = 0;
    do {
      FUN_003f3fe4(*(unsigned int *)(temp_v2 + temp_v3 * 4 + 0xa10),aiStack_154[temp_v3],temp_v20[temp_v3]);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 4);
    temp_v4 = *(int *)(temp_v2 + 0x2c);
    temp_v3 = temp_v4 * 0xc;
    temp_v10 = temp_v3 + 0xc;
    if ((int)temp_v10 >= 0x19) {
      temp_v10 = 0x18;
    }
    temp_v7 = FUN_001ab888();
    if ((int)(unsigned int)*(unsigned char *)(temp_v7 + 0x1ca3) < (int)temp_v10) {
      temp_v7 = FUN_001ab888();
      temp_v10 = (unsigned int)*(unsigned char *)(temp_v7 + 0x1ca3);
    }
    temp_v21 = temp_v2 + 0x1000;
    temp_v7 = temp_v3;
    if (*(int *)(temp_v2 + 0x1218) == 0) {
      for (; temp_v7 < (int)temp_v10; temp_v7 = temp_v7 + 1) {
        if (*(int *)(temp_v2 + 0x1c) != 3) {
          temp_v11 = temp_v2 + (temp_v7 % 4) * 0x8c;
          temp_v8 = FUN_001654d8(temp_v11 + 0x298);
          aiStack_154[temp_v7] = temp_v8;
          temp_v5 = FUN_001654e4(temp_v11 + 0x298);
          temp_v20[temp_v7] = temp_v5;
        }
        else {
          temp_v8 = FUN_001654d8(temp_v2 + 0x180);
          aiStack_154[temp_v7] = temp_v8;
          temp_v5 = FUN_001654e4(temp_v2 + 0x180);
          temp_v20[temp_v7] = temp_v5;
        }
        if (*(int *)(temp_v2 + 0x1c) == 2) {
          temp_v8 = FUN_002618f8();
          aiStack_154[temp_v7] = temp_v8 + aiStack_154[temp_v7];
        }
      }
      temp_v14 = temp_v15 & 0xffffffff00000000;
      FUN_001677c0();
      temp_v8 = DAT_0059dbb4;
      temp_v11 = FUN_00169294(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12b8);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v11;
      temp_v7 = temp_v3;
      if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v11) {
        (**(romwright_code **)(temp_v8 + 0x12d4))();
        *(unsigned char *)(temp_v8 + 0x12d0) = 0;
      }
      for (; temp_v8 = DAT_0059dbb4, temp_v7 < (int)temp_v10; temp_v7 = temp_v7 + 1) {
        temp_v19 = (float)(temp_v15 >> 0x20);
        if (*(short *)(temp_v2 + temp_v7 * 8 + 0xa84) == 0) {
          temp_v19 = (float)temp_v15;
        }
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)(temp_v14 >> 0x20) == temp_v19) << 0x1e);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
          temp_v14 = (unsigned long long)(unsigned int)temp_v19 << 0x20;
          FUN_001677c0();
        }
        FUN_003f4cc0(*(unsigned int *)(temp_v2 + temp_v7 * 4 + 0xa20),0,aiStack_154[temp_v7],
                     temp_v20[temp_v7]);
      }
      temp_v7 = FUN_00169294(6,7,0);
      piVar11 = (int *)(temp_v8 + 0x12b8);
      temp_v11 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v7;
      if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v11 != temp_v7) {
        (**(romwright_code **)(temp_v8 + 0x12d4))();
        *(unsigned char *)(temp_v8 + 0x12d0) = 0;
      }
      temp_v14 = temp_v15 & 0xffffffff00000000;
      FUN_001677c0();
      for (temp_v7 = temp_v3; temp_v7 < (int)temp_v10; temp_v7 = temp_v7 + 1) {
        temp_v19 = (float)(temp_v15 >> 0x20);
        if (*(short *)(temp_v2 + temp_v7 * 8 + 0xa84) == 0) {
          temp_v19 = (float)temp_v15;
        }
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)(temp_v14 >> 0x20) == temp_v19) << 0x1e);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
          temp_v14 = (unsigned long long)(unsigned int)temp_v19 << 0x20;
          FUN_001677c0();
        }
        FUN_003f4cc0(*(unsigned int *)(temp_v2 + temp_v7 * 4 + 0xa20),1,aiStack_154[temp_v7],
                     temp_v20[temp_v7]);
      }
      temp_v14 = temp_v15 & 0xffffffff00000000;
      FUN_001677c0();
      for (temp_v7 = temp_v3; temp_v7 < (int)temp_v10; temp_v7 = temp_v7 + 1) {
        temp_v19 = (float)(temp_v15 >> 0x20);
        if (*(short *)(temp_v2 + temp_v7 * 8 + 0xa84) == 0) {
          temp_v19 = (float)temp_v15;
        }
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)(temp_v14 >> 0x20) == temp_v19) << 0x1e);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
          temp_v14 = (unsigned long long)(unsigned int)temp_v19 << 0x20;
          FUN_001677c0();
        }
        FUN_003f4cc0(*(unsigned int *)(temp_v2 + temp_v7 * 4 + 0xa20),2,aiStack_154[temp_v7],
                     temp_v20[temp_v7]);
      }
      FUN_00183bb0();
      temp_v14 = temp_v15 & 0xffffffff00000000;
      FUN_001677c0();
      for (temp_v7 = temp_v3; temp_v19 = (float)(temp_v15 >> 0x20), temp_v7 < (int)temp_v10; temp_v7 = temp_v7 + 1)
      {
        if (*(short *)(temp_v2 + temp_v7 * 8 + 0xa84) == 0) {
          temp_v19 = (float)temp_v15;
        }
        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)((float)(temp_v14 >> 0x20) == temp_v19) << 0x1e);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
          temp_v14 = (unsigned long long)(unsigned int)temp_v19 << 0x20;
          FUN_001677c0();
        }
        FUN_003f4cc0(*(unsigned int *)(temp_v2 + temp_v7 * 4 + 0xa20),3,aiStack_154[temp_v7],
                     temp_v20[temp_v7]);
      }
      temp_v14 = (unsigned long long)(unsigned int)temp_v19;
      temp_v13 = (unsigned long long)(unsigned int)temp_v19 << 0x20;
      FUN_001677c0();
      for (temp_v7 = temp_v3; temp_v8 = temp_v3, temp_v7 < (int)temp_v10; temp_v7 = temp_v7 + 1) {
        temp_v19 = (float)temp_v14;
        if (*(short *)(temp_v2 + temp_v7 * 8 + 0xa84) == 0) {
          temp_v19 = (float)temp_v15;
        }
        in_fpscr = (in_fpscr & 0xfffffff) |
                   ((unsigned int)((float)((unsigned long long)temp_v13 >> 0x20) == temp_v19) << 0x1e);
        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
          temp_v13 = (unsigned long long)(unsigned int)temp_v19 << 0x20;
          FUN_001677c0();
        }
        FUN_003f4cc0(*(unsigned int *)(temp_v2 + temp_v7 * 4 + 0xa20),4,aiStack_154[temp_v7],
                     temp_v20[temp_v7]);
      }
      for (; temp_v8 < (int)temp_v10; temp_v8 = temp_v8 + 1) {
        FUN_003f3fe4(*(unsigned int *)(temp_v2 + temp_v8 * 4 + 0xa20),aiStack_154[temp_v8],temp_v20[temp_v8]
                    );
      }
    }
    FUN_001677c0();
    if (*(unsigned char *)(temp_v2 + 0x9b4) < 2) {
      FUN_001677c0();
    }
    temp_v7 = FUN_001654d8();
    temp_v8 = FUN_001654e4(temp_v2 + 0x4c8);
    FUN_001835b4(2,0x11,0x1e,temp_v7,temp_v8,0x97);
    FUN_001835b4(2,0x11,0x1f,temp_v7,temp_v8,0x97);
    FUN_001835b4(2,0x11,0x78,temp_v7,temp_v8,0x97);
    FUN_001835b4(2,0x11,0x20,temp_v7,temp_v8,0x97);
    if (*(int *)(temp_v21 + 0x218) == 0) {
      FUN_001835b4(2,0x11,0x21,temp_v7,temp_v8,0x97);
      FUN_001835b4(2,0x11,0x22,temp_v7,temp_v8,0x97);
      FUN_001835b4(2,0x11,0x79,temp_v7,temp_v8,0x97);
      FUN_001835b4(2,0x11,0x23,temp_v7,temp_v8,0x97);
      FUN_001835b4(2,0x11,0x28,temp_v7,temp_v8,0x9c);
      FUN_00184e64(0x9fddddff);
      temp_v11 = FUN_001ab888();
      FUN_00100388(temp_v22,&LAB_002e87dc,*(unsigned char *)(temp_v11 + 0x1ca3));
      temp_v11 = FUN_001834a4(0x11,0x2a);
      FUN_00180310(2,*(short *)(temp_v11 + 8) + temp_v7,*(short *)(temp_v11 + 10) + temp_v8,0,2,0x9c,
                   temp_v22);
      FUN_00100388(temp_v22,&LAB_002e87dc,*(unsigned int *)(temp_v2 + 0x28));
      temp_v11 = FUN_001834a4(0x11,0x2c);
      FUN_00180310(2,*(short *)(temp_v11 + 8) + temp_v7,*(short *)(temp_v11 + 10) + temp_v8,1,2,0x9c,
                   temp_v22);
      FUN_00183bb0();
      if (*(int *)(temp_v2 + 0x30) >= 2) {
        temp_v5 = 0x24;
        temp_v11 = FUN_00284140((int)*(short *)(temp_v2 + 0x9fc));
        if (temp_v11 == 1 || temp_v11 == 2) {
          temp_v5 = 0x26;
        }
        temp_v11 = FUN_001654d8(temp_v2 + 0x68);
        temp_v9 = FUN_001654e4(temp_v2 + 0x68);
        FUN_001835b4(2,0x11,temp_v5,temp_v7 + temp_v11,temp_v8 + temp_v9,0xa6);
        temp_v5 = 0x25;
        temp_v11 = FUN_00284140((int)*(short *)(temp_v2 + 0x9fe));
        if (temp_v11 == 1 || temp_v11 == 2) {
          temp_v5 = 0x27;
        }
        temp_v11 = FUN_001654d8(temp_v2 + 0xf4);
        temp_v9 = FUN_001654e4(temp_v2 + 0xf4);
        FUN_001835b4(2,0x11,temp_v5,temp_v7 + temp_v11,temp_v9 + temp_v8,0xa6);
      }
    }
    FUN_001677c0();
    temp_v7 = FUN_003f3d44(*(unsigned int *)(temp_v2 + 0xa10));
    if (temp_v7 == 0) {
      temp_v7 = *(int *)(temp_v2 + 0x1c);
      if (temp_v7 != 8) {
        if (temp_v7 >= 8) {
          if (temp_v7 == 0x15) {
            if ((*(char *)(temp_v2 + 0x9b4) == '\x05') || (*(char *)(temp_v2 + 0x9b4) == '\x06')) {
              temp_v1 = 0;
              temp_v7 = 0;
              do {
                temp_v8 = temp_v2 + temp_v7 * 4;
                if ((*(char *)(*(int *)(temp_v8 + 0xa10) + 0x20) == '\0') &&
                   (*(int *)(*(int *)(temp_v8 + 0xa10) + 0x34) == (int)*(short *)(temp_v2 + 0x38))) {
                  FUN_002ace4c(temp_v7,0,0,0x79,0);
                  temp_v1 = 1;
                }
                temp_v7 = temp_v7 + 1;
              } while (temp_v7 < 4);
              if (!temp_v1) {
                for (; temp_v3 < (int)temp_v10; temp_v3 = temp_v3 + 1) {
                  temp_v7 = temp_v2 + temp_v3 * 4;
                  if ((*(char *)(*(int *)(temp_v7 + 0xa20) + 0x20) == '\0') &&
                     (*(int *)(*(int *)(temp_v7 + 0xa20) + 0x34) == (int)*(short *)(temp_v2 + 0x38))) {
                    FUN_002ace4c(temp_v3 + temp_v4 * -0xc + 4,0,0,0x79,0);
                  }
                }
              }
            }
            goto LAB_002e90ec;
          }
          if (temp_v7 >= 0x15) goto LAB_002e90ec;
          if (temp_v7 == 10) {
            temp_v4 = 0;
            do {
              temp_v7 = temp_v2 + temp_v4 * 4;
              if ((*(char *)(*(int *)(temp_v7 + 0xa10) + 0x20) == '\0') &&
                 (*(char *)(*(int *)(temp_v7 + 0xa10) + 0x23) == '\0')) {
                FUN_002ace4c(temp_v4,0,0,0xab,1);
              }
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < 4);
            temp_v4 = 0;
            do {
              temp_v7 = temp_v2 + (temp_v4 + temp_v3) * 4;
              if ((*(char *)(*(int *)(temp_v7 + 0xa20) + 0x20) == '\0') &&
                 (*(char *)(*(int *)(temp_v7 + 0xa20) + 0x23) == '\0')) {
                FUN_002ace4c(temp_v4 + 4,0,0,0xab,1);
              }
              temp_v4 = temp_v4 + 1;
            } while (temp_v4 < 0xc);
            goto LAB_002e90ec;
          }
          if (temp_v7 != 0xd) goto LAB_002e90ec;
          goto LAB_002e87e0;
        }
        switch(temp_v7) {
        default:
          break;
        case 4:
          temp_v0 = *(char *)(temp_v2 + 0x9b4);
          if ((temp_v0 == '\n' || temp_v0 == '\v') || (temp_v0 == '\x02' || temp_v0 == '\x12')) {
            temp_v3 = 0;
            do {
              temp_v4 = temp_v2 + temp_v3 * 4;
              if ((*(char *)(*(int *)(temp_v4 + 0xa10) + 0x20) == '\0') &&
                 (*(int *)(*(int *)(temp_v4 + 0xa10) + 0x34) == (int)*(short *)(temp_v2 + 0x38))) {
                FUN_002ace4c(temp_v3,0,0,0x79,0);
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < 4);
          }
          temp_v4 = FUN_002a4878(temp_v2 + 0xc24);
          FUN_002ace4c(temp_v4,0,0,0xab,1);
          break;
        case 6:
          temp_v0 = *(char *)(temp_v2 + 0x9b4);
          if ((temp_v0 == '\n' || temp_v0 == '\v') ||
             ((temp_v0 == '\x02' || temp_v0 == '\x03') || temp_v0 == '\x12')) {
            temp_v3 = 0;
            do {
              temp_v4 = temp_v2 + temp_v3 * 4;
              if ((*(char *)(*(int *)(temp_v4 + 0xa10) + 0x20) == '\0') &&
                 (*(int *)(*(int *)(temp_v4 + 0xa10) + 0x34) == (int)*(short *)(temp_v2 + 0x38))) {
                FUN_002ace4c(temp_v3,0,0,0x79,0);
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < 4);
          }
          temp_v3 = FUN_002a4878();
          temp_v4 = FUN_002a4894(temp_v2 + 0xc88);
          temp_v4 = temp_v3 + temp_v4 * 4 + 4;
          FUN_002ace4c(temp_v4,0,0,0xab,1);
        }
      }
      else {
LAB_002e87e0:
        if (*(char *)(temp_v2 + 0x9b4) == '\x05' || *(char *)(temp_v2 + 0x9b4) == '\x06') {
          temp_v8 = 0;
          temp_v7 = temp_v8;
          do {
            temp_v11 = temp_v2 + temp_v8 * 4;
            if ((*(char *)(*(int *)(temp_v11 + 0xa10) + 0x20) == '\0') &&
               (*(int *)(*(int *)(temp_v11 + 0xa10) + 0x34) == (int)*(short *)(temp_v2 + 0x38))) {
              FUN_002ace4c(temp_v8,0,0,0x79,0);
              temp_v7 = 1;
            }
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < 4);
          if (temp_v7 == 0) {
            for (; temp_v3 < (int)temp_v10; temp_v3 = temp_v3 + 1) {
              temp_v7 = temp_v2 + temp_v3 * 4;
              if ((*(char *)(*(int *)(temp_v7 + 0xa20) + 0x20) == '\0') &&
                 (*(int *)(*(int *)(temp_v7 + 0xa20) + 0x34) == (int)*(short *)(temp_v2 + 0x38))) {
                FUN_002ace4c(temp_v3 + temp_v4 * -0xc + 4,0,0,0x79,0);
              }
            }
          }
        }
        temp_v0 = *(char *)(temp_v2 + 0x9b4);
        if ((temp_v0 == '\n' || temp_v0 == '\v') || (temp_v0 == '\x02' || temp_v0 == '\x12')) {
          temp_v3 = 0;
          do {
            temp_v4 = temp_v2 + temp_v3 * 4;
            if ((*(char *)(*(int *)(temp_v4 + 0xa10) + 0x20) == '\0') &&
               (*(int *)(*(int *)(temp_v4 + 0xa10) + 0x34) == (int)*(short *)(temp_v2 + 0x38))) {
              FUN_002ace4c(temp_v3,0,0,0x79,0);
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < 4);
        }
        temp_v4 = FUN_002a4878(temp_v2 + 0xd50);
        temp_v3 = FUN_002a4894(temp_v2 + 0xd50);
        temp_v4 = temp_v4 + temp_v3 * 4;
        FUN_002ace4c(temp_v4,0,0,0xab,1);
      }
    }
  }
LAB_002e90ec:
  FUN_001677c0();
  if (*(int *)(temp_v2 + 0x1c) == 0xe) {
    temp_v3 = *(int *)(temp_v2 + 0x18);
    if (temp_v3 < 8) {
      temp_v19 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v19 = temp_v19 * 0.075f;
    }
    else {
      temp_v19 = 0.6f;
      if (temp_v3 >= 0x20) {
        temp_v19 = (float)VectorSignedToFloat(temp_v3 - 0x20,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v19 = 0.6f - temp_v19 * 0.075f;
        if (temp_v19 < 0.0f) {
          temp_v19 = 0.0f;
        }
      }
    }
    FUN_0016c4b8(DAT_0059dbb4,0);
    temp_v5 = VectorFloatToUnsigned(temp_v19 * 255.0f,3);
    FUN_0014e314(temp_v5,temp_v5);
    temp_v3 = DAT_0059dbb4;
    if (*(int *)(temp_v2 + 0x18) >= 9) {
      temp_v4 = FUN_00169294(6,1,0);
      piVar11 = (int *)(temp_v3 + 0x12b8);
      temp_v7 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v4;
      if (*(char *)(temp_v3 + 0x12d0) != '\0' || temp_v7 != temp_v4) {
        (**(romwright_code **)(temp_v3 + 0x12d4))();
        *(unsigned char *)(temp_v3 + 0x12d0) = 0;
      }
      FUN_0025c848(temp_v2 + 0x554);
      FUN_0025c848(temp_v2 + 0x5e0);
      temp_v2 = DAT_0059dbb4;
      temp_v3 = FUN_00169294(6,7,0);
      piVar11 = (int *)(temp_v2 + 0x12b8);
      temp_v4 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v3;
      if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v4 != temp_v3) {
        (**(romwright_code **)(temp_v2 + 0x12d4))();
        *(unsigned char *)(temp_v2 + 0x12d0) = 0;
      }
    }
  }
  FUN_001677c0();
  temp_v2 = DAT_0059dbb4;
  piVar11 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v3 = *piVar11;
  temp_v4 = piVar11[temp_v3 + 2];
  *piVar11 = temp_v3 - 1;
  if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v4 != piVar11[temp_v3 + 1]) {
    (**(romwright_code **)(temp_v2 + 0x1274))();
    *(unsigned char *)(temp_v2 + 0x1270) = 0;
  }
  FUN_0016c560(DAT_0059dbb4);
  FUN_0016c410(DAT_0059dbb4);
  return 0;
}

} /* extern "C" */
