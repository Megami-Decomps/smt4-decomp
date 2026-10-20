/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011c6ec` (_code @ 0x11c6ec, 0x56 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f71b0(void);
int onlineJobSetStateWaiting(int);
int FUN_002f7cba(int, int, unsigned int);
int FUN_0031126c(int, int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_4_stack;

extern unsigned char LAB_0011c63b; /* 0x11c63b */
extern unsigned char LAB_0011c744; /* 0x11c744 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int operatorNew(unsigned int);
extern unsigned int FUN_002e7908(int *, unsigned int *);
extern unsigned int FUN_002ea3c0(int, unsigned char *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002f71b0. */
/* Supplied declaration required: onlineJobSetStateWaiting. */
/* Supplied declaration required: FUN_002f7cba. */
/* Supplied declaration required: FUN_0031126c. */


unsigned long long FUN_0011c6ec(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int iStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  int temp_v2;
  
  iStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  if (*(int *)(*(int *)(param_1 + 0x68) + 0x78) != 0) {
    temp_v2 = param_4;
    FUN_002f71b0();
    onlineJobSetStateWaiting(param_1);
    temp_v0 = operatorNew(0x10);
    temp_v1 = 0;
    if (temp_v0 != 0) {
      temp_v1 = FUN_002ea3c0(temp_v0,&LAB_0011c63b,0,&LAB_0011c744);
    }
    FUN_002f7cba(param_1,param_1 + 0x70,temp_v1);
    return romwright_piece_4_4(uStack_1c,iStack_20);
  }
  temp_v2 = 0x10001;
  temp_v1 = FUN_002e7908(&iStack_20,(unsigned int *)&temp_v2);
  FUN_0031126c(param_1,2,temp_v1);
  return romwright_piece_4_4(uStack_1c,iStack_20);
}

} /* extern "C" */
