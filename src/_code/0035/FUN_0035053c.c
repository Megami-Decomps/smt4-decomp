/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035053c` (_code @ 0x35053c, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_0023a4f8. */
extern int FUN_0023a5dc(int);
/* Supplied declaration required: FUN_00350e30. */


void FUN_0035053c(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = param_4;
  temp_v0 = FUN_0023a5dc(param_1 + 0x158);
  if (temp_v0 != 0) {
    temp_v0 = param_1 + 0x158;
    FUN_0023a4f8();
    if (temp_v0 == 0) {
      *(unsigned int *)(param_1 + 0xc) = 7;
    }
    FUN_00350e30(param_1);
  }
  temp_v0 = 0;
  do {
    temp_v2 = param_1 + temp_v0 * 4;
    if (-1 < *(int *)(temp_v2 + 0x46c)) {
      piVar2 = *(int **)(param_1 + *(int *)(temp_v2 + 0x46c) * 4 + 0x2ec);
      (**(romwright_code **)(*piVar2 + 0x10))(piVar2,&temp_v3);
      temp_v1 = 0;
      if (temp_v1 < temp_v3) {
        do {
          (**(romwright_code **)(**(int **)(param_1 + *(int *)(temp_v2 + 0x46c) * 4 + 0x2ec) + 0x1c))();
          temp_v1 = temp_v1 + 1;
        } while (temp_v1 < temp_v3);
      }
      *(unsigned int *)(temp_v2 + 0x474) = 0;
      *(unsigned int *)(temp_v2 + 0x47c) = 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  return;
}
