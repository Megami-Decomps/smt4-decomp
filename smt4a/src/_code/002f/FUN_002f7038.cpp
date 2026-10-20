/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7038` (_code @ 0x2f7038, 0x26 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6e34(int *, int);
int _ZN9Obj55b28cD1Ev(int *);
int FUN_002e9c64(unsigned int, unsigned char *, int *, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_3_stack;

extern unsigned char LAB_0012359f; /* 0x12359f */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern int FUN_002e6e26(void);
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
/* Supplied declaration required: FUN_002e9c64. */


unsigned long long FUN_002f7038(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  int temp_v1;
  
  uStack_18 = param_1;
  uStack_14 = param_2;
  uStack_10 = param_3;
  temp_v1 = param_3;
  FUN_002e9c64(param_2,&LAB_0012359f,&temp_v1,0);
  temp_v0 = FUN_002e6e26();
  FUN_002e6e34(&uStack_18,temp_v0 + 0x58);
  _ZN9Obj55b28cD1Ev(&uStack_18);
  return romwright_piece_4_4(uStack_14,uStack_18);
}

} /* extern "C" */
