/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e81bc` (_code @ 0x3e81bc, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_1_stack;

extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_00573990; /* 0x573990 */
extern unsigned int DAT_00573994; /* 0x573994 */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */


unsigned int * FUN_003e81bc(int param_1)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 4;
  while( 1 ) {
    puVar1 = (unsigned int *)(*(int *)(param_1 + 0x1ffc) + temp_v2 * 0x408);
    temp_v0 = *puVar1;
    temp_v1 = puVar1[1];
    if ((((temp_v1 & DAT_0057397c) != 0 || (temp_v0 & DAT_00573978) != 0) &&
        ((DAT_005739a0 & temp_v0) == 0 && (DAT_005739a4 & temp_v1) == 0)) &&
       ((temp_v0 & DAT_00573990) != 0 || (temp_v1 & DAT_00573994) != 0)) break;
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x36) {
      return (unsigned int *)0x0;
    }
  }
  return puVar1;
}

} /* extern "C" */
