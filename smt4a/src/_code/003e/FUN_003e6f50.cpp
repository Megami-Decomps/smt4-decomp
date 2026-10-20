/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6f50` (_code @ 0x3e6f50, 0x244 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00275bc8(...);
int FUN_00275f44(...);
int FUN_002804b0(...);
int FUN_0035b304(...);
int FUN_0037b450(...);
int FUN_003e6c14(...);
int stepStateBattleStart(...);
int FUN_004f6d34(...);
int FUN_004f7b84(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_00573808; /* 0x573808 */

extern int btlGetMainState(void);
extern int FUN_0014af84(void);
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_0035b304. */
/* Supplied declaration required: FUN_0037b450. */
/* Supplied declaration required: FUN_003e6c14. */
extern unsigned int *FUN_003e6dc8(unsigned int *);
/* Supplied declaration required: stepStateBattleStart. */
extern unsigned int *FUN_003e71a8(unsigned int *);
/* Supplied declaration required: FUN_004f6d34. */
/* Supplied declaration required: FUN_004f7b84. */


unsigned int * FUN_003e6f50(unsigned int *param_1)

{
/* irregular: 9 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  
  switch(*param_1) {
  case 0:
    FUN_004f7b84(DAT_00573808,"Dead_eyes");
    *param_1 = 1;
    temp_v2 = DAT_00573808;
    FUN_004f6d34();
    if (temp_v2 != 0) {
      param_1[2] = 0;
      *param_1 = 2;
      FUN_003e6c14(param_1);
      return param_1;
    }
    break;
  case 1:
    temp_v2 = DAT_00573808;
    FUN_004f6d34();
    if (temp_v2 != 0) {
      param_1[2] = 0;
      *param_1 = 2;
      FUN_003e6c14(param_1);
      return param_1;
    }
    break;
  case 2:
    FUN_003e6c14(param_1);
    return param_1;
  case 3:
    FUN_002804b0("battle/gameover/gameover.bf",param_1 + 4,0);
    FUN_002804b0("battle/gameover/gameover.mbm",param_1 + 6,0);
    temp_v2 = FUN_0014af84();
    temp_v0 = *(char *)(temp_v2 + 0x27e3d);
    if (temp_v0 != -1) {
      *(char *)(temp_v2 + 0x27e3d) = temp_v0 + '\x01';
    }
    *param_1 = 4;
    puVar4 = (unsigned int *)FUN_003e6dc8(param_1);
    return puVar4;
  case 4:
    puVar4 = (unsigned int *)FUN_003e6dc8(param_1);
    return puVar4;
  case 5:
    *param_1 = 7;
    stepStateBattleStart(param_1);
    return param_1;
  case 6:
    temp_v2 = param_1[3];
    if (temp_v2 != 0) {
      if (temp_v2 != 1) {
        if (temp_v2 != 99) {
          return (unsigned int *)0x0;
        }
        *param_1 = 7;
        stepStateBattleStart(param_1);
        return param_1;
      }
      temp_v2 = FUN_00224880(param_1[5]);
      if (temp_v2 != 2) {
        return (unsigned int *)0x0;
      }
      temp_v1 = 99;
    }
    else {
      temp_v2 = param_1[4];
      FUN_00275bc8(temp_v2,param_1[6]);
      param_1[5] = temp_v2;
      *(unsigned int *)(temp_v2 + 0x108) = 1;
      FUN_00275f44(param_1[5],0);
      FUN_00275f44(param_1[5],4);
      temp_v1 = 1;
    }
    param_1[3] = temp_v1;
    break;
  case 7:
    stepStateBattleStart(param_1);
    return param_1;
  case 8:
    temp_v2 = FUN_00224880(param_1[5]);
    if (temp_v2 == 2) {
      FUN_0035b304();
      FUN_0037b450();
      temp_v2 = btlGetMainState();
      if (*(int *)(temp_v2 + 0x4c80) != 1) {
        *param_1 = 9;
        puVar4 = (unsigned int *)FUN_003e71a8(param_1);
        return puVar4;
      }
      *param_1 = 10;
      return (unsigned int *)0xffffffff;
    }
    break;
  case 9:
    puVar4 = (unsigned int *)FUN_003e71a8(param_1);
    return puVar4;
  case 10:
    return (unsigned int *)0xffffffff;
  }
  return (unsigned int *)0x0;
}

} /* extern "C" */
