/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f20f0` (_code @ 0x3f20f0, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_1_stack;

extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */


unsigned int FUN_003f20f0(int param_1)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = 0;
  while( 1 ) {
    puVar2 = (unsigned int *)(*(int *)(param_1 + 0x1ffc) + temp_v0 * 0x408);
    if ((((puVar2[1] & DAT_0057397c) != 0 || (*puVar2 & DAT_00573978) != 0) &&
        ((*puVar2 & DAT_005739a0) == 0 && (puVar2[1] & DAT_005739a4) == 0)) &&
       ((short)puVar2[0xcd] != 0)) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x6d) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
