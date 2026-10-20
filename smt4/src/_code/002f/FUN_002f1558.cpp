/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f1558` (_code @ 0x2f1558, 0x1068 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00244ee0(...);
int FUN_0025cc34(void);
int FUN_0025cc8c(void);
int FUN_002b6db0(...);
int FUN_002b6dd8(...);
int FUN_002b9024(void);

int FUN_002939f4(void);
int FUN_002b06c4(void);
int FUN_002b6758(...);
int FUN_002b6940(...);
int FUN_002b6c34(...);
int FUN_002bdf94(...);
int FUN_002be370(...);
int FUN_002be5a4(...);
int FUN_002be624(...);
int FUN_002be650(...);
int FUN_002bf288(...);
int FUN_002bf380(...);
int FUN_002bf4f8(...);
int FUN_002bf538(void);
int VectorSignedToFloat(...);

typedef int romwright_code(...);
/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_1_stack;

extern unsigned char LAB_002f1fe8; /* 0x2f1fe8 */
extern unsigned char LAB_002f1ff4; /* 0x2f1ff4 */
extern unsigned char LAB_002f1ff8; /* 0x2f1ff8 */
extern unsigned char LAB_002f2000; /* 0x2f2000 */
extern unsigned char LAB_002f2470; /* 0x2f2470 */
extern unsigned char LAB_002f2478; /* 0x2f2478 */
extern unsigned char LAB_002f25c0; /* 0x2f25c0 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00244ee0. */
extern unsigned int FUN_0025cbc0(unsigned int);
/* Supplied declaration required: FUN_0025cc34. */
extern int FUN_0025cc54(void);
/* Supplied declaration required: FUN_0025cc8c. */
extern short FUN_0028d24c(void);
extern short FUN_0028d2e8(unsigned int, unsigned int);
extern unsigned int FUN_0028fb40(int);
extern int FUN_00292f28(int);
/* Supplied declaration required: FUN_002939f4. */
extern int FUN_00297ca4(int, unsigned int);
extern unsigned int FUN_0029a924(int);
extern unsigned int FUN_0029a9d4(int, unsigned int);
extern int FUN_0029d65c(int);
extern int FUN_0029efa8(unsigned int);
extern int FUN_0029efc0(unsigned int);
extern int FUN_002a8740(int);
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002b06c4. */
/* Supplied declaration required: FUN_002b6758. */
/* Supplied declaration required: FUN_002b6940. */
/* Supplied declaration required: FUN_002b6c34. */
/* Supplied declaration required: FUN_002b6db0. */
/* Supplied declaration required: FUN_002b6dd8. */
/* Supplied declaration required: FUN_002b9024. */
extern unsigned int FUN_002bce00(int);
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: FUN_002be370. */
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002be650. */
extern int FUN_002bed98(int);
extern int FUN_002beda4(void);
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
/* Supplied declaration required: FUN_002bf4f8. */
/* Supplied declaration required: FUN_002bf538. */
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


void FUN_002f1558(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 21 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned char *puVar11;
  unsigned int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  int *piVar16;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned char temp_v16;
  unsigned char temp_v17;
  unsigned int in_fpscr;
  unsigned char temp_v18 [64];
  int *temp_v19;
  int *temp_v20;
  
  temp_v2 = FUN_002beda4();
  temp_v3 = FUN_002bed98(param_1 + 0x11a0);
  temp_v4 = FUN_002beda4();
  temp_v4 = temp_v4 + temp_v2;
  temp_v2 = FUN_002bed98(param_1 + 0x12b8);
  temp_v2 = temp_v2 + temp_v3;
  FUN_002bf380(2,0x19,4,0,0,0xab);
  FUN_002bf288(2,0x15,0x110,temp_v4,temp_v2,0xb5);
  FUN_002bf288(2,0x15,0x111,temp_v4,temp_v2,0xb6);
  FUN_002bf288(2,0x15,0x112,temp_v4,temp_v2,0xb6);
  FUN_002bf288(2,0x15,0x113,temp_v4,temp_v2,0xb6);
  FUN_002bf288(2,0x15,0x114,temp_v4,temp_v2,0xb6);
  FUN_002bf288(2,0x15,0x115,temp_v4,temp_v2,0xb6);
  FUN_002bf288(2,0x15,0x116,temp_v4,temp_v2,0xb6);
  FUN_002bf288(2,0x15,0x117,temp_v4,temp_v2,0xb6);
  FUN_002bf288(2,0x15,0x118,temp_v4,temp_v2,0xb6);
  FUN_002bf288(2,0x15,0x119,temp_v4,temp_v2,0xb7);
  FUN_002bf288(2,0x15,0x11a,temp_v4,temp_v2,0xb7);
  FUN_002bf288(2,0x15,0x11b,temp_v4,temp_v2,0xb7);
  FUN_002bf288(2,0x15,0x11c,temp_v4,temp_v2,0xb5);
  FUN_002bf288(2,0x15,0x11d,temp_v4,temp_v2,0xbb);
  temp_v3 = FUN_0029d65c((int)*(short *)(param_1 + 0x5738));
  if (!(temp_v3 == 1 || temp_v3 == 2)) {
    FUN_002bf288(2,0x15,0x121,temp_v4,temp_v2,0xc3);
  }
  else {
    FUN_002bf288(2,0x15,0x122,temp_v4,temp_v2,0xc3);
  }
  temp_v19 = (int *)(param_1 + 0x5758);
  temp_v3 = 0;
  if (temp_v3 < *temp_v19) {
    do {
      temp_v13 = param_1 + temp_v3 * 0x2c;
      if (*(char *)(temp_v13 + 0x5778) != '\0') {
        temp_v5 = (unsigned int)*(unsigned short *)(temp_v13 + 0x5760);
        FUN_002b06c4();
        if ((*(unsigned char *)(temp_v5 + 3) & 1) != 0) {
          if (*(char *)(param_1 + 0x575f) != '\0') {
            temp_v6 = FUN_002bf4f8(0x15,0x1a0);
          }
          else {
            temp_v5 = *(int *)(temp_v13 + 0x5780) - 0x13b;
            temp_v17 = temp_v5 >= 4;
            temp_v16 = temp_v5 == 4;
            if (temp_v5 >= 5) {
              temp_v5 = *(int *)(temp_v13 + 0x5780) - 0x159;
              temp_v17 = temp_v5 >= 3;
              temp_v16 = temp_v5 == 3;
            }
            if (!(temp_v17 && !temp_v16)) {
              temp_v6 = FUN_002bf4f8(0x15,0x19e);
            }
            else {
              temp_v6 = FUN_002bf4f8(0x15,0x19f);
            }
          }
          FUN_002bf380(2,0x15,9,*(short *)(temp_v6 + 8) + temp_v4,*(short *)(temp_v6 + 10) + temp_v2,0xc9);
          if (*(char *)(temp_v13 + 0x5788) != '\0') {
            FUN_002bf538();
            temp_v8 = DAT_0044ea00;
            temp_v7 = FUN_002c5da8(6,1,0);
            piVar16 = (int *)(temp_v8 + 0x12ac);
            temp_v11 = piVar16[*piVar16 + 2];
            piVar16[*piVar16 + 2] = temp_v7;
            if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v11 != temp_v7) {
              (**(romwright_code **)(temp_v8 + 0x12c8))();
              *(unsigned char *)(temp_v8 + 0x12c4) = 0;
            }
            FUN_002bf288(2,0x15,0x19d,*(short *)(temp_v6 + 8) + temp_v4,*(short *)(temp_v6 + 10) + temp_v2,
                         0xce);
            temp_v6 = DAT_0044ea00;
            temp_v8 = FUN_002c5da8(6,7,0);
            piVar16 = (int *)(temp_v6 + 0x12ac);
            temp_v7 = piVar16[*piVar16 + 2];
            piVar16[*piVar16 + 2] = temp_v8;
            if (*(char *)(temp_v6 + 0x12c4) != '\0' || temp_v7 != temp_v8) {
              (**(romwright_code **)(temp_v6 + 0x12c8))();
              *(unsigned char *)(temp_v6 + 0x12c4) = 0;
            }
            FUN_002bf538();
          }
          temp_v20 = (int *)(temp_v13 + 0x5780);
          temp_v6 = 0;
          do {
            if (*(char *)(param_1 + 0x575f) != '\0') {
              temp_v8 = FUN_002bf4f8(0x15,temp_v6 + 0x1a1);
            }
            else {
              temp_v5 = *temp_v20 - 0x13b;
              temp_v17 = temp_v5 >= 4;
              temp_v16 = temp_v5 == 4;
              if (temp_v5 >= 5) {
                temp_v5 = *temp_v20 - 0x159;
                temp_v17 = temp_v5 >= 3;
                temp_v16 = temp_v5 == 3;
              }
              if (!(temp_v17 && !temp_v16)) {
                temp_v8 = FUN_002bf4f8(0x15,temp_v6 + 0x13b);
              }
              else {
                temp_v8 = FUN_002bf4f8(0x15,temp_v6 + 0x14a);
              }
            }
            FUN_002b6940(*(unsigned short *)(param_1 + temp_v6 * 2 + 0x34f8),*(short *)(temp_v8 + 8) + temp_v4
                         ,*(short *)(temp_v8 + 10) + temp_v2,0xd3);
            if (*(char *)(temp_v13 + 0x5788) != '\0') {
              FUN_002bf538();
              temp_v7 = DAT_0044ea00;
              temp_v11 = FUN_002c5da8(6,1,0);
              piVar16 = (int *)(temp_v7 + 0x12ac);
              temp_v12 = piVar16[*piVar16 + 2];
              piVar16[*piVar16 + 2] = temp_v11;
              if (*(char *)(temp_v7 + 0x12c4) != '\0' || temp_v12 != temp_v11) {
                (**(romwright_code **)(temp_v7 + 0x12c8))();
                *(unsigned char *)(temp_v7 + 0x12c4) = 0;
              }
              FUN_002bf288(2,0x15,0x124,*(short *)(temp_v8 + 8) + temp_v4,*(short *)(temp_v8 + 10) + temp_v2
                           ,0xd8);
              temp_v8 = DAT_0044ea00;
              temp_v7 = FUN_002c5da8(6,7,0);
              piVar16 = (int *)(temp_v8 + 0x12ac);
              temp_v11 = piVar16[*piVar16 + 2];
              piVar16[*piVar16 + 2] = temp_v7;
              if (*(char *)(temp_v8 + 0x12c4) != '\0' || temp_v11 != temp_v7) {
                (**(romwright_code **)(temp_v8 + 0x12c8))();
                *(unsigned char *)(temp_v8 + 0x12c4) = 0;
              }
              FUN_002bf538();
            }
            temp_v6 = temp_v6 + 1;
          } while (temp_v6 < 5);
        }
        else {
          temp_v6 = FUN_002bf4f8(0x15,*(unsigned int *)(temp_v13 + 0x5780));
          FUN_002b6758((int)*(short *)(temp_v13 + 0x5760),*(short *)(temp_v6 + 8) + temp_v4,
                       *(short *)(temp_v6 + 10) + temp_v2,0xc9,0);
          if (*(char *)(temp_v13 + 0x5788) != '\0') {
            FUN_002bf538();
            temp_v6 = FUN_002bf4f8(0x15,*(unsigned int *)(temp_v13 + 0x5780));
            temp_v13 = DAT_0044ea00;
            temp_v8 = FUN_002c5da8(6,1,0);
            piVar16 = (int *)(temp_v13 + 0x12ac);
            temp_v7 = piVar16[*piVar16 + 2];
            piVar16[*piVar16 + 2] = temp_v8;
            if (*(char *)(temp_v13 + 0x12c4) != '\0' || temp_v7 != temp_v8) {
              (**(romwright_code **)(temp_v13 + 0x12c8))();
              *(unsigned char *)(temp_v13 + 0x12c4) = 0;
            }
            FUN_002bf288(2,0x15,0x124,*(short *)(temp_v6 + 8) + temp_v4,*(short *)(temp_v6 + 10) + temp_v2,
                         0xce);
            temp_v13 = DAT_0044ea00;
            temp_v6 = FUN_002c5da8(6,7,0);
            piVar16 = (int *)(temp_v13 + 0x12ac);
            temp_v8 = piVar16[*piVar16 + 2];
            piVar16[*piVar16 + 2] = temp_v6;
            if (*(char *)(temp_v13 + 0x12c4) != '\0' || temp_v8 != temp_v6) {
              (**(romwright_code **)(temp_v13 + 0x12c8))();
              *(unsigned char *)(temp_v13 + 0x12c4) = 0;
            }
            FUN_002bf538();
          }
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < *temp_v19);
  }
  temp_v6 = 0;
  temp_v3 = FUN_0029efc0(*(unsigned int *)(param_1 + 0x340c));
  temp_v13 = FUN_0029efa8(*(unsigned int *)(param_1 + 0x340c));
  temp_v5 = temp_v3 + temp_v13;
  temp_v3 = FUN_00297ca4(param_1,1);
  if (temp_v3 != 1) {
    temp_v3 = FUN_00297ca4(param_1,1);
    if (temp_v3 == 2) {
      FUN_002bf288(2,0x15,0x11e,temp_v4,temp_v2,0xc3);
      FUN_002bf288(2,0x15,0x11f,temp_v4,temp_v2,0xc3);
      temp_v3 = FUN_002939f4();
      if ((*(unsigned int *)(temp_v3 + 0x44a8) & 0x40) != 0) {
        temp_v10 = FUN_002939f4();
        temp_v1 = FUN_0028d2e8(temp_v10,temp_v5);
      }
      else {
        FUN_002939f4();
        temp_v1 = FUN_0028d24c();
      }
      temp_v10 = FUN_002bce00((int)temp_v1);
      FUN_002be624(temp_v18,&LAB_002f1ff4,temp_v10);
      temp_v3 = FUN_002bf4f8(0x15,0x12e);
      VectorSignedToFloat(*(short *)(temp_v3 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v3 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(3,0x72e027ff,temp_v18);
      temp_v3 = FUN_002bf4f8(0x15,0x12f);
      FUN_002b6c34((int)temp_v1,*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + temp_v2,0xc9,0,0)
      ;
      temp_v3 = FUN_002bf4f8(0x15,0x129);
      FUN_002bdf94(2,*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + temp_v2,1,4,0xc9,
                   &LAB_002f2470,0);
      return;
    }
    temp_v3 = FUN_00297ca4(param_1,1);
    if (temp_v3 == 7) {
      FUN_002bf288(2,0x15,0x11e,temp_v4,temp_v2,0xc3);
      temp_v13 = (int)*(short *)(param_1 + temp_v5 * 2 + 0x3480);
      temp_v3 = temp_v13;
      FUN_002be650(temp_v13,0);
      FUN_002be624(temp_v18,&LAB_002f1ff4,temp_v3);
      temp_v10 = FUN_0028fb40(temp_v13);
      temp_v3 = FUN_002bf4f8(0x15,0x12e);
      VectorSignedToFloat(*(short *)(temp_v3 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      VectorSignedToFloat(*(short *)(temp_v3 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_002be5a4(3,0x72e027ff,temp_v18);
      temp_v3 = FUN_002bf4f8(0x15,0x12f);
      FUN_002be370(temp_v13,*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + temp_v2,0xc9,0);
      temp_v3 = FUN_002bf4f8(0x15,0x12d);
      FUN_002bdf94(2,*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + temp_v2,1,1,0xc9,
                   &LAB_002f2478);
      temp_v3 = FUN_002bf4f8(0x15,0x12d);
      FUN_002bdf94(2,*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + temp_v2,1,4,0xc9,
                   &LAB_002f2470,temp_v10);
      return;
    }
    temp_v3 = FUN_00297ca4(param_1,1);
    if (temp_v3 != 3) {
      temp_v3 = FUN_00297ca4(param_1,1);
      if (temp_v3 == 0xb) {
        FUN_002be624(temp_v18,&LAB_002f1fe8);
        temp_v3 = FUN_002bf4f8(0x15,0x11c);
        puVar11 = temp_v18;
        FUN_002b6dd8(puVar11,3);
        temp_v1 = *(short *)(temp_v3 + 8);
        temp_v0 = **(short **)(temp_v3 + 0xc);
        temp_v3 = FUN_002bf4f8(0x15,0x12e,(int)temp_v0);
        VectorSignedToFloat(temp_v4 + (int)temp_v1 + ((int)temp_v0 - (int)puVar11) / 2,
                            (unsigned char)(in_fpscr >> 0x16) & 3);
        VectorSignedToFloat(*(short *)(temp_v3 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
        FUN_002be5a4(3,0x72e027ff,temp_v18);
      }
      return;
    }
    FUN_002bf288(2,0x15,0x11e,temp_v4,temp_v2,0xc3);
    temp_v3 = FUN_002939f4();
    if ((*(unsigned int *)(temp_v3 + 0x44a8) & 0x1000) == 0) {
      temp_v14 = 0;
      temp_v15 = temp_v14;
      do {
        temp_v3 = FUN_00292f28(temp_v14 + 0x2e);
        if (temp_v3 != 0) {
          if (temp_v15 == temp_v5) {
            temp_v10 = FUN_0025cbc0(temp_v14 & 0xff);
            FUN_002be624(temp_v18,&LAB_002f25c0,temp_v10);
            break;
          }
          temp_v15 = temp_v15 + 1;
        }
        temp_v14 = temp_v14 + 1;
      } while ((int)temp_v14 < 6);
    }
    else {
      temp_v10 = FUN_0025cbc0(temp_v5 & 0xff);
      FUN_002be624(temp_v18,&LAB_002f25c0,temp_v10);
    }
    temp_v3 = FUN_002bf4f8(0x15,0x12e);
    VectorSignedToFloat(*(short *)(temp_v3 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v3 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,0x72e027ff,temp_v18);
    temp_v3 = FUN_002bf4f8(0x15,0x12f);
    FUN_002b6c34(0xfffffffd,*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + temp_v2,0xc9,0,0);
    return;
  }
  FUN_002bf288(2,0x15,0x11e,temp_v4,temp_v2,0xc3);
  FUN_002bf288(2,0x15,0x11f,temp_v4,temp_v2,0xc3);
  if (*(int *)(param_1 + 0x305c) != 0) {
    temp_v16 = 1;
    temp_v10 = 0;
    temp_v3 = FUN_002a8764();
    temp_v3 = FUN_002a8740((int)*(char *)(*(int *)(param_1 + 0x305c) + temp_v3 + 0x9107));
    if (temp_v5 != 0) {
      temp_v3 = FUN_002939f4();
      if ((*(unsigned int *)(temp_v3 + 0x44a8) & 0x40) != 0) {
        temp_v6 = (int)(short)temp_v5;
        temp_v9 = FUN_002bce00(temp_v6);
        FUN_002be624(temp_v18,&LAB_002f1ff4,temp_v9);
        temp_v9 = FUN_0029a924(temp_v6);
      }
      else {
        temp_v6 = (int)*(short *)(param_1 + *(int *)(param_1 + 0x305c) * 0x10 + temp_v5 * 2 + 0x341a);
        temp_v9 = FUN_002bce00(temp_v6);
        FUN_002be624(temp_v18,&LAB_002f1ff4,temp_v9);
        temp_v9 = FUN_0029a924(temp_v6);
      }
      temp_v16 = 1;
    }
    else {
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v3 + 0x46);
      FUN_002b9024();
      if (*(char *)(temp_v5 + 10) != '\x01') {
        FUN_002be624(temp_v18,&LAB_002f1ff4,&LAB_002f1ff8);
      }
      else {
        FUN_002be624(temp_v18,&LAB_002f1ff4,&LAB_002f2000);
      }
      temp_v9 = 0;
      if (temp_v3 != 0) {
        temp_v1 = *(short *)(temp_v3 + 0x46);
        FUN_00244ee0(temp_v1);
        temp_v6 = (int)temp_v1;
        temp_v16 = 0;
      }
    }
  }
  else {
    temp_v10 = 1;
    if (temp_v5 != 0) {
      if ((temp_v5 == 1) && (temp_v3 = FUN_0025cc54(), temp_v3 != 0)) {
        puVar11 = temp_v18;
        FUN_002be624(puVar11,&LAB_002f1ff4,&LAB_002f2000);
        temp_v1 = (short)(int)puVar11;
        temp_v9 = 0;
        FUN_0025cc34();
        temp_v6 = (int)temp_v1;
        temp_v16 = 0;
      }
      else {
        temp_v13 = 2;
        temp_v3 = FUN_0025cc54();
        if (temp_v3 == 0) {
          temp_v13 = 1;
        }
        temp_v3 = FUN_002939f4();
        if ((*(unsigned int *)(temp_v3 + 0x44a8) & 0x40) != 0) {
          temp_v6 = (int)(short)(((short)temp_v5 - (short)temp_v13) + 1);
          temp_v9 = FUN_002bce00(temp_v6);
          FUN_002be624(temp_v18,&LAB_002f1ff4,temp_v9);
          temp_v9 = FUN_0029a9d4(temp_v6,1);
        }
        else {
          temp_v6 = (int)*(short *)(param_1 + *(int *)(param_1 + 0x305c) * 0x10 + (temp_v5 - temp_v13) * 2
                                 + 0x341c);
          temp_v9 = FUN_002bce00(temp_v6);
          FUN_002be624(temp_v18,&LAB_002f1ff4,temp_v9);
          temp_v9 = FUN_0029a9d4(temp_v6,1);
        }
        temp_v16 = 1;
      }
    }
    else {
      puVar11 = temp_v18;
      FUN_002be624(puVar11,&LAB_002f1ff4,&LAB_002f1ff8);
      temp_v1 = (short)(int)puVar11;
      temp_v9 = 0;
      FUN_0025cc8c();
      temp_v6 = (int)temp_v1;
      temp_v16 = 0;
    }
  }
  temp_v3 = FUN_002bf4f8(0x15,0x12e);
  VectorSignedToFloat(*(short *)(temp_v3 + 10) + temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v3 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_002be5a4(3,0x72e027ff,temp_v18);
  temp_v3 = FUN_002bf4f8(0x15,0x12f);
  if (temp_v16) {
    FUN_002b6c34(temp_v6,*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + temp_v2,0xc9,temp_v10,0);
  }
  else {
    FUN_002b6db0(temp_v6,*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + temp_v2,0xc9);
  }
  temp_v3 = FUN_002bf4f8(0x15,0x129);
  FUN_002bdf94(2,*(short *)(temp_v3 + 8) + temp_v4,*(short *)(temp_v3 + 10) + temp_v2,1,4,0xc9,&LAB_002f2470
               ,temp_v9);
  return;
}

} /* extern "C" */
