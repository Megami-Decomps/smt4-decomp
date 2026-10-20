/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00514094` (_code @ 0x514094, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004acb54(int);
int FUN_0050cc3c(int, unsigned int *, unsigned int *);
int FUN_0050d2cc(void);

/* Supplied declaration required: FUN_004acb54. */
/* Supplied declaration required: FUN_0050cc3c. */
extern unsigned int *FUN_0050cf94(int);
/* Supplied declaration required: FUN_0050d2cc. */


unsigned int
FUN_00514094(int param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4,unsigned int *param_5,
            unsigned int *param_6)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = *(int *)(param_1 + 4);
  FUN_0050d2cc();
  temp_v2 = *(int *)(temp_v0 + 0x10);
  if (temp_v2 != 0) {
    temp_v0 = *(int *)(temp_v2 + 0x38);
  }
  if (temp_v2 != 0 && temp_v0 != 0) {
    puVar2 = (unsigned int *)FUN_0050cf94(temp_v2);
    if (puVar2 != (unsigned int *)0x0) {
      if (*(char *)((int)puVar2 + 0x11) == '\0') {
        FUN_0050cc3c(temp_v2,param_3,param_4);
        if (temp_v2 == 0) {
          return 9;
        }
        *param_5 = (unsigned int)*(unsigned char *)(puVar2 + 4);
        temp_v1 = puVar2[1];
        *param_6 = *puVar2;
        param_6[1] = temp_v1;
        return 0;
      }
      FUN_004acb54(temp_v2);
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
