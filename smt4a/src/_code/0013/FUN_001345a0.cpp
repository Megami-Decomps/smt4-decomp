/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001345a0` (_code @ 0x1345a0, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e32a4(int, unsigned char *, unsigned char *);
int FUN_002e6e14(int);
int FUN_00301bd4(int *);
int FUN_003078bc(int, int, int, int *);
int FUN_0030fce0(int *, int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_00134628; /* 0x134628 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e32a4. */
extern int *FUN_002e4e86(unsigned int *, unsigned int *);
extern int FUN_002e6dac(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_00301bd4. */
/* Supplied declaration required: FUN_003078bc. */
extern unsigned int FUN_003078de(unsigned int, int *);
/* Supplied declaration required: FUN_0030fce0. */
extern unsigned int aeabi_idivmod(int, unsigned int);


unsigned long long FUN_001345a0(int *param_1,unsigned int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int uStack_1c;
  int *piStack_18;
  unsigned int temp_v6;
  
  piStack_18 = param_1;
  temp_v6 = param_2;
  if (param_2 >= 0x15555556) {
    temp_v5 = 0x15555555;
    FUN_002e32a4(8,&LAB_00134628,&LAB_00134628);
  }
  temp_v0 = aeabi_idivmod(param_1[2] - *param_1,0xc);
  if (temp_v0 < temp_v6) {
    temp_v1 = FUN_00301bd4(param_1);
    temp_v5 = FUN_003078de(temp_v1,param_1);
    piVar3 = (int *)FUN_002e4e86(&temp_v6,(unsigned int *)&temp_v5);
    temp_v2 = *piVar3;
    temp_v3 = FUN_002e6dac();
    FUN_003078bc(*param_1,param_1[1],temp_v3,param_1);
    FUN_0030fce0(param_1,*param_1,param_1[1]);
    FUN_002e6e14(*param_1);
    temp_v4 = FUN_00301bd4(param_1);
    *param_1 = temp_v3;
    param_1[2] = temp_v3 + temp_v2 * 0xc;
    param_1[1] = temp_v4 * 0xc + temp_v3;
  }
  return romwright_piece_4_4(uStack_1c,temp_v5);
}

} /* extern "C" */
