/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00330068` (_code @ 0x330068, 0xc94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned int DAT_00433158; /* 0x433158 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_00262448. */
/* Supplied declaration required: FUN_00296690. */
extern int FUN_002aec20(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b9708. */
/* Supplied declaration required: FUN_002bef70. */
/* Supplied declaration required: FUN_002bef7c. */
/* Supplied declaration required: FUN_002bf460. */
extern int FUN_002bf6d0(unsigned int, int);
/* Supplied declaration required: FUN_002bf710. */
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_003883c0. */


void FUN_00330068(int param_1)

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
  
  temp_v8 = DAT_0044ea00;
  switch(*(unsigned int *)(param_1 + 0x2f0)) {
  case 0:
  case 1:
  case 8:
    temp_v8 = FUN_002aec20(DAT_00433158,0x18,*(unsigned int *)(param_1 + 0x2f8),1);
    if (temp_v8 != 0) {
      FUN_003883c0(DAT_00433158,*(unsigned int *)(param_1 + 0x308),*(unsigned int *)(param_1 + 0x2f8),
                   param_1 + 0x20);
      break;
    }
    param_1 = param_1 + 0x20;
    FUN_002b9708(param_1);
    break;
  case 2:
  case 0x11:
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v6 = FUN_002c5fa4(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
      FUN_002b9708(param_1 + 0xac);
      temp_v8 = DAT_0044ea00;
      temp_v6 = FUN_002c5fa4(6,7,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))(temp_v6);
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
    }
    FUN_002b9708(param_1 + 0x20);
    break;
  case 3:
    temp_v6 = FUN_002c5fa4(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))();
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    FUN_002b9708(param_1 + 0x20);
    temp_v8 = DAT_0044ea00;
    if (*(char *)(param_1 + 0x2f5) == '\0') break;
    temp_v6 = FUN_002c5fa4(6,1,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))(temp_v6);
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    param_1 = param_1 + 0xac;
    FUN_002b9708(param_1);
    break;
  case 4:
    FUN_002b9708(param_1 + 0x20);
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v5 = FUN_002bef7c(param_1 + 0x20);
      temp_v14 = CONCAT44(temp_v5,in_s0);
      temp_v8 = FUN_002bef70(param_1 + 0x20);
      temp_v6 = 0;
      temp_v15 = 0;
      do {
        temp_v12 = *(float *)(param_1 + temp_v6 * 0x8c + 0xcc);
        temp_v13 = (float)temp_v15;
        temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v12 < temp_v13) << 0x1f) |
                ((unsigned int)(temp_v12 == temp_v13) << 0x1e);
        in_fpscr = temp_v4 | ((unsigned int)(NAN(temp_v12) || NAN(temp_v13)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v4 >> 0x18);
        if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          FUN_002bf710();
          temp_v9 = DAT_0044ea00;
          temp_v3 = FUN_002c5fa4(6,1,0);
          piVar11 = (int *)(temp_v9 + 0x12ac);
          temp_v7 = piVar11[*piVar11 + 2];
          piVar11[*piVar11 + 2] = temp_v3;
          if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v7 != temp_v3) {
            (**(romwright_code **)(temp_v9 + 0x12c8))();
            *(unsigned char *)(temp_v9 + 0x12c4) = 0;
          }
          temp_v9 = FUN_002bf6d0(0x18,temp_v6 + 0x426d);
          temp_v12 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v14 >> 0x20),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v13 = (float)VectorSignedToFloat((int)*(short *)(temp_v9 + 8),
                                              (unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_002bf460(2,0x18,temp_v6 + 0x4269,(int)(temp_v12 + (float)temp_v14 + temp_v13),
                       *(short *)(temp_v9 + 10) + temp_v8,0xc9);
          temp_v9 = DAT_0044ea00;
          temp_v3 = FUN_002c5fa4(6,7,0);
          piVar11 = (int *)(temp_v9 + 0x12ac);
          temp_v7 = piVar11[*piVar11 + 2];
          piVar11[*piVar11 + 2] = temp_v3;
          if (*(char *)(temp_v9 + 0x12c4) != '\0' || temp_v7 != temp_v3) {
            (**(romwright_code **)(temp_v9 + 0x12c8))();
            *(unsigned char *)(temp_v9 + 0x12c4) = 0;
          }
          FUN_002bf710();
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 4);
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v6 = FUN_002c5fa4(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
      FUN_002b9708(param_1 + 0xac);
    }
    temp_v8 = DAT_0044ea00;
    temp_v6 = FUN_002c5fa4(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))();
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    FUN_002b9708(param_1 + 0x20);
    temp_v8 = DAT_0044ea00;
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v6 = FUN_002c5fa4(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
      FUN_002b9708(param_1 + 0x138);
    }
    temp_v8 = DAT_0044ea00;
    temp_v6 = FUN_002c5fa4(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))();
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    break;
  case 6:
  case 0xf:
    FUN_002b9708(param_1 + 0x20);
    if (*(char *)(param_1 + 0x2f5) == '\0') break;
    temp_v11 = *(unsigned int *)(param_1 + 0xb0);
    temp_v5 = FUN_002bef7c(param_1 + 0x20);
    temp_v14 = CONCAT44(temp_v5,in_s0);
    temp_v5 = FUN_002bef70(param_1 + 0x20);
    FUN_002bf710();
    temp_v8 = DAT_0044ea00;
    temp_v6 = FUN_002c5fa4(6,1,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))(temp_v6);
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    temp_v12 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v14 >> 0x20),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002bf460(2,0x18,temp_v11,(int)(temp_v12 + (float)temp_v14),temp_v5,0xc9);
    temp_v8 = DAT_0044ea00;
    temp_v6 = FUN_002c5fa4(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (*(romwright_code *)piVar11[7])();
      *(unsigned char *)(piVar11 + 6) = 0;
    }
    FUN_002bf710();
    break;
  case 7:
  case 0x12:
    FUN_002b9708(param_1 + 0x20);
    if (*(char *)(param_1 + 0x2f5) == '\0') break;
    temp_v1 = FUN_002bef7c(param_1 + 0x20);
    temp_v2 = FUN_002bef70(param_1 + 0x20);
    FUN_00262448(param_1 + 0xac,0x18,*(int *)(param_1 + 0xb0) - 1);
    FUN_00296690(param_1 + 0xac,(int)temp_v1,(int)temp_v2);
    temp_v8 = DAT_0044ea00;
    if (*(int *)(param_1 + 0x2f0) == 7) {
      temp_v6 = FUN_002c5fa4(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
    }
    param_1 = param_1 + 0xac;
    FUN_002b9708(param_1);
    break;
  case 9:
  case 0xb:
  case 0xe:
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v6 = FUN_002c5fa4(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
      FUN_002b9708(param_1 + 0x20);
      temp_v8 = DAT_0044ea00;
      temp_v6 = FUN_002c5fa4(6,7,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
      goto LAB_00330a74;
    }
    param_1 = param_1 + 0x20;
    FUN_002b9708(param_1);
    break;
  case 10:
    FUN_002b9708(param_1 + 0x20);
    if ((*(char *)(param_1 + 0x2f5) == '\0') ||
       (temp_v4 = *(unsigned int *)(param_1 + 0x2ec),
       temp_v8 = (int)(((long long)(int)temp_v4 * -0x53896e7b + ((unsigned long long)temp_v4 << 0x20)) >> 0x20),
       temp_v8 = temp_v4 + ((temp_v8 >> 7) - (temp_v8 >> 0x1f)) * -0xbe, temp_v8 != 0x15 && temp_v8 != 0x17))
    break;
    FUN_002bf710();
    temp_v8 = DAT_0044ea00;
    temp_v6 = FUN_002c5fa4(6,1,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))(temp_v6);
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    FUN_002b9708(param_1 + 0xac);
    temp_v8 = DAT_0044ea00;
    temp_v6 = FUN_002c5fa4(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))();
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    FUN_002bf710();
    break;
  case 0xc:
  case 0x10:
    temp_v6 = FUN_002c5fa4(6,1,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))();
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    FUN_002b9708(param_1 + 0x20);
    temp_v8 = DAT_0044ea00;
    temp_v6 = FUN_002c5fa4(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))();
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    if (*(char *)(param_1 + 0x2f5) == '\0') break;
    FUN_002b9708(param_1 + 0xac);
    temp_v11 = *(unsigned int *)(param_1 + 0x13c);
    temp_v5 = FUN_002bef7c(param_1 + 0x20);
    temp_v14 = CONCAT44(temp_v5,in_s0);
    temp_v5 = FUN_002bef70(param_1 + 0x20);
    FUN_002bf710();
    temp_v8 = DAT_0044ea00;
    temp_v6 = FUN_002c5fa4(6,1,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (**(romwright_code **)(temp_v8 + 0x12c8))();
      *(unsigned char *)(temp_v8 + 0x12c4) = 0;
    }
    temp_v12 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v14 >> 0x20),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002bf460(2,0x18,temp_v11,(int)(temp_v12 + (float)temp_v14),temp_v5,0xc9);
    temp_v8 = DAT_0044ea00;
    temp_v6 = FUN_002c5fa4(6,7,0);
    piVar11 = (int *)(temp_v8 + 0x12ac);
    temp_v9 = piVar11[*piVar11 + 2];
    piVar11[*piVar11 + 2] = temp_v6;
    if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
      (*(romwright_code *)piVar11[7])();
      *(unsigned char *)(piVar11 + 6) = 0;
    }
    FUN_002bf710();
    break;
  case 0xd:
    FUN_002b9708(param_1 + 0x20);
    if (*(char *)(param_1 + 0x2f5) == '\0') break;
LAB_00330a74:
    temp_v10 = *(unsigned int *)(param_1 + 0xb0);
    temp_v5 = FUN_002bef7c(param_1 + 0x20);
    temp_v11 = FUN_002bef70(param_1 + 0x20);
    FUN_002bf710();
    temp_v12 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002bf460(2,0x18,temp_v10,(int)(temp_v12 + in_s0),temp_v11,0xc9);
    FUN_002bf710();
    break;
  case 0x13:
    if (*(char *)(param_1 + 0x2f5) != '\0') {
      temp_v11 = *(unsigned int *)(param_1 + 0xb0);
      temp_v5 = FUN_002bef7c(param_1 + 0x20);
      temp_v14 = CONCAT44(temp_v5,in_s0);
      temp_v5 = FUN_002bef70(param_1 + 0x20);
      temp_v8 = DAT_0044ea00;
      temp_v6 = FUN_002c5fa4(6,1,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
      temp_v12 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v14 >> 0x20),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002bf460(2,0x18,temp_v11,(int)(temp_v12 + (float)temp_v14),temp_v5,0xc9);
      temp_v8 = DAT_0044ea00;
      temp_v6 = FUN_002c5fa4(6,7,0);
      piVar11 = (int *)(temp_v8 + 0x12ac);
      temp_v9 = piVar11[*piVar11 + 2];
      piVar11[*piVar11 + 2] = temp_v6;
      if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
        (**(romwright_code **)(temp_v8 + 0x12c8))();
        *(unsigned char *)(temp_v8 + 0x12c4) = 0;
      }
    }
    FUN_002b9708(param_1 + 0x20);
  }
  temp_v8 = DAT_0044ea00;
  temp_v6 = FUN_002c5fa4(6,7,0);
  piVar11 = (int *)(temp_v8 + 0x12ac);
  temp_v9 = piVar11[*piVar11 + 2];
  piVar11[*piVar11 + 2] = temp_v6;
  if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v9 != temp_v6) {
    (**(romwright_code **)(temp_v8 + 0x12c8))();
    *(unsigned char *)(temp_v8 + 0x12c4) = 0;
  }
  return;
}
