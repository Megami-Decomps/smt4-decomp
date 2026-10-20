/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c09c` (_code @ 0x39c09c, 0x220 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00231240(...);
int FUN_0023150c(int, int);
int FUN_002316e8(int, int);
int FUN_00233240(int, int);
int FUN_0025a0e0(void);
int FUN_00275f00(void);
int FUN_00289880(void);
int FUN_002bf818(int);
int FUN_0039f838(int, int);
int FUN_0039f860(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern signed char DAT_0049fb6d; /* 0x49fb6d */

/* Supplied declaration required: FUN_00231240. */
/* Supplied declaration required: FUN_0023150c. */
/* Supplied declaration required: FUN_002316e8. */
/* Supplied declaration required: FUN_00233240. */
/* Supplied declaration required: FUN_0025a0e0. */
/* Supplied declaration required: FUN_00275f00. */
/* Supplied declaration required: FUN_00289880. */
extern unsigned int FUN_002bed98(int);
extern unsigned int FUN_002beda4(int);
/* Supplied declaration required: FUN_002bf818. */
extern int FUN_002c09d0(unsigned int);
/* Supplied declaration required: FUN_0039f838. */
/* Supplied declaration required: FUN_0039f860. */
extern int NaviMain_GetCurrentMap(void);
extern int NaviMain_GetPosX(int);


void FUN_0039c09c(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 == 2) {
        if (*(char *)(param_1 + 0x8d2) == '\0') {
          temp_v0 = 0;
          do {
            if (temp_v0 <= *(int *)(param_1 + 0x14)) {
              FUN_002bf818(param_1 + temp_v0 * 0x8c + 0x618);
            }
            temp_v0 = temp_v0 + 1;
          } while (temp_v0 < 5);
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
          return;
        }
        *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfeffffff;
        *(unsigned int *)(param_1 + 4) = 2;
        *(unsigned int *)(param_1 + 8) = 0;
      }
    }
    else {
      temp_v4 = param_1 + 0x198;
      temp_v0 = FUN_002bf818(temp_v4);
      if (temp_v0 != 0) {
        *(unsigned int *)(param_1 + 8) = 2;
      }
      temp_v2 = FUN_002bed98(temp_v4);
      temp_v3 = FUN_002beda4(temp_v4);
      FUN_00231240(param_1 + 0x164,temp_v3,temp_v2);
      if (*(char *)(param_1 + 0x8d2) == '\0') {
        temp_v0 = 0;
        do {
          if (temp_v0 <= *(int *)(param_1 + 0x14)) {
            FUN_002bf818(param_1 + temp_v0 * 0x8c + 0x618);
          }
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < 5);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        return;
      }
    }
  }
  else {
    FUN_00231240(param_1 + 0x164,0xfffffec0);
    if (DAT_0049fb6d != '\0') {
      DAT_0049fb6d = '\0';
      temp_v0 = FUN_002c09d0(0x16);
      if (temp_v0 != 0) {
        FUN_0025a0e0();
      }
      else {
        FUN_00289880();
      }
    }
    FUN_00275f00();
    FUN_00233240(param_1 + 0x178,0);
    *(unsigned int *)(param_1 + 0x10) = (*(unsigned int *)(param_1 + 0x10) & 0xfffffffd) | 0x1000000;
    temp_v0 = param_1 + 0x162;
    *(unsigned int *)(param_1 + 8) = 1;
    temp_v4 = NaviMain_GetCurrentMap();
    temp_v1 = NaviMain_GetPosX(temp_v0);
    if (temp_v4 != temp_v1) {
      temp_v4 = NaviMain_GetPosX(temp_v0);
      FUN_0039f838(temp_v0,temp_v4);
      FUN_0039f860(temp_v0,0);
      *(unsigned int *)(param_1 + 0x18) = 0;
      if (temp_v4 >= 100) {
        *(unsigned char *)(param_1 + 0xc) = 0;
        FUN_002316e8(param_1,temp_v4);
        return;
      }
      *(unsigned char *)(param_1 + 0xc) = 1;
      FUN_0023150c(param_1,temp_v4);
      return;
    }
  }
  return;
}

} /* extern "C" */
