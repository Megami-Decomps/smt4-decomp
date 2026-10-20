/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002299b0` (_code @ 0x2299b0, 0x2c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy_w(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_0057f69c; /* 0x57f69c */

extern int FUN_0018719c(unsigned int);
extern unsigned char FUN_00371f3c(void);
extern int FUN_003847e8(unsigned char);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_002299b0(unsigned short *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0057f69c;
  *(unsigned short *)(DAT_0057f69c + 0x4e) = *param_1;
  rt_memcpy_w(temp_v0,param_1 + 0x2a,0x12);
  *(unsigned char *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x12) = *(unsigned int *)(param_1 + 4);
  *(unsigned int *)(temp_v0 + 0x16) = *(unsigned int *)(param_1 + 6);
  *(unsigned int *)(temp_v0 + 0x1a) = *(unsigned int *)(param_1 + 8);
  *(unsigned short *)(temp_v0 + 0x1e) = param_1[10];
  *(unsigned int *)(temp_v0 + 0x20) = *(unsigned int *)(param_1 + 0x1c);
  *(unsigned short *)(temp_v0 + 0x24) = param_1[0x19];
  *(unsigned short *)(temp_v0 + 0x26) = param_1[0x1a];
  rt_memcpy_w(temp_v0 + 0x30,param_1 + 0x12,0xe);
  *(unsigned int *)(temp_v0 + 0x3e) = *(unsigned int *)(param_1 + 0xb);
  *(unsigned int *)(temp_v0 + 0x42) = *(unsigned int *)(param_1 + 0xd);
  *(unsigned int *)(temp_v0 + 0x46) = *(unsigned int *)(param_1 + 0xf);
  *(unsigned short *)(temp_v0 + 0x4a) = param_1[0x11];
  *(unsigned short *)(temp_v0 + 100) = param_1[0x35];
  *(unsigned char *)(temp_v0 + 0x4d) = 0;
  temp_v2 = FUN_0018719c(0x603);
  if (temp_v2 != 0) {
    *(unsigned char *)(temp_v0 + 0x4d) = *(unsigned char *)(temp_v0 + 0x4d) | 1;
  }
  temp_v2 = FUN_0018719c(0x604);
  if (temp_v2 != 0) {
    *(unsigned char *)(temp_v0 + 0x4d) = *(unsigned char *)(temp_v0 + 0x4d) | 2;
  }
  temp_v2 = FUN_0018719c(0x605);
  if (temp_v2 != 0) {
    *(unsigned char *)(temp_v0 + 0x4d) = *(unsigned char *)(temp_v0 + 0x4d) | 4;
  }
  temp_v2 = FUN_0018719c(0x606);
  if (temp_v2 != 0) {
    *(unsigned char *)(temp_v0 + 0x4d) = *(unsigned char *)(temp_v0 + 0x4d) | 8;
  }
  *(unsigned int *)(temp_v0 + 0x50) = *(unsigned int *)(param_1 + 0x10ec8);
  *(unsigned int *)(temp_v0 + 0x54) = 0;
  *(unsigned short *)(temp_v0 + 0x58) = (unsigned short)*(unsigned char *)((int)param_1 + 0x3ded);
  *(unsigned short *)(temp_v0 + 0x5a) = (unsigned short)*(unsigned char *)(param_1 + 0x1ef7);
  temp_v2 = FUN_003847e8(*(unsigned char *)((int)param_1 + 0x3ded));
  if (temp_v2 == 3) {
    *(unsigned short *)(temp_v0 + 0x58) = 1000;
  }
  if (*(unsigned char *)((int)param_1 + 0x3def) == 0) {
    if (*(short *)(temp_v0 + 0x58) == 0x18) {
      if (*(char *)(param_1 + 0x22d9) != '\0') {
        if (*(unsigned short *)(temp_v0 + 0x5a) < 100) {
          *(short *)(temp_v0 + 0x58) = *(char *)(param_1 + 0x22d9) + 1000;
        }
      }
      else {
        *(unsigned short *)(temp_v0 + 0x5a) = (unsigned short)*(unsigned char *)((int)param_1 + 0x3def);
      }
    }
  }
  else {
    *(unsigned short *)(temp_v0 + 0x5a) = (unsigned short)*(unsigned char *)((int)param_1 + 0x3def);
  }
  *(unsigned char *)(temp_v0 + 99) = *(unsigned char *)(DAT_0057f69c + 0x27ec4);
  temp_v2 = FUN_0018719c(0x410);
  if (temp_v2 != 0) {
    *(unsigned char *)(temp_v0 + 0x4c) = 1;
  }
  else {
    *(unsigned char *)(temp_v0 + 0x4c) = 0;
  }
  if (*(char *)(temp_v0 + 0x4d) == '\0') {
    *(unsigned short *)(temp_v0 + 0x66) = 0;
  }
  *(unsigned char *)(temp_v0 + 0x62) = *(unsigned char *)(param_1 + 1);
  if (*(char *)(param_1 + 1) != '\x02') {
    if (*(char *)(param_1 + 0xe52) < 0) {
      *(unsigned short *)(temp_v0 + 0x5c) = 0;
    }
    else {
      *(unsigned short *)(temp_v0 + 0x5c) = param_1[*(char *)(param_1 + 0xe52) * 0x96 + 0x67];
    }
    if (*(char *)((int)param_1 + 0x1ca5) < 0) {
      *(unsigned short *)(temp_v0 + 0x5e) = 0;
    }
    else {
      *(unsigned short *)(temp_v0 + 0x5e) = param_1[*(char *)((int)param_1 + 0x1ca5) * 0x96 + 0x67];
    }
    if (*(char *)(param_1 + 0xe53) < 0) {
      *(unsigned short *)(temp_v0 + 0x60) = 0;
    }
    else {
      *(unsigned short *)(temp_v0 + 0x60) = param_1[*(char *)(param_1 + 0xe53) * 0x96 + 0x67];
    }
  }
  else {
    *(unsigned short *)(temp_v0 + 0x5c) = 0;
    *(unsigned short *)(temp_v0 + 0x5e) = 0;
    *(unsigned short *)(temp_v0 + 0x60) = 0;
  }
  *(unsigned short *)(temp_v0 + 0x68) = param_1[0x1628];
  temp_v1 = FUN_00371f3c();
  *(unsigned char *)(temp_v0 + 0x6a) = temp_v1;
  temp_v2 = FUN_0018719c(0x11);
  if (temp_v2 != 0) {
    *(unsigned char *)(temp_v0 + 0x6b) = 1;
  }
  else {
    *(unsigned char *)(temp_v0 + 0x6b) = 0;
  }
  temp_v2 = DAT_0057f69c;
  *(unsigned int *)(temp_v0 + 0x6c) = *(unsigned int *)(DAT_0057f69c + 0x5448);
  rt_memcpy_w(temp_v2 + 0x270cc,temp_v0,0x80);
  return;
}

} /* extern "C" */
