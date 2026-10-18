/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014b0b0` (_code @ 0x14b0b0, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

/* Supplied declaration required: FUN_0014b0b0. */
/* Supplied declaration required: FUN_002a7c80. */
extern int FUN_002c301c(int *, int, unsigned int);
extern unsigned int FUN_002c30c4(int);


void FUN_0014b0b0(int *param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int *piVar4;
  int temp_v2;
  unsigned int *puVar6;
  unsigned char temp_v3;
  int unaff_r6;
  int temp_v4;
  int temp_v5;
  char temp_v6;
  unsigned char temp_v7 [8];
  
  temp_v0 = *(int *)(param_2 + 0x18);
  temp_v4 = 0;
  temp_v3 = 0;
  if (temp_v0 != 0) {
    unaff_r6 = temp_v0 + param_2 + 0x18;
  }
  temp_v5 = *(int *)(param_3 + 0x40);
  if (temp_v0 == 0) {
    unaff_r6 = 0;
  }
  if (temp_v5 != 0) {
    temp_v5 = temp_v5 + param_3 + 0x40;
  }
  else {
    temp_v5 = 0;
  }
  if (!(temp_v5 == 0 || unaff_r6 == 0)) {
    temp_v1 = FUN_002c30c4(unaff_r6);
    temp_v0 = FUN_002c301c(&temp_v5,unaff_r6,temp_v1);
    if (temp_v0 != 0) {
      temp_v2 = *(int *)(temp_v0 + 0xc);
      if (temp_v2 == 0) {
        puVar3 = (unsigned int *)0x0;
      }
      else {
        puVar3 = (unsigned int *)(temp_v0 + 0xc + temp_v2);
      }
    }
    else {
      puVar3 = (unsigned int *)0x0;
    }
  }
  else {
    puVar3 = (unsigned int *)0x0;
  }
  if (puVar3 != (unsigned int *)0x0) {
    puVar6 = puVar3;
    if ((~*puVar3 & 0x80000001) != 0) {
      puVar6 = (unsigned int *)0x0;
    }
    if (puVar6 != (unsigned int *)0x0) {
      temp_v5 = 0;
      temp_v6 = '\0';
      FUN_0014b0b0(temp_v7,puVar6,param_3);
      FUN_002a7c80(&temp_v5,temp_v7);
      if (temp_v6 != '\0') {
        piVar4 = (int *)(param_2 + 0x1c);
        if (temp_v5 != 0) {
          *piVar4 = temp_v5 - (int)piVar4;
        }
        else {
          *piVar4 = 0;
        }
        temp_v3 = 1;
      }
    }
    else {
      *(int *)(param_2 + 0x1c) = (int)puVar3 - (param_2 + 0x1c);
      temp_v3 = 1;
    }
  }
  temp_v0 = *(int *)(param_2 + 0x1c);
  if (temp_v0 != 0) {
    temp_v4 = temp_v0 + param_2 + 0x1c;
  }
  *param_1 = temp_v4;
  *(unsigned char *)(param_1 + 1) = temp_v3;
  return;
}
