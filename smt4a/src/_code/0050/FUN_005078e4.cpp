/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_005078e4` (_code @ 0x5078e4, 0x1dc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f5020(...);
int FUN_0045b4d0(int *, int *, int, int);
int FUN_0050769c(unsigned int, int);

/* stack frame of param_6: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_6_stack;

extern unsigned char LAB_0045b50c; /* 0x45b50c */

/* Supplied declaration required: FUN_002f5020. */
extern int setMinus1ReturnPtr(unsigned short *);
/* Supplied declaration required: FUN_0045b4d0. */
/* Supplied declaration required: FUN_0050769c. */
extern unsigned int __aeabi_uidivmod(int, int);


void FUN_005078e4(int *param_1,unsigned int param_2,int *param_3,int param_4,int param_5,int *param_6)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned short *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  short temp_v6;
  unsigned int unaff_r5;
  int temp_v7;
  unsigned short unaff_r11;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int uStack_3c;
  int *piStack_34;
  unsigned int temp_v11;
  int *piStack_2c;
  int iStack_28;
  
  temp_v9 = *param_6 + param_4;
  temp_v8 = param_4;
  piStack_34 = param_1;
  temp_v11 = param_2;
  piStack_2c = param_3;
  iStack_28 = param_4;
  FUN_0045b4d0(&temp_v10,&temp_v8,param_6[7],4);
  temp_v5 = 0;
  *param_3 = temp_v10;
  uStack_3c = uStack_3c / 0x158;
  if (uStack_3c != 0) {
    unaff_r5 = 0;
    unaff_r11 = 0x100;
  }
  param_3[1] = uStack_3c;
  temp_v2 = 0;
  if (uStack_3c != 0) {
    do {
      puVar2 = (unsigned short *)(*param_3 + temp_v5 * 0x158);
      if (puVar2 != (unsigned short *)0x0) {
        *puVar2 = unaff_r11;
        temp_v0 = (unsigned char)unaff_r5;
        *(unsigned char *)(puVar2 + 1) = temp_v0;
        *(unsigned char *)((int)puVar2 + 3) = temp_v0;
        *(unsigned int *)(puVar2 + 2) = unaff_r5;
        *(unsigned int *)(puVar2 + 6) = unaff_r5;
        *(unsigned int *)(puVar2 + 8) = unaff_r5;
        *(unsigned int *)(puVar2 + 0xe) = unaff_r5;
        puVar2[0x10] = (short)unaff_r5;
        puVar2[0x11] = (short)unaff_r5;
        puVar2 = puVar2 + 0x12;
        FUN_002f5020(puVar2,setMinus1ReturnPtr,4,0xc);
        temp_v1 = setMinus1ReturnPtr(puVar2 + 0x18);
        *(unsigned char *)(temp_v1 + 0x94) = temp_v0;
        temp_v1 = temp_v1 + 0x98;
        FUN_002f5020(temp_v1,&LAB_0045b50c,0x18,3);
        temp_v1 = temp_v1 + 0x48;
        FUN_002f5020(temp_v1,setMinus1ReturnPtr,4,3);
        *(unsigned int *)(temp_v1 + 0xc) = unaff_r5;
        *(unsigned int *)(temp_v1 + 0x10) = unaff_r5;
        *(unsigned int *)(temp_v1 + 0x14) = unaff_r5;
        *(unsigned int *)(temp_v1 + 0x18) = unaff_r5;
        *(unsigned int *)(temp_v1 + 0x1c) = unaff_r5;
        *(unsigned int *)(temp_v1 + 0x20) = unaff_r5;
        *(unsigned int *)(temp_v1 - 0x120) = unaff_r5;
        *(unsigned int *)(temp_v1 - 0x11c) = unaff_r5;
      }
      temp_v2 = param_3[1];
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v2);
  }
  temp_v1 = *param_3;
  temp_v6 = 0;
  temp_v7 = temp_v1 + temp_v2 * 0x158;
  for (; temp_v1 != temp_v7; temp_v1 = temp_v1 + 0x158) {
    temp_v2 = __aeabi_uidivmod(param_6[9],param_6[8]);
    temp_v5 = 0;
    if (temp_v2 != 0) {
      temp_v5 = (param_5 + 0xfU) & 0xfffffff0;
      param_5 = temp_v5 + temp_v2;
    }
    *(unsigned int *)(temp_v1 + 4) = temp_v2 >> 3;
    temp_v3 = 0;
    do {
      temp_v4 = *(int *)(temp_v1 + 4) * 4;
      if (temp_v4 == 0) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = (temp_v5 + 0xf) & 0xfffffff0;
        temp_v5 = temp_v2 + temp_v4;
      }
      temp_v4 = temp_v3 + 1;
      *(unsigned int *)(temp_v1 + 0x14 + temp_v3 * 4) = temp_v2;
      temp_v3 = temp_v4;
    } while (temp_v4 < 2);
    FUN_0050769c(temp_v11,temp_v6);
    temp_v6 = temp_v6 + 1;
  }
  *param_1 = temp_v8;
  param_1[1] = 0;
  return;
}

} /* extern "C" */
