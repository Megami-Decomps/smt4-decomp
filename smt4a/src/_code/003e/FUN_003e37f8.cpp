/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e37f8` (_code @ 0x3e37f8, 0x218 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int eventQueueAddUniqueIfValid(int);
int sysPlaySe(int);
int FUN_0019de98(int, unsigned int);
int FUN_00215bd0(void);
int FUN_0022e774(void);
int FUN_0023b45c(int);
int scrScriptProcessStartEntry(unsigned int);
int FUN_00285774(void);
int FUN_002a7288(void);
int FUN_002c8538(int);
int FUN_002c85b0(int);
int FUN_00333dc8(int);
int FUN_003343f0(int);
int FUN_003e3a20(int, int);

/* Supplied declaration required: eventQueueAddUniqueIfValid. */
extern int padButtonIsPressed(unsigned int);
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_00215bd0. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_0022e774. */
extern int FUN_0023b3d0(void);
/* Supplied declaration required: FUN_0023b45c. */
extern int FUN_0026c3a0(void);
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00285774. */
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_002a7288. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: FUN_00333dc8. */
/* Supplied declaration required: FUN_003343f0. */
extern int tableGroupFindEntryIndex(unsigned int, char *);
/* Supplied declaration required: FUN_003e3a20. */


void FUN_003e37f8(int param_1)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 != 4) {
    if (temp_v0 < 4) {
      if (temp_v0 != 0) {
        if (temp_v0 != 1) {
          if (temp_v0 != 2) {
            if (temp_v0 == 3) {
              temp_v1 = *(unsigned int *)(param_1 + 4);
              *(unsigned int *)(param_1 + 4) = 5;
              *(unsigned int *)(param_1 + 8) = 0;
              *(unsigned int *)(param_1 + 0xc) = temp_v1;
            }
          }
          else {
            temp_v0 = padButtonIsPressed(0);
            if (temp_v0 != 0) {
              eventQueueAddUniqueIfValid(0x100020e);
              FUN_003343f0(1);
              FUN_00333dc8(1);
              if (*(int *)(param_1 + 0xa4) <= *(int *)(param_1 + 0xa8)) {
                *(unsigned int *)(param_1 + 8) = 3;
                return;
              }
              temp_v0 = tableGroupFindEntryIndex(*(unsigned int *)(param_1 + 0x14),"npcShop_Few_HaveSkill");
              if (-1 < temp_v0) {
                scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x18));
              }
              sysPlaySe(0xa4);
              temp_v1 = 4;
              *(unsigned int *)(param_1 + 8) = temp_v1;
              return;
            }
          }
        }
        else {
          temp_v0 = FUN_0023b3d0();
          if (temp_v0 != 0) {
            FUN_003e3a20(param_1,param_1 + *(int *)(param_1 + 0xa0) * 0x24 + 0x20);
            FUN_00285774();
            temp_v1 = 2;
            *(unsigned int *)(param_1 + 8) = temp_v1;
            return;
          }
        }
        return;
      }
      FUN_002c85b0(0xd);
      FUN_002c8538(1);
      FUN_00215bd0();
      sysPlaySe(0x119);
      temp_v1 = 1;
    }
    else if (temp_v0 != 10) {
      if (temp_v0 != 0xb) {
        if (temp_v0 != 99) {
          return;
        }
        temp_v1 = *(unsigned int *)(param_1 + 4);
        *(unsigned int *)(param_1 + 4) = 3;
        *(unsigned int *)(param_1 + 8) = 0;
        *(unsigned int *)(param_1 + 0xc) = temp_v1;
        return;
      }
      temp_v0 = FUN_0026c3a0();
      if (temp_v0 == 0) {
        return;
      }
      FUN_003343f0(0);
      FUN_00333dc8(0);
      FUN_002c8538(0);
      FUN_0019de98(0,0xf4f4f4ff);
      temp_v1 = 99;
    }
    else {
      FUN_0022e774();
      FUN_0023b45c(0);
      FUN_002a7288();
      temp_v1 = 0xb;
    }
  }
  else {
    temp_v0 = FUN_00224880(*(unsigned int *)(param_1 + 0x18));
    if (temp_v0 != 2) {
      return;
    }
    temp_v0 = FUN_002a4b74();
    if ((temp_v0 != -1) && (temp_v0 != 1)) {
      *(unsigned int *)(param_1 + 8) = 3;
      return;
    }
    temp_v1 = 10;
  }
  *(unsigned int *)(param_1 + 8) = temp_v1;
  return;
}

} /* extern "C" */
