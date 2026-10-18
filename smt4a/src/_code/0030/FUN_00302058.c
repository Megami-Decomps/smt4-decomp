/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00302058` (_code @ 0x302058, 0x7a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern int DAT_00599360; /* 0x599360 */
extern int *DAT_00599364; /* 0x599364 */
extern unsigned int DAT_00630424; /* 0x630424 */

extern int FUN_001222f4(int, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00122334. */
/* Supplied declaration required: FUN_002ec728. */
/* Supplied declaration required: FUN_002ec75c. */
/* Supplied declaration required: FUN_002ec890. */
/* Supplied declaration required: FUN_002ecbdc. */


void FUN_00302058(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [24];
  unsigned char temp_v2 [24];
  unsigned int temp_v3;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  
  if (DAT_00599364 == (int *)0x0) {
    DAT_00599364 = (int *)&DAT_00630424;
  }
  temp_v3 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  if (DAT_00599360 != 0) {
    FUN_002ec75c(temp_v1);
    temp_v0 = FUN_001222f4(DAT_00599360,param_2,param_3,temp_v1);
    if (temp_v0 == 0) {
      (**(romwright_code **)(*DAT_00599364 + 8))(temp_v2,DAT_00599364,param_2,param_3);
      FUN_002ec728(temp_v1,temp_v2);
      FUN_002ec890(temp_v2);
      FUN_00122334(DAT_00599360,param_2,param_3,temp_v1);
    }
    FUN_002ecbdc(temp_v3,temp_v1);
    FUN_002ec890(temp_v1);
  }
  else {
    (**(romwright_code **)(*DAT_00599364 + 8))(param_1,DAT_00599364,param_2,param_3);
  }
  return;
}
