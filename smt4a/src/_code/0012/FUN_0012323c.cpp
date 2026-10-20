/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012323c` (_code @ 0x12323c, 0xb6 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010570e(unsigned int *, unsigned int);
int FUN_002e6e14(...);
int FUN_002f28bc(unsigned int *);
int FUN_002f4bfc(unsigned int);
int FUN_002f8e58(unsigned int *, unsigned int);
int FUN_0030f2ca(int *, int *, int *, int *);
int FUN_0030f34c(...);

typedef int romwright_code(...);
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char DAT_0055b368; /* 0x55b368 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_0010570e. */
extern int FUN_001057dc(int);
/* Supplied declaration required: FUN_002e6e14. */
extern int FUN_002eb624(int);
/* Supplied declaration required: FUN_002f28bc. */
/* Supplied declaration required: FUN_002f4bfc. */
/* Supplied declaration required: FUN_002f8e58. */
/* Supplied declaration required: FUN_0030f2ca. */
/* Supplied declaration required: FUN_0030f34c. */


unsigned long long FUN_0012323c(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  int *piVar4;
  int temp_v2;
  int temp_v3;
  int uStack_18;
  
  *param_1 = (unsigned int)&DAT_0055b368;
  temp_v2 = param_2;
  temp_v3 = param_3;
  uStack_18 = param_4;
  FUN_002f4bfc(param_1[3]);
  if ((int *)param_1[3] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[3] + 4))();
  }
  while (param_1[0x4f] != 0) {
    FUN_002f8e58(param_1,param_1[0x4c]);
  }
  FUN_0010570e(param_1 + 4,param_1[0x15]);
  param_1 = param_1 + 0x52;
  FUN_002f28bc(param_1);
  temp_v0 = FUN_0030f34c(param_1 + -7);
  piVar4 = (int *)(temp_v0 - 0x1c);
  temp_v1 = *(int *)(temp_v0 - 0xc);
  if (temp_v1 != 0) {
    temp_v2 = *(unsigned int *)(temp_v1 + 8);
    temp_v3 = temp_v1;
    FUN_0030f2ca(&uStack_18,piVar4,&temp_v2,&temp_v3);
    temp_v1 = *(int *)(temp_v0 - 0xc);
    *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 - 0x18);
    *(int *)(temp_v0 - 0x18) = temp_v1;
    while (piVar3 = (int *)*piVar4, piVar3 != (int *)0x0) {
      *piVar4 = *piVar3;
      FUN_002e6e14(piVar3[2]);
      FUN_002e6e14(piVar3);
    }
  }
  temp_v0 = FUN_0030f34c(temp_v0 - 0x30);
  temp_v0 = FUN_0030f34c(temp_v0 - 0x14);
  temp_v0 = FUN_002eb624(temp_v0 - 0x30);
  temp_v0 = FUN_002eb624(temp_v0 - 0x30);
  temp_v0 = FUN_002eb624(temp_v0 - 0x30);
  temp_v0 = FUN_001057dc(temp_v0 - 0x48);
  return romwright_piece_4_4(temp_v2,temp_v0 - 0x10);
}

} /* extern "C" */
