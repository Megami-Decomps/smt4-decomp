/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00169b30` (_code @ 0x169b30, 0x250 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184964(...);
int FUN_00184b80(int);
int SBORROW4(int, int);
int rt_memcpy_w(int [27], unsigned char *, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA0; /* 0xa0: local_a0 */
} param_2_stack;

extern unsigned char DAT_00530e50; /* 0x530e50 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00184964. */
/* Supplied declaration required: FUN_00184b80. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00169b30(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned char temp_v14;
  int aiStack_90 [27];
  
  temp_v8 = param_1 + 0x1078;
  rt_memcpy_w(aiStack_90,&DAT_00530e50,0x60);
  temp_v10 = temp_v8 + param_2 * 4;
  temp_v0 = *(int *)(temp_v10 + 0xc0);
  temp_v13 = *(int *)(temp_v8 + param_2 * 4);
  temp_v4 = *(int *)(param_1 + 0x11a0) + *(int *)(param_1 + 0x11b8) + *(int *)(param_1 + 0x11d0) +
          *(int *)(param_1 + 0x11e8);
  temp_v12 = *(int *)(param_1 + 0x11f4) +
           *(int *)(param_1 + 0x11ac) + *(int *)(param_1 + 0x11c4) + *(int *)(param_1 + 0x11dc);
  temp_v9 = temp_v8 + aiStack_90[param_2] * 0x18;
  temp_v5 = *(int *)(param_1 + 0x13f0);
  temp_v7 = *(int *)(temp_v9 + 0x124);
  temp_v14 = SBORROW4(temp_v7,temp_v5);
  temp_v2 = temp_v7 - temp_v5;
  temp_v6 = temp_v5;
  if (temp_v7 < temp_v5) {
    temp_v6 = *(int *)(param_1 + 0x13e8);
  }
  temp_v1 = *(int *)(param_1 + 0x119c) + *(int *)(param_1 + 0x11b4) + *(int *)(param_1 + 0x11cc) +
          *(int *)(param_1 + 0x11e4);
  temp_v11 = *(int *)(param_1 + 0x11ec) +
           *(int *)(param_1 + 0x11a4) + *(int *)(param_1 + 0x11bc) + *(int *)(param_1 + 0x11d4);
  if (temp_v7 < temp_v5) {
    temp_v14 = SBORROW4(temp_v1,temp_v6);
    temp_v2 = temp_v1 - temp_v6;
  }
  if (temp_v2 < 0 != temp_v14) {
    *(unsigned int *)(temp_v8 + param_2 * 4) = 1;
    *(int *)(temp_v9 + 0x124) = *(int *)(temp_v9 + 0x124) + 1;
    temp_v2 = FUN_00184964(0,3);
    temp_v2 = temp_v2 + 0x7ed;
  }
  else {
    temp_v6 = *(int *)(temp_v9 + 0x128);
    temp_v5 = *(int *)(param_1 + 0x13f4);
    temp_v14 = SBORROW4(temp_v6,temp_v5);
    temp_v2 = temp_v6 - temp_v5;
    if (temp_v6 < temp_v5) {
      temp_v14 = SBORROW4(temp_v4,*(int *)(param_1 + 0x13ec));
      temp_v2 = temp_v4 - *(int *)(param_1 + 0x13ec);
    }
    if (temp_v2 < 0 != temp_v14) {
      *(unsigned int *)(temp_v8 + param_2 * 4) = 2;
      temp_v2 = 0x7f1;
      *(int *)(temp_v9 + 0x128) = *(int *)(temp_v9 + 0x128) + 1;
    }
    else {
      *(unsigned int *)(temp_v8 + param_2 * 4) = 0;
      temp_v2 = 2000;
      *(int *)(temp_v9 + 0x120) = *(int *)(temp_v9 + 0x120) + 1;
    }
  }
  temp_v6 = temp_v9 + temp_v13 * 4;
  *(int *)(temp_v6 + 0x120) = *(int *)(temp_v6 + 0x120) - 1;
  *(int *)(temp_v10 + 0x60) = temp_v2;
  FUN_00184b80(param_1 + param_2 * 0x8c + 0x54);
  temp_v6 = *(int *)(temp_v9 + 300);
  temp_v2 = temp_v6;
  if (temp_v6 < 1) {
    temp_v2 = temp_v11 - 2;
  }
  temp_v4 = param_1 + 0x1078 + param_2 * 0x14;
  if (temp_v2 < 0 != (temp_v6 < 1 && SBORROW4(temp_v11,2))) {
    temp_v2 = 0;
    *(unsigned int *)(temp_v4 + 0x180) = *(unsigned int *)(param_1 + 0x13f8);
    *(unsigned int *)(temp_v10 + 0xc0) = 0;
  }
  else {
    temp_v6 = *(int *)(temp_v9 + 0x134);
    temp_v5 = *(int *)(temp_v8 + param_2 * 4);
    temp_v2 = temp_v6;
    if (temp_v6 < 1) {
      temp_v2 = temp_v12 - 2;
    }
    if (temp_v2 < 0 != (temp_v6 < 1 && SBORROW4(temp_v12,2))) {
      if (temp_v5 == 2) {
        temp_v3 = *(unsigned int *)(param_1 + 0x140c);
      }
      else {
        temp_v3 = *(unsigned int *)(param_1 + 0x13fc);
      }
      *(unsigned int *)(temp_v4 + 0x180) = temp_v3;
      temp_v2 = 2;
    }
    else {
      if (temp_v5 == 2) {
        temp_v3 = *(unsigned int *)(param_1 + 0x1410);
      }
      else {
        temp_v3 = FUN_00184964(*(unsigned int *)(param_1 + 0x1400),*(unsigned int *)(param_1 + 0x1404));
      }
      *(unsigned int *)(temp_v4 + 0x180) = temp_v3;
      temp_v2 = 1;
    }
    *(int *)(temp_v10 + 0xc0) = temp_v2;
  }
  temp_v2 = temp_v9 + temp_v2 * 4;
  temp_v9 = temp_v9 + temp_v0 * 4;
  *(int *)(temp_v2 + 300) = *(int *)(temp_v2 + 300) + 1;
  *(int *)(temp_v9 + 300) = *(int *)(temp_v9 + 300) - 1;
  temp_v3 = FUN_00184964(*(unsigned int *)(param_1 + 0x13dc),*(unsigned int *)(param_1 + 0x13d8));
  *(unsigned int *)(temp_v4 + 0x184) = temp_v3;
  temp_v3 = FUN_00184964(*(unsigned int *)(param_1 + 0x13e4),*(unsigned int *)(param_1 + 0x13e0));
  *(unsigned int *)(temp_v4 + 0x188) = temp_v3;
  *(unsigned int *)(temp_v4 + 0x18c) = 0;
  *(unsigned int *)(temp_v4 + 400) = 0;
  return;
}

} /* extern "C" */
