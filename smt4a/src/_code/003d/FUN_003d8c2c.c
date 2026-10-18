/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d8c2c` (_code @ 0x3d8c2c, 0x284 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern int FUN_001d7c80(); /* 0x1d7c80 */
extern int FUN_001db9f8(); /* 0x1db9f8 */
extern int FUN_001df770(); /* 0x1df770 */
extern unsigned char DAT_0053f85e; /* 0x53f85e */

/* Supplied declaration required: FUN_001d7c50. */
/* Supplied declaration required: FUN_001d7c80. */
/* Supplied declaration required: FUN_001db9c8. */
/* Supplied declaration required: FUN_001db9f8. */
/* Supplied declaration required: FUN_001df740. */


unsigned int FUN_003d8c2c(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  romwright_code *pcVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int uStack_28;
  unsigned int temp_v9;
  unsigned char *puStack_20;
  
  if (param_1[0xd] == 0) {
    return 0xffffffff;
  }
  if (param_1[8] != param_1[9]) {
    return 0xfffffffd;
  }
  temp_v2 = param_1[10];
  if (((temp_v2 - 0xcU >= 0x25) || (temp_v0 = param_1[0xb], temp_v0 < 0xc)) || (temp_v0 >= 0x31)) {
    return 0xfffffffc;
  }
  temp_v3 = 0;
  uStack_28 = (unsigned int)(unsigned char)"ssl:C"[temp_v2];
  temp_v9 = (unsigned int)*(unsigned char *)(temp_v2 + 0x53f82d);
  temp_v4 = (unsigned int)(unsigned char)"ssl:C"[temp_v0];
  temp_v0 = (unsigned int)*(unsigned char *)(temp_v0 + 0x53f82d);
  puStack_20 = &DAT_0053f85e;
  if (((param_1[0xc] & 1) != 0) && (uStack_28 != 0 && temp_v9 != 0)) {
    temp_v5 = *param_1;
    temp_v3 = 1;
    temp_v6 = param_1[3];
    temp_v7 = param_1[6];
    temp_v8 = param_1[7];
    temp_v1 = param_1[8];
    if (temp_v1 < 0x101) {
      if (param_1[0xd] == 1) {
        FUN_001db9c8(&temp_v5);
      }
    }
    else if (temp_v1 < 0x201) {
      if (param_1[0xd] == 1) {
        FUN_001df740(&temp_v5);
      }
    }
    else {
      if (temp_v1 >= 0x401) {
        return 0xfffffffb;
      }
      if (param_1[0xd] == 1) {
        FUN_001d7c50(&temp_v5);
      }
    }
  }
  if (((param_1[0xc] & 2) == 0 || temp_v4 == 0) || temp_v0 == 0) {
    return temp_v3;
  }
  temp_v5 = param_1[1];
  temp_v3 = temp_v3 | 2;
  temp_v6 = param_1[4];
  temp_v7 = (unsigned int)param_1[6] >> 1;
  temp_v8 = (unsigned int)param_1[7] >> 1;
  puStack_20 = &DAT_0053f85e;
  temp_v1 = param_1[8];
  uStack_28 = temp_v4;
  temp_v9 = temp_v0;
  if (temp_v1 < 0x101) {
    puStack_20 = &DAT_0053f85e;
    if (param_1[0xd] == 1) {
      FUN_001db9f8(&temp_v5);
    }
  }
  else if (temp_v1 < 0x201) {
    if (param_1[0xd] == 1) {
      pcVar3 = FUN_001df770;
      puStack_20 = &DAT_0053f85e;
      (*pcVar3)(&temp_v5);
    }
  }
  else {
    if (temp_v1 >= 0x401) {
      return 0xfffffffb;
    }
    if (param_1[0xd] == 1) {
      pcVar3 = FUN_001d7c80;
      puStack_20 = &DAT_0053f85e;
      (*pcVar3)(&temp_v5);
    }
  }
  temp_v5 = param_1[2];
  temp_v6 = param_1[5];
  temp_v0 = param_1[8];
  if (temp_v0 < 0x101) {
    if (param_1[0xd] != 1) {
      return temp_v3;
    }
    pcVar3 = FUN_001db9f8;
  }
  else {
    if (temp_v0 >= 0x201) {
      if (temp_v0 >= 0x401) {
        return 0xfffffffb;
      }
      if (param_1[0xd] != 1) {
        return temp_v3;
      }
      FUN_001d7c80(&temp_v5);
      return temp_v3;
    }
    if (param_1[0xd] != 1) {
      return temp_v3;
    }
    pcVar3 = FUN_001df770;
  }
  (*pcVar3)(&temp_v5);
  return temp_v3;
}
