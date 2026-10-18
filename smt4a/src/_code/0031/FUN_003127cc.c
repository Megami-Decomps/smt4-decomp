/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003127cc` (_code @ 0x3127cc, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern int DAT_00580ca0; /* 0x580ca0 */

/* Supplied declaration required: FUN_003fd7c0. */


void FUN_003127cc(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  while( 1 ) {
    temp_v1 = DAT_00580ca0 + temp_v0 * 0x3c;
    if ((*(char *)(temp_v1 + 0x90) != '\0') && (*(short *)(temp_v1 + 0xa6) == param_1)) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 0x23) {
      return;
    }
  }
  FUN_003fd7c0(*(unsigned int *)(*(int *)(temp_v1 + 0xa8) + 4),param_2,2);
  return;
}
