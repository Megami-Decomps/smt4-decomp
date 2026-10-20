/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fc4f0` (_code @ 0x1fc4f0, 0x224 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001835b4(...);

typedef int romwright_code(...);
/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

extern int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: efctSetSpeed. */
extern int packNibblesAndByte(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */


void FUN_001fc4f0(unsigned int param_1,unsigned int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  efctSetSpeed();
  if (param_3 != 0) {
    if (param_4 != 0) {
      FUN_001835b4(2,0x24,0x6f,param_1,param_2,0xb);
      FUN_001835b4(2,0x24,0x95,param_1,param_2,0xb);
      FUN_001835b4(2,0x24,0x96,param_1,param_2,0xb);
      efctSetSpeed();
      FUN_001835b4(2,0x24,0x97,param_1,param_2,0xb);
      FUN_001835b4(2,0x24,0x98,param_1,param_2,0xb);
    }
    else {
      FUN_001835b4(2,0x24,0x6f,param_1,param_2,0xb);
      FUN_001835b4(2,0x24,0x8d,param_1,param_2,0xb);
      FUN_001835b4(2,0x24,0x8e,param_1,param_2,0xb);
      efctSetSpeed();
      FUN_001835b4(2,0x24,0x8f,param_1,param_2,0xb);
      FUN_001835b4(2,0x24,0x90,param_1,param_2,0xb);
    }
  }
  else {
    if (param_5 != 0) {
      FUN_001835b4(2,0x24,0xac,param_1,param_2,0xb);
    }
    else {
      FUN_001835b4(2,0x24,0x66,param_1,param_2,0xb);
    }
    temp_v2 = 0;
    do {
      FUN_001835b4(2,0x24,temp_v2 + 0x6b,param_1,param_2,0x12);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
  }
  temp_v2 = g_renderCtx;
  temp_v0 = packNibblesAndByte(6,7,0);
  piVar4 = (int *)(temp_v2 + 0x12b8);
  temp_v1 = piVar4[*piVar4 + 2];
  piVar4[*piVar4 + 2] = temp_v0;
  if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v1 != temp_v0) {
    (**(romwright_code **)(temp_v2 + 0x12d4))();
    *(unsigned char *)(temp_v2 + 0x12d0) = 0;
  }
  efctSetSpeed();
  return;
}

} /* extern "C" */
