/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003afd30` (_code @ 0x3afd30, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} void_stack;

extern unsigned int DAT_005cc500; /* 0x5cc500 */
extern unsigned int DAT_005cc504; /* 0x5cc504 */


unsigned int FUN_003afd30(void)

{
  unsigned int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  DAT_005cc504 = 0;
  if (0 < (int)DAT_005cc500) {
    temp_v0 = DAT_005cc500 & 1;
    temp_v1 = 0;
    if (temp_v0 != 0) {
      do {
        if (*(int *)(*(int *)(temp_v1 * 0x4c + 0x5cb200) + 0x30) == 0) {
          DAT_005cc504 = 0;
          return 1;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < (int)temp_v0);
    }
  }
  while( 1 ) {
    if ((int)DAT_005cc500 <= (int)temp_v0) {
      DAT_005cc504 = 4;
      return 0;
    }
    if ((*(int *)(*(int *)(temp_v0 * 0x4c + 0x5cb200) + 0x30) == 0) ||
       (*(int *)(*(int *)(temp_v0 * 0x4c + 0x5cb24c) + 0x30) == 0)) break;
    temp_v0 = temp_v0 + 2;
  }
  return 1;
}
