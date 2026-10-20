/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b7b4c` (_code @ 0x3b7b4c, 0x344 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184964(...);
int FUN_002e6354(int, int);
int rt_memcpy_w(int [24], unsigned char *, int);

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int sp1A4; /* 0x1a4: local_1a4 */
    unsigned int sp1A8; /* 0x1a8: local_1a8 */
    unsigned int sp1AC; /* 0x1ac: local_1ac */
    unsigned int sp1B0; /* 0x1b0: local_1b0 */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
    unsigned int sp1BC; /* 0x1bc: local_1bc */
} param_1_stack;

extern unsigned char DAT_00530df0; /* 0x530df0 */

/* Supplied declaration required: FUN_00184964. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_003b7b4c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  char temp_v9 [12];
  int temp_v10 [54];
  int temp_v11 [6];
  int temp_v12 [6];
  int aiStack_a8 [24];
  int aiStack_48 [9];
  
  temp_v6 = param_1 + 0x1078;
  rt_memcpy_w(aiStack_a8,&DAT_00530df0,0x60);
  temp_v9[0] = '\0';
  temp_v9[1] = '\0';
  temp_v9[2] = '\0';
  temp_v9[3] = '\0';
  temp_v9[4] = '\0';
  temp_v9[5] = '\0';
  temp_v9[6] = '\0';
  temp_v9[7] = '\0';
  temp_v5 = 0;
  do {
    temp_v0 = FUN_00184964(2,3);
    aiStack_48[temp_v5] = temp_v0;
    temp_v0 = 0;
    temp_v9[0] = '\0';
    temp_v9[1] = '\0';
    temp_v9[2] = '\0';
    temp_v9[3] = '\0';
    temp_v9[4] = '\0';
    temp_v9[5] = '\0';
    temp_v9[6] = '\0';
    temp_v9[7] = '\0';
    do {
      temp_v1 = FUN_00184964(0,5);
      if (temp_v9[temp_v1] == '\0') {
        temp_v9[temp_v1] = '\x01';
        temp_v11[temp_v0] = temp_v1;
        temp_v0 = temp_v0 + 1;
      }
    } while (temp_v0 < 6);
    temp_v0 = 0;
    temp_v9[0] = '\0';
    temp_v9[1] = '\0';
    temp_v9[2] = '\0';
    temp_v9[3] = '\0';
    temp_v9[4] = '\0';
    temp_v9[5] = '\0';
    temp_v9[6] = '\0';
    temp_v9[7] = '\0';
    do {
      temp_v1 = FUN_00184964(0,9);
      if (temp_v9[temp_v1] == '\0') {
        temp_v9[temp_v1] = '\x01';
        temp_v12[temp_v0] = temp_v1;
        temp_v0 = temp_v0 + 1;
      }
    } while (temp_v0 < 6);
    temp_v10[temp_v5 * 6 + 4] = 0;
    temp_v10[temp_v5 * 6 + 5] = 0;
    temp_v10[temp_v5 * 6 + 6] = 0;
    temp_v10[temp_v5 * 6 + 7] = 0;
    temp_v10[temp_v5 * 6 + 8] = 0;
    temp_v10[temp_v5 * 6 + 9] = 0;
    temp_v10[temp_v5 * 6 + 0x1c] = 0;
    temp_v10[temp_v5 * 6 + 0x1d] = 0;
    temp_v10[temp_v5 * 6 + 0x1e] = 0;
    temp_v10[temp_v5 * 6 + 0x1f] = 0;
    temp_v10[temp_v5 * 6 + 0x20] = 0;
    temp_v10[temp_v5 * 6 + 0x21] = 0;
    temp_v0 = temp_v5 + 1;
    temp_v10[temp_v5 * 6 + 4] = temp_v11[0];
    temp_v10[temp_v5 * 6 + 5] = temp_v11[1];
    temp_v10[temp_v5 * 6 + 6] = temp_v11[2];
    temp_v10[temp_v5 * 6 + 7] = temp_v11[3];
    temp_v10[temp_v5 * 6 + 8] = temp_v11[4];
    temp_v10[temp_v5 * 6 + 9] = temp_v11[5];
    temp_v10[temp_v5 * 6 + 0x1c] = temp_v12[0];
    temp_v10[temp_v5 * 6 + 0x1d] = temp_v12[1];
    temp_v10[temp_v5 * 6 + 0x1e] = temp_v12[2];
    temp_v10[temp_v5 * 6 + 0x1f] = temp_v12[3];
    temp_v10[temp_v5 * 6 + 0x20] = temp_v12[4];
    temp_v10[temp_v5 * 6 + 0x21] = temp_v12[5];
    temp_v5 = temp_v0;
  } while (temp_v0 < 4);
  temp_v10[0] = 0;
  temp_v10[1] = 0;
  temp_v10[2] = 0;
  temp_v10[3] = 0;
  FUN_002e6354(param_1 + 0x1198,0x60);
  FUN_002e6354(param_1 + 0x11f8,0x1e0);
  temp_v5 = 0;
  do {
    temp_v0 = aiStack_a8[temp_v5];
    temp_v1 = temp_v10[temp_v0 * 6 + temp_v10[temp_v0] + 0x1c];
    if (aiStack_48[temp_v0] >= temp_v10[temp_v0 * 6 + temp_v10[temp_v0] + 4]) {
      *(unsigned int *)(temp_v6 + temp_v5 * 4) = 1;
      temp_v2 = FUN_00184964(0,3);
      temp_v4 = *(int *)(temp_v6 + temp_v5 * 4);
      temp_v2 = temp_v2 + 0x7ed;
    }
    else {
      if (aiStack_48[temp_v0] + 1 >= temp_v10[temp_v0 * 6 + temp_v10[temp_v0] + 4]) {
        temp_v2 = 0x7f1;
        temp_v4 = 2;
      }
      else {
        temp_v4 = 0;
        temp_v2 = 2000;
      }
      *(int *)(temp_v6 + temp_v5 * 4) = temp_v4;
    }
    temp_v8 = temp_v6 + temp_v0 * 0x18;
    temp_v4 = temp_v8 + temp_v4 * 4;
    temp_v7 = temp_v6 + temp_v5 * 4;
    *(int *)(temp_v4 + 0x120) = *(int *)(temp_v4 + 0x120) + 1;
    *(int *)(temp_v7 + 0x60) = temp_v2;
    temp_v4 = *(int *)(temp_v6 + temp_v5 * 4);
    if (temp_v4 != 1) {
      if (temp_v4 != 2) {
        *(unsigned int *)(temp_v7 + 0xc0) = 0;
        *(unsigned int *)(temp_v6 + temp_v5 * 0x14 + 0x180) = 1;
      }
      else if (temp_v1 != 0) {
        if (temp_v1 != 9) {
          *(unsigned int *)(temp_v6 + temp_v5 * 0x14 + 0x180) = *(unsigned int *)(param_1 + 0x1410);
          *(unsigned int *)(temp_v7 + 0xc0) = 1;
        }
        else {
          *(unsigned int *)(temp_v6 + temp_v5 * 0x14 + 0x180) = *(unsigned int *)(param_1 + 0x140c);
          *(unsigned int *)(temp_v7 + 0xc0) = 2;
        }
      }
      else {
        *(unsigned int *)(temp_v6 + temp_v5 * 0x14 + 0x180) = *(unsigned int *)(param_1 + 0x1408);
        *(unsigned int *)(temp_v7 + 0xc0) = 0;
      }
    }
    else if (temp_v1 != 0) {
      if (temp_v1 != 9) {
        temp_v3 = FUN_00184964(*(unsigned int *)(param_1 + 0x1400),*(unsigned int *)(param_1 + 0x1404));
        *(unsigned int *)(temp_v6 + temp_v5 * 0x14 + 0x180) = temp_v3;
        *(unsigned int *)(temp_v7 + 0xc0) = 1;
      }
      else {
        *(unsigned int *)(temp_v6 + temp_v5 * 0x14 + 0x180) = *(unsigned int *)(param_1 + 0x13fc);
        *(unsigned int *)(temp_v7 + 0xc0) = 2;
      }
    }
    else {
      *(unsigned int *)(temp_v6 + temp_v5 * 0x14 + 0x180) = *(unsigned int *)(param_1 + 0x13f8);
      *(unsigned int *)(temp_v7 + 0xc0) = 0;
    }
    temp_v8 = temp_v8 + *(int *)(temp_v7 + 0xc0) * 4;
    *(int *)(temp_v8 + 300) = *(int *)(temp_v8 + 300) + 1;
    temp_v3 = FUN_00184964(*(unsigned int *)(param_1 + 0x13dc),*(unsigned int *)(param_1 + 0x13d8));
    temp_v1 = temp_v6 + temp_v5 * 0x14;
    *(unsigned int *)(temp_v1 + 0x184) = temp_v3;
    temp_v3 = FUN_00184964(*(unsigned int *)(param_1 + 0x13e4),*(unsigned int *)(param_1 + 0x13e0));
    *(unsigned int *)(temp_v1 + 0x188) = temp_v3;
    temp_v5 = temp_v5 + 1;
    temp_v10[temp_v0] = temp_v10[temp_v0] + 1;
  } while (temp_v5 < 0x18);
  return;
}

} /* extern "C" */
