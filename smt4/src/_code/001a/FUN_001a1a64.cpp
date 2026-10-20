/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a1a64` (_code @ 0x1a1a64, 0x280 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int rt_memcpy_w(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned char g_gameDataBlocks; /* 0x43e2a8 */

extern int FUN_00288f78(unsigned char);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_001a1a64(unsigned short *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&g_gameDataBlocks + 0x4));
  *(unsigned short *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x4e) = *param_1;
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
  *(unsigned char *)(temp_v0 + 0x4c) = *(unsigned char *)(param_1 + 0x3f);
  *(unsigned char *)(temp_v0 + 0x4d) = 0;
  temp_v1 = gameFlagIsSet(0x67a);
  if (temp_v1 != 0) {
    *(unsigned char *)(temp_v0 + 0x4d) = *(unsigned char *)(temp_v0 + 0x4d) | 1;
  }
  temp_v1 = gameFlagIsSet(0x67b);
  if (temp_v1 != 0) {
    *(unsigned char *)(temp_v0 + 0x4d) = *(unsigned char *)(temp_v0 + 0x4d) | 2;
  }
  temp_v1 = gameFlagIsSet(0x679);
  if (temp_v1 != 0) {
    *(unsigned char *)(temp_v0 + 0x4d) = *(unsigned char *)(temp_v0 + 0x4d) | 4;
  }
  temp_v1 = gameFlagIsSet(0x678);
  if (temp_v1 != 0) {
    *(unsigned char *)(temp_v0 + 0x4d) = *(unsigned char *)(temp_v0 + 0x4d) | 8;
  }
  *(unsigned int *)(temp_v0 + 0x50) = *(unsigned int *)(param_1 + 0xfa2c);
  *(unsigned int *)(temp_v0 + 0x54) = 0;
  *(unsigned short *)(temp_v0 + 0x58) = (unsigned short)*(unsigned char *)((int)param_1 + 0xa839);
  *(unsigned short *)(temp_v0 + 0x5a) = (unsigned short)*(unsigned char *)(param_1 + 0x541d);
  temp_v1 = FUN_00288f78(*(unsigned char *)((int)param_1 + 0xa839));
  if (temp_v1 == 3) {
    *(unsigned short *)(temp_v0 + 0x58) = 1000;
  }
  if (*(unsigned char *)((int)param_1 + 0xa83b) == 0) {
    if (*(short *)(temp_v0 + 0x58) == 0x18) {
      if (*(char *)(param_1 + 0x57e5) != '\0') {
        *(short *)(temp_v0 + 0x58) = *(char *)(param_1 + 0x57e5) + 1000;
      }
      else {
        *(unsigned short *)(temp_v0 + 0x5a) = (unsigned short)*(unsigned char *)((int)param_1 + 0xa83b);
      }
    }
  }
  else {
    *(unsigned short *)(temp_v0 + 0x5a) = (unsigned short)*(unsigned char *)((int)param_1 + 0xa83b);
  }
  *(unsigned char *)(temp_v0 + 99) = *(unsigned char *)((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x24bb0);
  temp_v1 = gameFlagIsSet(0x410);
  if (temp_v1 != 0) {
    *(unsigned char *)(temp_v0 + 100) = 1;
  }
  else {
    *(unsigned char *)(temp_v0 + 100) = 0;
  }
  if (*(char *)(temp_v0 + 0x4d) == '\0') {
    *(unsigned short *)(temp_v0 + 0x66) = 0;
  }
  *(unsigned char *)(temp_v0 + 0x62) = *(unsigned char *)(param_1 + 1);
  if (*(char *)(param_1 + 1) != '\x02') {
    if (*(char *)(param_1 + 0x4886) < 0) {
      *(unsigned short *)(temp_v0 + 0x5c) = 0;
    }
    else {
      *(unsigned short *)(temp_v0 + 0x5c) = param_1[*(char *)(param_1 + 0x4886) * 0x302 + 0x6d];
    }
    if (*(char *)((int)param_1 + 0x910d) < 0) {
      *(unsigned short *)(temp_v0 + 0x5e) = 0;
    }
    else {
      *(unsigned short *)(temp_v0 + 0x5e) = param_1[*(char *)((int)param_1 + 0x910d) * 0x302 + 0x6d];
    }
    if (*(char *)(param_1 + 0x4887) < 0) {
      *(unsigned short *)(temp_v0 + 0x60) = 0;
    }
    else {
      *(unsigned short *)(temp_v0 + 0x60) = param_1[*(char *)(param_1 + 0x4887) * 0x302 + 0x6d];
    }
  }
  else {
    *(unsigned short *)(temp_v0 + 0x5c) = 0;
    *(unsigned short *)(temp_v0 + 0x5e) = 0;
    *(unsigned short *)(temp_v0 + 0x60) = 0;
  }
  rt_memcpy_w((*(int *)((unsigned char *)&g_gameDataBlocks + 0x4)) + 0x24794,temp_v0,0x80);
  return;
}

} /* extern "C" */
