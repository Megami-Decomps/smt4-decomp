/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003eaf20` (_code @ 0x3eaf20, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_00573998; /* 0x573998 */
extern unsigned int DAT_0057399c; /* 0x57399c */


int FUN_003eaf20(int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  temp_v1 = 0;
  while( 1 ) {
    puVar3 = (unsigned int *)(*(int *)(param_1 + 0x1ffc) + temp_v1 * 0x408);
    temp_v0 = *puVar3;
    temp_v2 = puVar3[1];
    if (((temp_v2 & DAT_0057399c) != 0 || (temp_v0 & DAT_00573998) != 0) &&
       ((temp_v0 & DAT_00573978) != 0 || (temp_v2 & DAT_0057397c) != 0)) break;
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x6d) {
      return 0;
    }
  }
  return *(int *)(param_1 + 0x1ffc) + temp_v1 * 0x408;
}

} /* extern "C" */
