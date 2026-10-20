/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d939c` (_code @ 0x3d939c, 0xc94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(unsigned int, double);
int FUN_001634b4(...);
int FUN_001654d8(...);
int FUN_001654e4(...);
int FUN_001677c0(void);
int FUN_001835b4(...);
int FUN_00358e94(...);
int FUN_003872b8(...);
int FUN_0046ed8c(unsigned int, unsigned int, unsigned int, int);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned int DAT_00570280; /* 0x570280 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_001634b4. */
/* Supplied declaration required: FUN_001654d8. */
/* Supplied declaration required: FUN_001654e4. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_001835b4. */
extern int FUN_001a6508(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00358e94. */
/* Supplied declaration required: FUN_003872b8. */
/* Supplied declaration required: FUN_0046ed8c. */


void FUN_003d939c(int param_1)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr, in_s0; 11 native warning(s); review required */
  unsigned char temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar11;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  unsigned long long temp_v15;
  
  temp_v8 = DAT_0059dbb4;
  switch(*(unsigned int *)(param_1 + 0x2f0)) {
  case 0:
  case 1:
  case 8:
    temp_v8 = FUN_001a6508(DAT_00570280,0x10,*(unsigned int *)(param_1 + 0x2f8),1);
    if (temp_v8 != 0) {
      FUN_0046ed8c(DAT_00570280,*(unsigned int *)(param_1 + 0x308),*(unsigned int *)(param_1 + 0x2f8),
                   param_1 + 0x20);
      break;
    }
    param_1 = param_1 + 0x20;
    FUN_001634b4(param_1);
    break;
  case 2:
  case 0x11:
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v6 = FUN_00169294(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12b8);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12d4))();
        *(unsigned char *)(temp_v8 + 0x12d0) = 0;
      }
      FUN_001634b4(param_1 + 0xac);
      temp_v8 = DAT_0059dbb4;
      temp_v6 = FUN_00169294(6,7,0);
      piVar11 = (int *)(temp_v8 + 0x12b8);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12d4))(temp_v6);
        *(unsigned char *)(temp_v8 + 0x12d0) = 0;
      }
    }
    FUN_001634b4(param_1 + 0x20);
    break;
  case 3:
    temp_v6 = FUN_00169294(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12b8);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12d4))();
      *(unsigned char *)(temp_v8 + 0x12d0) = 0;
    }
    FUN_001634b4(param_1 + 0x20);
    temp_v8 = DAT_0059dbb4;
    if (*(char *)(param_1 + 0x2f5) == '\0') break;
    temp_v6 = FUN_00169294(6,1,0);
    piVar11 = (int *)(temp_v8 + 0x12b8);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12d4))(temp_v6);
      *(unsigned char *)(temp_v8 + 0x12d0) = 0;
    }
    param_1 = param_1 + 0xac;
    FUN_001634b4(param_1);
    break;
  case 4:
    FUN_001634b4(param_1 + 0x20);
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v5 = FUN_001654d8(param_1 + 0x20);
      temp_v14 = CONCAT44(temp_v5,in_s0);
      temp_v8 = FUN_001654e4(param_1 + 0x20);
      temp_v6 = 0;
      temp_v15 = 0;
      do {
        temp_v12 = *(float *)(param_1 + temp_v6 * 0x8c + 0xcc);
        temp_v13 = (float)temp_v15;
        temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 < temp_v13) << 0x1f) |
                ((unsigned int)(temp_v12 == temp_v13) << 0x1e);
        in_fpscr = temp_v4 | ((unsigned int)((temp_v12 != temp_v12) || (temp_v13 != temp_v13)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v4 >> 0x18);
        if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          FUN_001677c0();
          temp_v9 = DAT_0059dbb4;
          temp_v3 = FUN_00169294(6,1,0);
          piVar11 = (int *)(temp_v9 + 0x12b8);
          temp_v7 = piVar11[*piVar11 + 2];
          piVar11[*piVar11 + 2] = temp_v3;
          if (*(char *)(temp_v9 + 0x12d0) != '\0' || temp_v7 != temp_v3) {
            (**(romwright_code **)(temp_v9 + 0x12d4))();
            *(unsigned char *)(temp_v9 + 0x12d0) = 0;
          }
          temp_v9 = FUN_001834a4(0x10,temp_v6 + 0x426d);
          temp_v12 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v14 >> 0x20),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v13 = (float)VectorSignedToFloat((int)*(short *)(temp_v9 + 8),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_001835b4(2,0x10,temp_v6 + 0x4269,(int)(temp_v12 + (float)temp_v14 + temp_v13),
                       *(short *)(temp_v9 + 10) + temp_v8,0xc9);
          temp_v9 = DAT_0059dbb4;
          temp_v3 = FUN_00169294(6,7,0);
          piVar11 = (int *)(temp_v9 + 0x12b8);
          temp_v7 = piVar11[*piVar11 + 2];
          piVar11[*piVar11 + 2] = temp_v3;
          if (*(char *)(temp_v9 + 0x12d0) != '\0' || temp_v7 != temp_v3) {
            (**(romwright_code **)(temp_v9 + 0x12d4))();
            *(unsigned char *)(temp_v9 + 0x12d0) = 0;
          }
          FUN_001677c0();
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v6 = FUN_00169294(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12b8);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12d4))();
        *(unsigned char *)(temp_v8 + 0x12d0) = 0;
      }
      FUN_001634b4(param_1 + 0xac);
    }
    temp_v8 = DAT_0059dbb4;
    temp_v6 = FUN_00169294(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12b8);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12d4))();
      *(unsigned char *)(temp_v8 + 0x12d0) = 0;
    }
    FUN_001634b4(param_1 + 0x20);
    temp_v8 = DAT_0059dbb4;
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v6 = FUN_00169294(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12b8);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12d4))();
        *(unsigned char *)(temp_v8 + 0x12d0) = 0;
      }
      FUN_001634b4(param_1 + 0x138);
    }
    temp_v8 = DAT_0059dbb4;
    temp_v6 = FUN_00169294(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12b8);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12d4))();
      *(unsigned char *)(temp_v8 + 0x12d0) = 0;
    }
    break;
  case 6:
  case 0xf:
    FUN_001634b4(param_1 + 0x20);
    if (*(char *)(param_1 + 0x2f5) == '\0') break;
    temp_v11 = *(unsigned int *)(param_1 + 0xb0);
    temp_v5 = FUN_001654d8(param_1 + 0x20);
    temp_v14 = CONCAT44(temp_v5,in_s0);
    temp_v5 = FUN_001654e4(param_1 + 0x20);
    FUN_001677c0();
    temp_v8 = DAT_0059dbb4;
    temp_v6 = FUN_00169294(6,1,0);
    piVar11 = (int *)(temp_v8 + 0x12b8);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12d4))(temp_v6);
      *(unsigned char *)(temp_v8 + 0x12d0) = 0;
    }
    temp_v12 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v14 >> 0x20),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001835b4(2,0x10,temp_v11,(int)(temp_v12 + (float)temp_v14),temp_v5,0xc9);
    temp_v8 = DAT_0059dbb4;
    temp_v6 = FUN_00169294(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12b8);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
      (*(romwright_code *)piVar11[7])();
      *(unsigned char *)(piVar11 + 6) = 0;
    }
    FUN_001677c0();
    break;
  case 7:
  case 0x12:
    FUN_001634b4(param_1 + 0x20);
    if (*(char *)(param_1 + 0x2f5) == '\0') break;
    temp_v1 = FUN_001654d8(param_1 + 0x20);
    temp_v2 = FUN_001654e4(param_1 + 0x20);
    FUN_003872b8(param_1 + 0xac,0x10,*(int *)(param_1 + 0xb0) - 1);
    FUN_00358e94(param_1 + 0xac,(int)temp_v1,(int)temp_v2);
    temp_v8 = DAT_0059dbb4;
    if (*(int *)(param_1 + 0x2f0) == 7) {
      temp_v6 = FUN_00169294(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12b8);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12d4))();
        *(unsigned char *)(temp_v8 + 0x12d0) = 0;
      }
    }
    param_1 = param_1 + 0xac;
    FUN_001634b4(param_1);
    break;
  case 9:
  case 0xb:
  case 0xe:
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v6 = FUN_00169294(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12b8);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12d4))();
        *(unsigned char *)(temp_v8 + 0x12d0) = 0;
      }
      FUN_001634b4(param_1 + 0x20);
      temp_v8 = DAT_0059dbb4;
      temp_v6 = FUN_00169294(6,7,0);
      piVar11 = (int *)(temp_v8 + 0x12b8);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12d4))();
        *(unsigned char *)(temp_v8 + 0x12d0) = 0;
      }
      goto LAB_003d9da8;
    }
    param_1 = param_1 + 0x20;
    FUN_001634b4(param_1);
    break;
  case 10:
    FUN_001634b4(param_1 + 0x20);
    if ((*(char *)(param_1 + 0x2f5) == '\0') ||
       (temp_v4 = *(unsigned int *)(param_1 + 0x2ec),
       temp_v8 = (int)(((long long)(int)temp_v4 * -0x53896e7b + ((unsigned long long)temp_v4 << 0x20)) >> 0x20),
       temp_v8 = temp_v4 + ((temp_v8 >> 7) - (temp_v8 >> 0x1f)) * -0xbe, temp_v8 != 0x15 && temp_v8 != 0x17))
    break;
    FUN_001677c0();
    temp_v8 = DAT_0059dbb4;
    temp_v6 = FUN_00169294(6,1,0);
    piVar11 = (int *)(temp_v8 + 0x12b8);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12d4))(temp_v6);
      *(unsigned char *)(temp_v8 + 0x12d0) = 0;
    }
    FUN_001634b4(param_1 + 0xac);
    temp_v8 = DAT_0059dbb4;
    temp_v6 = FUN_00169294(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12b8);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12d4))();
      *(unsigned char *)(temp_v8 + 0x12d0) = 0;
    }
    FUN_001677c0();
    break;
  case 0xc:
  case 0x10:
    temp_v6 = FUN_00169294(6,1,0);
    piVar11 = (int *)(temp_v8 + 0x12b8);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12d4))();
      *(unsigned char *)(temp_v8 + 0x12d0) = 0;
    }
    FUN_001634b4(param_1 + 0x20);
    temp_v8 = DAT_0059dbb4;
    temp_v6 = FUN_00169294(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12b8);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12d4))();
      *(unsigned char *)(temp_v8 + 0x12d0) = 0;
    }
    if (*(char *)(param_1 + 0x2f5) == '\0') break;
    FUN_001634b4(param_1 + 0xac);
    temp_v11 = *(unsigned int *)(param_1 + 0x13c);
    temp_v5 = FUN_001654d8(param_1 + 0x20);
    temp_v14 = CONCAT44(temp_v5,in_s0);
    temp_v5 = FUN_001654e4(param_1 + 0x20);
    FUN_001677c0();
    temp_v8 = DAT_0059dbb4;
    temp_v6 = FUN_00169294(6,1,0);
    piVar11 = (int *)(temp_v8 + 0x12b8);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12d4))();
      *(unsigned char *)(temp_v8 + 0x12d0) = 0;
    }
    temp_v12 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v14 >> 0x20),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001835b4(2,0x10,temp_v11,(int)(temp_v12 + (float)temp_v14),temp_v5,0xc9);
    temp_v8 = DAT_0059dbb4;
    temp_v6 = FUN_00169294(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12b8);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
      (*(romwright_code *)piVar11[7])();
      *(unsigned char *)(piVar11 + 6) = 0;
    }
    FUN_001677c0();
    break;
  case 0xd:
    FUN_001634b4(param_1 + 0x20);
    if (*(char *)(param_1 + 0x2f5) == '\0') break;
LAB_003d9da8:
    temp_v10 = *(unsigned int *)(param_1 + 0xb0);
    temp_v5 = FUN_001654d8(param_1 + 0x20);
    temp_v11 = FUN_001654e4(param_1 + 0x20);
    FUN_001677c0();
    temp_v12 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001835b4(2,0x10,temp_v10,(int)(temp_v12 + in_s0),temp_v11,0xc9);
    FUN_001677c0();
    break;
  case 0x13:
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v11 = *(unsigned int *)(param_1 + 0xb0);
      temp_v5 = FUN_001654d8(param_1 + 0x20);
      temp_v14 = CONCAT44(temp_v5,in_s0);
      temp_v5 = FUN_001654e4(param_1 + 0x20);
      temp_v8 = DAT_0059dbb4;
      temp_v6 = FUN_00169294(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12b8);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12d4))();
        *(unsigned char *)(temp_v8 + 0x12d0) = 0;
      }
      temp_v12 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v14 >> 0x20),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_001835b4(2,0x10,temp_v11,(int)(temp_v12 + (float)temp_v14),temp_v5,0xc9);
      temp_v8 = DAT_0059dbb4;
      temp_v6 = FUN_00169294(6,7,0);
      piVar11 = (int *)(temp_v8 + 0x12b8);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12d4))();
        *(unsigned char *)(temp_v8 + 0x12d0) = 0;
      }
    }
    FUN_001634b4(param_1 + 0x20);
  }
  temp_v8 = DAT_0059dbb4;
  temp_v6 = FUN_00169294(6,7,0);
  piVar11 = (int *)(temp_v8 + 0x12b8);
  temp_v9 = piVar11[*piVar11 + 2];
  piVar11[*piVar11 + 2] = temp_v6;
  if (*(char *)(temp_v8 + 0x12d0) != '\0' || temp_v9 != temp_v6) {
    (**(romwright_code **)(temp_v8 + 0x12d4))();
    *(unsigned char *)(temp_v8 + 0x12d0) = 0;
  }
  return;
}

} /* extern "C" */
