/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d8238` (_code @ 0x2d8238, 0x234 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00193c70(...);
int taskCreate(...);
int memClear(...);
int rt_memcpy_w(...);

typedef int romwright_code(...);
/* stack frame of param_11: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_11_stack;

extern int FUN_00192ac8(...); /* 0x192ac8 */
extern int FUN_001aa6a4(...); /* 0x1aa6a4 */
extern int FUN_001aad64(...); /* 0x1aad64 */

/* Supplied declaration required: FUN_00193c70. */
/* Supplied declaration required: taskCreate. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: rt_memcpy_w. */


romwright_code * FUN_002d8238(unsigned int param_1,unsigned int param_2,int param_3,unsigned char param_4,unsigned int *param_5,
                   unsigned int param_6,unsigned int param_7,unsigned char param_8,unsigned int param_9,
                   unsigned short param_10,unsigned int param_11)

{
/* irregular: 7 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  romwright_code *unaff_r4;
  long long temp_v2;
  
  temp_v0 = *(char *)((int)param_5 + 0x11);
  temp_v1 = 3;
  if ((((*param_5 & 2) != 0) || (temp_v0 == '\x03')) || (temp_v0 == '\x01')) {
    temp_v1 = 4;
  }
  if (temp_v0 != '\0') {
    if (temp_v0 != '\x01') {
      if (temp_v0 == '\x03') {
        unaff_r4 = FUN_00192ac8;
        taskCreate(FUN_00192ac8,0,0,FUN_001aa6a4,param_7,0x3f0,temp_v1,0,0);
      }
    }
    else {
      unaff_r4 = FUN_00192ac8;
      taskCreate(FUN_00192ac8,0,FUN_001aa6a4,0,param_7,0x3f0,temp_v1,0,0);
    }
  }
  else {
    unaff_r4 = FUN_00192ac8;
    taskCreate(FUN_00192ac8,FUN_001aad64,0,0,param_7,0x3f0,temp_v1,0,0);
  }
  if (unaff_r4 != (romwright_code *)0x0) {
    memClear(unaff_r4,0x3f0);
    temp_v2 = (unsigned long long)param_6 << 0x20;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x26c) = 0xbf000000;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x270) = 0xbf000000;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x274) = 0;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x280) = 0xff00ff;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x28c) = 0;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x284) = 0xbf000000;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x288) = 0x3f000000;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x298) = 0xff0000ff;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x29c) = 0x3f000000;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x2a0) = 0xbf000000;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x2a4) = 0;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x2b0) = 0xffff;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x2b4) = 0x3f000000;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x2b8) = 0x3f000000;
    *(unsigned int *)((unsigned char *)unaff_r4 + 700) = 0;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x2c8) = 0xffff00ff;
    ((unsigned char *)unaff_r4)[0x380] = (unsigned char)param_4;
    rt_memcpy_w(unaff_r4,param_2,0x134);
    *(unsigned int **)((unsigned char *)unaff_r4 + 0x354) = param_5;
    temp_v1 = (unsigned int)temp_v2;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x2d4) = temp_v1;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x2d8) = temp_v1;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x2dc) = temp_v1;
    if (((unsigned char *)unaff_r4)[0x380] != (unsigned char)0x0) {
      rt_memcpy_w((unsigned char *)unaff_r4 + 0x134,param_3,0xb0);
    }
    else {
      ((unsigned char *)unaff_r4)[0x1da] = *(unsigned char *)(param_3 + 0xa6);
      ((unsigned char *)unaff_r4)[0x1db] = *(unsigned char *)(param_3 + 0xa7);
      ((unsigned char *)unaff_r4)[0x1dc] = *(unsigned char *)(param_3 + 0xa8);
      ((unsigned char *)unaff_r4)[0x1dd] = *(unsigned char *)(param_3 + 0xa9);
    }
    temp_v1 = (unsigned int)((unsigned long long)temp_v2 >> 0x20);
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x268) = param_11;
    *(unsigned short *)((unsigned char *)unaff_r4 + 0x2d0) = 0;
    *(unsigned int *)((unsigned char *)unaff_r4 + 0x37c) = param_1;
    FUN_00193c70(unaff_r4);
    *(unsigned int *)((unsigned char *)unaff_r4 + 900) = temp_v1;
    ((unsigned char *)unaff_r4)[0x3e9] = (unsigned char)param_8;
    *(unsigned short *)((unsigned char *)unaff_r4 + 0x3ec) = param_10;
    *(unsigned short *)((unsigned char *)unaff_r4 + 0x3ea) = param_10;
  }
  return unaff_r4;
}

} /* extern "C" */
