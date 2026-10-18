/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003adec8` (_code @ 0x3adec8, 0x36c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_7: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_7_stack;

extern int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_0026330c. */
/* Supplied declaration required: FUN_00296154. */
/* Supplied declaration required: FUN_00296690. */
/* Supplied declaration required: FUN_002b90e0. */
/* Supplied declaration required: FUN_002bf030. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
extern unsigned int FUN_002c5218(void);
extern int FUN_002c615c(int, unsigned int);


void FUN_003adec8(unsigned int param_1,int param_2,int param_3,unsigned int param_4,int param_5,
                 int param_6,int param_7)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  float in_s0;
  float in_s1;
  unsigned int in_s2;
  float temp_v6;
  float temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  
  temp_v4 = DAT_00439ca8;
  temp_v6 = in_s0;
  temp_v7 = in_s1;
  temp_v8 = in_s2;
  if (param_7 != 0) {
    temp_v0 = FUN_002c5218();
    FUN_0026330c(&temp_v6,0,temp_v0);
  }
  temp_v4 = temp_v4 + param_2 * 0x400;
  temp_v9 = temp_v4 + 0x8000;
  *(unsigned char *)(temp_v4 + 0x832c) = 1;
  *(char *)(temp_v4 + 0x832d) = (char)param_7;
  *(int *)(temp_v4 + 0x8344) = param_3;
  temp_v3 = 10000;
  *(float *)(temp_v4 + 0x8320) = temp_v6;
  temp_v2 = 4;
  *(float *)(temp_v4 + 0x8324) = temp_v7;
  *(unsigned char *)(temp_v4 + 0x8348) = 0;
  *(unsigned int *)(temp_v4 + 0x8328) = temp_v8;
  do {
    *(unsigned int *)(temp_v4 + temp_v2 * 4 + 0x8330) = 0;
    temp_v5 = temp_v4 + temp_v2 * 0x8c + 0x7f4c;
    FUN_002bf030(temp_v5,3);
    FUN_00296154(temp_v5,0x15,temp_v2 + 0x41a);
    FUN_00296690(temp_v5,(int)(short)(int)temp_v6,(int)(short)(int)temp_v7);
    if (param_5 == 0) {
      if (param_6 != 0) {
        temp_v1 = FUN_002c615c(param_3,temp_v3);
        temp_v1 = temp_v1 + 0x7f8;
      }
      else {
        temp_v1 = FUN_002c615c(param_3,temp_v3);
        temp_v1 = temp_v1 + 0x7e4;
      }
    }
    else if (param_6 != 0) {
      temp_v1 = FUN_002c615c(param_3,temp_v3);
      temp_v1 = temp_v1 + 0x802;
    }
    else {
      temp_v1 = FUN_002c615c(param_3,temp_v3);
      temp_v1 = temp_v1 + 0x7ee;
    }
    FUN_002b90e0(temp_v5,temp_v1);
    temp_v5 = FUN_002c615c(param_3,temp_v3);
    temp_v2 = temp_v2 - 1;
    param_3 = param_3 - temp_v5 * temp_v3;
    temp_v3 = temp_v3 / 10;
  } while (-1 < temp_v2);
  temp_v2 = temp_v4 + 0x8208;
  FUN_002bf030(temp_v2,9);
  temp_v4 = temp_v4 + 0x8294;
  FUN_002bf030(temp_v4,9);
  if (param_5 == 0) {
    if (param_6 != 0) {
      if (param_6 == 1) {
        FUN_002b90e0(temp_v2,0x420);
        FUN_002b90e0(temp_v4,0x3eb);
      }
    }
    else {
      FUN_002b90e0(temp_v2,1000);
      FUN_002b90e0(temp_v4,0x3ea);
    }
  }
  else if (param_6 != 0) {
    if (param_6 == 1) {
      FUN_002b90e0(temp_v2,0x421);
      FUN_002b90e0(temp_v4,0x3ed);
    }
  }
  else {
    FUN_002b90e0(temp_v2,0x3e9);
    FUN_002b90e0(temp_v4,0x3ec);
  }
  FUN_00296154(temp_v2,0x15,0x419);
  FUN_00296154(temp_v4,0x15,0x418);
  temp_v5 = FUN_002bf6d0(0x15,*(unsigned int *)(temp_v9 + 0x20c));
  FUN_00296690(temp_v2,-((*(unsigned short *)(temp_v5 + 4) & 0xffff7fff) >> 1),
               -((*(unsigned short *)(temp_v5 + 6) & 0xffff7fff) >> 1));
  FUN_00296690(temp_v2,(int)(short)(int)temp_v6,(int)(short)(int)temp_v7);
  temp_v2 = FUN_002bf6d0(0x15,*(unsigned int *)(temp_v9 + 0x298));
  FUN_00296690(temp_v4,-((*(unsigned short *)(temp_v2 + 4) & 0xffff7fff) >> 1),
               -((*(unsigned short *)(temp_v2 + 6) & 0xffff7fff) >> 1));
  FUN_00296690(temp_v4,(int)(short)(int)temp_v6,(int)(short)(int)temp_v7);
  return;
}
