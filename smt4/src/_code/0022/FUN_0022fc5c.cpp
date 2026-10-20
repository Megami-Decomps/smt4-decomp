/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022fc5c` (_code @ 0x22fc5c, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024bda8(...);
int FUN_002907c4(...);
int FUN_002b45e8(void);
int FUN_002c4938(...);

int FUN_00230234(void);
int FUN_002302d8(...);
int FUN_00230434(...);
int FUN_002304ec(...);
int FUN_00233730(...);
int FUN_0024bc98(...);
int FUN_00295660(...);
int FUN_00296ae8(...);
int FUN_0029ede8(...);
int FUN_002ae164(void);
int FUN_002b4670(void);
int FUN_002be624(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_00292624; /* 0x292624 */
extern unsigned char LAB_0029263c; /* 0x29263c */
extern unsigned char LAB_0029264c; /* 0x29264c */
extern unsigned char LAB_00292650; /* 0x292650 */
extern unsigned char LAB_00292654; /* 0x292654 */
extern unsigned char LAB_00292660; /* 0x292660 */
extern unsigned char LAB_00292668; /* 0x292668 */
extern unsigned char LAB_00292678; /* 0x292678 */
extern unsigned char LAB_00292684; /* 0x292684 */
extern unsigned char LAB_00292690; /* 0x292690 */
extern unsigned char LAB_0029269c; /* 0x29269c */
extern unsigned char LAB_002926a8; /* 0x2926a8 */
extern unsigned char LAB_002926b0; /* 0x2926b0 */
extern unsigned char LAB_002926b8; /* 0x2926b8 */
extern unsigned char LAB_002926c0; /* 0x2926c0 */
extern unsigned char LAB_002926c4; /* 0x2926c4 */
extern unsigned char LAB_002927fc; /* 0x2927fc */
extern unsigned char LAB_0029280c; /* 0x29280c */
extern unsigned char LAB_0029281c; /* 0x29281c */
extern unsigned char LAB_00292828; /* 0x292828 */
extern unsigned char LAB_00292838; /* 0x292838 */
extern int DAT_0043da2c; /* 0x43da2c */

/* Supplied declaration required: FUN_00230234. */
/* Supplied declaration required: FUN_002302d8. */
/* Supplied declaration required: FUN_00230434. */
/* Supplied declaration required: FUN_002304ec. */
extern int FUN_0023360c(int);
/* Supplied declaration required: FUN_00233730. */
/* Supplied declaration required: FUN_0024bc98. */
/* Supplied declaration required: FUN_0024bda8. */
extern int FUN_0028e9d0(unsigned int);
/* Supplied declaration required: FUN_002907c4. */
/* Supplied declaration required: FUN_00295660. */
extern int FUN_00295cec(void);
/* Supplied declaration required: FUN_00296ae8. */
/* Supplied declaration required: FUN_0029ede8. */
/* Supplied declaration required: FUN_002ae164. */
extern unsigned int FUN_002ae3c4(unsigned int);
/* Supplied declaration required: FUN_002b45e8. */
/* Supplied declaration required: FUN_002b4670. */
extern unsigned int FUN_002b8dc0(unsigned int);
extern unsigned int FUN_002bce00(void);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002c4938. */
extern unsigned int FUN_00394fd0(void);


void FUN_0022fc5c(int param_1)

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
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  int uStack_128;
  unsigned int uStack_124;
  unsigned int uStack_120;
  char acStack_c8 [8];
  unsigned char temp_v14 [8];
  unsigned char temp_v15 [2];
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
      FUN_00230234();
    }
    FUN_002302d8(param_1,1);
    return;
  }
  uStack_28 = 1;
  temp_v12 = 0x30d;
  *(unsigned short *)(param_1 + 0x9ca4) = 0;
  temp_v4 = *(int *)(param_1 + 0x864);
  temp_v11 = 0x12d;
  temp_v13 = 0x1a5;
  iStack_2c = param_1;
  if (temp_v4 != 0) {
    if (temp_v4 != 1) {
      if (temp_v4 != 2) {
        if (temp_v4 == 3) {
          temp_v12 = 1;
          do {
            temp_v4 = FUN_0028e9d0(temp_v12);
            if (temp_v4 != 0) {
              uStack_38 = 0;
              FUN_002304ec(param_1 + 0x8ca4,temp_v12 & 0xffff,0);
            }
            temp_v12 = temp_v12 + 1;
          } while ((int)temp_v12 < 0x3d);
        }
      }
      else {
        do {
          temp_v4 = FUN_0028e9d0(temp_v11);
          if (temp_v4 != 0) {
            uStack_38 = 0;
            FUN_002304ec(param_1 + 0x8ca4,temp_v11 & 0xffff,0);
          }
          temp_v11 = temp_v11 + 1;
        } while ((int)temp_v11 < 0x1a5);
        do {
          temp_v4 = FUN_0028e9d0(temp_v13);
          if (temp_v4 != 0) {
            uStack_38 = 0;
            FUN_002304ec(param_1 + 0x8ca4,temp_v13 & 0xffff,0);
          }
          temp_v13 = temp_v13 + 1;
        } while ((int)temp_v13 < 0x21d);
        temp_v12 = 0x21d;
        do {
          temp_v4 = FUN_0028e9d0(temp_v12);
          if (temp_v4 != 0) {
            uStack_38 = 0;
            FUN_002304ec(param_1 + 0x8ca4,temp_v12 & 0xffff,0);
          }
          temp_v12 = temp_v12 + 1;
        } while ((int)temp_v12 < 0x295);
        temp_v12 = 0x295;
        do {
          temp_v4 = FUN_0028e9d0(temp_v12);
          if (temp_v4 != 0) {
            uStack_38 = 0;
            FUN_002304ec(param_1 + 0x8ca4,temp_v12 & 0xffff,0);
          }
          temp_v12 = temp_v12 + 1;
        } while ((int)temp_v12 < 0x30d);
      }
    }
    else {
      temp_v11 = 0x3d;
      do {
        temp_v4 = FUN_0028e9d0(temp_v11);
        if (temp_v4 != 0) {
          uStack_38 = 0;
          FUN_002304ec(param_1 + 0x8ca4,temp_v11 & 0xffff,0);
        }
        temp_v11 = temp_v11 + 1;
      } while ((int)temp_v11 < 0xb5);
      temp_v11 = 0xb5;
      do {
        temp_v4 = FUN_0028e9d0(temp_v11);
        if (temp_v4 != 0) {
          uStack_38 = 0;
          FUN_002304ec(param_1 + 0x8ca4,temp_v11 & 0xffff,0);
        }
        temp_v11 = temp_v11 + 1;
      } while ((int)temp_v11 < 0x12d);
      do {
        temp_v4 = FUN_0028e9d0(temp_v12);
        if (temp_v4 != 0) {
          uStack_38 = 0;
          FUN_002304ec(param_1 + 0x8ca4,temp_v12 & 0xffff,0);
        }
        temp_v12 = temp_v12 + 1;
      } while ((int)temp_v12 < 0x33f);
    }
  }
  else {
    iStack_34 = param_1 + 0x8ca4;
    temp_v9 = 1;
    do {
      temp_v4 = FUN_0028e9d0(temp_v9);
      if (temp_v4 != 0) {
        uStack_38 = 0;
        FUN_002304ec(iStack_34,temp_v9 & 0xffff,0);
      }
      temp_v9 = temp_v9 + 1;
    } while ((int)temp_v9 < 0x3d);
    iStack_34 = param_1 + 0x8ca4;
    temp_v9 = 0x3d;
    do {
      temp_v4 = FUN_0028e9d0(temp_v9);
      if (temp_v4 != 0) {
        uStack_38 = 0;
        FUN_002304ec(iStack_34,temp_v9 & 0xffff,0);
      }
      temp_v9 = temp_v9 + 1;
    } while ((int)temp_v9 < 0xb5);
    iStack_34 = param_1 + 0x8ca4;
    temp_v9 = 0xb5;
    do {
      temp_v4 = FUN_0028e9d0(temp_v9);
      if (temp_v4 != 0) {
        uStack_38 = 0;
        FUN_002304ec(iStack_34,temp_v9 & 0xffff,0);
      }
      temp_v9 = temp_v9 + 1;
    } while ((int)temp_v9 < 0x12d);
    do {
      temp_v4 = FUN_0028e9d0(temp_v12);
      if (temp_v4 != 0) {
        uStack_38 = 0;
        FUN_002304ec(param_1 + 0x8ca4,temp_v12 & 0xffff,0);
      }
      temp_v12 = temp_v12 + 1;
    } while ((int)temp_v12 < 0x33f);
    do {
      temp_v4 = FUN_0028e9d0(temp_v11);
      if (temp_v4 != 0) {
        uStack_38 = 0;
        FUN_002304ec(param_1 + 0x8ca4,temp_v11 & 0xffff,0);
      }
      temp_v11 = temp_v11 + 1;
    } while ((int)temp_v11 < 0x1a5);
    do {
      temp_v4 = FUN_0028e9d0(temp_v13);
      if (temp_v4 != 0) {
        uStack_38 = 0;
        FUN_002304ec(param_1 + 0x8ca4,temp_v13 & 0xffff,0);
      }
      temp_v13 = temp_v13 + 1;
    } while ((int)temp_v13 < 0x21d);
    temp_v12 = 0x21d;
    do {
      temp_v4 = FUN_0028e9d0(temp_v12);
      if (temp_v4 != 0) {
        uStack_38 = 0;
        FUN_002304ec(param_1 + 0x8ca4,temp_v12 & 0xffff,0);
      }
      temp_v12 = temp_v12 + 1;
    } while ((int)temp_v12 < 0x295);
    temp_v12 = 0x295;
    do {
      temp_v4 = FUN_0028e9d0(temp_v12);
      if (temp_v4 != 0) {
        uStack_38 = 0;
        FUN_002304ec(param_1 + 0x8ca4,temp_v12 & 0xffff,0);
      }
      temp_v12 = temp_v12 + 1;
    } while ((int)temp_v12 < 0x30d);
  }
  uStack_38 = 1;
  iStack_34 = 1;
  FUN_00233730(param_1 + 0xc20,10,*(unsigned short *)(param_1 + 0x9ca4),0);
  *(unsigned char *)(param_1 + 0xc2d) = 1;
  FUN_00230434(param_1 + 0xc20,0);
  FUN_002302d8(param_1,uStack_28);
  temp_v5 = *(int *)(param_1 + 0x860);
  temp_v6 = FUN_0023360c(param_1 + temp_v5 * 0x74 + 0x880);
  temp_v4 = DAT_0043da2c;
  uStack_28 = (unsigned int)*(unsigned short *)(param_1 + temp_v5 * 0x1002 + 0xc94 + temp_v6 * 4);
  iStack_4c = DAT_0043da2c;
  if (uStack_28 == 0) {
    *(unsigned char *)(DAT_0043da2c + 0x4cb) = 0;
    return;
  }
  *(unsigned char *)(DAT_0043da2c + 0x55c) = 1;
  *(unsigned char *)(temp_v4 + 0x4cb) = 1;
  uStack_40 = FUN_00394fd0();
  temp_v12 = uStack_28;
  temp_v7 = FUN_002ae3c4(uStack_28);
  switch(temp_v7) {
  default:
    uStack_128 = 3;
    uStack_124 = uStack_40;
    uStack_120 = uStack_28;
    FUN_00296ae8(*(unsigned int *)(iStack_4c + 0x558),3,0xffffffff,0);
    return;
  case 1:
    temp_v11 = temp_v12;
    FUN_002b4670();
    if (*(short *)(temp_v11 + 0x76) != 0) {
      temp_v4 = FUN_00295cec();
      FUN_0029ede8(0x24,temp_v4,0xffffffff,0);
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v11 + 0x76) + temp_v4;
      if (temp_v4 >= 10000) {
        temp_v4 = 9999;
      }
      FUN_0029ede8(0x25,temp_v4,0xffffffff,0);
    }
    else {
      temp_v13 = (unsigned int)*(unsigned short *)(temp_v11 + 0x62);
      if (temp_v13 != 0) {
        FUN_002ae164();
        FUN_0024bc98(&uStack_128,(*(unsigned int *)(temp_v13 + 0x28) & 0x1ff) >> 5);
      }
      else if ((*(unsigned char *)(temp_v11 + 0x6a) & 0x80) != 0) {
        FUN_002be624(&uStack_128,&LAB_00292624);
      }
      else {
        FUN_002be624(&uStack_128,&LAB_0029263c);
      }
      FUN_00295660(0x24,&uStack_128);
      temp_v7 = FUN_002b8dc0(temp_v12);
      FUN_0029ede8(0x25,temp_v7,0xffffffff,0);
    }
    uStack_128 = 3;
    uStack_124 = uStack_40;
    uStack_120 = uStack_28;
    FUN_00296ae8(*(unsigned int *)(iStack_4c + 0x558),3,0xffffffff,0);
    return;
  case 2:
  case 3:
  case 8:
    FUN_002b45e8();
    FUN_0029ede8(0x24,*(unsigned int *)(temp_v12 + 0x54) & 0x3ff,0xffffffff,0);
    temp_v0 = *(unsigned char *)(temp_v12 + 0x58);
    if ((temp_v0 & 0xf) == temp_v0 >> 4) {
      FUN_0029ede8(0x25,temp_v0 & 0xf,0xffffffff,0);
    }
    else {
      FUN_002907c4(temp_v14,temp_v0 & 0xf);
      FUN_002907c4(temp_v15,*(unsigned char *)(temp_v12 + 0x58) >> 4);
      FUN_002be624(&uStack_128,&LAB_0029264c,temp_v14,temp_v15);
      FUN_00295660(0x25,&uStack_128);
    }
    FUN_0024bda8(&uStack_128,*(unsigned int *)(temp_v12 + 0x54) >> 0x14);
    FUN_00295660(0x26,&uStack_128);
    FUN_0024bc98(&uStack_128,*(unsigned char *)(temp_v12 + 0x59));
    FUN_00295660(0x27,&uStack_128);
    if (*(char *)(temp_v12 + 0x5b) == '\0') {
      FUN_002be624(&uStack_128,&LAB_00292654);
    }
    if (*(char *)(temp_v12 + 0x5b) == '\x01') {
      FUN_002be624(&uStack_128,&LAB_00292660);
    }
    if (*(char *)(temp_v12 + 0x5b) == '\x05') {
      FUN_002be624(&uStack_128,&LAB_00292668);
    }
    if (*(char *)(temp_v12 + 0x5b) == '\x06') {
      FUN_002be624(&uStack_128,&LAB_00292678);
    }
    if (*(char *)(temp_v12 + 0x5b) == '\a') {
      FUN_002be624(&uStack_128,&LAB_00292684);
    }
    if (*(char *)(temp_v12 + 0x5b) == '\b') {
      FUN_002be624(&uStack_128,&LAB_00292690);
    }
    if (*(char *)(temp_v12 + 0x5b) == '\t') {
      FUN_002be624(&uStack_128,&LAB_0029269c);
    }
    temp_v7 = 0x28;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    FUN_002b45e8();
    temp_v4 = 0;
    do {
      temp_v6 = (int)*(char *)(temp_v12 + temp_v4 + 0x61);
      temp_v5 = temp_v6;
      if (temp_v6 < 0) {
        temp_v5 = -temp_v6;
      }
      FUN_002907c4(&uStack_38,temp_v5);
      if (temp_v6 != 0) {
        if (temp_v6 >= 1) {
          FUN_002be624(&uStack_128,&LAB_002926a8);
        }
        else {
          FUN_002be624(&uStack_128,&LAB_002926b8);
        }
      }
      else {
        FUN_002be624(&uStack_128,&LAB_002926b0);
      }
      FUN_00295660(temp_v4 + 0x24,&uStack_128);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 5);
    FUN_002c4938(acStack_c8,0x5c);
    temp_v4 = 0;
    acStack_64[0] = '\0';
    acStack_64[1] = '\0';
    acStack_64[2] = '\0';
    acStack_64[3] = '\0';
    acStack_64[4] = '\0';
    acStack_64[5] = '\0';
    acStack_64[6] = '\0';
    acStack_64[7] = '\0';
    do {
      temp_v5 = temp_v12 + temp_v4 * 2;
      temp_v1 = (char)temp_v4;
      if (*(short *)(temp_v5 + 0x74) >> 10 == 4) {
        temp_v2 = acStack_64[0] + '\x01';
        acStack_c8[acStack_64[0]] = temp_v1;
        acStack_64[0] = temp_v2;
      }
      if (*(short *)(temp_v5 + 0x74) >> 10 == 3) {
        temp_v2 = acStack_64[1] + '\x01';
        acStack_b6[acStack_64[1]] = temp_v1;
        acStack_64[1] = temp_v2;
      }
      if (*(short *)(temp_v5 + 0x74) >> 10 == 1) {
        temp_v2 = acStack_64[2] + '\x01';
        acStack_a4[acStack_64[2]] = temp_v1;
        acStack_64[2] = temp_v2;
      }
      if (*(short *)(temp_v5 + 0x74) >> 10 == 5) {
        temp_v2 = acStack_64[3] + '\x01';
        acStack_92[acStack_64[3]] = temp_v1;
        acStack_64[3] = temp_v2;
      }
      if (*(short *)(temp_v5 + 0x74) >> 10 == 2) {
        temp_v2 = acStack_64[4] + '\x01';
        acStack_80[acStack_64[4]] = temp_v1;
        acStack_64[4] = temp_v2;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x12);
    temp_v6 = 0;
    temp_v4 = 0;
    temp_v5 = 0;
    do {
      if ('\0' < acStack_64[temp_v5]) {
        if (0 < temp_v6) {
          temp_v10 = (int)&uStack_128 + temp_v4;
          FUN_002be624(temp_v10,&LAB_002926c0);
          temp_v4 = temp_v4 + temp_v10;
        }
        temp_v10 = 0;
        if ('\0' < acStack_64[temp_v5]) {
          temp_v3 = temp_v5 * 0x12 - 200;
          do {
            temp_v8 = FUN_0024bda8((int)&uStack_128 + temp_v4,(int)acStack_c8[temp_v10 + temp_v3 + 200]);
            temp_v4 = temp_v4 + temp_v8;
            if ((temp_v10 < 0x11) && ('\0' < acStack_c8[temp_v10 + temp_v3 + 0xc9])) {
              temp_v8 = (int)&uStack_128 + temp_v4;
              FUN_002be624(temp_v8,&LAB_002926c4);
              temp_v4 = temp_v4 + temp_v8;
            }
            temp_v10 = temp_v10 + 1;
          } while (temp_v10 < acStack_64[temp_v5]);
        }
        if (temp_v5 != 0) {
          if (temp_v5 != 1) {
            if (temp_v5 != 2) {
              if (temp_v5 != 3) {
                if (temp_v5 == 4) {
                  temp_v10 = (int)&uStack_128 + temp_v4;
                  FUN_002be624(temp_v10,&LAB_00292838);
                  temp_v4 = temp_v4 + temp_v10;
                }
              }
              else {
                temp_v10 = (int)&uStack_128 + temp_v4;
                FUN_002be624(temp_v10,&LAB_00292828);
                temp_v4 = temp_v4 + temp_v10;
              }
            }
            else {
              temp_v10 = (int)&uStack_128 + temp_v4;
              FUN_002be624(temp_v10,&LAB_0029281c);
              temp_v4 = temp_v4 + temp_v10;
            }
          }
          else {
            temp_v10 = (int)&uStack_128 + temp_v4;
            FUN_002be624(temp_v10,&LAB_0029280c);
            temp_v4 = temp_v4 + temp_v10;
          }
        }
        else {
          temp_v10 = (int)&uStack_128 + temp_v4;
          FUN_002be624(temp_v10,&LAB_002927fc);
          temp_v4 = temp_v4 + temp_v10;
        }
        temp_v6 = temp_v6 + 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < 5);
    FUN_00295660(0x29,&uStack_128);
    if (*(short *)(temp_v12 + 0x6a) != 0) {
      temp_v7 = FUN_002bce00();
      FUN_002be624(&uStack_128,&LAB_00292650,temp_v7);
    }
    else {
      FUN_002be624(&uStack_128,&LAB_00292654);
    }
    temp_v7 = 0x2a;
  }
  FUN_00295660(temp_v7,&uStack_128);
  uStack_128 = 3;
  uStack_124 = uStack_40;
  uStack_120 = uStack_28;
  FUN_00296ae8(*(unsigned int *)(iStack_4c + 0x558),3,0xffffffff,0);
  return;
}

} /* extern "C" */
