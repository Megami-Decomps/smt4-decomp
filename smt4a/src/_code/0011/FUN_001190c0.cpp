/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001190c0` (_code @ 0x1190c0, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00114e26(int, int, int);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(int, int, unsigned int);
int FUN_003054f0(int, unsigned int);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char LAB_00119164; /* 0x119164 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00114e26. */
extern int _Znwj(unsigned int);
extern unsigned int _ZN12OnlineResultC1ERKj(int *, unsigned int *);
extern unsigned int FUN_002ea3c0(int, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
extern unsigned long long FUN_003054c0(unsigned int);
extern int FUN_003054ce(unsigned int);
/* Supplied declaration required: FUN_003054f0. */


unsigned long long FUN_001190c0(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned long long temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  temp_v3 = param_1;
  temp_v4 = param_2;
  temp_v5 = param_3;
  temp_v6 = param_4;
  temp_v2 = FUN_003054c0(*(unsigned int *)(param_1 + 0x198));
  if (*(int *)((int)temp_v2 + 0x20) != 0) {
    temp_v6 = 0x80030001;
  }
  else {
    temp_v0 = FUN_003054ce(*(unsigned int *)((int)((unsigned long long)temp_v2 >> 0x20) + 0x18));
    *(unsigned int *)(param_1 + 0x140) = *(unsigned int *)(param_1 + 0x318);
    *(unsigned int *)(param_1 + 0x144) = *(unsigned int *)(param_1 + 0x31c);
    temp_v3 = *(int *)(param_1 + 0x74);
    temp_v5 = *(unsigned int *)(param_1 + 0x304);
    temp_v6 = *(unsigned int *)(param_1 + 0x308);
    temp_v4 = param_1 + 0x208;
    FUN_00114e26(temp_v0,param_1 + 0xe8,param_1 + 0x160);
    if (temp_v0 != 0) {
      onlineJobSetStateWaiting(param_1);
      temp_v0 = _Znwj(0x10);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = FUN_002ea3c0(temp_v0,0x119445,0,&LAB_00119164);
      }
      FUN_002f7cba(param_1,param_1 + 0xe8,temp_v1);
      return romwright_piece_4_4(temp_v4,temp_v3);
    }
    temp_v6 = 0x8001000d;
  }
  temp_v1 = _ZN12OnlineResultC1ERKj(&temp_v3,(unsigned int *)&temp_v6);
  FUN_003054f0(param_1,temp_v1);
  return romwright_piece_4_4(temp_v4,temp_v3);
}

} /* extern "C" */
