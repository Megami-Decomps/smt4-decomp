/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003516a8` (_code @ 0x3516a8, 0x1d0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp40; /* 0x40: local_40 */
} param_6_stack;

extern int FUN_0034fda4(); /* 0x34fda4 */
extern unsigned char LAB_003f7110; /* 0x3f7110 */
extern unsigned char LAB_003f71c4; /* 0x3f71c4 */
extern unsigned char LAB_003f7228; /* 0x3f7228 */
extern unsigned int DAT_0044d158; /* 0x44d158 */
extern unsigned int *DAT_0044d15c; /* 0x44d15c */

/* Supplied declaration required: FUN_002bce50. */
/* Supplied declaration required: FUN_002bcf34. */
/* Supplied declaration required: FUN_002c23f8. */
extern unsigned int FUN_002c34a4(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c3b00. */
/* Supplied declaration required: FUN_002c4244. */
/* Supplied declaration required: FUN_002c541c. */
/* Supplied declaration required: FUN_002c5468. */
/* Supplied declaration required: FUN_0034ef48. */


unsigned int
FUN_003516a8(int param_1,int param_2,int param_3,int param_4,int param_5,unsigned int param_6)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned char *temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  int temp_v5 [2];
  
  if ((param_2 != 0 && param_3 != 0) && (param_4 != 0 && param_5 != 0)) {
    *(int *)(param_1 + 0x18) = param_3;
    *(int *)(param_1 + 0x1b8) = param_4;
    *(int *)(param_1 + 0x14) = param_2;
    *(int *)(param_1 + 0x1bc) = param_5;
    *(unsigned int *)(param_1 + 0x1c0) = param_6;
    *(unsigned int *)(param_1 + 0xc) = 0;
    *(unsigned int *)(param_1 + 0x558) = 0;
    *(unsigned int *)(param_1 + 0x554) = 0;
    *(unsigned int *)(param_1 + 0x550) = 0;
    *(unsigned int *)(param_1 + 0x548) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x484) = 0;
    *(unsigned int *)(param_1 + 0x2e8) = 0;
    *(unsigned int *)(param_1 + 0x46c) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x1c4) = 0;
    *(unsigned int *)(param_1 + 0x474) = 0;
    *(unsigned int *)(param_1 + 0x47c) = 0;
    *(unsigned int *)(param_1 + 0x470) = 0xffffffff;
    *(unsigned int *)(param_1 + 0x478) = 0;
    *(unsigned int *)(param_1 + 0x480) = 0;
    *(unsigned char *)(param_1 + 0x54c) = 0;
    *(unsigned int *)(param_1 + 0x130) = 0;
    *(unsigned int *)(param_1 + 0x134) = 0;
    *(unsigned int *)(param_1 + 0x1c) = 0;
    *(unsigned int *)(param_1 + 0x140) = 0;
    *(unsigned int *)(param_1 + 0x150) = 0;
    *(unsigned int *)(param_1 + 0x154) = 0;
    *(unsigned int *)(param_1 + 0x144) = 0;
    *(unsigned int *)(param_1 + 0x148) = 0;
    *(unsigned int *)(param_1 + 0x14c) = 0;
    FUN_0034ef48(param_1 + 0x158);
    FUN_002c541c(param_1 + 0x20,1);
    FUN_002c3b00(param_1);
    FUN_002c4244(param_1 + 0x20);
    *(unsigned char *)(param_1 + 0x10) = 0;
    *(unsigned char *)(param_1 + 0x11) = 0;
    DAT_0044d158 = FUN_002c34a4(0x100,0x100,0,0x2000,0x1000,1);
    puVar1 = (unsigned int *)0x18;
    FUN_002c23f8();
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(unsigned char *)(puVar1 + 4) = 0;
    }
    DAT_0044d15c = puVar1;
    FUN_002bcf34();
    temp_v0 = param_1 + 0x28;
    temp_v1 = 4;
    temp_v2 = &LAB_003f7110;
    temp_v3 = &LAB_003f7228;
    temp_v4 = &LAB_003f71c4;
    temp_v5[0] = param_1;
    FUN_002bce50(temp_v0,&temp_v1,FUN_0034fda4,temp_v5,DAT_0044d15c[3] + DAT_0044d15c[2],0x11,
                 0xfffffffe,0);
    if (temp_v0 < 0) {
      FUN_002c5468();
    }
    return 1;
  }
  return 0;
}
