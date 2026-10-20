/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034c338` (_code @ 0x34c338, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023e3ec(int, unsigned int);
int FUN_002a5ed0(int, unsigned int);
int FUN_002a6100(int, unsigned int);
int mtx44Copy(int, unsigned int);
int asdMemoryAlloc(int, int, int, int, int);
int FUN_0034c4a0(int *);

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_0023e3ec. */
/* Supplied declaration required: FUN_002a5ed0. */
/* Supplied declaration required: FUN_002a6100. */
extern unsigned int FUN_002a7bc0(void);
/* Supplied declaration required: mtx44Copy. */
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: FUN_0034c4a0. */


void FUN_0034c338(int *param_1,int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  param_1[7] = param_2;
  temp_v0 = 0x100;
  asdMemoryAlloc(0x100,0x100,0,0xa0,1);
  param_1[1] = temp_v0;
  temp_v0 = 0x100;
  asdMemoryAlloc(0x100,0x100,0,0x88,1);
  temp_v2 = 0;
  param_1[6] = temp_v0;
  do {
    if ((param_3 & 8) != 0) {
      temp_v1 = 0x16;
      FUN_0023e3ec(0x16,*(unsigned int *)(param_1[7] + temp_v2 * 0x28 + 0x1c));
      *(unsigned int *)(param_1[6] + temp_v2 * 0x44 + 0x40) = temp_v1;
    }
    else if ((param_3 & 0x40) != 0) {
      temp_v1 = 0x16;
      FUN_002a6100(0x16,*(unsigned int *)(param_1[7] + temp_v2 * 0x28 + 0x1c));
      *(unsigned int *)(param_1[6] + temp_v2 * 0x44 + 0x40) = temp_v1;
    }
    else if ((param_3 & 1) != 0) {
      temp_v1 = 0x16;
      FUN_002a5ed0(0x16,*(unsigned int *)(param_1[7] + temp_v2 * 0x28 + 0x1c));
      *(unsigned int *)(param_1[6] + temp_v2 * 0x44 + 0x40) = temp_v1;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 2);
  FUN_0034c4a0(param_1);
  (**(romwright_code **)(*param_1 + 0x10))(param_1);
  temp_v0 = 0;
  do {
    temp_v2 = param_1[6];
    temp_v1 = FUN_002a7bc0();
    mtx44Copy(temp_v2 + temp_v0 * 0x44,temp_v1);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  return;
}

} /* extern "C" */
