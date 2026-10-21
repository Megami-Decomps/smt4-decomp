/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e87a8` (_code @ 0x3e87a8, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003eb760(...);
int FUN_004ca63c(...);
int optionsApplyOverride(...);
int FUN_004d9ebc(...);
int optionsResetIfFlagSet(...);
int optionsResetIfNoFlag(...);
int FUN_004da144(...);
int optionsSetFlag1(...);

typedef struct fn_003e87a8_arg0 fn_003e87a8_arg0;
struct fn_003e87a8_arg0 {
    unsigned char pad_0x0[0x150];
    short field_0x150; /* +0x150 */
    unsigned char pad_0x152[0x2ed6];
    void *field_0x3028; /* +0x3028 */
    unsigned char pad_0x302c[0x1574];
    uint field_0x45a0; /* +0x45a0 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp420; /* 0x420: local_420 */
} param_1_stack;

extern unsigned int DAT_00573a50; /* 0x573a50 */
extern unsigned int DAT_00573a54; /* 0x573a54 */

extern int gameGetSlotTable(void);
extern int gameOptionsClassifyMode(void);
/* Supplied declaration required: FUN_003eb760. */
/* Supplied declaration required: FUN_004ca63c. */
/* Supplied declaration required: optionsApplyOverride. */
/* Supplied declaration required: FUN_004d9ebc. */
/* Supplied declaration required: optionsResetIfFlagSet. */
/* Supplied declaration required: optionsResetIfNoFlag. */
/* Supplied declaration required: FUN_004da144. */
/* Supplied declaration required: optionsSetFlag1. */


void FUN_003e87a8(fn_003e87a8_arg0 *param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [680];
  
  if ((param_1->field_0x45a0 & DAT_00573a50) != 0 || (*(unsigned int *)(param_1 + 1) & DAT_00573a54) != 0) {
    return;
  }
  if (param_1->field_0x150 != 0) {
    FUN_004d9ebc((int)param_1->field_0x150);
  }
  else {
    temp_v0 = gameOptionsClassifyMode();
    if ((int)param_1->field_0x3028 >= 1) {
      if (temp_v0 != 1) {
        if (temp_v0 == 2) {
          optionsResetIfFlagSet();
          optionsSetFlag1();
        }
      }
      else {
        optionsResetIfNoFlag();
        optionsSetFlag1();
      }
      optionsApplyOverride(param_1->field_0x3028);
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
        FUN_004da144();
      }
    }
  }
  temp_v0 = gameGetSlotTable();
  if (*(short *)(temp_v0 + 0x1d06) != 0) {
    FUN_003eb760(param_1,temp_v1);
    FUN_004ca63c(param_1,temp_v1,2,0x36,0);
  }
  return;
}

} /* extern "C" */
