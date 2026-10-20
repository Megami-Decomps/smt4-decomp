/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c39dc` (_code @ 0x2c39dc, 0x116c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184758(...);
int FUN_002304d0(...);
int FUN_002a4878(...);
int FUN_002a4914(...);
int FUN_002a4964(...);
int FUN_002cb84c(void);
int FUN_003f5220(...);

int FUN_001681cc(...);
int FUN_00192550(void);
int FUN_001ab854(...);
int FUN_001aba54(void);
int FUN_001b4a90(int, int, int);
int FUN_0020b718(...);
int FUN_0020d934(void);
int FUN_00228ab0(...);
int FUN_0026f3a0(void);
int FUN_002707d8(...);
int FUN_0028c2ec(...);
int FUN_002ade88(void);
int FUN_002c8538(int);
int FUN_002cc0c0(void);
int FUN_002f8288(void);
int FUN_00333694(...);
int FUN_0035e540(void);
int FUN_00372570(int);
int FUN_003f525c(unsigned int, int);
int FUN_00480140(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern int DAT_0057f268; /* 0x57f268 */
extern unsigned int DAT_0057f270; /* 0x57f270 */
extern unsigned int DAT_0057f274; /* 0x57f274 */

extern int FUN_0014aa78(void);
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_001ab854. */
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_0020b718. */
/* Supplied declaration required: FUN_0020d934. */
/* Supplied declaration required: FUN_00228ab0. */
/* Supplied declaration required: FUN_002304d0. */
extern int FUN_0025e684(void);
/* Supplied declaration required: FUN_0026f3a0. */
/* Supplied declaration required: FUN_002707d8. */
/* Supplied declaration required: FUN_0028c2ec. */
/* Supplied declaration required: FUN_002a4878. */
extern unsigned int FUN_002a4894(int);
/* Supplied declaration required: FUN_002a4914. */
/* Supplied declaration required: FUN_002a4964. */
/* Supplied declaration required: FUN_002ade88. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002cb84c. */
/* Supplied declaration required: FUN_002cc0c0. */
/* Supplied declaration required: FUN_002f8288. */
/* Supplied declaration required: FUN_00333694. */
/* Supplied declaration required: FUN_0035e540. */
/* Supplied declaration required: FUN_00372570. */
/* Supplied declaration required: FUN_003f5220. */
/* Supplied declaration required: FUN_003f525c. */
/* Supplied declaration required: FUN_00480140. */


void FUN_002c39dc(int param_1,unsigned int param_2,unsigned short param_3)

{
/* irregular: 16 goto(s); 29 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  unsigned char temp_v14;
  unsigned long long temp_v15;
  
  temp_v0 = DAT_0057f268;
  temp_v2 = FUN_001ab888();
  *(char *)(temp_v0 + 0x9b4) = (char)param_1;
  FUN_001b4a90(temp_v0 + 0x9c0,4,1);
  temp_v3 = 0;
  temp_v9 = 0;
  do {
    temp_v4 = temp_v3 + 1;
    temp_v9 = temp_v9 + 2;
    *(unsigned short *)(temp_v0 + temp_v3 * 8 + 0xa84) = 1;
    temp_v3 = temp_v3 + 2;
    *(unsigned short *)(temp_v0 + temp_v4 * 8 + 0xa84) = 1;
  } while (temp_v9 < 0x18);
  temp_v3 = 0;
  do {
    temp_v9 = temp_v0 + temp_v3 * 4;
    *(unsigned char *)(*(int *)(temp_v9 + 0xa10) + 0x25) = 0;
    *(unsigned char *)(*(int *)(temp_v9 + 0xa10) + 0x27) = 0;
    *(unsigned char *)(*(int *)(temp_v9 + 0xa10) + 0x26) = 0;
    FUN_003f525c(*(unsigned int *)(temp_v9 + 0xa10),0);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 4);
  temp_v3 = 0;
  do {
    temp_v9 = temp_v0 + temp_v3 * 4;
    *(unsigned char *)(*(int *)(temp_v9 + 0xa20) + 0x25) = 0;
    *(unsigned char *)(*(int *)(temp_v9 + 0xa20) + 0x27) = 0;
    *(unsigned char *)(*(int *)(temp_v9 + 0xa20) + 0x26) = 0;
    FUN_003f525c(*(unsigned int *)(temp_v9 + 0xa20),0);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 0x18);
  switch(param_1) {
  case 0:
    *(unsigned int *)(temp_v0 + 0x20) = 1;
    FUN_002c8538(0);
    break;
  case 1:
    temp_v3 = 0;
    temp_v2 = 0;
    *(unsigned int *)(temp_v0 + 0x9c0) = 0;
    do {
      temp_v9 = temp_v3 + 1;
      temp_v2 = temp_v2 + 2;
      *(unsigned short *)(temp_v0 + temp_v3 * 8 + 0xa84) = 0;
      temp_v3 = temp_v3 + 2;
      *(unsigned short *)(temp_v0 + temp_v9 * 8 + 0xa84) = 0;
    } while (temp_v2 < 0x18);
    *(unsigned int *)(temp_v0 + 0x20) = 1;
    FUN_002c8538(0);
    break;
  case 2:
  case 4:
  case 0xf:
    *(unsigned short *)(temp_v0 + 0x38) = 0xffff;
    temp_v3 = 0;
    *(unsigned char *)(temp_v0 + 0x9c0) = 0;
    do {
      if (((-1 < *(char *)(temp_v2 + temp_v3 + 0x1ca0)) && (temp_v9 = FUN_001ab854(), param_1 == 0xf)) &&
         ((*(unsigned short *)(temp_v9 + 0x60) & 4) != 0)) {
        *(unsigned char *)(temp_v0 + temp_v3 + 0x9c1) = 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
    temp_v3 = 0;
    do {
      temp_v9 = temp_v0 + temp_v3 * 8;
      if ((((*(int *)(temp_v9 + 0xa80) < 0) ||
           ((temp_v4 = FUN_001ab854(), param_1 != 0xf && ((*(unsigned short *)(temp_v4 + 0x60) & 2) != 0)))) ||
          ((*(unsigned short *)(temp_v4 + 0x60) & 0x400) != 0)) ||
         ((param_1 == 0xf && ((*(unsigned short *)(temp_v4 + 0x60) & 4) != 0)))) {
        *(unsigned short *)(temp_v9 + 0xa84) = 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x18);
    temp_v3 = 0;
    do {
      temp_v9 = 0;
      temp_v4 = 0x18;
      do {
        temp_v13 = temp_v0 + temp_v9 * 8;
        temp_v9 = temp_v9 + 1;
        if ((int)*(char *)(temp_v2 + temp_v3 + 0x1ca0) == *(int *)(temp_v13 + 0xa80)) {
          *(unsigned short *)(temp_v13 + 0xa84) = 0;
        }
        temp_v4 = temp_v4 - 1;
      } while (temp_v4 != 0);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
    goto LAB_002c3c84;
  case 3:
    temp_v3 = 0;
    *(unsigned int *)(temp_v0 + 0x9b8) = param_2;
    *(unsigned short *)(temp_v0 + 0x38) = param_3;
    do {
      temp_v9 = temp_v0 + temp_v3 * 8;
      if ((*(int *)(temp_v9 + 0xa80) < 0) ||
         (temp_v4 = FUN_001ab854(), (*(unsigned short *)(temp_v4 + 0x60) & 0x402) != 0)) {
        *(unsigned short *)(temp_v9 + 0xa84) = 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x18);
    temp_v3 = 0;
    do {
      if ((*(int *)(temp_v0 + 0x9b8) - 1 != temp_v3) && (-1 < *(char *)(temp_v2 + temp_v3 + 0x1ca0))) {
        temp_v9 = FUN_001ab854();
        temp_v4 = 0;
        do {
          if ((-1 < *(int *)(temp_v0 + temp_v4 * 8 + 0xa80)) &&
             (temp_v13 = FUN_001ab854(), *(short *)(temp_v13 + 0x62) == *(short *)(temp_v9 + 0x62))) {
            *(unsigned short *)(temp_v0 + temp_v4 * 8 + 0xa84) = 0;
            break;
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < 0x18);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
    FUN_00372570(1);
    FUN_0026f3a0();
    *(unsigned int *)(temp_v0 + 0x20) = 6;
    FUN_0020d934();
    if (*(int *)(temp_v0 + 0x1c) != 0x1b) {
      return;
    }
    FUN_0020b718(*(unsigned int *)(temp_v0 + 0x20),1);
    return;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    *(short *)(temp_v0 + 0x36) = (short)param_2;
    temp_v3 = 0;
    *(unsigned short *)(temp_v0 + 0x38) = param_3;
    do {
      temp_v9 = 0;
      temp_v4 = 0x18;
      do {
        temp_v13 = temp_v0 + temp_v9 * 8;
        temp_v9 = temp_v9 + 1;
        if ((int)*(char *)(temp_v2 + temp_v3 + 0x1ca0) == *(int *)(temp_v13 + 0xa80)) {
          *(unsigned short *)(temp_v13 + 0xa84) = 0;
        }
        temp_v4 = temp_v4 - 1;
      } while (temp_v4 != 0);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
    temp_v3 = 0;
    do {
      temp_v9 = temp_v0 + temp_v3 * 8;
      if ((*(int *)(temp_v9 + 0xa80) < 0) ||
         (temp_v4 = FUN_001ab854(), (*(unsigned short *)(temp_v4 + 0x60) & 0x400) != 0)) {
        *(unsigned short *)(temp_v9 + 0xa84) = 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x18);
    if (!(param_1 == 8 || param_1 == 9)) {
      temp_v6 = param_2 & 0xffff;
LAB_002c4008:
      temp_v5 = temp_v6;
      if ((param_1 != 5 && param_1 != 6) && param_1 != 7) goto LAB_002c4018;
    }
    else {
      temp_v12 = param_2;
      FUN_00192550();
      temp_v5 = 0;
      if (temp_v12 != 0) {
        temp_v5 = (unsigned int)*(unsigned short *)(temp_v12 + 0x32);
      }
      temp_v6 = 0;
      if (temp_v12 == 0 || temp_v5 == 0) goto LAB_002c4008;
      *(short *)(temp_v0 + 0x36) = (short)temp_v5;
      if (param_1 == 8) {
        temp_v1 = 5;
      }
      else {
        temp_v6 = temp_v5;
        if (param_1 != 9) goto LAB_002c4008;
        temp_v1 = 6;
      }
      *(unsigned char *)(temp_v0 + 0x9b4) = temp_v1;
LAB_002c4018:
      if (temp_v5 == 0) {
        if ((param_1 == 8) || (param_1 == 9)) {
          if (*(char *)(temp_v2 + 0x1ca0) < '\0') {
            *(unsigned char *)(temp_v0 + 0x9c1) = 0;
          }
          if (*(char *)(temp_v2 + 0x1ca1) < '\0') {
            *(unsigned char *)(temp_v0 + 0x9c2) = 0;
          }
          if (*(char *)(temp_v2 + 0x1ca2) < '\0') {
            *(unsigned char *)(temp_v0 + 0x9c3) = 0;
          }
          temp_v6 = param_2;
          FUN_00192550();
          if ((*(unsigned char *)(temp_v6 + 0x3a) & 0x80) != 0) {
            *(unsigned int *)(temp_v0 + 0x20) = 10;
            temp_v9 = -1;
            FUN_00480140(0xffffffff,param_2,1);
            temp_v3 = 0;
            if (temp_v9 == 1) {
              *(unsigned char *)(temp_v0 + 0x9c0) = 0;
            }
            do {
              temp_v9 = (int)*(char *)(temp_v2 + temp_v3 + 0x1ca0);
              FUN_00480140(temp_v9,param_2,1);
              if (temp_v9 == 1) {
                *(unsigned char *)(temp_v0 + temp_v3 + 0x9c1) = 0;
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < 3);
            temp_v2 = 0;
            do {
              temp_v9 = temp_v0 + temp_v2 * 8;
              temp_v3 = *(int *)(temp_v9 + 0xa80);
              FUN_00480140(temp_v3,param_2,1);
              if (temp_v3 == 1) {
                *(unsigned short *)(temp_v9 + 0xa84) = 0;
              }
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < 0x18);
          }
          else {
            if ((*(unsigned int *)(temp_v6 + 0x68) & 4) == 0) {
              temp_v9 = -1;
              FUN_00480140(0xffffffff,param_2,1);
              temp_v3 = 0;
              if (temp_v9 == 1) {
                *(unsigned char *)(temp_v0 + 0x9c0) = 0;
              }
              do {
                temp_v9 = (int)*(char *)(temp_v2 + temp_v3 + 0x1ca0);
                FUN_00480140(temp_v9,param_2,1);
                if (temp_v9 == 1) {
                  *(unsigned char *)(temp_v0 + temp_v3 + 0x9c1) = 0;
                }
                temp_v3 = temp_v3 + 1;
              } while (temp_v3 < 3);
              temp_v2 = 0;
              do {
                temp_v9 = temp_v0 + temp_v2 * 8;
                temp_v3 = *(int *)(temp_v9 + 0xa80);
                FUN_00480140(temp_v3,param_2,1);
                if (temp_v3 == 1) {
                  *(unsigned short *)(temp_v9 + 0xa84) = 0;
                }
                temp_v2 = temp_v2 + 1;
              } while (temp_v2 < 0x18);
              *(unsigned int *)(temp_v0 + 0x20) = 8;
              if (*(char *)(temp_v0 + 0x42) != '\0') {
                temp_v2 = temp_v0 + 0xdb4;
              }
              else {
                temp_v2 = temp_v0 + 0xd50;
              }
              FUN_002707d8(temp_v2,0);
              break;
            }
            *(unsigned int *)(temp_v0 + 0x20) = 10;
            temp_v9 = -1;
            FUN_00480140(0xffffffff,param_2,1);
            temp_v3 = 0;
            if (temp_v9 == 1) {
              *(unsigned char *)(temp_v0 + 0x9c0) = 0;
            }
            do {
              temp_v9 = (int)*(char *)(temp_v2 + temp_v3 + 0x1ca0);
              FUN_00480140(temp_v9,param_2,1);
              if (temp_v9 == 1) {
                *(unsigned char *)(temp_v0 + temp_v3 + 0x9c1) = 0;
              }
              temp_v3 = temp_v3 + 1;
            } while (temp_v3 < 3);
            temp_v2 = 0;
            do {
              temp_v9 = temp_v0 + temp_v2 * 8;
              temp_v3 = *(int *)(temp_v9 + 0xa80);
              FUN_00480140(temp_v3,param_2,1);
              if (temp_v3 == 1) {
                *(unsigned short *)(temp_v9 + 0xa84) = 0;
              }
              temp_v2 = temp_v2 + 1;
            } while (temp_v2 < 0x18);
          }
          FUN_002cc0c0();
        }
        break;
      }
    }
    temp_v6 = temp_v5;
    FUN_001aba54();
    if ((*(unsigned char *)(temp_v6 + 0x38) & 4) != 0) {
      *(unsigned char *)(temp_v0 + 0x35) = 1;
      *(unsigned int *)(temp_v0 + 0x20) = 10;
      FUN_002f8288();
    }
    else {
      if (((*(unsigned int *)(temp_v6 + 0x28) & 0x1ff) >> 5 != 3) &&
         ((*(unsigned int *)(temp_v6 + 0x28) & 0x1ff) >> 5 != 8)) {
        *(unsigned int *)(temp_v0 + 0x20) = 8;
      }
      else {
        *(unsigned int *)(temp_v0 + 0x20) = 10;
      }
      if (*(char *)(temp_v6 + 0x23) != '\a') {
        if (*(char *)(temp_v2 + 0x1ca0) < '\0') {
          *(unsigned char *)(temp_v0 + 0x9c1) = 0;
        }
        if (*(char *)(temp_v2 + 0x1ca1) < '\0') {
          *(unsigned char *)(temp_v0 + 0x9c2) = 0;
        }
        if (*(char *)(temp_v2 + 0x1ca2) < '\0') {
          *(unsigned char *)(temp_v0 + 0x9c3) = 0;
        }
        temp_v3 = (int)*(short *)(temp_v0 + 0x38);
        FUN_00333694(temp_v3,0xffffffff,temp_v5,1);
        if (temp_v3 == 1) {
          *(unsigned char *)(temp_v0 + 0x9c0) = 0;
          temp_v3 = FUN_0014aa78();
          if ((temp_v3 != 0) &&
             (temp_v3 = FUN_0014aa78(),
             (*(unsigned int *)(temp_v3 + 0x45ac) & DAT_0057f274) != 0 ||
             (*(unsigned int *)(temp_v3 + 0x45a8) & DAT_0057f270) != 0)) {
            *(unsigned char *)(temp_v0 + 0x9c0) = 1;
          }
        }
        temp_v3 = 0;
        do {
          temp_v9 = (int)*(short *)(temp_v0 + 0x38);
          FUN_00333694(temp_v9,(int)*(char *)(temp_v2 + temp_v3 + 0x1ca0),temp_v5,1);
          if (temp_v9 == 1) {
            *(unsigned char *)(temp_v0 + temp_v3 + 0x9c1) = 0;
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 3);
        temp_v2 = 0;
        do {
          temp_v3 = (int)*(short *)(temp_v0 + 0x38);
          temp_v9 = temp_v0 + temp_v2 * 8;
          FUN_00333694(temp_v3,*(unsigned int *)(temp_v9 + 0xa80),temp_v5,1);
          if (temp_v3 == 1) {
            *(unsigned short *)(temp_v9 + 0xa84) = 0;
          }
          temp_v2 = temp_v2 + 1;
          temp_v12 = temp_v11;
        } while (temp_v2 < 0x18);
      }
      else {
        temp_v12 = 2;
        *(unsigned char *)(temp_v0 + 0x9b4) = 2;
        *(unsigned char *)(temp_v0 + 0x9c0) = 0;
        if ((-1 < *(short *)(temp_v0 + 0x38)) && (temp_v5 == 0x7c || temp_v5 == 0x7d)) {
          temp_v2 = -1;
          temp_v3 = 0;
          do {
            temp_v9 = FUN_001ab888();
            if ((int)*(char *)(temp_v9 + temp_v3 + 0x1ca0) == (int)*(short *)(temp_v0 + 0x38)) {
              temp_v2 = temp_v3;
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < 3);
          if (-1 < temp_v2) {
            *(unsigned char *)(temp_v0 + temp_v2 + 0x9c1) = 0;
            FUN_00228ab0(temp_v2);
          }
          FUN_001ab854((int)*(short *)(temp_v0 + 0x38));
          temp_v12 = temp_v10;
        }
        if ((*(unsigned int *)(temp_v6 + 0x3c) & 0x7f) != 1) {
          temp_v2 = 0;
          do {
            temp_v3 = temp_v0 + temp_v2 * 8;
            if (-1 < *(int *)(temp_v3 + 0xa80)) {
              temp_v15 = FUN_001ab854();
              temp_v12 = (unsigned int)((unsigned long long)temp_v15 >> 0x20);
              if ((*(unsigned short *)((int)temp_v15 + 0x60) & 2) != 0) {
                *(unsigned short *)(temp_v3 + 0xa84) = 0;
              }
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 0x18);
        }
      }
      temp_v14 = (*(unsigned int *)(temp_v6 + 0x28) & 0x1ff) >> 5 != 3;
      if (temp_v14) {
        temp_v12 = 8;
      }
      if (!(temp_v14 && temp_v12 != (*(unsigned int *)(temp_v6 + 0x28) & 0x1ff) >> 5)) {
        FUN_002f8288();
      }
      else {
        if (*(char *)(temp_v0 + 0x42) != '\0') {
          temp_v2 = temp_v0 + 0xdb4;
        }
        else {
          temp_v2 = temp_v0 + 0xd50;
        }
        FUN_0028c2ec(temp_v2,0);
      }
    }
    break;
  case 10:
  case 0x12:
    *(unsigned short *)(temp_v0 + 0x38) = 0xffff;
    *(unsigned int *)(temp_v0 + 0xe7c) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0xe80) = 0xffffffff;
    *(unsigned char *)(temp_v0 + 0xe88) = 0xff;
    *(unsigned char *)(temp_v0 + 0xe89) = 0xff;
    *(unsigned int *)(temp_v0 + 0xe84) = 0;
    FUN_002ade88();
    *(unsigned int *)(temp_v0 + 0x20) = 8;
    goto LAB_002c45c0;
  case 0xb:
    *(short *)(temp_v0 + 0x36) = (short)param_2;
    *(unsigned short *)(temp_v0 + 0x38) = 0xffff;
    FUN_0035e540();
    *(unsigned int *)(temp_v0 + 0x20) = 8;
    if (*(char *)(temp_v0 + 0x42) == '\0') {
      temp_v7 = 0xc6;
    }
    else {
      temp_v7 = 199;
    }
    FUN_001681cc(temp_v7);
    break;
  case 0xc:
  case 0xd:
  case 0xe:
    goto LAB_002c3c84;
  case 0x10:
    *(unsigned char *)(temp_v0 + 0x9c0) = 0;
    temp_v3 = 0;
    *(unsigned int *)(temp_v0 + 0x20) = 8;
    do {
      temp_v9 = temp_v2 + temp_v3;
      if ((*(char *)(temp_v9 + 0x1ca0) < '\0') ||
         (((temp_v4 = FUN_001ab854(), (*(unsigned short *)(temp_v4 + 0x60) & 0x400) != 0 ||
           (temp_v4 = FUN_001ab854((int)*(char *)(temp_v9 + 0x1ca0)),
           (*(unsigned short *)(temp_v4 + 0x60) & 2) != 0)) &&
          (temp_v9 = FUN_001ab854((int)*(char *)(temp_v9 + 0x1ca0)),
          (*(unsigned short *)(temp_v9 + 0x60) & 4) == 0)))) {
        *(unsigned char *)(temp_v0 + temp_v3 + 0x9c1) = 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
    temp_v2 = 0;
    do {
      temp_v3 = temp_v0 + temp_v2 * 8;
      if (*(int *)(temp_v3 + 0xa80) >= 0) {
        temp_v9 = FUN_001ab854();
        if (((*(unsigned short *)(temp_v9 + 0x60) & 0x402) != 0) && ((*(unsigned short *)(temp_v9 + 0x60) & 4) == 0))
        {
          *(unsigned short *)(temp_v3 + 0xa84) = 0;
        }
      }
      else {
        *(unsigned short *)(temp_v3 + 0xa84) = 0;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x18);
    FUN_002cb84c();
    break;
  case 0x11:
    *(unsigned short *)(temp_v0 + 0x38) = 0xffff;
    temp_v3 = 1;
    *(unsigned char *)(temp_v0 + 0x9c0) = 0;
    do {
      temp_v9 = temp_v0 + temp_v3 * 4;
      if (*(char *)(*(int *)(temp_v9 + 0xa10) + 0x20) == '\0') {
        FUN_001ab854(*(unsigned int *)(*(int *)(temp_v9 + 0xa10) + 0x34));
        temp_v9 = FUN_0025e684();
        if (temp_v9 == 0) {
          *(unsigned char *)(temp_v0 + temp_v3 + 0x9c0) = 0;
        }
      }
      else {
        *(unsigned char *)(temp_v0 + temp_v3 + 0x9c0) = 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 4);
    temp_v3 = 0;
    do {
      temp_v9 = temp_v0 + temp_v3 * 8;
      if (*(int *)(temp_v9 + 0xa80) >= 0) {
        temp_v4 = FUN_001ab854();
        if (((param_1 != 0xf) && ((*(unsigned short *)(temp_v4 + 0x60) & 2) != 0)) ||
           ((*(unsigned short *)(temp_v4 + 0x60) & 0x400) != 0)) {
          *(unsigned short *)(temp_v9 + 0xa84) = 0;
        }
        temp_v4 = FUN_0025e684();
        if (temp_v4 == 0) {
          *(unsigned short *)(temp_v9 + 0xa84) = 0;
        }
      }
      else {
        *(unsigned short *)(temp_v9 + 0xa84) = 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x18);
    temp_v3 = 0;
    do {
      temp_v9 = 0;
      temp_v4 = 0x18;
      do {
        temp_v13 = temp_v0 + temp_v9 * 8;
        temp_v9 = temp_v9 + 1;
        if ((int)*(char *)(temp_v2 + temp_v3 + 0x1ca0) == *(int *)(temp_v13 + 0xa80)) {
          *(unsigned short *)(temp_v13 + 0xa84) = 0;
        }
        temp_v4 = temp_v4 - 1;
      } while (temp_v4 != 0);
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 3);
    *(unsigned int *)(temp_v0 + 0x20) = 8;
    FUN_002cb84c();
    break;
  case 0x13:
    temp_v2 = 1;
    do {
      if (*(char *)(*(int *)(temp_v0 + temp_v2 * 4 + 0xa10) + 0x20) != '\0') {
        *(unsigned char *)(temp_v0 + temp_v2 + 0x9c0) = 0;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
    temp_v3 = 0;
    temp_v2 = 0x18;
    do {
      temp_v9 = temp_v0 + temp_v3 * 8;
      temp_v3 = temp_v3 + 1;
      if (*(int *)(temp_v9 + 0xa80) < 0) {
        *(unsigned short *)(temp_v9 + 0xa84) = 0;
      }
      temp_v2 = temp_v2 - 1;
    } while (temp_v2 != 0);
    goto LAB_002c3c84;
  }
  if (*(int *)(temp_v0 + 0x20) == 8) {
LAB_002c45c0:
    if (*(char *)(temp_v0 + 0x42) != '\0') {
      temp_v3 = temp_v0 + 0xdb4;
      temp_v7 = FUN_002a4878();
      temp_v8 = FUN_002a4894(temp_v3);
      temp_v2 = 0;
      FUN_002304d0(0,temp_v7,temp_v8,*(unsigned int *)(temp_v0 + 0x2c));
      if (temp_v2 == 0) {
        temp_v2 = 0;
        if (*(char *)(temp_v0 + 0x9b4) == '\x04') {
          do {
            temp_v9 = ((int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1e)) >> 2) + 1;
            if (temp_v9 != 0) {
              if (*(short *)(DAT_0057f268 + ((temp_v9 * 4 - 4) + temp_v2 % 4) * 8 + 0xa84) != 0) {
LAB_002c4664:
                FUN_002a4914(temp_v3,temp_v2 % 4);
                FUN_002a4964(temp_v3,((int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1e)) >> 2) + 1);
                if (temp_v2 < 0x18) goto LAB_002c4a2c;
                break;
              }
            }
            else if (*(char *)(DAT_0057f268 + temp_v2 % 4 + 0x9c0) != '\0') goto LAB_002c4664;
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 0x18);
          temp_v2 = 0;
          do {
            if (*(char *)(DAT_0057f268 + temp_v2 + 0x9c0) != '\0') {
              FUN_002a4914(temp_v3);
              temp_v2 = 0;
              FUN_002a4964(temp_v3,temp_v2);
              break;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 4);
        }
        else {
          do {
            if (*(char *)(DAT_0057f268 + temp_v2 + 0x9c0) != '\0') {
              FUN_002a4914(temp_v3,temp_v2);
              FUN_002a4964(temp_v3,0);
              if (temp_v2 < 4) goto LAB_002c4a2c;
              break;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 4);
          temp_v2 = 0;
          do {
            temp_v9 = ((int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1e)) >> 2) + 1;
            if (temp_v9 != 0) {
              if (*(short *)(DAT_0057f268 + ((temp_v9 * 4 - 4) + temp_v2 % 4) * 8 + 0xa84) != 0) {
                FUN_002a4914(temp_v3,temp_v2 % 4);
                temp_v2 = ((int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1e)) >> 2) + 1;
                FUN_002a4964(temp_v3,temp_v2);
                break;
              }
            }
            else if (*(char *)(DAT_0057f268 + temp_v2 % 4 + 0x9c0) != '\0') {
              FUN_002a4914(temp_v3,temp_v2 % 4);
              temp_v2 = ((int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1e)) >> 2) + 1;
              FUN_002a4964(temp_v3,temp_v2);
              break;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 0x18);
        }
      }
    }
    else {
      temp_v7 = FUN_002a4878(temp_v0 + 0xd50);
      temp_v8 = FUN_002a4894(temp_v0 + 0xd50);
      temp_v2 = 0;
      FUN_002304d0(0,temp_v7,temp_v8,*(unsigned int *)(temp_v0 + 0x2c));
      if (temp_v2 == 0) {
        temp_v2 = 0;
        if (*(char *)(temp_v0 + 0x9b4) == '\x04') {
          do {
            temp_v3 = ((int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1e)) >> 2) + 1;
            temp_v9 = temp_v2 % 4 + *(int *)(temp_v0 + 0x2c) * 0xc;
            if (temp_v3 != 0) {
              if (*(short *)(DAT_0057f268 + ((temp_v3 * 4 - 4) + temp_v9) * 8 + 0xa84) != 0) {
LAB_002c4858:
                temp_v3 = temp_v2 + *(int *)(temp_v0 + 0x2c) * 0xc;
                if (temp_v3 < 0xc) {
                  *(unsigned int *)(temp_v0 + 0x2c) = 0;
                  FUN_002a4914(temp_v0 + 0xd50,temp_v2 % 4);
                  FUN_002a4964(temp_v0 + 0xd50,
                               ((int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1e)) >> 2) + 1);
                }
                else {
                  temp_v3 = temp_v3 - 0xc;
                  *(unsigned int *)(temp_v0 + 0x2c) = 1;
                  FUN_002a4914(temp_v0 + 0xd50,temp_v3 % 4);
                  FUN_002a4964(temp_v0 + 0xd50,
                               ((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2) + 1);
                }
                if (temp_v2 < 0x18) goto LAB_002c4a2c;
                break;
              }
            }
            else if (*(char *)(DAT_0057f268 + temp_v9 + 0x9c0) != '\0') goto LAB_002c4858;
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 0x18);
          temp_v2 = 0;
          do {
            if (*(char *)(DAT_0057f268 + temp_v2 + 0x9c0) != '\0') {
              FUN_002a4914(temp_v0 + 0xd50);
              temp_v2 = 0;
              temp_v3 = temp_v0 + 0xd50;
              FUN_002a4964(temp_v3,temp_v2);
              break;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 4);
        }
        else {
          do {
            if (*(char *)(DAT_0057f268 + temp_v2 + 0x9c0) != '\0') {
              FUN_002a4914(temp_v0 + 0xd50,temp_v2);
              FUN_002a4964(temp_v0 + 0xd50,0);
              if (temp_v2 < 4) goto LAB_002c4a2c;
              break;
            }
            temp_v2 = temp_v2 + 1;
          } while (temp_v2 < 4);
          temp_v2 = DAT_0057f268;
          temp_v3 = 0;
          do {
            temp_v9 = ((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2) + 1;
            if (temp_v9 != 0) {
              if (*(short *)(DAT_0057f268 + (temp_v3 % 4 + (temp_v9 * 4 - 4)) * 8 + 0xa84) == 0)
              goto LAB_002c4a1c;
LAB_002c49c4:
              if (temp_v3 < 0xc) {
                if (*(int *)(temp_v0 + 0x2c) != 1) {
                  *(unsigned int *)(temp_v0 + 0x2c) = 0;
                }
                else {
                  *(unsigned int *)(DAT_0057f268 + 0x2c) = *(unsigned int *)(DAT_0057f268 + 0x2c) ^ 1;
                  FUN_00184758(temp_v2 + 0x180,5,0);
                  temp_v9 = 0;
                  do {
                    FUN_003f5220(*(unsigned int *)(temp_v2 + temp_v9 * 4 + 0xa10),
                                 *(unsigned int *)(temp_v2 + 0x2c));
                    temp_v9 = temp_v9 + 1;
                  } while (temp_v9 < 4);
                  temp_v9 = 0;
                  do {
                    FUN_003f5220(*(unsigned int *)(temp_v2 + temp_v9 * 4 + 0xa20),
                                 *(unsigned int *)(temp_v2 + 0x2c));
                    temp_v9 = temp_v9 + 1;
                  } while (temp_v9 < 0x18);
                }
                FUN_002a4914(temp_v0 + 0xd50,temp_v3 % 4);
                FUN_002a4964(temp_v0 + 0xd50,((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2) + 1
                            );
                break;
              }
              if (*(int *)(temp_v0 + 0x2c) != 0) {
                *(unsigned int *)(temp_v0 + 0x2c) = 1;
              }
              else {
                *(unsigned int *)(DAT_0057f268 + 0x2c) = *(unsigned int *)(DAT_0057f268 + 0x2c) ^ 1;
                FUN_00184758(temp_v2 + 0x180,4,0);
                temp_v9 = 0;
                do {
                  FUN_003f5220(*(unsigned int *)(temp_v2 + temp_v9 * 4 + 0xa10),
                               *(unsigned int *)(temp_v2 + 0x2c));
                  temp_v9 = temp_v9 + 1;
                } while (temp_v9 < 4);
                temp_v9 = 0;
                do {
                  FUN_003f5220(*(unsigned int *)(temp_v2 + temp_v9 * 4 + 0xa20),
                               *(unsigned int *)(temp_v2 + 0x2c));
                  temp_v9 = temp_v9 + 1;
                } while (temp_v9 < 0x18);
              }
              temp_v3 = temp_v3 - 0xc;
              FUN_002a4914(temp_v0 + 0xd50,temp_v3 % 4);
              temp_v2 = ((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1e)) >> 2) + 1;
              temp_v3 = temp_v0 + 0xd50;
              FUN_002a4964(temp_v3,temp_v2);
              break;
            }
            if (*(char *)(DAT_0057f268 + temp_v3 % 4 + 0x9c0) != '\0') goto LAB_002c49c4;
LAB_002c4a1c:
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < 0x18);
        }
      }
    }
  }
LAB_002c4a2c:
  FUN_0020d934();
  if (*(int *)(temp_v0 + 0x1c) != 0x1b) {
    return;
  }
  FUN_0020b718(*(unsigned int *)(temp_v0 + 0x20),1);
  return;
LAB_002c3c84:
  *(unsigned int *)(temp_v0 + 0x20) = 8;
  goto LAB_002c45c0;
}

} /* extern "C" */
