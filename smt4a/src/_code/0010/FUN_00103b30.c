/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00103b30` (_code @ 0x103b30, 0x9e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char LAB_00103bd0; /* 0x103bd0 */
extern unsigned char LAB_00103bd8; /* 0x103bd8 */

/* Supplied declaration required: FUN_00123784. */
extern int FUN_002e783c(unsigned char *);
/* Supplied declaration required: FUN_002e92dc. */
/* Supplied declaration required: FUN_002e9672. */
/* Supplied declaration required: FUN_002e967e. */
/* Supplied declaration required: FUN_002e96fc. */
/* Supplied declaration required: FUN_002e9714. */


void FUN_00103b30(int param_1,unsigned short *param_2,int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  unsigned short *temp_v3;
  int temp_v4;
  int uStack_18;
  
  *(unsigned char *)(param_1 + 100) = 1;
  temp_v3 = param_2;
  temp_v4 = param_3;
  uStack_18 = param_4;
  FUN_002e9672(*(unsigned int *)(param_1 + 4));
  temp_v4 = *(int *)(param_1 + 0x1c);
  temp_v3 = *(unsigned short **)(temp_v4 + 8);
  FUN_002e967e(&uStack_18,param_1 + 0xc,&temp_v3,&temp_v4);
  FUN_002e96fc(param_1 + 0x28);
  FUN_002e96fc(param_1 + 0x44);
  temp_v0 = param_1;
  FUN_00123784();
  *(char *)(param_1 + 8) = (char)temp_v0;
  if (temp_v0 == 0) {
    return;
  }
  temp_v0 = FUN_002e92dc(*(unsigned int *)(param_1 + 0x60),&LAB_00103bd0);
  temp_v1 = FUN_002e783c(&LAB_00103bd0);
  temp_v3 = (unsigned short *)(temp_v0 + temp_v1 * 2);
  puVar3 = (unsigned short *)FUN_002e92dc(temp_v3,&LAB_00103bd8);
  if (puVar3 != (unsigned short *)0x0) {
    temp_v0 = FUN_002e92dc(puVar3 + 1,&LAB_00103bd8);
    if (temp_v0 != 0) {
      return;
    }
    *puVar3 = 0;
    temp_v0 = param_1;
    FUN_002e9714(param_1,temp_v3,0);
    *puVar3 = 0x23;
    if (temp_v0 == 0) {
      return;
    }
    temp_v2 = 1;
    puVar3 = puVar3 + 1;
  }
  else {
    temp_v2 = 0;
    puVar3 = temp_v3;
  }
  temp_v0 = param_1;
  FUN_002e9714(param_1,puVar3,temp_v2);
  if (temp_v0 != 0) {
    *(unsigned char *)(param_1 + 0x66) = 1;
    *(unsigned char *)(param_1 + 0x65) = 1;
  }
  return;
}
