/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fd508` (_code @ 0x4fd508, 0x454 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004102d8(...);
int FUN_004fb43c(...);
int VectorSignedToFloat(...);

/* stack frame of param_5: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_5_stack;

extern int g_btlActionReflect; /* 0x5712f0 */
extern unsigned int DAT_00573c40; /* 0x573c40 */
extern unsigned int DAT_00573c44; /* 0x573c44 */
extern unsigned int DAT_00573c48; /* 0x573c48 */
extern unsigned int DAT_00573c4c; /* 0x573c4c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int btlGetMainState(void);
extern int btlScriptUnitHasFlags(int);
/* Supplied declaration required: FUN_004102d8. */
/* Supplied declaration required: FUN_004fb43c. */


unsigned int
FUN_004fd508(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int in_fpscr;
  float temp_v8;
  float temp_v9;
  
  temp_v4 = 0;
  temp_v3 = 0;
  temp_v1 = btlGetMainState();
  temp_v5 = (unsigned int)((DAT_00573c40 & *(unsigned int *)(temp_v1 + 0x45a0)) != 0 ||
                (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_00573c44) != 0);
  temp_v1 = btlGetMainState();
  temp_v6 = (int)*(short *)(temp_v1 + 0x4c70);
  temp_v7 = (int)*(short *)(temp_v1 + 0x4c72);
  temp_v0 = temp_v7 <= temp_v6;
  switch(param_3) {
  case 0:
  case 4:
  case 9:
  case 0xc:
  case 0xd:
    if (temp_v0) {
      temp_v3 = 0xffffffff;
      temp_v4 = temp_v3;
      break;
    }
    temp_v3 = 0xffffffff;
    break;
  case 1:
  case 0xb:
    if (temp_v0) {
      temp_v4 = 0xffffffff;
    }
    else {
      temp_v3 = 0xffffffff;
    }
    break;
  case 2:
  case 3:
    temp_v0 = temp_v6 != 0;
    if (temp_v0) {
      temp_v4 = 0xffffffff;
    }
    else {
      temp_v3 = 0xffffffff;
    }
    break;
  case 5:
  case 6:
    if (!temp_v0) {
      temp_v7 = temp_v7 - temp_v5;
      temp_v2 = temp_v7 - 2;
      if (temp_v2 < temp_v6) {
        temp_v7 = temp_v7 - temp_v6;
      }
      temp_v3 = -temp_v5 - 2;
      if (temp_v2 < temp_v6) {
        temp_v4 = temp_v7 - 2;
      }
    }
    else {
      temp_v3 = -temp_v5 - 2;
      temp_v4 = temp_v3;
    }
    temp_v7 = btlScriptUnitHasFlags(temp_v1);
    if ((temp_v7 != 0) ||
       (temp_v5 = temp_v4,
       (DAT_00573c48 & *(unsigned int *)(temp_v1 + 0x45a0)) != 0 ||
       (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_00573c4c) != 0)) break;
    FUN_004fb43c(param_1,param_2,0x1000216,0,0,0,0);
    temp_v4 = temp_v5;
    break;
  case 7:
  case 8:
  case 0xe:
  case 0xf:
    temp_v3 = 0xfffffff6;
    temp_v7 = btlScriptUnitHasFlags(temp_v1);
    temp_v4 = 0xfffffff6;
    if ((temp_v7 != 0) ||
       (temp_v5 = temp_v3,
       (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_00573c4c) != 0 ||
       (*(unsigned int *)(temp_v1 + 0x45a0) & DAT_00573c48) != 0)) break;
    FUN_004fb43c(param_1,param_2,0x1000216,0,0,0,0);
    temp_v4 = temp_v5;
    break;
  case 0x10:
    temp_v3 = 1;
    break;
  case 0x11:
    temp_v3 = 2;
    break;
  case 0x12:
    temp_v3 = 3;
    break;
  case 0x13:
    temp_v3 = 4;
    break;
  case 0x14:
    if (temp_v0) {
      temp_v4 = 0xffffffff;
    }
    temp_v3 = 0xffffffff;
    temp_v7 = btlScriptUnitHasFlags(temp_v1);
    if ((temp_v7 != 0) ||
       (temp_v5 = temp_v4,
       (DAT_00573c48 & *(unsigned int *)(temp_v1 + 0x45a0)) != 0 ||
       (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_00573c4c) != 0)) break;
    FUN_004fb43c(param_1,param_2,0x1000216,0,0,0,0);
    temp_v4 = temp_v5;
    break;
  case 0x15:
    if (temp_v0) {
      temp_v4 = 0xfffffffe;
    }
    else if (temp_v7 - 2 < temp_v6) {
      temp_v4 = (temp_v7 - temp_v6) - 2;
    }
    temp_v3 = 0xfffffffe;
    temp_v7 = btlScriptUnitHasFlags(temp_v1);
    if ((temp_v7 != 0) ||
       (temp_v5 = temp_v4,
       (*(unsigned int *)(temp_v1 + 0x45a0) & DAT_00573c48) != 0 ||
       (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_00573c4c) != 0)) break;
    FUN_004fb43c(param_1,param_2,0x1000216,0,0,0,0);
    temp_v4 = temp_v5;
    break;
  case 0x16:
    if (temp_v0) {
      temp_v4 = 0xfffffffd;
    }
    else if (temp_v7 - 3 < temp_v6) {
      temp_v4 = (temp_v7 - temp_v6) - 3;
    }
    temp_v3 = 0xfffffffd;
    temp_v7 = btlScriptUnitHasFlags(temp_v1);
    if ((temp_v7 != 0) ||
       (temp_v5 = temp_v4,
       (*(unsigned int *)(temp_v1 + 0x45a0) & DAT_00573c48) != 0 ||
       (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_00573c4c) != 0)) break;
    FUN_004fb43c(param_1,param_2,0x1000216,0,0,0,0);
    temp_v4 = temp_v5;
    break;
  case 0x17:
    if (temp_v0) {
      temp_v4 = 0xfffffffc;
    }
    else if (temp_v7 - 4 < temp_v6) {
      temp_v4 = (temp_v7 - temp_v6) - 4;
    }
    temp_v3 = 0xfffffffc;
    temp_v7 = btlScriptUnitHasFlags(temp_v1);
    if ((temp_v7 != 0) ||
       (temp_v5 = temp_v4,
       (*(unsigned int *)(temp_v1 + 0x45a4) & DAT_00573c4c) != 0 ||
       (*(unsigned int *)(temp_v1 + 0x45a0) & DAT_00573c48) != 0)) break;
    FUN_004fb43c(param_1,param_2,0x1000216,0,0,0,0);
    temp_v4 = temp_v5;
    break;
  case 0x18:
    temp_v3 = (unsigned int)temp_v0;
    temp_v4 = 1;
    break;
  case 0x19:
    temp_v4 = 8;
    if (temp_v0) {
      temp_v3 = 8;
    }
  }
  if ((int)((int)*(short *)(temp_v1 + 0x4c70) + temp_v4) >= 10) {
    temp_v4 = 9 - (int)*(short *)(temp_v1 + 0x4c70);
  }
  if ((int)((int)*(short *)(temp_v1 + 0x4c72) + temp_v3) >= 10) {
    temp_v3 = 9 - (int)*(short *)(temp_v1 + 0x4c72);
  }
  temp_v8 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v9 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = g_btlActionReflect;
  FUN_004102d8(g_btlActionReflect,(int)(short)param_1,0,param_2);
  *(unsigned char *)(temp_v1 + 4) = 0x27;
  *(short *)(temp_v1 + 0x24) = (short)(int)temp_v8;
  *(short *)(temp_v1 + 0x26) = (short)(int)temp_v9;
  *(unsigned int *)(temp_v1 + 0x28) = param_5;
  return 1;
}

} /* extern "C" */
