/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f5d94` (_code @ 0x3f5d94, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001835b4(int, int, int, int, unsigned int, int);
int FUN_001879d0(unsigned int);
int FUN_003f54c4(int, int, int);
int FUN_003f5b14(int, int, int, int, int);
int FUN_003f61b4(int, int, int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} param_3_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

extern int FUN_001654d8(int);
extern int FUN_001654e4(int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_003f54c4. */
/* Supplied declaration required: FUN_003f5b14. */
/* Supplied declaration required: FUN_003f61b4. */


void FUN_003f5d94(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  float temp_v4;
  
  temp_v4 = 0.26f;
  FUN_001879d0(g_renderCtx);
  param_2 = param_2 + (int)temp_v4;
  efctSetSpeed();
  FUN_001835b4(2,0x31,0,param_2,param_3,0x8d);
  FUN_001835b4(2,0x31,1,param_2,param_3,0x8d);
  FUN_001835b4(2,0x31,9,param_2,param_3,0x8d);
  temp_v0 = FUN_001654d8(param_1 + 0x1f8);
  temp_v1 = FUN_001654e4(param_1 + 0x1f8);
  FUN_003f5b14(param_1,temp_v0,temp_v1,0x17,0x1a);
  temp_v2 = FUN_001654d8(param_1 + 0x284);
  temp_v3 = FUN_001654e4(param_1 + 0x284);
  if (*(int *)(param_1 + 0x124) == 0) {
    FUN_003f54c4(param_1,temp_v2 + temp_v0,temp_v3 + temp_v1);
    FUN_003f61b4(param_1,temp_v0,temp_v1);
    return;
  }
  return;
}

} /* extern "C" */
