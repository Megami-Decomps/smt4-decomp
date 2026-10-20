/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031f03c` (_code @ 0x31f03c, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_00570260; /* 0x570260 */
extern unsigned char DAT_00588038; /* 0x588038 */

extern int FUN_001af210(int);


unsigned int FUN_0031f03c(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588038 + 0x4));
  if ((*(int *)((unsigned char *)&DAT_00588038 + 0x4)) != 0) {
    if ((*(char *)((*(int *)((unsigned char *)&DAT_00588038 + 0x4)) + 0x74) == '\0') ||
       (temp_v1 = FUN_001af210(DAT_00570260 + 0x98), temp_v1 == 0)) {
      return 1;
    }
    *(unsigned int *)(DAT_00570260 + 0x754) = *(unsigned int *)(DAT_00570260 + 0x754) & 0xfffeffff;
    *(unsigned char *)(temp_v0 + 0x75) = 1;
  }
  return 0;
}

} /* extern "C" */
