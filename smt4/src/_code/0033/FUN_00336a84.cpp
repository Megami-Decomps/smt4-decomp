/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00336a84` (_code @ 0x336a84, 0x114 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00255e38(...);
int FUN_002560a4(...);
int FUN_00256124(...);
int FUN_00256194(...);
int gameOptionsEnableAndReset(...);
int FUN_00337cfc(...);
int FUN_003c8428(...);
int FUN_003c86bc(...);

typedef struct fn_00336a84_arg0 fn_00336a84_arg0;
struct fn_00336a84_arg0 {
    unsigned char pad_0x0[0x11c];
    short field_0x11c; /* +0x11c */
    unsigned char pad_0x11e[0x2e0a];
    void *field_0x2f28; /* +0x2f28 */
    unsigned char pad_0x2f2c[0x1574];
    uint field_0x44a0; /* +0x44a0 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp2A0; /* 0x2a0: local_2a0 */
} param_1_stack;

/* Supplied declaration required: FUN_00255e38. */
/* Supplied declaration required: FUN_002560a4. */
/* Supplied declaration required: FUN_00256124. */
/* Supplied declaration required: FUN_00256194. */
/* Supplied declaration required: gameOptionsEnableAndReset. */
extern int gameGetSlotTable(void);
extern int gameGetOptionProgressStatus(void);
/* Supplied declaration required: FUN_00337cfc. */
/* Supplied declaration required: FUN_003c8428. */
/* Supplied declaration required: FUN_003c86bc. */


void FUN_00336a84(fn_00336a84_arg0 *param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [448];
  
  if ((param_1->field_0x44a0 & 0x40000) != 0) {
    return;
  }
  if (param_1->field_0x11c != 0) {
    FUN_003c8428((int)param_1->field_0x11c);
  }
  else {
    temp_v0 = gameGetOptionProgressStatus();
    if ((int)param_1->field_0x2f28 >= 1) {
      if (temp_v0 != 1) {
        if (temp_v0 == 2) {
          FUN_00256124();
          gameOptionsEnableAndReset();
        }
      }
      else {
        FUN_00256194();
        gameOptionsEnableAndReset();
      }
      FUN_002560a4(param_1->field_0x2f28);
    }
    else {
      if (temp_v0 == 0) {
        return;
      }
      if (temp_v0 != 1) {
        if (temp_v0 != 2) {
          return;
        }
      }
      else {
        FUN_003c86bc();
      }
    }
  }
  temp_v0 = gameGetSlotTable();
  if (*(short *)(temp_v0 + 0x9152) != 0) {
    FUN_00337cfc(param_1,temp_v1);
    FUN_00255e38(param_1,temp_v1,2,0x36,0);
  }
  return;
}

} /* extern "C" */
