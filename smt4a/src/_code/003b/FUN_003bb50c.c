/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb50c` (_code @ 0x3bb50c, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_9: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_9_stack;

extern unsigned int DAT_00570280; /* 0x570280 */

extern unsigned short *FUN_001834a4(unsigned int, int);
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_001849bc. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0019cac4. */
/* Supplied declaration required: FUN_003a7a88. */
extern int FUN_0046c4f4(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00471a04. */


void FUN_003bb50c(unsigned int param_1,int param_2,int param_3,unsigned int param_4,int param_5,int param_6,
                 int param_7,int param_8,int param_9)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned int uStack_34;
  int iStack_30;
  int iStack_2c;
  unsigned int temp_v8;
  
  temp_v3 = 0xf;
  temp_v2 = param_1;
  uStack_34 = param_1;
  iStack_30 = param_2;
  iStack_2c = param_3;
  temp_v8 = param_4;
  if (param_5 != 0) {
    if ((int)param_1 < 0) {
      temp_v0 = FUN_0018719c(0x11);
      if (temp_v0 == 0) {
        temp_v2 = 0x25e;
      }
      else {
        temp_v2 = 0;
      }
    }
    else {
      temp_v2 = param_1 & 0xffff;
      FUN_00184310();
      if (temp_v2 == 0) {
        return;
      }
      temp_v1 = param_1 & 0xffff;
      FUN_0019cac4();
      if ((*(unsigned short *)(temp_v1 + 2) & 0x8000) != 0) {
        temp_v2 = (unsigned int)*(short *)(temp_v1 + 0x8c);
        temp_v3 = 0x19;
        if ((int)temp_v2 >= 0x9a) {
          return;
        }
      }
      else {
        temp_v2 = *(unsigned short *)(temp_v2 + 0x9c) + 1;
        if (temp_v2 >= 0x277) {
          return;
        }
      }
    }
  }
  temp_v1 = param_1;
  FUN_003a7a88(param_1,param_5);
  if (temp_v1 != 0) {
    temp_v0 = FUN_0046c4f4(DAT_00570280,temp_v3,temp_v2);
    if (temp_v0 == 0) {
      temp_v0 = temp_v2 * 1000 + 1;
      puVar3 = (unsigned short *)FUN_001834a4(temp_v3,temp_v0);
      temp_v6 = (unsigned int)*puVar3 + (param_6 - param_2);
      temp_v7 = temp_v6 + param_8;
      temp_v4 = (unsigned int)puVar3[1] + (param_7 - param_3);
      temp_v5 = temp_v4 + param_9;
      FUN_001849bc(2,temp_v3,temp_v0,param_6,param_7,temp_v8,&temp_v4);
      return;
    }
    temp_v4 = param_7;
    temp_v5 = param_8;
    temp_v6 = param_9;
    FUN_00471a04(DAT_00570280,param_1,2,temp_v2,param_2,param_3,temp_v8,param_6);
  }
  return;
}
