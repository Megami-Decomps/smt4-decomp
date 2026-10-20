/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018df80` (_code @ 0x18df80, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int FUN_002e3390(int);
extern int nw_ut_ResDicPatricia_Get(int *, int, unsigned int);


void FUN_0018df80(int *param_1,int param_2,int param_3)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned char temp_v3;
  int unaff_r6;
  int unaff_r7;
  int temp_v4;
  int temp_v5;
  
  temp_v4 = 0;
  temp_v0 = *(int *)(param_2 + 4);
  temp_v3 = 0;
  if (temp_v0 != 0) {
    unaff_r6 = temp_v0 + param_2 + 4;
  }
  temp_v2 = *(int *)(param_2 + 8);
  if (temp_v0 == 0) {
    unaff_r6 = 0;
  }
  if (temp_v2 != 0) {
    unaff_r7 = temp_v2 + param_2 + 8;
  }
  temp_v5 = *(int *)(param_3 + 0x30);
  if (temp_v2 == 0) {
    unaff_r7 = 0;
  }
  if (temp_v5 != 0) {
    temp_v5 = temp_v5 + param_3 + 0x30;
  }
  else {
    temp_v5 = 0;
  }
  if (!(temp_v5 == 0 || unaff_r6 == 0)) {
    temp_v1 = FUN_002e3390(unaff_r6);
    temp_v0 = nw_ut_ResDicPatricia_Get(&temp_v5,unaff_r6,temp_v1);
    if (temp_v0 != 0) {
      temp_v2 = *(int *)(temp_v0 + 0xc);
      if (temp_v2 == 0) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0 + 0xc + temp_v2;
      }
    }
    else {
      temp_v2 = 0;
    }
  }
  else {
    temp_v2 = 0;
  }
  if (temp_v2 != 0) {
    temp_v5 = *(int *)(temp_v2 + 0x1c);
    if (temp_v5 != 0) {
      temp_v5 = temp_v2 + 0x1c + temp_v5;
    }
    else {
      temp_v5 = 0;
    }
    if (!(temp_v5 == 0 || unaff_r7 == 0)) {
      temp_v1 = FUN_002e3390(unaff_r7);
      temp_v0 = nw_ut_ResDicPatricia_Get(&temp_v5,unaff_r7,temp_v1);
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
    if ((puVar3 != (unsigned int *)0x0) && ((*puVar3 & 0x80000000) == 0)) {
      puVar3 = (unsigned int *)0x0;
    }
    if (puVar3 != (unsigned int *)0x0) {
      temp_v3 = 1;
      *(int *)(param_2 + 0xc) = (int)puVar3 - (param_2 + 0xc);
    }
  }
  temp_v0 = *(int *)(param_2 + 0xc);
  if (temp_v0 != 0) {
    temp_v4 = temp_v0 + param_2 + 0xc;
  }
  *param_1 = temp_v4;
  *(unsigned char *)(param_1 + 1) = temp_v3;
  return;
}

} /* extern "C" */
