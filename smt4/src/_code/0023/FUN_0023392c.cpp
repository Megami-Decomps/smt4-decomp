/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023392c` (_code @ 0x23392c, 0x440 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023360c(unsigned int *);
int FUN_002636d0(int);
int FUN_00289c98(...);
int FUN_00290d5c(int);
int FUN_0029ee6c(...);
int FUN_002a87e8(void);
int FUN_002ae5e0(void);
int FUN_002b8454(...);
int FUN_002b8838(...);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int DAT_00432fc8; /* 0x432fc8 */

extern int FUN_002335f8(int, unsigned int);
/* Supplied declaration required: FUN_0023360c. */
/* Supplied declaration required: FUN_002636d0. */
/* Supplied declaration required: FUN_00289c98. */
/* Supplied declaration required: FUN_00290d5c. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002a87e8. */
/* Supplied declaration required: FUN_002ae5e0. */
/* Supplied declaration required: FUN_002b8454. */
/* Supplied declaration required: FUN_002b8838. */
extern int FUN_0039411c(int);


void FUN_0023392c(unsigned int *param_1,unsigned int param_2,int param_3)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  FUN_00290d5c(0);
  switch(param_2) {
  case 0:
    *param_1 = *param_1 | 0x100000;
    FUN_002b8838(0xc9);
    temp_v2 = 0;
    do {
      FUN_002a87e8();
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 6);
    FUN_002ae5e0();
    return;
  case 1:
    *param_1 = *param_1 | 0x100000;
    if (param_3 != 0) {
      FUN_002b8838(0xca);
      temp_v2 = 0;
      do {
        FUN_002a87e8();
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 6);
      FUN_002ae5e0();
    }
    FUN_002b8454(0,0x11,0,1);
    FUN_002b8454(1,0);
    FUN_002b8454(2,0xb,0x4b,1);
    FUN_002b8454(3,0,0,1);
    FUN_002b8454(4,0x10,0x4f,1);
    FUN_002b8454(5,0,0,1);
    return;
  case 2:
    *param_1 = *param_1 | 0x100000;
    temp_v2 = DAT_00432fc8;
    FUN_0023360c(param_1 + 0x90);
    if (param_3 != 0) {
      FUN_002b8838(0xcb);
      temp_v1 = 0;
      do {
        FUN_002a87e8();
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 6);
      FUN_002ae5e0();
    }
    FUN_002b8454(0,10,0x4a,1);
    FUN_002b8454(1,0);
    FUN_002b8454(2,0xb,0x4b,1);
    FUN_002b8454(3,0,0,1);
    temp_v0 = FUN_0023360c(param_1 + 0x90);
    temp_v1 = FUN_002335f8(temp_v2,temp_v0);
    if (temp_v1 != 0) {
      temp_v1 = FUN_0023360c(param_1 + 0x90);
      if (*(char *)(*(int *)(temp_v2 + 0x678) + temp_v1 * 0x9c8 + 0x9b3) != '\0') {
        FUN_002b8454(4,0xf,0x4f,0);
        FUN_002b8454(5,0,0);
        FUN_002636d0(1);
        FUN_0029ee6c(param_1 + 0x44c,0x323232ff);
        return;
      }
      temp_v1 = FUN_0023360c(param_1 + 0x90);
      temp_v2 = FUN_0039411c(*(int *)(temp_v2 + 0x678) + temp_v1 * 0x9c8);
      if (temp_v2 == 0) {
        FUN_002b8454(4,0xc,0x4c,0);
        FUN_002b8454(5,0,0);
        FUN_002636d0(1);
        FUN_0029ee6c(param_1 + 0x44c,0x323232ff);
        return;
      }
      if (temp_v2 == 1) {
        FUN_002b8454(4,0xd,0x4d,0);
        FUN_002b8454(5,0,0);
        FUN_002636d0(1);
        FUN_0029ee6c(param_1 + 0x44c,0x323232ff);
        return;
      }
      if (temp_v2 == 2) {
        FUN_002b8454(4,0xe,0x4e,0);
        FUN_002b8454(5,0,0);
        FUN_002636d0(1);
        FUN_0029ee6c(param_1 + 0x44c,0x323232ff);
        return;
      }
      if (temp_v2 != 3) {
        FUN_002b8454(5,0,0);
        FUN_002636d0(1);
        FUN_0029ee6c(param_1 + 0x44c,0x323232ff);
        return;
      }
    }
    FUN_002b8454(4,0x11,0);
    FUN_002b8454(5,0,0);
    FUN_002636d0(1);
    FUN_0029ee6c(param_1 + 0x44c,0x323232ff);
    return;
  case 3:
    *param_1 = *param_1 | 0x100000;
    if (param_3 != 0) {
      FUN_002b8838(0xca);
      temp_v2 = 0;
      do {
        FUN_002a87e8();
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 6);
      FUN_002ae5e0();
    }
    FUN_002b8454(0,0x11,0,1);
    FUN_002b8454(1,0);
    FUN_002b8454(2,0x11,0,1);
    FUN_002b8454(3,0,0,1);
    FUN_002b8454(4,0x10,0x4f,1);
    FUN_002b8454(5,0,0,1);
    FUN_002636d0(0);
    FUN_0029ee6c(0,0x323232ff);
    return;
  case 4:
    *param_1 = *param_1 | 0x100000;
    if (param_3 != 0) {
      FUN_002b8838(0xce);
      return;
    }
    break;
  case 0xffffffff:
    if ((*param_1 & 0x100000) != 0) {
      *param_1 = *param_1 & 0xffefffff;
      FUN_00289c98(0);
      temp_v2 = 0;
      do {
        FUN_002a87e8();
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 6);
      return;
    }
  }
  return;
}

} /* extern "C" */
