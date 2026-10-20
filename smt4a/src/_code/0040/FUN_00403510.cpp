/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00403510` (_code @ 0x403510, 0x1e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001517b4(int, int);
int FUN_001641b4(int);
int FUN_00228b04(int, int);
int FUN_002a4860(int);
int FUN_002a48e0(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_001517b4. */
/* Supplied declaration required: FUN_001641b4. */
/* Supplied declaration required: FUN_00228b04. */
/* Supplied declaration required: FUN_002a4860. */
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_002a48e0. */
extern int FUN_002c2c68(int);
extern int FUN_0031d1a0(int);


void FUN_00403510(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_002a4860(param_1 + 0x28);
  temp_v1 = param_1 + 0x28;
  FUN_00228b04(temp_v1,0);
  if (temp_v1 != 0) {
    temp_v1 = FUN_002c2c68(param_1 + 0x28);
    if (temp_v1 >= 9) {
      FUN_002a4860(param_1 + 0x28);
      temp_v1 = FUN_002a4894(param_1 + 0x28);
      if ((temp_v1 != 7) && (temp_v1 = FUN_002a4894(param_1 + 0x28), temp_v1 != 0)) {
        FUN_001641b4(0x100020d);
      }
      temp_v1 = FUN_002a4860(param_1 + 0x28);
      while ((temp_v1 == temp_v0 &&
             ((temp_v1 = FUN_002a4860(param_1 + 0x28), temp_v1 != 0 ||
              (temp_v1 = FUN_002a4894(param_1 + 0x28), temp_v1 != 0))))) {
        temp_v1 = FUN_002a4860(param_1 + 0x28);
        temp_v2 = FUN_002c2c68(param_1 + 0x28);
        if ((temp_v1 == temp_v2 - 8) && (temp_v1 = FUN_002a4894(param_1 + 0x28), temp_v1 == 7)) break;
        FUN_00228b04(param_1 + 0x28,0);
        temp_v1 = FUN_002a4860(param_1 + 0x28);
      }
    }
    temp_v3 = FUN_002a4860(param_1 + 0x28);
    *(unsigned int *)(param_1 + 0x8c) = temp_v3;
  }
  temp_v0 = 9;
  FUN_001517b4(9,0);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002a4860(param_1 + 0x28);
    if (temp_v0 == 0) {
      return;
    }
    FUN_001641b4(0x100020d);
    *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) - 1;
    FUN_002a48e0(param_1 + 0x28);
  }
  temp_v0 = 10;
  FUN_001517b4(10,0);
  if ((temp_v0 != 0) && (temp_v0 = FUN_002c2c68(param_1 + 0x28), temp_v0 >= 8)) {
    temp_v0 = FUN_002a4860(param_1 + 0x28);
    temp_v1 = FUN_002c2c68(param_1 + 0x28);
    if ((temp_v0 != temp_v1 - 8) &&
       ((temp_v0 = FUN_0031d1a0(param_1 + 0x28), temp_v0 != 0 ||
        (temp_v0 = FUN_002c2c68(param_1 + 0x28), temp_v0 >= 8)))) {
      FUN_001641b4(0x100020d);
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      FUN_002a48e0(param_1 + 0x28);
      return;
    }
  }
  return;
}

} /* extern "C" */
