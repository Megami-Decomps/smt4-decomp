/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00351498` (_code @ 0x351498, 0x1d0 bytes) from smt4_v1.2.0.cxi.
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

extern int FUN_0034fb94(); /* 0x34fb94 */
extern unsigned char LAB_003f6ee4; /* 0x3f6ee4 */
extern unsigned char LAB_003f6f98; /* 0x3f6f98 */
extern unsigned char LAB_003f6ffc; /* 0x3f6ffc */
extern unsigned int DAT_0044d158; /* 0x44d158 */
extern unsigned int *DAT_0044d15c; /* 0x44d15c */

/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: FUN_002bcd44. */
/* Supplied declaration required: FUN_002c222c. */
/* Supplied declaration required: FUN_002c32a0. */
/* Supplied declaration required: FUN_002c38fc. */
/* Supplied declaration required: FUN_002c4040. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: FUN_0034ed38. */
extern void nn_os_LightEvent_Initialize(unsigned int, unsigned char);


unsigned int
FUN_00351498(int param_1,int param_2,int param_3,int param_4,int param_5,unsigned int param_6)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  unsigned char *temp_v3;
  unsigned char *temp_v4;
  unsigned char *temp_v5;
  int temp_v6 [2];
  
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
    FUN_0034ed38(param_1 + 0x158);
    nn_os_LightEvent_Initialize(param_1 + 0x20,1);
    FUN_002c38fc(param_1);
    FUN_002c4040(param_1 + 0x20);
    *(unsigned char *)(param_1 + 0x10) = 0;
    *(unsigned char *)(param_1 + 0x11) = 0;
    temp_v0 = 0x100;
    FUN_002c32a0(0x100,0x100,0,0x2000,0x1000,1);
    puVar2 = (unsigned int *)0x18;
    DAT_0044d158 = temp_v0;
    FUN_002c222c();
    if (puVar2 != (unsigned int *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(unsigned char *)(puVar2 + 4) = 0;
    }
    DAT_0044d15c = puVar2;
    FUN_002bcd44();
    temp_v1 = param_1 + 0x28;
    temp_v2 = 4;
    temp_v3 = &LAB_003f6ee4;
    temp_v4 = &LAB_003f6ffc;
    temp_v5 = &LAB_003f6f98;
    temp_v6[0] = param_1;
    FUN_002bcc60(temp_v1,&temp_v2,FUN_0034fb94,temp_v6,DAT_0044d15c[3] + DAT_0044d15c[2],0x11,
                 0xfffffffe,0);
    if (temp_v1 < 0) {
      FUN_002c526c();
    }
    return 1;
  }
  return 0;
}
