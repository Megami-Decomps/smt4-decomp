/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00238bec` (_code @ 0x238bec, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;


void FUN_00238bec(int *param_1,unsigned int param_2)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = *param_1;
  do {
    temp_v1 = *(int *)(temp_v0 + 0xc);
    while( 1 ) {
      if (temp_v1 == temp_v0 + 8) {
        return;
      }
      if ((*(char *)(temp_v1 + 0xc) == '\x04') && ((param_2 & (1 << *(sbyte *)(temp_v1 + 0xe))) != 0))
      break;
      temp_v1 = *(int *)(temp_v1 + 4);
    }
    temp_v0 = *(int *)(temp_v1 + 8);
    *param_1 = temp_v0;
  } while( 1 );
}
