/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00128e56` (_code @ 0x128e56, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00128cf2(int, int *, int *, unsigned int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
/* Supplied declaration required: FUN_00128cf2. */
extern unsigned int aeabi_uidivmod(int);


void FUN_00128e56(int param_1,int *param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int uStack_18;
  
  temp_v2 = *(unsigned int *)(param_1 + 0x24);
  temp_v0 = *param_3;
  temp_v1 = param_3[1];
  temp_v3 = temp_v0 <= *(unsigned int *)(param_1 + 0x20);
  if (temp_v2 <= temp_v1 && (unsigned int)temp_v3 <= temp_v2 - temp_v1) {
    *(unsigned int *)(param_1 + 0x24) = temp_v1;
    *(unsigned int *)(param_1 + 0x20) = temp_v0;
  }
  temp_v5 = *(unsigned int *)(param_1 + 0x24);
  temp_v4 = *(unsigned int *)(param_1 + 0x20);
  uStack_18 = param_4;
  FUN_00128cf2(param_1,param_2,&temp_v4,(temp_v2 - temp_v1) - (unsigned int)!temp_v3);
  if (*(int *)(*(int *)(param_1 + 0x1c) + 0xc) != -1) {
    temp_v0 = aeabi_uidivmod(*(int *)(*param_2 + 0x10) * 8000);
    temp_v1 = *(unsigned int *)(param_1 + 0x20);
    *(unsigned int *)(param_1 + 0x20) = temp_v0 + temp_v1;
    *(unsigned int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (unsigned int)romwright_carry_4(temp_v0,temp_v1);
  }
  return;
}

} /* extern "C" */
