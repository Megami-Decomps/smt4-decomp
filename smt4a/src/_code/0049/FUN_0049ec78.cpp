/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049ec78` (_code @ 0x49ec78, 0x2b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(void);
int FUN_001834a4(...);
int FUN_001835b4(...);
int FUN_001879d0(unsigned int);

/* stack frame of param_5: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_5_stack;

extern unsigned int g_renderCtx; /* 0x59dbb4 */

/* Supplied declaration required: efctSetSpeed. */
extern int asdTMTexTableNodeIsLoaded(unsigned int);
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001879d0. */


void FUN_0049ec78(int param_1,int param_2,int param_3,int param_4,int param_5)

{
/* irregular: 4 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  float temp_v6;
  float temp_v7;
  
  temp_v5 = *(int *)(param_2 + 0x10);
  if (((*(short *)(*(int *)(param_1 + 0x84) + 0x36) == 0) ||
      (temp_v3 = asdTMTexTableNodeIsLoaded(0x33), temp_v3 != 0)) &&
     ((*(short *)(*(int *)(param_1 + 0x84) + 0x40) == 0 || (temp_v3 = asdTMTexTableNodeIsLoaded(0x33), temp_v3 != 0))
     )) {
    temp_v7 = 0.25f;
    temp_v6 = temp_v7;
    FUN_001879d0(g_renderCtx);
    temp_v4 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x84) + temp_v5 * 10 + 0x36);
    temp_v0 = *(unsigned short *)(*(int *)(param_1 + 0x84) + temp_v5 * 10 + 0x38);
    if (temp_v4 != 0) {
      temp_v5 = FUN_001834a4(0x33);
      if (**(short **)(temp_v5 + 0xc) != 0xb6) {
        if (**(short **)(temp_v5 + 0xc) == 0x93) {
          temp_v5 = FUN_001834a4(0x33,0x2f);
        }
      }
      else {
        temp_v5 = FUN_001834a4(0x33,0x27);
      }
      temp_v1 = *(short *)(temp_v5 + 8);
      temp_v2 = *(short *)(temp_v5 + 10);
      efctSetSpeed();
      FUN_001835b4(2,0x33,(unsigned int)temp_v0 + temp_v4 * 1000,(int)temp_v1 + param_3 + (int)temp_v7,
                   temp_v2 + param_4,param_5 + 5);
      efctSetSpeed();
    }
    temp_v4 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + 0x84) + *(int *)(param_2 + 0x14) * 10 + 0x36);
    temp_v0 = *(unsigned short *)(*(int *)(param_1 + 0x84) + *(int *)(param_2 + 0x14) * 10 + 0x38);
    if (temp_v4 != 0) {
      temp_v5 = FUN_001834a4(0x33);
      if (**(short **)(temp_v5 + 0xc) != 0xb6) {
        if (**(short **)(temp_v5 + 0xc) == 0x93) {
          temp_v5 = FUN_001834a4(0x33,0x30);
        }
      }
      else {
        temp_v5 = FUN_001834a4(0x33,0x28);
      }
      temp_v1 = *(short *)(temp_v5 + 8);
      temp_v2 = *(short *)(temp_v5 + 10);
      efctSetSpeed();
      FUN_001835b4(2,0x33,(unsigned int)temp_v0 + temp_v4 * 1000,param_3 + (int)temp_v7 + (int)temp_v1,
                   temp_v2 + param_4,param_5 + 5);
      efctSetSpeed();
    }
    efctSetSpeed();
    temp_v1 = **(short **)(param_1 + 0x84);
    if ((temp_v1 != 3 && temp_v1 != 9) && (temp_v1 != 0xb)) {
      FUN_001879d0(g_renderCtx);
      efctSetSpeed();
      FUN_001835b4(2,0x33,0x29,param_3 + (int)temp_v6,param_4,param_5 + 10);
      efctSetSpeed();
      return;
    }
  }
  return;
}

} /* extern "C" */
