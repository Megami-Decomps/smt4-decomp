/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00223898` (_code @ 0x223898, 0x21c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

extern int FUN_002d8e74(); /* 0x2d8e74 */
extern int FUN_002d8f3c(); /* 0x2d8f3c */
extern int FUN_002ef878(); /* 0x2ef878 */
extern unsigned char LAB_003f6e84; /* 0x3f6e84 */
extern unsigned char LAB_003f6f50; /* 0x3f6f50 */
extern unsigned char LAB_003f6fe4; /* 0x3f6fe4 */

/* Supplied declaration required: FUN_002bcc60. */
/* Supplied declaration required: FUN_002bcd44. */
extern unsigned int FUN_002c32a0(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5254. */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: FUN_002c52dc. */
extern int FUN_002cbe5c(unsigned int);


/* WARNING: Type propagation algorithm not settling */

unsigned char FUN_00223898(int param_1,int param_2)

{
/* irregular: 9 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  int temp_v4;
  int temp_v5;
  unsigned char *puStack_2c;
  unsigned char *temp_v6;
  unsigned char *puStack_24;
  
  piVar1 = &temp_v3;
  piVar2 = &temp_v3;
  *(char *)(param_1 + 1) = (char)param_2;
  temp_v2 = 0xe7e3ffff;
  temp_v3 = 0;
  FUN_002c52dc(&temp_v3,0,1);
  if (-1 < (int)piVar1) {
    piVar1 = (int *)0x0;
    *(int *)(param_1 + 0x4c) = temp_v3;
  }
  if ((int)piVar1 < 0) {
    FUN_002c526c();
  }
  FUN_002c5254(&temp_v3,*(unsigned int *)(param_1 + 0x4c),1);
  if ((int)piVar2 < 0) {
    FUN_002c526c();
  }
  temp_v3 = 0x1000;
  uStack_44 = 1;
  temp_v0 = FUN_002c32a0(0x100,0x100,0,0x2000);
  *(unsigned int *)(param_1 + 0x28) = temp_v0;
  FUN_002bcd44(param_1 + 0x2c,temp_v0,0x2000);
  if (param_2 != 1) {
    if (!(param_2 == 0 || param_2 == 3)) {
      if (param_2 != 2) {
        temp_v1 = FUN_002cbe5c(temp_v2);
        return temp_v1 == 0;
      }
      temp_v5 = 4;
      puStack_2c = &LAB_003f6e84;
      temp_v6 = &LAB_003f6fe4;
      puStack_24 = &LAB_003f6f50;
      temp_v2 = param_1 + 0x44;
      temp_v3 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x38);
      uStack_44 = 0x11;
      uStack_40 = 0xfffffffe;
      uStack_3c = 0;
      temp_v4 = param_1;
      FUN_002bcc60(temp_v2,&temp_v5,FUN_002d8f3c,&temp_v4);
    }
    else {
      temp_v5 = 4;
      puStack_2c = &LAB_003f6e84;
      temp_v6 = &LAB_003f6fe4;
      puStack_24 = &LAB_003f6f50;
      temp_v2 = param_1 + 0x44;
      temp_v3 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x38);
      uStack_44 = 0x11;
      uStack_40 = 0xfffffffe;
      uStack_3c = 0;
      temp_v4 = param_1;
      FUN_002bcc60(temp_v2,&temp_v5,FUN_002d8e74,&temp_v4);
    }
  }
  else {
    temp_v5 = 4;
    puStack_2c = &LAB_003f6e84;
    temp_v6 = &LAB_003f6fe4;
    puStack_24 = &LAB_003f6f50;
    temp_v2 = param_1 + 0x44;
    temp_v3 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0x38);
    uStack_44 = 0x11;
    uStack_40 = 0xfffffffe;
    uStack_3c = 0;
    temp_v4 = param_1;
    FUN_002bcc60(temp_v2,&temp_v5,FUN_002ef878,&temp_v4);
  }
  if (((temp_v2 & 0x7e00000) != 0x600000) && ((int)temp_v2 < 0)) {
    FUN_002c526c(temp_v2);
  }
  temp_v1 = FUN_002cbe5c(temp_v2);
  return temp_v1 == 0;
}
