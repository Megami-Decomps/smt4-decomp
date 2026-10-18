/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019dc70` (_code @ 0x19dc70, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_1_stack;

extern unsigned short DAT_005b3d94; /* 0x5b3d94 */


unsigned int FUN_0019dc70(unsigned int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0;
  while( 1 ) {
    temp_v1 = (unsigned int)(unsigned short)(&DAT_005b3d94)[temp_v0 * 8];
    if (temp_v1 == 0xf890) {
      return 0;
    }
    if (temp_v1 == param_1) break;
    temp_v0 = temp_v0 + 1;
  }
  if (&DAT_005b3d94 + temp_v0 * 8 == (unsigned short *)0x0) {
    return 0;
  }
  return *(unsigned int *)(temp_v0 * 0x10 + 0x5b3d98);
}
