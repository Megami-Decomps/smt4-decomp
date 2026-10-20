/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023a3b4` (_code @ 0x23a3b4, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00225c1c(void);
int FUN_003afd18(int);
int FUN_003ea320(int, unsigned int *, unsigned int *);

/* Supplied declaration required: FUN_00225c1c. */
/* Supplied declaration required: FUN_003afd18. */
/* Supplied declaration required: FUN_003ea320. */
extern unsigned int *FUN_003ea930(int);


unsigned int
FUN_0023a3b4(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4,
            unsigned int *param_5,unsigned int *param_6)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  
  if (param_1 == 0) {
    return 1;
  }
  temp_v0 = *(int *)(param_1 + 4);
  FUN_00225c1c();
  temp_v2 = *(int *)(temp_v0 + 0x10);
  if (temp_v2 != 0) {
    temp_v0 = *(int *)(temp_v2 + 0x48);
  }
  if (temp_v2 != 0 && temp_v0 != 0) {
    puVar2 = (unsigned int *)FUN_003ea930(temp_v2);
    if (puVar2 != (unsigned int *)0x0) {
      if (*(char *)(puVar2 + 5) == '\0') {
        FUN_003ea320(temp_v2,param_3,param_4);
        if (temp_v2 == 0) {
          return 9;
        }
        *param_5 = puVar2[4];
        temp_v1 = puVar2[1];
        *param_6 = *puVar2;
        param_6[1] = temp_v1;
        return 0;
      }
      FUN_003afd18(temp_v2);
    }
    *param_3 = 0;
    *param_4 = 0;
    *param_5 = 0;
    *param_6 = 0xffffffff;
    param_6[1] = 0xffffffff;
    return 0x14;
  }
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0xffffffff;
  param_6[1] = 0xffffffff;
  return 0xe;
}

} /* extern "C" */
