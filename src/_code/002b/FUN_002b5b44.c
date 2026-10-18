/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5b44` (_code @ 0x2b5b44, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: software_udf (CALLOTHER). */
/* Supplied declaration required: FUN_00139d80. */
extern unsigned int *FUN_002aa504(int, int, int);
/* Supplied declaration required: FUN_002b48dc. */
/* Supplied declaration required: FUN_002bb54c. */
extern int FUN_002bb5b4(void);
/* Supplied declaration required: FUN_002c0e4c. */


void FUN_002b5b44(int param_1,int param_2,int param_3,unsigned int param_4,int param_5,
                 unsigned int param_6)

{
/* irregular: irregular input(s): in_r12; 9 native warning(s); review required */
  romwright_code *pcVar1;
  unsigned int temp_v0;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  unsigned int temp_v3;
  romwright_code *unaff_r7;
  unsigned int in_r12;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v3 = (param_2 >> 1) ^ (param_4 >> 1);
  if (param_2 >> 1 < 0) {
    temp_v5 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + (unsigned int)temp_v5);
  }
  if ((int)param_4 < 0) {
    temp_v5 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + temp_v5);
  }
  temp_v4 = 0x2b5b70;
  puVar3 = (unsigned int *)FUN_002aa504(param_1,param_2,param_3);
  if ((temp_v3 & 0x40000000) != 0) {
    param_5 = *(unsigned int *)(temp_v4 + 8);
    param_6 = *(unsigned int *)(temp_v4 + 0xc);
                    /* WARNING: Does not return */
    pcVar1 = (romwright_code *)software_udf(0xd7,0x2b5bb0);
    (*pcVar1)();
  }
  puVar4 = (unsigned short *)((int)puVar3 << 4);
  *puVar3 = (unsigned int)puVar4;
  puVar3[1] = param_4;
  puVar3[2] = in_r12;
  if (puVar3 != (unsigned int *)0xfffffff4) {
    if (*(char *)(temp_v3 + 4) == '\0') {
      *puVar4 = 0;
      return;
    }
    FUN_00139d80();
    temp_v0 = 0;
    temp_v4 = temp_v1;
  }
  else {
    temp_v4 = FUN_002bb5b4();
    if (temp_v4 == 0) {
      *puVar4 = 0;
      return;
    }
    FUN_002bb54c();
    temp_v0 = 1;
    temp_v4 = temp_v2;
  }
  (*unaff_r7)(0,temp_v4 + 0x78);
  FUN_002c0e4c(temp_v0);
  FUN_002b48dc(&param_5);
  return;
}
