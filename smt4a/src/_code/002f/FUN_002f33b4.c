/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f33b4` (_code @ 0x2f33b4, 0xba bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char DAT_00558c30; /* 0x558c30 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Supplied declaration required: FUN_00117828. */
/* Supplied declaration required: FUN_0012d86c. */
/* Supplied declaration required: FUN_00132cd6. */
/* Supplied declaration required: FUN_002e6e14. */
extern int FUN_002e9318(unsigned int *);
extern int FUN_002eb624(int);
extern int *FUN_002f32d4(unsigned int *, int);
/* Supplied declaration required: FUN_002f3474. */
extern int FUN_002f3490(int);


unsigned long long FUN_002f33b4(unsigned int *param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int temp_v2;
  int temp_v3;
  int uStack_18;
  
  temp_v1 = 0;
  *param_1 = (unsigned int)&DAT_00558c30;
  temp_v2 = param_2;
  temp_v3 = param_3;
  uStack_18 = param_4;
  do {
    piVar1 = (int *)FUN_002f32d4(param_1 + 0x45,temp_v1);
    if ((int *)*piVar1 != (int *)0x0) {
      (**(romwright_code **)(*(int *)*piVar1 + 4))();
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  temp_v1 = param_1[0x44];
  if (temp_v1 != 0) {
    puVar4 = (unsigned int *)(temp_v1 + 4);
    temp_v0 = *(int *)(temp_v1 + 0x14);
    if (temp_v0 != 0) {
      temp_v2 = *(unsigned int *)(temp_v0 + 8);
      temp_v3 = temp_v0;
      FUN_0012d86c(&uStack_18,puVar4,&temp_v2,&temp_v3);
      FUN_002f3474(puVar4,*(unsigned int *)(temp_v1 + 0x14),0);
      while (puVar5 = (unsigned int *)*puVar4, puVar5 != (unsigned int *)0x0) {
        *puVar4 = *puVar5;
        FUN_002e6e14(puVar5[2]);
        FUN_002e6e14(puVar5);
      }
    }
    FUN_002e6e14(temp_v1);
  }
  temp_v1 = FUN_002e9318(param_1 + 0x50);
  for (temp_v0 = *(int *)(temp_v1 - 0x2c); temp_v0 != *(int *)(temp_v1 - 0x28); temp_v0 = temp_v0 + 4) {
  }
  FUN_002e6e14();
  temp_v1 = FUN_002f3490(temp_v1 - 100);
  temp_v1 = temp_v1 - 0x18;
  FUN_00132cd6(temp_v1);
  temp_v1 = temp_v1 - 0x20;
  FUN_00117828(temp_v1);
  temp_v1 = FUN_002eb624(temp_v1 - 0x70);
  temp_v1 = FUN_002eb624(temp_v1 - 0x30);
  return romwright_piece_4_4(temp_v2,temp_v1 - 4);
}
