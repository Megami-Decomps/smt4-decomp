/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f707c` (_code @ 0x3f707c, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001835b4(...);
int FUN_001879d0(unsigned int);

/* stack frame of param_8: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
} param_8_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001879d0. */


void FUN_003f707c(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4,int param_5,
                 int param_6,int param_7,unsigned int param_8)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  float temp_v1;
  
  efctSetSpeed();
  temp_v1 = 0.26f;
  FUN_001879d0(g_renderCtx);
  temp_v0 = 0;
  param_2 = param_2 + (int)temp_v1;
  do {
    FUN_001835b4(2,0x31,param_5 + temp_v0,param_2,param_3,param_4);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 8);
  temp_v0 = 0;
  do {
    FUN_001835b4(2,0x31,param_6 + temp_v0,param_2,param_3,param_4);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  temp_v0 = 0;
  do {
    FUN_001835b4(2,0x31,param_7 + temp_v0,param_2,param_3,param_4);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  FUN_001835b4(2,0x31,param_8,param_2,param_3,param_4);
  efctSetSpeed();
  return;
}

} /* extern "C" */
