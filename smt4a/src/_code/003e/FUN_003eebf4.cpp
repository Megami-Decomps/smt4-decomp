/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eebf4` (_code @ 0x3eebf4, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_005739a8; /* 0x5739a8 */
extern unsigned int DAT_005739ac; /* 0x5739ac */


int FUN_003eebf4(int param_1,int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  temp_v1 = 0;
  while( 1 ) {
    puVar3 = (unsigned int *)(*(int *)(param_1 + 0x1ffc) + temp_v1 * 0x408);
    temp_v0 = *puVar3;
    temp_v2 = puVar3[1];
    if ((((temp_v2 & DAT_0057397c) != 0 || (temp_v0 & DAT_00573978) != 0) &&
        ((temp_v0 & DAT_005739a8) != 0 || (temp_v2 & DAT_005739ac) != 0)) &&
       (temp_v3 = temp_v3 + 1, temp_v3 == param_2)) break;
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x6d) {
      return -1;
    }
  }
  return (int)*(short *)(*(int *)(param_1 + 0x1ffc) + temp_v1 * 0x408 + 0x6e);
}

} /* extern "C" */
