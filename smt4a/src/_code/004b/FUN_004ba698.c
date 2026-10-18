/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ba698` (_code @ 0x4ba698, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_00163aa4. */
/* Supplied declaration required: FUN_00167458. */
extern int FUN_0018206c(unsigned int);
extern int FUN_004d0040(int);


int FUN_004ba698(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  if (*(int *)(param_1 + 8) == 0) {
    temp_v0 = 1;
  }
  else {
    if ((*(int *)(param_1 + 0x1020) != -1) && (temp_v0 = FUN_0018206c(0x1f), temp_v0 == 0)) {
      return 0;
    }
    temp_v0 = FUN_004d0040(param_1);
    temp_v2 = 0;
    if (temp_v2 < temp_v0) {
      do {
        if (temp_v2 <= *(int *)(param_1 + 0x1014)) {
          FUN_00163aa4(param_1 + temp_v2 * 0x8c + 0xa10);
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < temp_v0);
    }
    *(int *)(param_1 + 0x1014) = *(int *)(param_1 + 0x1014) + 1;
    FUN_00167458(param_1 + 200,0);
    temp_v3 = *(char *)(param_1 + 0x152) != '\0';
    temp_v2 = 0;
    temp_v1 = 0;
    if (temp_v3) {
      temp_v1 = *(int *)(param_1 + 0x1014);
      temp_v2 = temp_v1 - temp_v0;
    }
    if (((temp_v3 && temp_v1 != temp_v0) && temp_v2 < 0 == (temp_v3 && SBORROW4(temp_v1,temp_v0))) &&
       (*(char *)(param_1 + temp_v0 * 0x8c + 0xa0e) != '\0')) {
      *(unsigned char *)(param_1 + 0x9ed) = 1;
    }
    temp_v0 = (int)*(char *)(param_1 + 0x9ed);
  }
  return temp_v0;
}
