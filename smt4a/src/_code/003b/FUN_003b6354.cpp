/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b6354` (_code @ 0x3b6354, 0x2d4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int efctSetSpeed(...);
int FUN_001835b4(int, int, int, int, int, int);
int VectorSignedToFloat(int, int);

/* stack frame of param_9: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_9_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int vec2GetXInt(int);
extern int vec2GetYInt(int);
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001835b4. */
extern int FUN_002a4860(int);
extern int FUN_002a4894(int);
extern int objectApplyIfUnblocked(void);


void FUN_003b6354(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int *param_7,int *param_8,char *param_9)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int in_fpscr;
  
  piVar1 = (int *)(param_1 + 0x8e7c);
  if (param_2 < param_4 - *piVar1) {
    FUN_001835b4(2,0x1a,0x172,*param_7 + param_5,*param_8 + param_6,0x65);
    return;
  }
  temp_v0 = param_1 + 0x8e14;
  temp_v1 = objectApplyIfUnblocked();
  if ((*piVar1 < temp_v1) && (param_2 == param_4)) {
    if (param_3 != 1) {
      if ((param_3 == 2 || param_3 == 3) && (*param_9 != '\0')) {
        temp_v0 = *(int *)(param_1 + 0x3fc) * -3 + *param_8;
        *param_8 = temp_v0;
        FUN_001835b4(2,0x1a,0x171,*param_7 + param_5,temp_v0 + param_6,0x65);
        return;
      }
    }
    else if (*(int *)(param_1 + 0x3fc) < 1) {
      temp_v0 = 1 - *(int *)(param_1 + 0x3fc);
      VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
      efctSetSpeed(temp_v0);
    }
  }
  else {
    temp_v1 = param_1 + param_2 * 2;
    if (param_3 != 1) {
      if (param_3 != 2) {
        if ((param_3 == 3) && (*(int *)(param_1 + 0x3fc) < 6)) {
          if (*param_9 != '\0') {
            *param_8 = *(int *)(param_1 + 0x3fc) * -3 + *param_8;
          }
          if (param_2 == *(int *)(param_1 + *piVar1 * 4 + 0x8e88)) {
            temp_v0 = 5 - *(int *)(param_1 + 0x3fc);
            VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
            efctSetSpeed(temp_v0);
          }
        }
      }
      else if (*(int *)(param_1 + 0x3fc) < 6) {
        temp_v2 = FUN_002a4860(temp_v0);
        temp_v0 = FUN_002a4894(temp_v0);
        if (*param_9 != '\0') {
          *param_8 = *(int *)(param_1 + 0x3fc) * -3 + *param_8;
        }
        if (*(short *)(temp_v1 + 0x8b60) == *(short *)(param_1 + (temp_v0 + temp_v2) * 2 + 0x8b70)) {
          temp_v0 = 5 - *(int *)(param_1 + 0x3fc);
          VectorSignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          efctSetSpeed(temp_v0);
        }
      }
    }
    else if (0 < *(int *)(param_1 + 0x3fc)) {
      temp_v2 = FUN_002a4860(temp_v0);
      temp_v0 = FUN_002a4894(temp_v0);
      if (*(short *)(temp_v1 + 0x8b60) == *(short *)(param_1 + (temp_v0 + temp_v2) * 2 + 0x8b70)) {
        temp_v0 = vec2GetXInt(param_1 + 0x2e0);
        *param_7 = temp_v0 + *param_7;
        temp_v0 = vec2GetYInt(param_1 + 0x2e0);
        *param_8 = temp_v0 + *param_8;
        efctSetSpeed();
      }
    }
  }
  temp_v0 = *param_8;
  FUN_001835b4(2,0x1a,0x171,*param_7 + param_5,temp_v0 + param_6,0x65);
  return;
}

} /* extern "C" */
