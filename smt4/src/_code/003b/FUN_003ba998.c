/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ba998` (_code @ 0x3ba998, 0x6e4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
} param_1_stack;

extern unsigned char LAB_003bb08c; /* 0x3bb08c */
extern unsigned char LAB_003bb098; /* 0x3bb098 */
extern signed char DAT_0049f950; /* 0x49f950 */
extern unsigned short DAT_0049fa80; /* 0x49fa80 */
extern unsigned short DAT_0049fa82; /* 0x49fa82 */
extern unsigned char DAT_0049fa84; /* 0x49fa84 */
extern unsigned short DAT_0049fa94; /* 0x49fa94 */
extern unsigned short DAT_0049fa96; /* 0x49fa96 */
extern int DAT_0049fd14; /* 0x49fd14 */

extern int FUN_0017fb54(void);
/* Supplied declaration required: FUN_0022af9c. */
/* Supplied declaration required: FUN_0022afb0. */
/* Supplied declaration required: FUN_0022afc4. */
/* Supplied declaration required: FUN_0022b03c. */
/* Supplied declaration required: FUN_0022b064. */
extern int FUN_0022b14c(int);
/* Supplied declaration required: FUN_0022b244. */
/* Supplied declaration required: FUN_0022b29c. */
/* Supplied declaration required: FUN_0022b6c4. */
/* Supplied declaration required: FUN_0022b778. */
extern int FUN_0022b8c0(int);
/* Supplied declaration required: FUN_0022b8d8. */
/* Supplied declaration required: FUN_002305e8. */
extern unsigned short FUN_0023360c(int);
/* Supplied declaration required: FUN_00233808. */
/* Supplied declaration required: FUN_00234cd8. */
/* Supplied declaration required: FUN_00234f04. */
/* Supplied declaration required: FUN_00234f5c. */
/* Supplied declaration required: FUN_00235250. */
/* Supplied declaration required: FUN_002636b0. */
/* Supplied declaration required: FUN_0026374c. */
/* Supplied declaration required: FUN_0026faa4. */
/* Supplied declaration required: FUN_0026fe0c. */
/* Supplied declaration required: FUN_0026ff54. */
/* Supplied declaration required: FUN_00270028. */
/* Supplied declaration required: FUN_00273c54. */
/* Supplied declaration required: FUN_00273d34. */
/* Supplied declaration required: FUN_00273f5c. */
/* Supplied declaration required: FUN_00273f84. */
/* Supplied declaration required: FUN_00275be8. */
/* Supplied declaration required: FUN_00275dc4. */
/* Supplied declaration required: FUN_00275dec. */
/* Supplied declaration required: FUN_0027d908. */
/* Supplied declaration required: FUN_0027d948. */
/* Supplied declaration required: FUN_0027e774. */
/* Supplied declaration required: FUN_0027e7b4. */
extern int FUN_00282b28(void);
/* Supplied declaration required: FUN_00287c34. */
/* Supplied declaration required: FUN_00289880. */
/* Supplied declaration required: FUN_0028a420. */
/* Supplied declaration required: FUN_00295ba4. */
/* Supplied declaration required: FUN_00296e90. */
/* Supplied declaration required: FUN_0029c3c0. */
/* Supplied declaration required: FUN_002a03d8. */
/* Supplied declaration required: FUN_002a0400. */
/* Supplied declaration required: FUN_002a4bac. */
/* Supplied declaration required: FUN_002b2368. */
/* Supplied declaration required: FUN_002b63c0. */
extern int FUN_002b8694(void);
/* Supplied declaration required: FUN_002b8e84. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf694. */
extern int FUN_002c09bc(void);
extern int FUN_002c09d0(void);
extern int FUN_002c2218(int);
/* Supplied declaration required: FUN_002c222c. */
extern int FUN_002c2950(void);
extern unsigned int FUN_002c3124(unsigned char *, int, unsigned int);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002e1ba8. */
/* Supplied declaration required: FUN_003bbae0. */


void FUN_003ba998(int param_1)

{
/* irregular: 51 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  unsigned short temp_v2;
  char *pcVar4;
  unsigned int temp_v3;
  int temp_v4;
  unsigned char *puVar7;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char *puVar10;
  int temp_v7;
  int *piVar12;
  unsigned char temp_v8;
  unsigned char temp_v9 [128];
  unsigned char temp_v10 [128];
  unsigned char temp_v11 [4];
  
  FUN_0022b778();
  piVar12 = (int *)(param_1 + 0xe5c);
  switch(*(unsigned int *)(param_1 + 0x2c)) {
  case 0:
    FUN_002305e8(0);
    FUN_0022af9c(0);
    FUN_00275dc4();
    FUN_00275be8(1);
    if ((*(unsigned int *)(param_1 + 0x20) & 0x40) != 0) {
      *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffffffbf;
      FUN_00296e90();
    }
    *(unsigned char *)(param_1 + 0xdac) = 0;
    temp_v6 = *(int *)(param_1 + 0x2c) + 1;
    *(int *)(param_1 + 0x2c) = temp_v6;
    break;
  case 1:
    FUN_00295ba4(0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    *(unsigned int *)(param_1 + 0x30) = 0;
    FUN_002e1ba8();
    if (*(char *)(param_1 + 0xe58) != '\0') {
      FUN_002a4bac(*(unsigned int *)(param_1 + 0xe5c));
      if (*piVar12 != 0) {
        FUN_002b2368(*piVar12);
      }
      temp_v6 = 0;
      *(unsigned int *)(param_1 + 0xe5c) = 0;
      do {
        piVar12 = (int *)(param_1 + temp_v6 * 4 + 0xe60);
        if (*piVar12 != 0) {
          FUN_002c415c();
          *piVar12 = 0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 10);
    }
    FUN_002636b0();
    return;
  case 2:
    temp_v6 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = temp_v6;
    if (temp_v6 < 10) {
      return;
    }
    FUN_00233808(param_1 + 0x9c);
    FUN_0028a420(0);
    *(unsigned char *)(param_1 + 0x6cc) = 1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  case 3:
    temp_v6 = FUN_0017fb54();
    if ((temp_v6 != 0) || (temp_v6 = FUN_002b8694(), temp_v6 == 0)) {
      if (DAT_0049f950 == '\0') {
        FUN_0029c3c0(1,10,0xff);
      }
      temp_v6 = *(int *)(param_1 + 0x2c) + 1;
      *(int *)(param_1 + 0x2c) = temp_v6;
    }
    break;
  case 4:
    temp_v6 = FUN_002b8694();
    if (temp_v6 != 0) {
      return;
    }
    temp_v6 = FUN_00282b28();
    if (temp_v6 != 0) {
      return;
    }
    pcVar4 = (char *)FUN_00273f84();
    if (pcVar4[4] != '\0') {
      if (pcVar4[1] != '\0') {
        temp_v3 = (unsigned int)*(unsigned short *)(pcVar4 + 8);
        FUN_002b63c0();
        DAT_0049fa82 = *(unsigned short *)(temp_v3 + 2);
        FUN_002bf694(&DAT_0049fa84,temp_v3 + 0x138);
        DAT_0049fa80 = 1;
      }
      else if (pcVar4[3] != '\0') {
        DAT_0049fa96 = 1;
      }
      temp_v6 = FUN_002c2950();
      *(unsigned short *)(temp_v6 + 0x22) = 0;
      FUN_00273f5c();
      FUN_0027d948();
      FUN_0027d908();
      if (pcVar4[2] != '\0') {
        DAT_0049fa94 = 1;
      }
      if (*pcVar4 != '\0') {
        *(unsigned char *)(param_1 + 0xdac) = 1;
      }
      else {
        temp_v6 = FUN_002c2950();
        *(unsigned short *)(temp_v6 + 0x1e) = *(unsigned short *)(pcVar4 + 6);
        FUN_00273d34();
        FUN_00273c54();
      }
    }
    if (DAT_0049f950 == '\0') {
      temp_v6 = *(int *)(param_1 + 0x2c) + 1;
    }
    else {
      FUN_0026ff54();
      FUN_00287c34(1);
      FUN_00275be8(0);
      temp_v6 = FUN_002c09bc();
      if (*(unsigned char *)(temp_v6 + 2) >= 2) {
        if (*(unsigned char *)(temp_v6 + 2) == 2) {
          *(unsigned char *)(param_1 + 0x4b) = 1;
        }
      }
      else {
        FUN_0026fe0c();
        FUN_0026faa4();
        if (DAT_0049fd14 >= 200) {
          *(unsigned char *)(param_1 + 0x4a) = 1;
        }
        else if (DAT_0049fd14 >= 100) {
          *(unsigned char *)(param_1 + 0x48) = 1;
        }
        else {
          *(unsigned char *)(param_1 + 0x49) = 1;
        }
      }
      temp_v6 = 8;
    }
    *(int *)(param_1 + 0x2c) = temp_v6;
    break;
  case 5:
    temp_v6 = FUN_00273f84();
    if (*(char *)(temp_v6 + 4) != '\0') {
      temp_v6 = FUN_0022b8c0(param_1 + 0x9c);
      temp_v0 = *(unsigned char *)(temp_v6 + 0x20);
      FUN_0022b29c(param_1,(int)*(short *)(param_1 + 0x3c),*(unsigned int *)(param_1 + 0xd64));
      FUN_0022b8d8(param_1 + 0x9c,temp_v0);
      temp_v2 = FUN_0023360c(param_1 + 0x9c);
      *(unsigned short *)(param_1 + 0x4c) = temp_v2;
    }
    FUN_00275be8(0);
    FUN_00289880();
    FUN_0022b03c(param_1 + 0x9c);
    FUN_0022b6c4(param_1 + 0x9c);
    *(unsigned char *)(param_1 + 0x6cc) = 0;
    FUN_0022b064(param_1);
    temp_v6 = FUN_00273f84();
    temp_v1 = *(char *)(temp_v6 + 10);
    temp_v8 = temp_v1 == '\0';
    if (temp_v8) {
      temp_v1 = *(char *)(param_1 + 0xdac);
    }
    if (temp_v8 && temp_v1 == '\0') {
      FUN_002a03d8(1,10);
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if (*(char *)(param_1 + 0xe58) != '\0') {
      temp_v4 = 0x17f0;
      FUN_002c222c();
      temp_v6 = 0;
      if (temp_v4 != 0) {
        temp_v6 = FUN_002c2218(temp_v4 + 0x4cc);
        temp_v6 = temp_v6 - 0x4cc;
      }
      *(int *)(param_1 + 0xe5c) = temp_v6;
      FUN_00235250();
      FUN_002be624(temp_v9,&LAB_003bb08c,*(int *)(param_1 + 0xd5c) + 0x40);
      if (((*(short *)(*(int *)(param_1 + 0xd5c) + 100) != 0) &&
          (temp_v6 = FUN_002c09d0(), temp_v6 != 0)) ||
         ((*(short *)(*(int *)(param_1 + 0xd5c) + 0x66) != 0 && (temp_v6 = FUN_002c09d0(), temp_v6 != 0)
          ))) {
        FUN_002be624(temp_v10,&LAB_003bb08c,*(int *)(param_1 + 0xd5c) + 0x68);
        FUN_00234f5c(*(unsigned int *)(param_1 + 0xe5c),temp_v9,temp_v10);
      }
      else {
        FUN_00234f5c(*(unsigned int *)(param_1 + 0xe5c),temp_v9,0);
      }
      temp_v6 = FUN_0022b8c0(param_1 + 0x9c);
      FUN_0022afc4(*(unsigned int *)(param_1 + 0xe5c),0,0xffffffff);
      FUN_00234cd8(*piVar12,(int)*(short *)(temp_v6 + 0x28),1);
      if (-1 < *(int *)(*(int *)(param_1 + 0xd5c) + 0x60)) {
        puVar10 = temp_v11;
        FUN_003bbae0();
        if (puVar10 != (unsigned char *)0x0) {
          temp_v4 = 0;
          puVar7 = temp_v11;
          FUN_0022afb0(puVar7,*(unsigned int *)(*(int *)(param_1 + 0xd5c) + 0x60));
          if (0 < (int)puVar7) {
            do {
              FUN_002be624(temp_v9,&LAB_003bb098,puVar10);
              temp_v7 = param_1 + temp_v4 * 4;
              temp_v5 = FUN_002c3124(temp_v9,temp_v7 + 0xe88,1);
              *(unsigned int *)(temp_v7 + 0xe60) = temp_v5;
              puVar10 = puVar10 + 0x20;
              temp_v4 = temp_v4 + 1;
              puVar7 = temp_v11;
              FUN_0022afb0(puVar7,*(unsigned int *)(*(int *)(param_1 + 0xd5c) + 0x60));
            } while (temp_v4 < (int)puVar7);
          }
          temp_v4 = param_1 + *(char *)(temp_v6 + 0x2b) * 4;
          FUN_002a0400(*(unsigned int *)(param_1 + 0xe5c),*(unsigned int *)(temp_v4 + 0xe60),
                       *(unsigned int *)(temp_v4 + 0xe88));
        }
      }
      if ((!(*(short *)(param_1 + 0x3c) == 4 || *(short *)(param_1 + 0x3c) == 3)) ||
         (!(*(short *)(temp_v6 + 0x28) == 0 || *(short *)(temp_v6 + 0x28) == 6))) {
        FUN_0022b244(*(unsigned int *)(param_1 + 0xe5c),0);
        temp_v6 = *piVar12;
        temp_v5 = 1;
      }
      else {
        FUN_0022b244(*(unsigned int *)(param_1 + 0xe5c),1);
        temp_v6 = *piVar12;
        temp_v5 = 0;
      }
      FUN_00234f04(temp_v6,temp_v5);
    }
    if (*(char *)(param_1 + 0xdac) == '\0') {
      FUN_0027e774(0);
      FUN_0027e7b4(*(unsigned int *)(param_1 + 0xd80),
                   *(unsigned char *)(*(int *)(param_1 + 0xd5c) + 0x3f));
      FUN_0026374c(*(int *)(param_1 + 0xd5c) + 2);
      FUN_002305e8(1);
      FUN_0022af9c(1);
      return;
    }
    break;
  case 6:
    temp_v6 = FUN_0022b14c(param_1 + 0x9c);
    if ((temp_v6 != 0) && (temp_v6 = FUN_00282b28(), temp_v6 == 0)) {
      if (*(char *)(param_1 + 0xdac) == '\0') {
        temp_v6 = 5;
        piVar12 = (int *)(param_1 + 0x28);
      }
      else {
        FUN_002b8e84(0x1000184);
        FUN_00275dec();
        piVar12 = (int *)(param_1 + 0x2c);
        temp_v6 = *piVar12 + 1;
      }
      *piVar12 = temp_v6;
      piVar12[1] = 0;
      return;
    }
    break;
  case 7:
    temp_v6 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = temp_v6;
    if (temp_v6 == 1) {
      FUN_00270028(4);
    }
    if (*(int *)(param_1 + 0x30) >= 4) {
      *(unsigned int *)(param_1 + 0x28) = 0x11;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    break;
  case 8:
    *(unsigned int *)(param_1 + 0x28) = 0x11;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    return;
  }
  return;
}
