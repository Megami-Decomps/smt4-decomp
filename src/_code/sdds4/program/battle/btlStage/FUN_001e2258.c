/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e2258` (_code @ 0x1e2258, 0xd4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_001d3d0c(); /* 0x1d3d0c */
extern unsigned char LAB_001e2334; /* 0x1e2334 */
extern int FUN_0021ecac(); /* 0x21ecac */
extern int DAT_004398d4; /* 0x4398d4 */

/* Supplied declaration required: FUN_0027de94. */
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */


void FUN_001e2258(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  puVar1 = &LAB_001e2334;
  FUN_002c4c00(&LAB_001e2334,2,0,0,FUN_001d3d0c,FUN_0021ecac,param_1,*param_1);
  param_1[0xc] = (unsigned int)puVar1;
  temp_v0 = FUN_002c4b84(0x100,0x100,0,0xc4,1);
  DAT_004398d4 = temp_v0;
  *(unsigned int *)(temp_v0 + 0x98) = 0;
  *(unsigned int *)(temp_v0 + 0x94) = 0;
  *(unsigned int *)(temp_v0 + 0x90) = 0;
  *(unsigned short *)(temp_v0 + 0x8c) = 0xffff;
  temp_v1 = param_1[0x4f];
  temp_v3 = -1 < temp_v1;
  if (temp_v3) {
    temp_v1 = param_1[0x50];
  }
  if (!temp_v3 || temp_v1 < 0) {
    FUN_0027de94(param_1,param_1 + 0x32,0);
    param_1[0x4f] = (int)*(char *)((int)param_1 + 0xe7);
    param_1[0x50] = (int)*(char *)(param_1 + 0x3a);
  }
  temp_v2 = param_1[0x50];
  *(unsigned int *)(temp_v0 + 0x84) = param_1[0x4f];
  *(unsigned int *)(temp_v0 + 0x88) = temp_v2;
  return;
}
