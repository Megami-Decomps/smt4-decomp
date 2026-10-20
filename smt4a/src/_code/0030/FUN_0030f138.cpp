/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f138` (_code @ 0x30f138, 0xd2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9300(...);
int FUN_002e9318(...);
int FUN_002e934e(unsigned int, int, int);
int FUN_002e93da(void);
int FUN_002e9498(int *, int, unsigned int, unsigned int);
int FUN_0030f0cc(int *, int, unsigned int);
int FUN_0030f12c(int, int, int);

/* stack frame of param_3: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_3_stack;

extern int FUN_00132132(int *, int *);
/* Supplied declaration required: FUN_002e9300. */
/* Supplied declaration required: FUN_002e9318. */
/* Supplied declaration required: FUN_002e934e. */
/* Supplied declaration required: FUN_002e93da. */
/* Supplied declaration required: FUN_002e9498. */
extern int FUN_002e97f2(int *, unsigned int *);
/* Supplied declaration required: FUN_0030f0cc. */
/* Supplied declaration required: FUN_0030f12c. */


unsigned int FUN_0030f138(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5 [3];
  unsigned char temp_v6 [8];
  int temp_v7;
  int temp_v8;
  unsigned int temp_v9 [2];
  int iStack_20;
  unsigned int temp_v10;
  unsigned int uStack_18;
  
  iStack_20 = param_1;
  temp_v10 = param_2;
  uStack_18 = param_3;
  FUN_002e93da();
  temp_v3 = FUN_002e9300(temp_v6,temp_v10);
  temp_v4 = param_1 + 0x25;
  temp_v0 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  temp_v5[0] = *(int *)(param_1 + 0x1c);
  while (temp_v1 = temp_v0, temp_v1 != 0) {
    temp_v0 = FUN_0030f12c(temp_v4,temp_v1 + 0x10,temp_v3);
    if (temp_v0 != 0) {
      temp_v0 = *(int *)(temp_v1 + 0xc);
    }
    else {
      temp_v0 = *(int *)(temp_v1 + 8);
      temp_v5[0] = temp_v1;
    }
  }
  temp_v8 = temp_v5[0];
  temp_v9[0] = *(unsigned int *)(param_1 + 0x1c);
  temp_v0 = FUN_002e97f2(&temp_v8,temp_v9);
  if ((temp_v0 != 0) ||
     (temp_v1 = FUN_0030f12c(temp_v4,temp_v3,temp_v8 + 0x10), temp_v0 = temp_v8, temp_v1 != 0)) {
    temp_v0 = *(int *)(param_1 + 0x1c);
  }
  FUN_002e9318(temp_v6);
  if (temp_v0 != *(int *)(param_1 + 0x1c)) {
    param_3 = *(unsigned int *)(temp_v0 + 0x18);
  }
  else {
    temp_v2 = FUN_002e9300(temp_v5,temp_v10);
    FUN_0030f0cc(&temp_v7,param_1 + 0x28,temp_v2);
    FUN_002e9318(temp_v5);
    temp_v8 = *(int *)(param_1 + 0x38);
    temp_v0 = FUN_00132132(&temp_v7,&temp_v8);
    if (temp_v0 != 0) {
      param_3 = *(unsigned int *)(temp_v7 + 0x1c);
      FUN_002e934e(param_3,0,10);
      FUN_002e9498(&temp_v3,param_1,temp_v10,param_3);
    }
  }
  return param_3;
}

} /* extern "C" */
