/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00134ebc` (_code @ 0x134ebc, 0x7e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e32a4(int, unsigned char *, unsigned char *);
int FUN_002e6e14(void);
int FUN_00307770(int, int, int, int *);
int FUN_003077a4(int *);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_00134f40; /* 0x134f40 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_002e32a4. */
extern int *FUN_002e4e86(unsigned int *, unsigned int *);
extern int FUN_002e6dac(void);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_00307770. */
extern unsigned int FUN_00307792(unsigned int, int *);
/* Supplied declaration required: FUN_003077a4. */


unsigned long long FUN_00134ebc(int *param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int uStack_1c;
  int *piStack_18;
  unsigned int temp_v5;
  
  piStack_18 = param_1;
  temp_v5 = param_2;
  if (param_2 >= 0x20000000) {
    temp_v4 = 0x1fffffff;
    FUN_002e32a4(8,&LAB_00134f40,&LAB_00134f40);
  }
  if ((unsigned int)((param_1[2] - *param_1) >> 3) < temp_v5) {
    temp_v0 = FUN_003077a4(param_1);
    temp_v4 = FUN_00307792(temp_v0,param_1);
    piVar2 = (int *)FUN_002e4e86(&temp_v5,(unsigned int *)&temp_v4);
    temp_v1 = *piVar2;
    temp_v2 = FUN_002e6dac();
    FUN_00307770(*param_1,param_1[1],temp_v2,param_1);
    for (temp_v3 = *param_1; temp_v3 != param_1[1]; temp_v3 = temp_v3 + 8) {
    }
    FUN_002e6e14();
    temp_v3 = FUN_003077a4(param_1);
    *param_1 = temp_v2;
    param_1[2] = temp_v2 + temp_v1 * 8;
    param_1[1] = temp_v3 * 8 + temp_v2;
  }
  return romwright_piece_4_4(uStack_1c,temp_v4);
}

} /* extern "C" */
