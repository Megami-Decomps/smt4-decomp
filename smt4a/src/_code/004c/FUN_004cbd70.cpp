/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004cbd70` (_code @ 0x4cbd70, 0x5d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015f490(...);
int FUN_00169ddc(...);
int FUN_0026c3c4(...);
int FUN_0039c410(...);
int FUN_004bd6b0(...);

int FUN_001517b4(...);
int FUN_001641b4(...);
int FUN_001681cc(...);
int FUN_0019de98(int, unsigned int);
int FUN_00224880(...);
int FUN_0023acdc(int);
int FUN_00275f44(...);
int FUN_002a7288(void);
int FUN_00333dc8(...);
int FUN_00336de4(int, int);
int FUN_003491e8(void);
int FUN_0035fd38(int);
int FUN_0037dfb0(int, int);
int FUN_003fd63c(int, int);
int FUN_00409d8c(int, int);
int FUN_004bcd90(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_0015f490. */
/* Supplied declaration required: FUN_001641b4. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_00169ddc. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0019de98. */
extern int FUN_001ab854(unsigned int);
/* Supplied declaration required: FUN_00224880. */
/* Supplied declaration required: FUN_0023acdc. */
extern int FUN_002613f0(unsigned int);
extern int FUN_0026272c(void);
extern int FUN_0026c3a0(void);
/* Supplied declaration required: FUN_0026c3c4. */
/* Supplied declaration required: FUN_00275f44. */
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_002a7288. */
extern int FUN_002c7cb4(void);
extern int FUN_002effbc(void);
extern int FUN_0032169c(void);
/* Supplied declaration required: FUN_00333dc8. */
/* Supplied declaration required: FUN_00336de4. */
/* Supplied declaration required: FUN_003491e8. */
extern int FUN_0035988c(unsigned int);
/* Supplied declaration required: FUN_0035fd38. */
extern int FUN_00371e38(void);
extern int FUN_0037df64(void);
/* Supplied declaration required: FUN_0037dfb0. */
extern int FUN_0039c3d0(void);
/* Supplied declaration required: FUN_0039c410. */
extern int FUN_003c16b8(void);
extern unsigned int FUN_003d2150(unsigned int);
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: FUN_00409d8c. */
/* Supplied declaration required: FUN_004bcd90. */
/* Supplied declaration required: FUN_004bd6b0. */


void FUN_004cbd70(int param_1)

{
/* irregular: 3 unstructured edge(s); 2 goto(s); 21 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_002613f0(*(unsigned int *)(param_1 + 0x2c));
  temp_v1 = FUN_001ab854(*(unsigned int *)(param_1 + 0x30));
  temp_v4 = 0;
LAB_004cbda0:
  temp_v3 = temp_v1 + temp_v4 * 2;
  if (*(short *)(temp_v3 + 0x34) != *(short *)(temp_v0 + 2)) {
    if (*(short *)(temp_v3 + 0x36) != *(short *)(temp_v0 + 2)) {
      temp_v4 = temp_v4 + 2;
      if (temp_v4 < 8) goto LAB_004cbda0;
      temp_v4 = -1;
      goto LAB_004cbdc8;
    }
    temp_v4 = temp_v4 + 1;
  }
  if (-1 >= temp_v4) {
LAB_004cbdc8:
    *(unsigned int *)(param_1 + 8) = 100;
  }
  temp_v3 = *(int *)(param_1 + 8);
  if (temp_v3 != 0xb) {
    if (temp_v3 >= 11) {
      if (temp_v3 == 0x16) {
        return;
      }
      if (temp_v3 >= 0x17) {
        if (temp_v3 == 0x62 || temp_v3 == 99) {
          *(int *)(param_1 + 8) = temp_v3 + 1;
          return;
        }
        if (temp_v3 != 100) {
          return;
        }
        FUN_00333dc8(0);
        FUN_004bcd90(temp_v1);
        FUN_0019de98(0,0xf4f4f4ff);
        if ((*(short *)(temp_v1 + 0x62) == 0x114) && (temp_v1 = FUN_0018719c(0x4d7), temp_v1 == 0)) {
          FUN_003fd63c(0x4d7,1);
        }
        if (*(short *)(temp_v0 + 6) != 0) {
          FUN_001681cc(0x6c);
          *(unsigned int *)(param_1 + 8) = 0;
          *(unsigned char *)(param_1 + 4) = 6;
          return;
        }
        FUN_002a7288();
        *(unsigned int *)(param_1 + 8) = 0;
        *(unsigned char *)(param_1 + 4) = 7;
        return;
      }
      if (temp_v3 != 0xc) {
        if (temp_v3 != 0x14) {
          if (temp_v3 != 0x15) {
            return;
          }
          temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x14));
          if (temp_v0 != 2) {
            return;
          }
          FUN_00333dc8(0);
          temp_v0 = FUN_002a4b74();
          if (temp_v0 != 0) {
            *(unsigned int *)(param_1 + 8) = 2;
            FUN_00275f44(*(unsigned int *)(param_1 + 0x20),8);
            FUN_001681cc(0x6a);
            return;
          }
        }
        else {
          temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x14));
          if (temp_v0 != 2) {
            return;
          }
          FUN_00333dc8(0);
          temp_v0 = FUN_002a4b74();
          if (temp_v0 == 0) {
            *(unsigned int *)(param_1 + 8) = 3;
            FUN_001681cc(0x67);
            return;
          }
        }
        *(unsigned int *)(param_1 + 8) = 10;
        FUN_001681cc(0x67);
        return;
      }
      temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x20));
      if (temp_v0 != 2) {
        return;
      }
      temp_v0 = FUN_0039c3d0();
      if (temp_v0 == 0) {
        return;
      }
      FUN_00333dc8(0);
      *(unsigned int *)(param_1 + 8) = 100;
      return;
    }
    switch(temp_v3) {
    case 0:
      temp_v1 = FUN_002effbc();
      if (temp_v1 == 0) {
        return;
      }
      if (*(short *)(temp_v0 + 2) == 0) {
        *(unsigned int *)(param_1 + 8) = 100;
        return;
      }
      FUN_0023acdc((int)*(short *)(temp_v0 + 4));
      FUN_00409d8c(6,1);
      break;
    case 1:
      temp_v3 = FUN_0026c3a0();
      if (temp_v3 == 0) {
        return;
      }
      temp_v3 = FUN_002c7cb4();
      if (temp_v3 != 0) {
        temp_v3 = FUN_0032169c();
        if (temp_v3 == 0) {
          FUN_00336de4(*(unsigned short *)(temp_v1 + 0x62),1);
          FUN_0035fd38(1);
        }
        FUN_00275f44(*(unsigned int *)(param_1 + 0x20),8);
        FUN_0037dfb0(temp_v4,*(unsigned short *)(temp_v0 + 4));
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        *(unsigned int *)(param_1 + 0xc) = 0;
        return;
      }
      return;
    case 2:
      FUN_00224880(*(unsigned int *)(param_1 + 0x20));
      if (*(int *)(param_1 + 0xc) < 0x21) {
        return;
      }
      temp_v0 = 0;
      FUN_001517b4(0,1);
      if ((temp_v0 == 0) && (temp_v0 = FUN_00371e38(), temp_v0 == 0)) {
        temp_v0 = 1;
        FUN_001517b4();
        if (temp_v0 != 0) {
          FUN_00333dc8(1);
          FUN_003491e8();
          FUN_001681cc(0x9c);
          FUN_00275f44(*(unsigned int *)(param_1 + 0x14),8);
          temp_v2 = FUN_003d2150(0x100020f);
          *(unsigned int *)(param_1 + 8) = 0x15;
          *(unsigned int *)(param_1 + 0x28) = temp_v2;
          return;
        }
        return;
      }
      temp_v0 = FUN_003c16b8();
      if ((temp_v0 != temp_v4) && (temp_v0 = FUN_0037df64(), temp_v0 == 0)) {
        FUN_001641b4(0x100020f);
        return;
      }
      FUN_00333dc8(1);
      FUN_003491e8();
      FUN_001681cc(0x9c);
      FUN_00275f44(*(unsigned int *)(param_1 + 0x14),7);
      temp_v2 = FUN_003d2150(0x100020e);
      *(unsigned int *)(param_1 + 8) = 0x14;
      *(unsigned int *)(param_1 + 0x28) = temp_v2;
      return;
    case 3:
      temp_v0 = FUN_0035988c(*(unsigned int *)(param_1 + 0x28));
      if (temp_v0 != 0) {
        return;
      }
      break;
    case 4:
      temp_v0 = FUN_0026272c();
      if (temp_v0 == 0) {
        return;
      }
      FUN_00333dc8(1);
      FUN_00275f44(*(unsigned int *)(param_1 + 0x20),10);
      FUN_0015f490(*(unsigned short *)(temp_v1 + 0x62),9,1,0);
      break;
    case 5:
      temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x20));
      if (temp_v0 != 2) {
        return;
      }
      FUN_0039c410(1);
      FUN_00169ddc(0x100021a);
      break;
    case 6:
      temp_v3 = FUN_0039c3d0();
      if (temp_v3 != 0) {
        FUN_00333dc8(0);
        FUN_004bd6b0(temp_v1,*(unsigned short *)(temp_v0 + 4),temp_v4);
        FUN_0026c3c4(temp_v1 + 0x34);
        *(unsigned int *)(param_1 + 8) = 100;
        return;
      }
    default:
      return;
    case 10:
      temp_v0 = FUN_0035988c(*(unsigned int *)(param_1 + 0x28));
      if (temp_v0 != 0) {
        return;
      }
    }
  }
  else {
    temp_v0 = FUN_0026272c();
    if (temp_v0 == 0) {
      return;
    }
    FUN_00333dc8(1);
    FUN_00275f44(*(unsigned int *)(param_1 + 0x20),0xb);
    FUN_0015f490(*(unsigned short *)(temp_v1 + 0x62),1,1,0);
    FUN_0039c410(0);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

} /* extern "C" */
