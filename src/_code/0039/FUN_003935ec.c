/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003935ec` (_code @ 0x3935ec, 0xf8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_8: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_8_stack;

/* Supplied declaration required: FUN_002a7060. */
extern int FUN_002b96f0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00393a00. */


void FUN_003935ec(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,int param_5,
                 unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  short *psVar2;
  int temp_v1;
  unsigned int temp_v2 [5];
  int temp_v3;
  int temp_v4;
  
  temp_v0 = FUN_002b96f0(param_3,param_4);
  temp_v1 = *param_1 + (param_5 / 1000) * 0x20;
  *(unsigned int *)(temp_v1 + 8) = *(unsigned int *)(temp_v0 + 8);
  temp_v0 = **(int **)(temp_v1 + 4) + (param_5 % 1000) * 0x14;
  psVar2 = *(short **)(temp_v0 + 0xc);
  FUN_002a7060(temp_v2,param_2,param_6,param_7,param_8);
  if (psVar2 != (short *)0x0) {
    if (psVar2[2] == 0) {
      if ((*(unsigned char *)(psVar2 + 6) & 1) == 0) {
        FUN_00393a00(temp_v1,temp_v0,temp_v2);
        return;
      }
      temp_v2[0] = temp_v2[0] | 0x8000;
      temp_v3 = (int)*psVar2;
      temp_v4 = (int)psVar2[1];
    }
    if (psVar2[2] == 1) {
      temp_v3 = (int)*psVar2;
      temp_v4 = (int)psVar2[1];
    }
  }
  FUN_00393a00(temp_v1,temp_v0,temp_v2);
  return;
}
