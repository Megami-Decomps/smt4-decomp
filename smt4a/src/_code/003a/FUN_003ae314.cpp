/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ae314` (_code @ 0x3ae314, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003fd76c(unsigned int, int);
int FUN_003fd7c0(unsigned int, int, int);
int FUN_003fdb18(unsigned int);
int FUN_0040aad4(unsigned int, int);
int FUN_0040ace8(unsigned int, unsigned int);

extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int g_lmapScene; /* 0x581288 */

/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fd7c0. */
/* Supplied declaration required: FUN_003fdb18. */
/* Supplied declaration required: FUN_0040aad4. */
extern int FUN_0040ab8c(unsigned int);
/* Supplied declaration required: FUN_0040ace8. */


unsigned char FUN_003ae314(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0040ab8c(*(unsigned int *)(g_lmapScene + 400));
  temp_v1 = g_lmapScene;
  if (temp_v0 != 0) {
    *(unsigned int *)(g_lmapScene + 0x24c) = 0;
    FUN_0040aad4(*(unsigned int *)(temp_v1 + 400),0);
    temp_v2 = *(unsigned int *)(*(int *)(g_lmapScene + 400) + 4);
    FUN_003fd7c0(temp_v2,0,2);
    FUN_0040ace8(g_handleRegistry,temp_v2);
    temp_v1 = g_lmapScene + 0x254;
    *(unsigned int *)(g_lmapScene + 0x250) = 0;
    FUN_003fd76c(temp_v2,temp_v1);
    FUN_003fdb18(temp_v2);
  }
  return temp_v0 != 0;
}

} /* extern "C" */
