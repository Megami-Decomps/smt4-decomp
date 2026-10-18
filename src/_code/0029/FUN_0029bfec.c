/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029bfec` (_code @ 0x29bfec, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0044e190; /* 0x44e190 */

/* Supplied declaration required: FUN_002b9008. */
/* Supplied declaration required: FUN_002bdac0. */
/* Supplied declaration required: FUN_002c4450. */


void FUN_0029bfec(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  
  temp_v2 = DAT_0044e190;
  if (*(int *)(DAT_0044e190 + 0x400) != 0) {
    FUN_002bdac0(DAT_0044e190 + 0x28,2,0);
    temp_v0 = DAT_0044e190;
    puVar3 = (unsigned int *)(DAT_0044e190 + 0x400);
    *(unsigned int *)(DAT_0044e190 + 0x40c) = 0;
    temp_v1 = *(unsigned int *)(temp_v0 + 0x400);
    *puVar3 = 2;
    *(unsigned int *)(temp_v0 + 0x404) = temp_v1;
    *(unsigned int *)(temp_v2 + 0x408) = 0;
    *(unsigned char *)(temp_v2 + 0x3fc) = 0;
    temp_v2 = 0;
    if (*(char *)(temp_v0 + 0x480) != '\0') {
      do {
        FUN_002b9008();
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < (int)(unsigned int)*(unsigned char *)(temp_v0 + 0x480));
    }
    *(unsigned char *)(temp_v0 + 0x480) = 0;
    FUN_002c4450(temp_v0 + 0x42c,0x29,0xffffffff);
    return;
  }
  return;
}
