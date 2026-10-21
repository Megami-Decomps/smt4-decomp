/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00412488` (_code @ 0x412488, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a49e4(unsigned int, unsigned int);
int uiNavigatorStart(int, int, int, int);
int FUN_003f1b3c(int, unsigned int, int, unsigned int *);
int FUN_0047f4cc(int);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
extern int btlGetMainState(void);
extern int saveSlotFindSelected(void);
extern int lcgRandomRange(unsigned int);
extern int FUN_00187168(void);
extern unsigned int FUN_0019acdc(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002a49e4. */
/* Supplied declaration required: uiNavigatorStart. */
extern int FUN_003e4d68(unsigned int);
/* Supplied declaration required: FUN_003f1b3c. */
/* Supplied declaration required: FUN_0047f4cc. */


void FUN_00412488(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned short temp_v4;
  int temp_v5;
  unsigned int *temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  
  temp_v6 = (unsigned int *)0x0;
  temp_v5 = 0;
  temp_v3 = 0;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v9 = 0;
  temp_v10 = 0;
  temp_v11 = 0;
  do {
    temp_v0 = FUN_003e4d68(temp_v3 & 0xffff);
    temp_v1 = FUN_00187168();
    if (temp_v1 != 0) {
      temp_v1 = temp_v5 * 2;
      temp_v5 = temp_v5 + 1;
      *(unsigned short *)((int)&temp_v6 + temp_v1) = *(unsigned short *)(temp_v0 + 300);
    }
    temp_v3 = temp_v3 + 1;
  } while ((int)temp_v3 < 0xc);
  if (temp_v5 == 0) {
    temp_v0 = saveSlotFindSelected();
    if (temp_v0 == 0) {
      temp_v4 = 0;
    }
    else {
      temp_v5 = 1;
      temp_v6 = (unsigned int *)romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v6 + 2)),*(unsigned short *)(temp_v0 + 300));
      temp_v5 = lcgRandomRange((temp_v5 - 1U) & 0xffff);
      temp_v4 = *(unsigned short *)((int)&temp_v6 + temp_v5 * 2);
    }
  }
  else {
    temp_v5 = lcgRandomRange((temp_v5 - 1U) & 0xffff);
    temp_v4 = *(unsigned short *)((int)&temp_v6 + temp_v5 * 2);
  }
  temp_v5 = btlGetMainState();
  temp_v2 = FUN_0019acdc(temp_v4,1);
  temp_v6 = (unsigned int *)&temp_v13;
  FUN_003f1b3c(temp_v5,temp_v2,3,&temp_v12);
  FUN_0047f4cc(temp_v13);
  FUN_002a49e4(*(unsigned int *)(temp_v5 + 0x4d64),temp_v12 & 0xffff);
  temp_v6 = (unsigned int *)0x0;
  uiNavigatorStart(temp_v4,1,1,0);
  return;
}

} /* extern "C" */
