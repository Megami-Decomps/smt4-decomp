/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039817c` (_code @ 0x39817c, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fda08(unsigned int, int, int);
int FUN_003fe86c(unsigned int, int, int);
int FUN_0040aad4(unsigned int, int);
int FUN_0040ace8(unsigned int, unsigned int);

extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int g_mapGimic; /* 0x580ca0 */

/* Supplied declaration required: FUN_003fda08. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040aad4. */
extern int FUN_0040ab8c(unsigned int);
/* Supplied declaration required: FUN_0040ace8. */


unsigned int FUN_0039817c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = 0;
  while ((temp_v1 = g_mapGimic + temp_v0 * 0x18, *(char *)(temp_v1 + 0x8c4) == '\0' ||
         (*(short *)(temp_v1 + 0x8c8) != param_1))) {
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 10) {
      return 0;
    }
  }
  temp_v0 = FUN_0040ab8c(*(unsigned int *)(temp_v1 + 0x8cc));
  temp_v2 = 0;
  if (temp_v0 != 0) {
    FUN_0040aad4(*(unsigned int *)(temp_v1 + 0x8cc),0);
    temp_v2 = *(unsigned int *)(*(int *)(temp_v1 + 0x8cc) + 4);
    FUN_003fe86c(temp_v2,0,2);
    if (param_1 == 0x2a) {
      FUN_003fda08(temp_v2,1,2);
    }
    FUN_0040ace8(g_handleRegistry,temp_v2);
    temp_v2 = 1;
  }
  return temp_v2;
}

} /* extern "C" */
