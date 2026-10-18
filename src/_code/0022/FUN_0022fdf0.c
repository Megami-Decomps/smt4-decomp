/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022fdf0` (_code @ 0x22fdf0, 0x5c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_002928c8; /* 0x2928c8 */
extern unsigned char LAB_002928e0; /* 0x2928e0 */
extern unsigned char LAB_002928f0; /* 0x2928f0 */
extern unsigned char LAB_002928f4; /* 0x2928f4 */
extern unsigned char LAB_002928f8; /* 0x2928f8 */
extern unsigned char LAB_00292904; /* 0x292904 */
extern unsigned char LAB_0029290c; /* 0x29290c */
extern unsigned char LAB_0029291c; /* 0x29291c */
extern unsigned char LAB_00292928; /* 0x292928 */
extern unsigned char LAB_00292934; /* 0x292934 */
extern unsigned char LAB_00292940; /* 0x292940 */
extern unsigned char LAB_0029294c; /* 0x29294c */
extern unsigned char LAB_00292954; /* 0x292954 */
extern unsigned char LAB_0029295c; /* 0x29295c */
extern unsigned char LAB_00292964; /* 0x292964 */
extern unsigned char LAB_00292968; /* 0x292968 */
extern unsigned char LAB_00292aa0; /* 0x292aa0 */
extern unsigned char LAB_00292ab0; /* 0x292ab0 */
extern unsigned char LAB_00292ac0; /* 0x292ac0 */
extern unsigned char LAB_00292acc; /* 0x292acc */
extern unsigned char LAB_00292adc; /* 0x292adc */
extern int DAT_0043da2c; /* 0x43da2c */

/* Supplied declaration required: FUN_002303c8. */
/* Supplied declaration required: FUN_0023046c. */
/* Supplied declaration required: FUN_002305c8. */
/* Supplied declaration required: FUN_00230680. */
extern int FUN_002337a0(int);
/* Supplied declaration required: FUN_002338c4. */
/* Supplied declaration required: FUN_0024beac. */
/* Supplied declaration required: FUN_0024bfbc. */
extern int FUN_0028ec74(unsigned int);
/* Supplied declaration required: FUN_00290a68. */
/* Supplied declaration required: FUN_00295904. */
extern int FUN_00295f90(void);
/* Supplied declaration required: FUN_00296d8c. */
/* Supplied declaration required: FUN_0029f088. */
/* Supplied declaration required: FUN_002ae3f0. */
extern unsigned int FUN_002ae650(unsigned int);
extern int FUN_002b47cc(unsigned int);
/* Supplied declaration required: FUN_002b4854. */
extern unsigned int FUN_002b9100(unsigned int);
/* Supplied declaration required: FUN_002bcff0. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int FUN_003951ec(void);


void FUN_0022fdf0(int param_1)

{
/* irregular: 16 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  char temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  int uStack_128;
  unsigned int uStack_124;
  unsigned int uStack_120;
  char acStack_c8 [8];
  unsigned char temp_v15 [8];
  unsigned char temp_v16 [2];
  char acStack_b6 [18];
  char acStack_a4 [18];
  char acStack_92 [18];
  char acStack_80 [28];
  char acStack_64 [24];
  int iStack_4c;
  unsigned int uStack_40;
  int uStack_38;
  int iStack_34;
  int iStack_2c;
  unsigned int uStack_28;
  
  *(unsigned int *)(param_1 + 4) = 0xe;
  *(unsigned int *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0x860) != 8) {
    if (*(char *)(param_1 + 0x14) == '\x01') {
      *(unsigned int *)(param_1 + 0x860) = 7;
    }
    else {
      FUN_002303c8();
    }
    FUN_0023046c(param_1,1);
    return;
  }
  uStack_28 = 1;
  temp_v13 = 0x30d;
  *(unsigned short *)(param_1 + 0x9ca4) = 0;
  temp_v4 = *(int *)(param_1 + 0x864);
  temp_v12 = 0x12d;
  temp_v14 = 0x1a5;
  iStack_2c = param_1;
  if (temp_v4 != 0) {
    if (temp_v4 != 1) {
      if (temp_v4 != 2) {
        if (temp_v4 == 3) {
          temp_v13 = 1;
          do {
            temp_v4 = FUN_0028ec74(temp_v13);
            if (temp_v4 != 0) {
              uStack_38 = 0;
              FUN_00230680(param_1 + 0x8ca4,temp_v13 & 0xffff,0);
            }
            temp_v13 = temp_v13 + 1;
          } while ((int)temp_v13 < 0x3d);
        }
      }
      else {
        do {
          temp_v4 = FUN_0028ec74(temp_v12);
          if (temp_v4 != 0) {
            uStack_38 = 0;
            FUN_00230680(param_1 + 0x8ca4,temp_v12 & 0xffff,0);
          }
          temp_v12 = temp_v12 + 1;
        } while ((int)temp_v12 < 0x1a5);
        do {
          temp_v4 = FUN_0028ec74(temp_v14);
          if (temp_v4 != 0) {
            uStack_38 = 0;
            FUN_00230680(param_1 + 0x8ca4,temp_v14 & 0xffff,0);
          }
          temp_v14 = temp_v14 + 1;
        } while ((int)temp_v14 < 0x21d);
        temp_v13 = 0x21d;
        do {
          temp_v4 = FUN_0028ec74(temp_v13);
          if (temp_v4 != 0) {
            uStack_38 = 0;
            FUN_00230680(param_1 + 0x8ca4,temp_v13 & 0xffff,0);
          }
          temp_v13 = temp_v13 + 1;
        } while ((int)temp_v13 < 0x295);
        temp_v13 = 0x295;
        do {
          temp_v4 = FUN_0028ec74(temp_v13);
          if (temp_v4 != 0) {
            uStack_38 = 0;
            FUN_00230680(param_1 + 0x8ca4,temp_v13 & 0xffff,0);
          }
          temp_v13 = temp_v13 + 1;
        } while ((int)temp_v13 < 0x30d);
      }
    }
    else {
      temp_v12 = 0x3d;
      do {
        temp_v4 = FUN_0028ec74(temp_v12);
        if (temp_v4 != 0) {
          uStack_38 = 0;
          FUN_00230680(param_1 + 0x8ca4,temp_v12 & 0xffff,0);
        }
        temp_v12 = temp_v12 + 1;
      } while ((int)temp_v12 < 0xb5);
      temp_v12 = 0xb5;
      do {
        temp_v4 = FUN_0028ec74(temp_v12);
        if (temp_v4 != 0) {
          uStack_38 = 0;
          FUN_00230680(param_1 + 0x8ca4,temp_v12 & 0xffff,0);
        }
        temp_v12 = temp_v12 + 1;
      } while ((int)temp_v12 < 0x12d);
      do {
        temp_v4 = FUN_0028ec74(temp_v13);
        if (temp_v4 != 0) {
          uStack_38 = 0;
          FUN_00230680(param_1 + 0x8ca4,temp_v13 & 0xffff,0);
        }
        temp_v13 = temp_v13 + 1;
      } while ((int)temp_v13 < 0x33f);
    }
  }
  else {
    iStack_34 = param_1 + 0x8ca4;
    temp_v9 = 1;
    do {
      temp_v4 = FUN_0028ec74(temp_v9);
      if (temp_v4 != 0) {
        uStack_38 = 0;
        FUN_00230680(iStack_34,temp_v9 & 0xffff,0);
      }
      temp_v9 = temp_v9 + 1;
    } while ((int)temp_v9 < 0x3d);
    iStack_34 = param_1 + 0x8ca4;
    temp_v9 = 0x3d;
    do {
      temp_v4 = FUN_0028ec74(temp_v9);
      if (temp_v4 != 0) {
        uStack_38 = 0;
        FUN_00230680(iStack_34,temp_v9 & 0xffff,0);
      }
      temp_v9 = temp_v9 + 1;
    } while ((int)temp_v9 < 0xb5);
    iStack_34 = param_1 + 0x8ca4;
    temp_v9 = 0xb5;
    do {
      temp_v4 = FUN_0028ec74(temp_v9);
      if (temp_v4 != 0) {
        uStack_38 = 0;
        FUN_00230680(iStack_34,temp_v9 & 0xffff,0);
      }
      temp_v9 = temp_v9 + 1;
    } while ((int)temp_v9 < 0x12d);
    do {
      temp_v4 = FUN_0028ec74(temp_v13);
      if (temp_v4 != 0) {
        uStack_38 = 0;
        FUN_00230680(param_1 + 0x8ca4,temp_v13 & 0xffff,0);
      }
      temp_v13 = temp_v13 + 1;
    } while ((int)temp_v13 < 0x33f);
    do {
      temp_v4 = FUN_0028ec74(temp_v12);
      if (temp_v4 != 0) {
        uStack_38 = 0;
        FUN_00230680(param_1 + 0x8ca4,temp_v12 & 0xffff,0);
      }
      temp_v12 = temp_v12 + 1;
    } while ((int)temp_v12 < 0x1a5);
    do {
      temp_v4 = FUN_0028ec74(temp_v14);
      if (temp_v4 != 0) {
        uStack_38 = 0;
        FUN_00230680(param_1 + 0x8ca4,temp_v14 & 0xffff,0);
      }
      temp_v14 = temp_v14 + 1;
    } while ((int)temp_v14 < 0x21d);
    temp_v13 = 0x21d;
    do {
      temp_v4 = FUN_0028ec74(temp_v13);
      if (temp_v4 != 0) {
        uStack_38 = 0;
        FUN_00230680(param_1 + 0x8ca4,temp_v13 & 0xffff,0);
      }
      temp_v13 = temp_v13 + 1;
    } while ((int)temp_v13 < 0x295);
    temp_v13 = 0x295;
    do {
      temp_v4 = FUN_0028ec74(temp_v13);
      if (temp_v4 != 0) {
        uStack_38 = 0;
        FUN_00230680(param_1 + 0x8ca4,temp_v13 & 0xffff,0);
      }
      temp_v13 = temp_v13 + 1;
    } while ((int)temp_v13 < 0x30d);
  }
  uStack_38 = 1;
  iStack_34 = 1;
  FUN_002338c4(param_1 + 0xc20,10,*(unsigned short *)(param_1 + 0x9ca4),0);
  *(unsigned char *)(param_1 + 0xc2d) = 1;
  FUN_002305c8(param_1 + 0xc20,0);
  FUN_0023046c(param_1,uStack_28);
  temp_v5 = *(int *)(param_1 + 0x860);
  temp_v6 = FUN_002337a0(param_1 + temp_v5 * 0x74 + 0x880);
  temp_v4 = DAT_0043da2c;
  uStack_28 = (unsigned int)*(unsigned short *)(param_1 + temp_v5 * 0x1002 + 0xc94 + temp_v6 * 4);
  iStack_4c = DAT_0043da2c;
  if (uStack_28 == 0) {
    *(unsigned char *)(DAT_0043da2c + 0x4cb) = 0;
    return;
  }
  *(unsigned char *)(DAT_0043da2c + 0x55c) = 1;
  *(unsigned char *)(temp_v4 + 0x4cb) = 1;
  uStack_40 = FUN_003951ec();
  temp_v13 = uStack_28;
  temp_v7 = FUN_002ae650(uStack_28);
  switch(temp_v7) {
  default:
    uStack_128 = 3;
    uStack_124 = uStack_40;
    uStack_120 = uStack_28;
    FUN_00296d8c(*(unsigned int *)(iStack_4c + 0x558),3,0xffffffff,0);
    return;
  case 1:
    temp_v12 = temp_v13;
    FUN_002b4854();
    if (*(short *)(temp_v12 + 0x76) != 0) {
      temp_v4 = FUN_00295f90();
      FUN_0029f088(0x24,temp_v4,0xffffffff,0);
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v12 + 0x76) + temp_v4;
      if (temp_v4 >= 10000) {
        temp_v4 = 9999;
      }
      FUN_0029f088(0x25,temp_v4,0xffffffff,0);
    }
    else {
      temp_v14 = (unsigned int)*(unsigned short *)(temp_v12 + 0x62);
      if (temp_v14 != 0) {
        FUN_002ae3f0();
        FUN_0024beac(&uStack_128,(*(unsigned int *)(temp_v14 + 0x28) & 0x1ff) >> 5);
      }
      else if ((*(unsigned char *)(temp_v12 + 0x6a) & 0x80) != 0) {
        FUN_002be7fc(&uStack_128,&LAB_002928c8);
      }
      else {
        FUN_002be7fc(&uStack_128,&LAB_002928e0);
      }
      FUN_00295904(0x24,&uStack_128);
      temp_v7 = FUN_002b9100(temp_v13);
      FUN_0029f088(0x25,temp_v7,0xffffffff,0);
    }
    uStack_128 = 3;
    uStack_124 = uStack_40;
    uStack_120 = uStack_28;
    FUN_00296d8c(*(unsigned int *)(iStack_4c + 0x558),3,0xffffffff,0);
    return;
  case 2:
  case 3:
  case 8:
    temp_v4 = FUN_002b47cc(temp_v13);
    FUN_0029f088(0x24,*(unsigned int *)(temp_v4 + 0x54) & 0x3ff,0xffffffff,0);
    temp_v0 = *(unsigned char *)(temp_v4 + 0x58);
    if ((temp_v0 & 0xf) == temp_v0 >> 4) {
      FUN_0029f088(0x25,temp_v0 & 0xf,0xffffffff,0);
    }
    else {
      FUN_00290a68(temp_v15,temp_v0 & 0xf);
      FUN_00290a68(temp_v16,*(unsigned char *)(temp_v4 + 0x58) >> 4);
      FUN_002be7fc(&uStack_128,&LAB_002928f0,temp_v15,temp_v16);
      FUN_00295904(0x25,&uStack_128);
    }
    FUN_0024bfbc(&uStack_128,*(unsigned int *)(temp_v4 + 0x54) >> 0x14);
    FUN_00295904(0x26,&uStack_128);
    FUN_0024beac(&uStack_128,*(unsigned char *)(temp_v4 + 0x59));
    FUN_00295904(0x27,&uStack_128);
    if (*(char *)(temp_v4 + 0x5b) == '\0') {
      FUN_002be7fc(&uStack_128,&LAB_002928f8);
    }
    if (*(char *)(temp_v4 + 0x5b) == '\x01') {
      FUN_002be7fc(&uStack_128,&LAB_00292904);
    }
    if (*(char *)(temp_v4 + 0x5b) == '\x05') {
      FUN_002be7fc(&uStack_128,&LAB_0029290c);
    }
    if (*(char *)(temp_v4 + 0x5b) == '\x06') {
      FUN_002be7fc(&uStack_128,&LAB_0029291c);
    }
    if (*(char *)(temp_v4 + 0x5b) == '\a') {
      FUN_002be7fc(&uStack_128,&LAB_00292928);
    }
    if (*(char *)(temp_v4 + 0x5b) == '\b') {
      FUN_002be7fc(&uStack_128,&LAB_00292934);
    }
    if (*(char *)(temp_v4 + 0x5b) == '\t') {
      FUN_002be7fc(&uStack_128,&LAB_00292940);
    }
    temp_v7 = 0x28;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    temp_v4 = FUN_002b47cc(temp_v13);
    temp_v5 = 0;
    do {
      temp_v11 = (int)*(char *)(temp_v4 + temp_v5 + 0x61);
      temp_v6 = temp_v11;
      if (temp_v11 < 0) {
        temp_v6 = -temp_v11;
      }
      FUN_00290a68(&uStack_38,temp_v6);
      if (temp_v11 != 0) {
        if (temp_v11 >= 1) {
          FUN_002be7fc(&uStack_128,&LAB_0029294c);
        }
        else {
          FUN_002be7fc(&uStack_128,&LAB_0029295c);
        }
      }
      else {
        FUN_002be7fc(&uStack_128,&LAB_00292954);
      }
      FUN_00295904(temp_v5 + 0x24,&uStack_128);
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 5);
    FUN_002c4b30(acStack_c8,0x5c);
    temp_v5 = 0;
    acStack_64[0] = '\0';
    acStack_64[1] = '\0';
    acStack_64[2] = '\0';
    acStack_64[3] = '\0';
    acStack_64[4] = '\0';
    acStack_64[5] = '\0';
    acStack_64[6] = '\0';
    acStack_64[7] = '\0';
    do {
      temp_v6 = temp_v4 + temp_v5 * 2;
      temp_v1 = (char)temp_v5;
      if (*(short *)(temp_v6 + 0x74) >> 10 == 4) {
        temp_v2 = acStack_64[0] + '\x01';
        acStack_c8[acStack_64[0]] = temp_v1;
        acStack_64[0] = temp_v2;
      }
      if (*(short *)(temp_v6 + 0x74) >> 10 == 3) {
        temp_v2 = acStack_64[1] + '\x01';
        acStack_b6[acStack_64[1]] = temp_v1;
        acStack_64[1] = temp_v2;
      }
      if (*(short *)(temp_v6 + 0x74) >> 10 == 1) {
        temp_v2 = acStack_64[2] + '\x01';
        acStack_a4[acStack_64[2]] = temp_v1;
        acStack_64[2] = temp_v2;
      }
      if (*(short *)(temp_v6 + 0x74) >> 10 == 5) {
        temp_v2 = acStack_64[3] + '\x01';
        acStack_92[acStack_64[3]] = temp_v1;
        acStack_64[3] = temp_v2;
      }
      if (*(short *)(temp_v6 + 0x74) >> 10 == 2) {
        temp_v2 = acStack_64[4] + '\x01';
        acStack_80[acStack_64[4]] = temp_v1;
        acStack_64[4] = temp_v2;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 0x12);
    temp_v11 = 0;
    temp_v5 = 0;
    temp_v6 = 0;
    do {
      if ('\0' < acStack_64[temp_v6]) {
        if (0 < temp_v11) {
          temp_v10 = (int)&uStack_128 + temp_v5;
          FUN_002be7fc(temp_v10,&LAB_00292964);
          temp_v5 = temp_v5 + temp_v10;
        }
        temp_v10 = 0;
        if ('\0' < acStack_64[temp_v6]) {
          temp_v3 = temp_v6 * 0x12 - 200;
          do {
            temp_v8 = FUN_0024bfbc((int)&uStack_128 + temp_v5,(int)acStack_c8[temp_v10 + temp_v3 + 200]);
            temp_v5 = temp_v5 + temp_v8;
            if ((temp_v10 < 0x11) && ('\0' < acStack_c8[temp_v10 + temp_v3 + 0xc9])) {
              temp_v8 = (int)&uStack_128 + temp_v5;
              FUN_002be7fc(temp_v8,&LAB_00292968);
              temp_v5 = temp_v5 + temp_v8;
            }
            temp_v10 = temp_v10 + 1;
          } while (temp_v10 < acStack_64[temp_v6]);
        }
        if (temp_v6 != 0) {
          if (temp_v6 != 1) {
            if (temp_v6 != 2) {
              if (temp_v6 != 3) {
                if (temp_v6 == 4) {
                  temp_v10 = (int)&uStack_128 + temp_v5;
                  FUN_002be7fc(temp_v10,&LAB_00292adc);
                  temp_v5 = temp_v5 + temp_v10;
                }
              }
              else {
                temp_v10 = (int)&uStack_128 + temp_v5;
                FUN_002be7fc(temp_v10,&LAB_00292acc);
                temp_v5 = temp_v5 + temp_v10;
              }
            }
            else {
              temp_v10 = (int)&uStack_128 + temp_v5;
              FUN_002be7fc(temp_v10,&LAB_00292ac0);
              temp_v5 = temp_v5 + temp_v10;
            }
          }
          else {
            temp_v10 = (int)&uStack_128 + temp_v5;
            FUN_002be7fc(temp_v10,&LAB_00292ab0);
            temp_v5 = temp_v5 + temp_v10;
          }
        }
        else {
          temp_v10 = (int)&uStack_128 + temp_v5;
          FUN_002be7fc(temp_v10,&LAB_00292aa0);
          temp_v5 = temp_v5 + temp_v10;
        }
        temp_v11 = temp_v11 + 1;
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 5);
    FUN_00295904(0x29,&uStack_128);
    temp_v13 = (unsigned int)*(unsigned short *)(temp_v4 + 0x6a);
    if (temp_v13 != 0) {
      FUN_002bcff0();
      FUN_002be7fc(&uStack_128,&LAB_002928f4,temp_v13);
    }
    else {
      FUN_002be7fc(&uStack_128,&LAB_002928f8);
    }
    temp_v7 = 0x2a;
  }
  FUN_00295904(temp_v7,&uStack_128);
  uStack_128 = 3;
  uStack_124 = uStack_40;
  uStack_120 = uStack_28;
  FUN_00296d8c(*(unsigned int *)(iStack_4c + 0x558),3,0xffffffff,0);
  return;
}
