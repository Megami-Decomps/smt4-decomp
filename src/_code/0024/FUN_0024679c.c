/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024679c` (_code @ 0x24679c, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

extern unsigned int DAT_0047e500; /* 0x47e500 */
extern unsigned int DAT_0047e504; /* 0x47e504 */


unsigned int FUN_0024679c(void)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  DAT_0047e504 = 0;
  if (0 < (int)DAT_0047e500) {
    temp_v0 = DAT_0047e500 & 1;
    temp_v1 = 0;
    if (temp_v0 != 0) {
      do {
        if (*(int *)(*(int *)(temp_v1 * 0x4c + 0x47d200) + 0x30) == 0) {
          DAT_0047e504 = 0;
          return 1;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)temp_v0);
    }
  }
  while( 1 ) {
    if ((int)DAT_0047e500 <= (int)temp_v0) {
      DAT_0047e504 = 4;
      return 0;
    }
    if ((*(int *)(*(int *)(temp_v0 * 0x4c + 0x47d200) + 0x30) == 0) ||
       (*(int *)(*(int *)(temp_v0 * 0x4c + 0x47d24c) + 0x30) == 0)) break;
    temp_v0 = temp_v0 + 2;
  }
  return 1;
}
