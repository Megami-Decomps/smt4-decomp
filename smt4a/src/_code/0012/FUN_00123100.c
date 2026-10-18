/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123100` (_code @ 0x123100, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0012320c; /* 0x12320c */
extern unsigned char LAB_00123210; /* 0x123210 */
extern unsigned char DAT_0055b34c; /* 0x55b34c */
extern unsigned char DAT_0055b368; /* 0x55b368 */

extern unsigned int FUN_001056ae(int, unsigned int);
extern int FUN_0010575c(unsigned int *, unsigned int, unsigned int *, unsigned int, unsigned int);
extern unsigned int *FUN_0010b564(void);
extern int FUN_002e7168(int, unsigned int);
extern int FUN_002e760a(unsigned int);
extern unsigned int FUN_002eb56c(void);
extern int FUN_002f1858(int, unsigned char *, unsigned int, unsigned char *);
extern int FUN_0030f364(void);
extern int FUN_0030f3c8(int);
extern int FUN_003112b4(int);


int FUN_00123100(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_0055b368;
  *(unsigned char *)(param_1 + 2) = 0;
  temp_v0 = FUN_0010575c(param_1 + 4,1,param_3,param_4,param_4);
  temp_v0 = FUN_002e7168(temp_v0 + 0x48,param_2);
  temp_v0 = FUN_002e7168(temp_v0 + 0x30,0x10);
  temp_v0 = FUN_002e7168(temp_v0 + 0x30,0x400);
  temp_v0 = FUN_0030f3c8(temp_v0 + 0x30);
  temp_v0 = FUN_0030f3c8(temp_v0 + 0x14);
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = 0;
  *(unsigned char *)(temp_v0 + 0x2c) = 1;
  *(unsigned char *)(temp_v0 + 0x2d) = 1;
  *(unsigned int *)(temp_v0 + 0x20) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = 0;
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  temp_v1 = FUN_0030f364();
  *(int *)(temp_v0 + 0x24) = temp_v1;
  *(unsigned int *)(temp_v1 + 4) = 0;
  *(int *)(*(int *)(temp_v0 + 0x24) + 8) = *(int *)(temp_v0 + 0x24);
  *(int *)(*(int *)(temp_v0 + 0x24) + 0xc) = *(int *)(temp_v0 + 0x24);
  temp_v0 = FUN_0030f3c8(temp_v0 + 0x30);
  temp_v0 = FUN_002f1858(temp_v0 + 0x1c,&LAB_00123210,0,&LAB_0012320c);
  *(unsigned int *)(temp_v0 + 0x70) = 0;
  *(unsigned int *)(temp_v0 + 0x74) = 0;
  *(unsigned int *)(temp_v0 + 0x78) = 0;
  *(unsigned int *)(temp_v0 + 0x7c) = 0;
  temp_v0 = FUN_003112b4(temp_v0 + 0x84);
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  *(unsigned int *)(temp_v0 + 0x1c) = 100;
  *(unsigned char *)(temp_v0 + 0x20) = 1;
  *(unsigned char *)(temp_v0 + 0x21) = 0;
  *(unsigned int *)(temp_v0 - 0x14) = 0;
  *(unsigned int *)(temp_v0 - 0x10) = 0;
  *(unsigned int *)(temp_v0 - 0xc) = 0;
  *(unsigned int *)(temp_v0 - 8) = 0;
  *(unsigned char *)(temp_v0 - 0x8c) = 0;
  temp_v2 = FUN_001056ae(temp_v0 - 0x1bc,0);
  *(unsigned int *)(temp_v0 - 0x178) = temp_v2;
  if (param_3 != (unsigned int *)0x0) {
    *(unsigned int **)(temp_v0 - 0x1c0) = param_3;
  }
  else {
    temp_v1 = FUN_002e760a(0x48);
    param_3 = (unsigned int *)0x0;
    if (temp_v1 != 0) {
      param_3 = (unsigned int *)FUN_0010b564();
      param_3[0x11] = 0;
      *param_3 = (unsigned int)&DAT_0055b34c;
    }
    *(unsigned int **)(temp_v0 - 0x1c0) = param_3;
  }
  param_3[0x11] = temp_v0 - 0x1cc;
  temp_v2 = FUN_002eb56c();
  *(unsigned int *)(temp_v0 - 4) = temp_v2;
  return temp_v0 - 0x1cc;
}
