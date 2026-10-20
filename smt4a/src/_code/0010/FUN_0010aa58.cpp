/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010aa58` (_code @ 0x10aa58, 0x92 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012dac2(int *, int *, int *, int *);
int FUN_0012fdbc(int *, int *, int *, int *);
int FUN_002e6e14(...);
int FUN_002eb9ea(unsigned int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_00558c7c; /* 0x558c7c */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0012dac2. */
/* Supplied declaration required: FUN_0012fdbc. */
/* Supplied declaration required: FUN_002e6e14. */
extern int FUN_002eb624(unsigned int *);
/* Supplied declaration required: FUN_002eb9ea. */


unsigned long long FUN_0010aa58(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  int temp_v2;
  int temp_v3;
  int uStack_10;
  
  *param_1 = (unsigned int)&DAT_00558c7c;
  param_1 = param_1 + 0x20;
  temp_v2 = param_2;
  temp_v3 = param_3;
  uStack_10 = param_4;
  FUN_002eb9ea(param_1);
  temp_v0 = FUN_002eb624(param_1 + -0xd);
  piVar4 = (int *)(temp_v0 - 0x28);
  temp_v3 = *(int *)(temp_v0 - 0x18);
  if (temp_v3 != 0) {
    temp_v2 = *(unsigned int *)(temp_v3 + 8);
    FUN_0012dac2(&uStack_10,piVar4,&temp_v2,&temp_v3);
    temp_v1 = *(int *)(temp_v0 - 0x18);
    *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 - 0x24);
    *(int *)(temp_v0 - 0x24) = temp_v1;
    while (piVar3 = (int *)*piVar4, piVar3 != (int *)0x0) {
      *piVar4 = *piVar3;
      FUN_002e6e14(piVar3[2]);
      FUN_002e6e14(piVar3);
    }
  }
  piVar4 = (int *)(temp_v0 - 0x44);
  temp_v3 = *(int *)(temp_v0 - 0x34);
  if (temp_v3 != 0) {
    temp_v2 = *(unsigned int *)(temp_v3 + 8);
    FUN_0012fdbc(&uStack_10,piVar4,&temp_v2,&temp_v3);
    temp_v1 = *(int *)(temp_v0 - 0x34);
    *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 - 0x40);
    *(int *)(temp_v0 - 0x40) = temp_v1;
    while (piVar3 = (int *)*piVar4, piVar3 != (int *)0x0) {
      *piVar4 = *piVar3;
      FUN_002e6e14(piVar3[2]);
      FUN_002e6e14(piVar3);
    }
  }
  return romwright_piece_4_4(temp_v2,temp_v0 - 0x4c);
}

} /* extern "C" */
