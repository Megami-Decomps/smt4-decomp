/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00401440` (_code @ 0x401440, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fd784(unsigned int);
int FUN_003fd7b4(unsigned int);
int FUN_003fe86c(unsigned int, int, int);
int FUN_0040a908(int, int);
int FUN_0040a918(unsigned int, int);
int FUN_0040aad4(unsigned int, int);
int FUN_0040ace8(unsigned int, unsigned int);

extern unsigned int g_handleRegistry; /* 0x56fcc0 */

/* Supplied declaration required: FUN_003fd784. */
/* Supplied declaration required: FUN_003fd7b4. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040a908. */
/* Supplied declaration required: FUN_0040a918. */
/* Supplied declaration required: FUN_0040aad4. */
extern int FUN_0040ab8c(void);
/* Supplied declaration required: FUN_0040ace8. */


unsigned int FUN_00401440(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned long long temp_v3;
  
  temp_v1 = 0;
  while ((*(int *)(param_1 + temp_v1 * 4 + 0x1c) == 0 || (temp_v0 = FUN_0040ab8c(), temp_v0 != 0))) {
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 3) {
      temp_v3 = 0x3f80000000000000;
      temp_v1 = 0;
      do {
        temp_v0 = param_1 + temp_v1 * 4;
        if (*(int *)(temp_v0 + 0x1c) != 0) {
          FUN_0040a908(*(int *)(temp_v0 + 0x1c),0x10000);
          FUN_0040a918(*(unsigned int *)(temp_v0 + 0x1c),0x30000);
          FUN_0040aad4(*(unsigned int *)(temp_v0 + 0x1c),0);
          temp_v2 = *(unsigned int *)(*(int *)(temp_v0 + 0x1c) + 4);
          FUN_003fe86c(temp_v2,0,2);
          FUN_003fd784(temp_v2);
          FUN_0040ace8(g_handleRegistry,temp_v2);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 3);
      temp_v2 = (unsigned int)((unsigned long long)temp_v3 >> 0x20);
      *(unsigned int *)(param_1 + 0x4c) = temp_v2;
      *(unsigned int *)(param_1 + 0x50) = temp_v2;
      *(unsigned int *)(param_1 + 0x54) = temp_v2;
      temp_v1 = 0;
      do {
        temp_v0 = *(int *)(param_1 + temp_v1 * 4 + 0x1c);
        if (temp_v0 != 0) {
          FUN_003fd7b4(*(unsigned int *)(temp_v0 + 4));
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 3);
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
