/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017df1c` (_code @ 0x17df1c, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int *DAT_005b40e0; /* 0x5b40e0 */
extern unsigned int DAT_005b40e4; /* 0x5b40e4 */
extern unsigned char DAT_0061a483; /* 0x61a483 */
extern int DAT_0061a50c; /* 0x61a50c */
extern int DAT_0061a5d8; /* 0x61a5d8 */
extern unsigned int DAT_0061a5dc; /* 0x61a5dc */


void FUN_0017df1c(void)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = DAT_005b40e0;
  temp_v0 = (int)DAT_005b40e0 - *(int *)(DAT_0061a50c + 4);
  *(unsigned int *)(DAT_0061a50c + 0xc) = temp_v0;
  if (((temp_v0 & 8) != 0) && ((unsigned int)puVar1 < DAT_005b40e4)) {
    DAT_005b40e0 = puVar1 + 2;
    puVar1[1] = 0x8025e;
    *puVar1 = 0;
  }
  DAT_0061a483 = 1;
  DAT_0061a5d8 = (int)DAT_005b40e0 - *(int *)(DAT_0061a50c + 4);
  DAT_0061a5dc = *(unsigned int *)(DAT_0061a50c + 0x20);
  return;
}

} /* extern "C" */
