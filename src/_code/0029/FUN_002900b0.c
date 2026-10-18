/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002900b0` (_code @ 0x2900b0, 0x184 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern unsigned char LAB_0029023c; /* 0x29023c */
extern unsigned char LAB_00290258; /* 0x290258 */
extern unsigned int DAT_00433158; /* 0x433158 */
extern int DAT_0043dd50; /* 0x43dd50 */

extern int FUN_00241d70(int);
/* Supplied declaration required: FUN_0028efe0. */
/* Supplied declaration required: FUN_0029025c. */
/* Supplied declaration required: FUN_00296d8c. */
/* Supplied declaration required: FUN_00296de0. */
/* Supplied declaration required: FUN_002b6700. */
extern int FUN_002bd1b0(int, unsigned int);
/* Supplied declaration required: FUN_002be7fc. */
extern unsigned char *FUN_002c5e2c(unsigned int *);
extern int FUN_00333910(int, unsigned int);
extern unsigned char *FUN_00385edc(unsigned int, int);


void FUN_002900b0(int param_1,unsigned int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *temp_v3;
  int temp_v4;
  
  temp_v0 = DAT_0043dd50;
  if (param_1 != 0) {
    FUN_0028efe0(param_1,1);
    temp_v3 = (unsigned char *)FUN_00385edc(DAT_00433158,param_1);
    if (temp_v3 != (unsigned char *)0x0) {
      *(unsigned char **)(temp_v0 + 0x5e0) = temp_v3;
      *(unsigned char *)(temp_v0 + 0x5f7) = 1;
    }
    else {
      FUN_002be7fc(&temp_v2,&LAB_0029023c,param_1);
      temp_v3 = (unsigned char *)FUN_002c5e2c((unsigned int *)&temp_v2);
      *(unsigned char **)(temp_v0 + 0x5e0) = temp_v3;
      *(unsigned char *)(temp_v0 + 0x5f7) = 0;
    }
    temp_v2 = 3;
    temp_v4 = 0;
    FUN_00296d8c(*(unsigned int *)(temp_v0 + 0x5d4),3,0xffffffff,0);
    temp_v1 = FUN_00241d70(param_1);
    if (0 < temp_v1) {
      temp_v3 = *(unsigned char **)(temp_v0 + 0x5e0);
      temp_v2 = 3;
      temp_v4 = temp_v1;
      FUN_00296d8c(*(unsigned int *)(temp_v0 + 0x5dc),3,0xffffffff,0);
    }
    FUN_0028efe0(param_1,1,0);
    temp_v1 = FUN_00333910(param_1,param_2);
    if (temp_v1 < 0) {
      temp_v1 = param_1;
      FUN_002b6700(param_1);
      temp_v4 = FUN_002bd1b0(temp_v1 + 0xe8,0);
      temp_v3 = &LAB_00290258;
      temp_v2 = 3;
      FUN_00296de0(*(unsigned int *)(temp_v0 + 0x5d8),3,0xffffffff,0);
    }
    else {
      temp_v3 = *(unsigned char **)(temp_v0 + 0x5e4);
      temp_v2 = 3;
      temp_v4 = temp_v1;
      FUN_00296d8c(*(unsigned int *)(temp_v0 + 0x5d8),3,0xffffffff,0);
    }
    FUN_0029025c(param_1);
    return;
  }
  return;
}
