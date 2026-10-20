/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00477d10` (_code @ 0x477d10, 0x440 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(...);
int FUN_00182084(void);
int FUN_00183318(...);
int FUN_00183f58(...);
int FUN_0019d36c(void);
int FUN_0019de98(...);
int FUN_002bf4f4(int);
int FUN_003423cc(int);
int FUN_004cfe4c(unsigned int *);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern int g_aocMain; /* 0x570260 */

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00182084. */
/* Supplied declaration required: FUN_00183318. */
/* Supplied declaration required: FUN_00183f58. */
/* Supplied declaration required: FUN_0019d36c. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_002bf4f4. */
/* Supplied declaration required: FUN_003423cc. */
extern int FUN_00473d40(int, unsigned int);
extern int FUN_0047d7f0(int);
/* Supplied declaration required: FUN_004cfe4c. */


void FUN_00477d10(unsigned int *param_1,unsigned int param_2,int param_3)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  FUN_003423cc(0);
  switch(param_2) {
  case 0:
    *param_1 = *param_1 | 0x100000;
    sysPlaySe(0xcb);
    temp_v2 = 0;
    do {
      FUN_0019d36c();
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 6);
    FUN_00182084();
    return;
  case 1:
    *param_1 = *param_1 | 0x100000;
    if (param_3 != 0) {
      sysPlaySe(0xcc);
      temp_v2 = 0;
      do {
        FUN_0019d36c();
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 6);
      FUN_00182084();
    }
    FUN_00183f58(0,0x11,0,1);
    FUN_00183f58(1,0);
    FUN_00183f58(2,0xb,0x4b,1);
    FUN_00183f58(3,0,0,1);
    FUN_00183f58(4,0x10,0x4f,1);
    FUN_00183f58(5,0,0,1);
    return;
  case 2:
    *param_1 = *param_1 | 0x100000;
    temp_v2 = g_aocMain;
    FUN_004cfe4c(param_1 + 0x90);
    if (param_3 != 0) {
      sysPlaySe(0xcd);
      temp_v1 = 0;
      do {
        FUN_0019d36c();
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 6);
      FUN_00182084();
    }
    FUN_00183f58(0,10,0x4a,1);
    FUN_00183f58(1,0);
    FUN_00183f58(2,0xb,0x4b,1);
    FUN_00183f58(3,0,0,1);
    temp_v0 = FUN_004cfe4c(param_1 + 0x90);
    temp_v1 = FUN_00473d40(temp_v2,temp_v0);
    if (temp_v1 != 0) {
      temp_v1 = FUN_004cfe4c(param_1 + 0x90);
      if (*(char *)(*(int *)(temp_v2 + 0x678) + temp_v1 * 0x9c8 + 0x9b3) != '\0') {
        FUN_00183f58(4,0xf,0x4f,0);
        FUN_00183f58(5,0,0);
        FUN_002bf4f4(1);
        FUN_0019de98(param_1 + 0x44c,0xf4f4f4ff);
        return;
      }
      temp_v1 = FUN_004cfe4c(param_1 + 0x90);
      temp_v2 = FUN_0047d7f0(*(int *)(temp_v2 + 0x678) + temp_v1 * 0x9c8);
      if (temp_v2 == 0) {
        FUN_00183f58(4,0xc,0x4c,0);
        FUN_00183f58(5,0,0);
        FUN_002bf4f4(1);
        FUN_0019de98(param_1 + 0x44c,0xf4f4f4ff);
        return;
      }
      if (temp_v2 == 1) {
        FUN_00183f58(4,0xd,0x4d,0);
        FUN_00183f58(5,0,0);
        FUN_002bf4f4(1);
        FUN_0019de98(param_1 + 0x44c,0xf4f4f4ff);
        return;
      }
      if (temp_v2 == 2) {
        FUN_00183f58(4,0xe,0x4e,0);
        FUN_00183f58(5,0,0);
        FUN_002bf4f4(1);
        FUN_0019de98(param_1 + 0x44c,0xf4f4f4ff);
        return;
      }
      if (temp_v2 != 3) {
        FUN_00183f58(5,0,0);
        FUN_002bf4f4(1);
        FUN_0019de98(param_1 + 0x44c,0xf4f4f4ff);
        return;
      }
    }
    FUN_00183f58(4,0x11,0);
    FUN_00183f58(5,0,0);
    FUN_002bf4f4(1);
    FUN_0019de98(param_1 + 0x44c,0xf4f4f4ff);
    return;
  case 3:
    *param_1 = *param_1 | 0x100000;
    if (param_3 != 0) {
      sysPlaySe(0xcc);
      temp_v2 = 0;
      do {
        FUN_0019d36c();
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 6);
      FUN_00182084();
    }
    FUN_00183f58(0,0x11,0,1);
    FUN_00183f58(1,0);
    FUN_00183f58(2,0x11,0,1);
    FUN_00183f58(3,0,0,1);
    FUN_00183f58(4,0x10,0x4f,1);
    FUN_00183f58(5,0,0,1);
    FUN_002bf4f4(0);
    FUN_0019de98(0,0xf4f4f4ff);
    return;
  case 4:
    *param_1 = *param_1 | 0x100000;
    if (param_3 != 0) {
      sysPlaySe(0xd0);
      return;
    }
    break;
  case 0xffffffff:
    if ((*param_1 & 0x100000) != 0) {
      *param_1 = *param_1 & 0xffefffff;
      FUN_00183318(0);
      temp_v2 = 0;
      do {
        FUN_0019d36c();
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 6);
      return;
    }
  }
  return;
}

} /* extern "C" */
