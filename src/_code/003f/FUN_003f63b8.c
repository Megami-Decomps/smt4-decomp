/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f63b8` (_code @ 0x3f63b8, 0x10c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

extern romwright_code *DAT_0044e960; /* 0x44e960 */
extern romwright_code *DAT_0044e964; /* 0x44e964 */

/* Supplied declaration required: FUN_0017f79c. */
/* Supplied declaration required: FUN_0017f910. */


unsigned int FUN_003f63b8(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = (param_3 + *(int *)(param_1 + 0x20) * -4) * 4;
  *(int *)(param_1 + 0x18) = temp_v0;
  if (temp_v0 - *(int *)(param_1 + 0x14) != 0 && *(int *)(param_1 + 0x14) <= temp_v0) {
    *(int *)(param_1 + 0x14) = temp_v0;
    if (*(int *)(param_1 + 0x10) != 0) {
      (*DAT_0044e964)();
    }
    temp_v0 = (*DAT_0044e960)(*(unsigned int *)(param_1 + 0x14));
    *(int *)(param_1 + 0x10) = temp_v0;
    if (temp_v0 == 0) {
      return 0;
    }
  }
  temp_v0 = 0;
  if (temp_v0 < *(int *)(param_1 + 0x20)) {
    do {
      FUN_0017f910(param_1 + temp_v0 * 8,param_2);
      temp_v0 = temp_v0 + 1;
      param_2 = param_2 + 4;
    } while (temp_v0 < *(int *)(param_1 + 0x20));
  }
  temp_v3 = *(int *)(param_1 + 0x10);
  temp_v4 = 0;
  temp_v0 = *(int *)(param_1 + 0x18) >> (*(unsigned int *)(param_1 + 0x20) & 0xff);
  temp_v0 = (int)(temp_v0 + ((unsigned int)(temp_v0 >> 0x1f) >> 0x18)) >> 8;
  if (0 < temp_v0) {
    do {
      temp_v1 = *(int *)(param_1 + 0x20);
      temp_v2 = 0;
      if (temp_v2 < temp_v1) {
        do {
          FUN_0017f79c(param_1 + temp_v2 * 8,param_2,0x80,*(unsigned int *)(param_1 + 0x20),
                       temp_v3 + temp_v2 * 2);
          temp_v1 = *(int *)(param_1 + 0x20);
          temp_v2 = temp_v2 + 1;
          param_2 = param_2 + 0x80;
        } while (temp_v2 < temp_v1);
      }
      temp_v4 = temp_v4 + 1;
      temp_v3 = temp_v3 + temp_v1 * 0x200;
    } while (temp_v4 < temp_v0);
  }
  return 1;
}
