/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234004` (_code @ 0x234004, 0x150 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_3_stack;

extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_002342b8. */
extern int FUN_0023a24c(int);
/* Supplied declaration required: FUN_002a140c. */
/* Supplied declaration required: FUN_002a14a0. */
/* Supplied declaration required: FUN_002a1578. */
/* Supplied declaration required: FUN_002bac34. */
/* Supplied declaration required: FUN_0038b638. */


void FUN_00234004(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 1 goto(s); 6 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  temp_v1 = DAT_00432fc8;
  FUN_002bac34(DAT_00432fc8 + 0x88);
  temp_v0 = FUN_002a1578(param_1 + 0x214);
  if (temp_v0 != -0x36bec76f) {
    FUN_0038b638(DAT_00432fc8,*(unsigned int *)(param_1 + 0x214),*(unsigned int *)(param_1 + 0x218));
    temp_v0 = param_1 + 0x214;
    FUN_002a14a0();
    if (temp_v0 != 0) {
      piVar2 = *(int **)(param_1 + 0x208);
      *(unsigned int *)(param_1 + 4) = 4;
      *(unsigned int *)(param_1 + 8) = 0;
    }
    else {
      temp_v0 = param_1 + 0x214;
      FUN_002a140c();
      if ((temp_v0 != 0) || (temp_v1 = FUN_0023a24c(temp_v1 + 0x80), -1 >= temp_v1)) {
        piVar2 = *(int **)(param_1 + 0x208);
        *(unsigned int *)(param_1 + 4) = 3;
        *(unsigned int *)(param_1 + 8) = 0;
      }
      else {
        temp_v2 = FUN_002a1578(param_1 + 0x214);
        temp_v3 = temp_v2 >> 0x1b;
        if ((temp_v2 & 0x80000000) != 0) {
          temp_v3 = temp_v3 - 0x20;
        }
        if (temp_v3 == 0xfffffffc) {
LAB_00234134:
          temp_v4 = *(unsigned int *)(param_1 + 0x210);
          uStack_2c = *(unsigned int *)(param_1 + 0x214);
          uStack_28 = *(unsigned int *)(param_1 + 0x218);
          uStack_24 = *(unsigned int *)(param_1 + 0x21c);
          uStack_20 = *(unsigned int *)(param_1 + 0x220);
          FUN_002342b8(param_1,&temp_v4);
          return;
        }
        temp_v2 = FUN_002a1578(param_1 + 0x214);
        temp_v3 = temp_v2 >> 0x1b;
        if ((temp_v2 & 0x80000000) != 0) {
          temp_v3 = temp_v3 - 0x20;
        }
        if ((temp_v3 == 0xfffffffb) || (temp_v1 = FUN_002a1578(param_1 + 0x214), temp_v1 == -0x377ec770))
        goto LAB_00234134;
        *(unsigned int *)(param_1 + 4) = param_3;
        piVar2 = *(int **)(param_1 + 0x208);
        *(unsigned int *)(param_1 + 8) = 0;
      }
    }
    if (piVar2 != (int *)0x0) {
      (**(romwright_code **)(*piVar2 + 4))();
      *(unsigned int *)(param_1 + 0x208) = 0;
    }
  }
  return;
}
