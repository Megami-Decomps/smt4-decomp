/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003babb8` (_code @ 0x3babb8, 0x6e4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
} param_1_stack;

extern unsigned char LAB_003bb2ac; /* 0x3bb2ac */
extern unsigned char LAB_003bb2b8; /* 0x3bb2b8 */
extern signed char DAT_0049f950; /* 0x49f950 */
extern unsigned short DAT_0049fa80; /* 0x49fa80 */
extern unsigned short DAT_0049fa82; /* 0x49fa82 */
extern unsigned char DAT_0049fa84; /* 0x49fa84 */
extern unsigned short DAT_0049fa94; /* 0x49fa94 */
extern unsigned short DAT_0049fa96; /* 0x49fa96 */
extern int DAT_0049fd14; /* 0x49fd14 */

extern int FUN_0017fa54(void);
/* Supplied declaration required: FUN_0022b130. */
/* Supplied declaration required: FUN_0022b144. */
/* Supplied declaration required: FUN_0022b158. */
/* Supplied declaration required: FUN_0022b1d0. */
/* Supplied declaration required: FUN_0022b1f8. */
extern int FUN_0022b2e0(int);
/* Supplied declaration required: FUN_0022b3d8. */
/* Supplied declaration required: FUN_0022b430. */
/* Supplied declaration required: FUN_0022b858. */
/* Supplied declaration required: FUN_0022b90c. */
extern int FUN_0022ba54(int);
/* Supplied declaration required: FUN_0022ba6c. */
/* Supplied declaration required: FUN_0023077c. */
extern unsigned short FUN_002337a0(int);
/* Supplied declaration required: FUN_0023399c. */
/* Supplied declaration required: FUN_00234e70. */
/* Supplied declaration required: FUN_0023509c. */
/* Supplied declaration required: FUN_002350f4. */
/* Supplied declaration required: FUN_002353e8. */
/* Supplied declaration required: FUN_002638dc. */
/* Supplied declaration required: FUN_00263978. */
/* Supplied declaration required: FUN_0026fd14. */
/* Supplied declaration required: FUN_0027007c. */
/* Supplied declaration required: FUN_002701c4. */
/* Supplied declaration required: FUN_00270298. */
/* Supplied declaration required: FUN_00273ec4. */
/* Supplied declaration required: FUN_00273fa4. */
/* Supplied declaration required: FUN_002741cc. */
/* Supplied declaration required: FUN_002741f4. */
/* Supplied declaration required: FUN_00275e58. */
/* Supplied declaration required: FUN_00276034. */
/* Supplied declaration required: FUN_0027605c. */
/* Supplied declaration required: FUN_0027db78. */
/* Supplied declaration required: FUN_0027dbb8. */
/* Supplied declaration required: FUN_0027e9e4. */
/* Supplied declaration required: FUN_0027ea24. */
extern int FUN_00282d98(void);
/* Supplied declaration required: FUN_00287e9c. */
/* Supplied declaration required: FUN_00289ae8. */
/* Supplied declaration required: FUN_0028a688. */
/* Supplied declaration required: FUN_00295e48. */
/* Supplied declaration required: FUN_00297128. */
/* Supplied declaration required: FUN_0029c660. */
/* Supplied declaration required: FUN_002a0678. */
/* Supplied declaration required: FUN_002a06a0. */
/* Supplied declaration required: FUN_002a4ef0. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002b6700. */
extern int FUN_002b89d4(void);
/* Supplied declaration required: FUN_002b91c4. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf86c. */
extern int FUN_002c0b94(void);
extern int FUN_002c0ba8(void);
extern int FUN_002c23e4(int);
/* Supplied declaration required: FUN_002c23f8. */
extern int FUN_002c2b1c(void);
extern unsigned int FUN_002c32f0(unsigned char *, int, unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002e1b34. */
/* Supplied declaration required: FUN_003bbd00. */


void FUN_003babb8(int param_1)

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
  
  FUN_0022b90c();
  piVar12 = (int *)(param_1 + 0xe5c);
  switch(*(unsigned int *)(param_1 + 0x2c)) {
  case 0:
    FUN_0023077c(0);
    FUN_0022b130(0);
    FUN_00276034();
    FUN_00275e58(1);
    if ((*(unsigned int *)(param_1 + 0x20) & 0x40) != 0) {
      *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffffffbf;
      FUN_00297128();
    }
    *(unsigned char *)(param_1 + 0xdac) = 0;
    temp_v6 = *(int *)(param_1 + 0x2c) + 1;
    *(int *)(param_1 + 0x2c) = temp_v6;
    break;
  case 1:
    FUN_00295e48(0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    *(unsigned int *)(param_1 + 0x30) = 0;
    FUN_002e1b34();
    if (*(char *)(param_1 + 0xe58) != '\0') {
      FUN_002a4ef0(*(unsigned int *)(param_1 + 0xe5c));
      if (*piVar12 != 0) {
        FUN_002b2520(*piVar12);
      }
      temp_v6 = 0;
      *(unsigned int *)(param_1 + 0xe5c) = 0;
      do {
        piVar12 = (int *)(param_1 + temp_v6 * 4 + 0xe60);
        if (*piVar12 != 0) {
          FUN_002c4360();
          *piVar12 = 0;
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < 10);
    }
    FUN_002638dc();
    return;
  case 2:
    temp_v6 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = temp_v6;
    if (temp_v6 < 10) {
      return;
    }
    FUN_0023399c(param_1 + 0x9c);
    FUN_0028a688(0);
    *(unsigned char *)(param_1 + 0x6cc) = 1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  case 3:
    temp_v6 = FUN_0017fa54();
    if ((temp_v6 != 0) || (temp_v6 = FUN_002b89d4(), temp_v6 == 0)) {
      if (DAT_0049f950 == '\0') {
        FUN_0029c660(1,10,0xff);
      }
      temp_v6 = *(int *)(param_1 + 0x2c) + 1;
      *(int *)(param_1 + 0x2c) = temp_v6;
    }
    break;
  case 4:
    temp_v6 = FUN_002b89d4();
    if (temp_v6 != 0) {
      return;
    }
    temp_v6 = FUN_00282d98();
    if (temp_v6 != 0) {
      return;
    }
    pcVar4 = (char *)FUN_002741f4();
    if (pcVar4[4] != '\0') {
      if (pcVar4[1] != '\0') {
        temp_v3 = (unsigned int)*(unsigned short *)(pcVar4 + 8);
        FUN_002b6700();
        DAT_0049fa82 = *(unsigned short *)(temp_v3 + 2);
        FUN_002bf86c(&DAT_0049fa84,temp_v3 + 0x138);
        DAT_0049fa80 = 1;
      }
      else if (pcVar4[3] != '\0') {
        DAT_0049fa96 = 1;
      }
      temp_v6 = FUN_002c2b1c();
      *(unsigned short *)(temp_v6 + 0x22) = 0;
      FUN_002741cc();
      FUN_0027dbb8();
      FUN_0027db78();
      if (pcVar4[2] != '\0') {
        DAT_0049fa94 = 1;
      }
      if (*pcVar4 != '\0') {
        *(unsigned char *)(param_1 + 0xdac) = 1;
      }
      else {
        temp_v6 = FUN_002c2b1c();
        *(unsigned short *)(temp_v6 + 0x1e) = *(unsigned short *)(pcVar4 + 6);
        FUN_00273fa4();
        FUN_00273ec4();
      }
    }
    if (DAT_0049f950 == '\0') {
      temp_v6 = *(int *)(param_1 + 0x2c) + 1;
    }
    else {
      FUN_002701c4();
      FUN_00287e9c(1);
      FUN_00275e58(0);
      temp_v6 = FUN_002c0b94();
      if (*(unsigned char *)(temp_v6 + 2) >= 2) {
        if (*(unsigned char *)(temp_v6 + 2) == 2) {
          *(unsigned char *)(param_1 + 0x4b) = 1;
        }
      }
      else {
        FUN_0027007c();
        FUN_0026fd14();
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
    temp_v6 = FUN_002741f4();
    if (*(char *)(temp_v6 + 4) != '\0') {
      temp_v6 = FUN_0022ba54(param_1 + 0x9c);
      temp_v0 = *(unsigned char *)(temp_v6 + 0x20);
      FUN_0022b430(param_1,(int)*(short *)(param_1 + 0x3c),*(unsigned int *)(param_1 + 0xd64));
      FUN_0022ba6c(param_1 + 0x9c,temp_v0);
      temp_v2 = FUN_002337a0(param_1 + 0x9c);
      *(unsigned short *)(param_1 + 0x4c) = temp_v2;
    }
    FUN_00275e58(0);
    FUN_00289ae8();
    FUN_0022b1d0(param_1 + 0x9c);
    FUN_0022b858(param_1 + 0x9c);
    *(unsigned char *)(param_1 + 0x6cc) = 0;
    FUN_0022b1f8(param_1);
    temp_v6 = FUN_002741f4();
    temp_v1 = *(char *)(temp_v6 + 10);
    temp_v8 = temp_v1 == '\0';
    if (temp_v8) {
      temp_v1 = *(char *)(param_1 + 0xdac);
    }
    if (temp_v8 && temp_v1 == '\0') {
      FUN_002a0678(1,10);
    }
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if (*(char *)(param_1 + 0xe58) != '\0') {
      temp_v4 = 0x17f0;
      FUN_002c23f8();
      temp_v6 = 0;
      if (temp_v4 != 0) {
        temp_v6 = FUN_002c23e4(temp_v4 + 0x4cc);
        temp_v6 = temp_v6 - 0x4cc;
      }
      *(int *)(param_1 + 0xe5c) = temp_v6;
      FUN_002353e8();
      FUN_002be7fc(temp_v9,&LAB_003bb2ac,*(int *)(param_1 + 0xd5c) + 0x40);
      if (((*(short *)(*(int *)(param_1 + 0xd5c) + 100) != 0) &&
          (temp_v6 = FUN_002c0ba8(), temp_v6 != 0)) ||
         ((*(short *)(*(int *)(param_1 + 0xd5c) + 0x66) != 0 && (temp_v6 = FUN_002c0ba8(), temp_v6 != 0)
          ))) {
        FUN_002be7fc(temp_v10,&LAB_003bb2ac,*(int *)(param_1 + 0xd5c) + 0x68);
        FUN_002350f4(*(unsigned int *)(param_1 + 0xe5c),temp_v9,temp_v10);
      }
      else {
        FUN_002350f4(*(unsigned int *)(param_1 + 0xe5c),temp_v9,0);
      }
      temp_v6 = FUN_0022ba54(param_1 + 0x9c);
      FUN_0022b158(*(unsigned int *)(param_1 + 0xe5c),0,0xffffffff);
      FUN_00234e70(*piVar12,(int)*(short *)(temp_v6 + 0x28),1);
      if (-1 < *(int *)(*(int *)(param_1 + 0xd5c) + 0x60)) {
        puVar10 = temp_v11;
        FUN_003bbd00();
        if (puVar10 != (unsigned char *)0x0) {
          temp_v4 = 0;
          puVar7 = temp_v11;
          FUN_0022b144(puVar7,*(unsigned int *)(*(int *)(param_1 + 0xd5c) + 0x60));
          if (0 < (int)puVar7) {
            do {
              FUN_002be7fc(temp_v9,&LAB_003bb2b8,puVar10);
              temp_v7 = param_1 + temp_v4 * 4;
              temp_v5 = FUN_002c32f0(temp_v9,temp_v7 + 0xe88,1);
              *(unsigned int *)(temp_v7 + 0xe60) = temp_v5;
              puVar10 = puVar10 + 0x20;
              temp_v4 = temp_v4 + 1;
              puVar7 = temp_v11;
              FUN_0022b144(puVar7,*(unsigned int *)(*(int *)(param_1 + 0xd5c) + 0x60));
            } while (temp_v4 < (int)puVar7);
          }
          temp_v4 = param_1 + *(char *)(temp_v6 + 0x2b) * 4;
          FUN_002a06a0(*(unsigned int *)(param_1 + 0xe5c),*(unsigned int *)(temp_v4 + 0xe60),
                       *(unsigned int *)(temp_v4 + 0xe88));
        }
      }
      if ((!(*(short *)(param_1 + 0x3c) == 4 || *(short *)(param_1 + 0x3c) == 3)) ||
         (!(*(short *)(temp_v6 + 0x28) == 0 || *(short *)(temp_v6 + 0x28) == 6))) {
        FUN_0022b3d8(*(unsigned int *)(param_1 + 0xe5c),0);
        temp_v6 = *piVar12;
        temp_v5 = 1;
      }
      else {
        FUN_0022b3d8(*(unsigned int *)(param_1 + 0xe5c),1);
        temp_v6 = *piVar12;
        temp_v5 = 0;
      }
      FUN_0023509c(temp_v6,temp_v5);
    }
    if (*(char *)(param_1 + 0xdac) == '\0') {
      FUN_0027e9e4(0);
      FUN_0027ea24(*(unsigned int *)(param_1 + 0xd80),
                   *(unsigned char *)(*(int *)(param_1 + 0xd5c) + 0x3f));
      FUN_00263978(*(int *)(param_1 + 0xd5c) + 2);
      FUN_0023077c(1);
      FUN_0022b130(1);
      return;
    }
    break;
  case 6:
    temp_v6 = FUN_0022b2e0(param_1 + 0x9c);
    if ((temp_v6 != 0) && (temp_v6 = FUN_00282d98(), temp_v6 == 0)) {
      if (*(char *)(param_1 + 0xdac) == '\0') {
        temp_v6 = 5;
        piVar12 = (int *)(param_1 + 0x28);
      }
      else {
        FUN_002b91c4(0x1000184);
        FUN_0027605c();
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
      FUN_00270298(4);
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
