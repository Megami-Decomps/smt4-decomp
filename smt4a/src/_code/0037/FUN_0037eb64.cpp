/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037eb64` (_code @ 0x37eb64, 0x1b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int FUN_001879d0(unsigned int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */
extern int FUN_003e48bc(void);
extern int FUN_003e4978(void);
extern int FUN_003e53ec(void);


void FUN_0037eb64(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  
  temp_v0 = FUN_003e4978();
  if (temp_v0 != 0) {
    temp_v5 = 0.26f;
    FUN_001879d0(g_renderCtx);
    param_2 = param_2 + (int)temp_v5;
    efctSetSpeed();
    FUN_001835b4(2,0x14,0xbcc,param_2,param_3,0xc9);
    FUN_001835b4(2,0x14,0xbcd,param_2,param_3,0xca);
    temp_v0 = FUN_003e53ec();
    if (temp_v0 >= 9) {
      temp_v0 = 8;
    }
    else if (temp_v0 < 0) {
      temp_v0 = 0;
    }
    temp_v4 = 0xc0c;
    temp_v2 = 0;
    temp_v3 = 0xc2b;
    do {
      if (temp_v0 <= temp_v2) {
        temp_v3 = 0xc23;
        temp_v4 = 0xbcb;
      }
      temp_v1 = FUN_001834a4(0x14,temp_v3 + temp_v2);
      FUN_001835b4(2,0x14,temp_v4,*(short *)(temp_v1 + 8) + param_2,*(short *)(temp_v1 + 10) + param_3,
                   0xc9);
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 8);
    temp_v0 = FUN_003e48bc();
    if (temp_v0 != 0) {
      temp_v0 = 0;
      do {
        temp_v3 = FUN_001834a4(0x14,temp_v0 + 0xc2b);
        FUN_001835b4(2,0x14,0xc0d,*(short *)(temp_v3 + 8) + param_2,*(short *)(temp_v3 + 10) + param_3,
                     0xdd);
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 8);
      efctSetSpeed();
      temp_v0 = FUN_001834a4(0x14,0xc14);
      FUN_001835b4(2,0x14,0xc0e,*(short *)(temp_v0 + 8) + param_2,*(short *)(temp_v0 + 10) + param_3,
                   0xdd);
      efctSetSpeed();
      FUN_00183bb0();
      return;
    }
  }
  return;
}

} /* extern "C" */
