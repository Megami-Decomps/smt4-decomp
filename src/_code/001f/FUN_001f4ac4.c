/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f4ac4` (_code @ 0x1f4ac4, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int *DAT_0043da10; /* 0x43da10 */
extern unsigned int DAT_0043da14; /* 0x43da14 */

extern int FUN_002b2530(unsigned int);
/* Supplied declaration required: FUN_002c4360. */


unsigned int FUN_001f4ac4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  puVar1 = DAT_0043da10;
  if (DAT_0043da10 != (unsigned int *)0x0) {
    temp_v0 = FUN_002b2530(*DAT_0043da10);
    puVar2 = DAT_0043da10;
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 3) == '\0')) {
      return 1;
    }
    if (DAT_0043da10 != (unsigned int *)0x0) {
      *(unsigned char *)(DAT_0043da10 + 3) = 1;
      DAT_0043da14 = 0xffffffff;
      if ((int *)puVar2[6] != (int *)0x0) {
        (**(romwright_code **)(*(int *)puVar2[6] + 0x10))();
        if ((int *)puVar2[6] != (int *)0x0) {
          (**(romwright_code **)(*(int *)puVar2[6] + 4))();
        }
        puVar2[6] = 0;
      }
      FUN_002c4360(DAT_0043da10);
      DAT_0043da10 = (unsigned int *)0x0;
    }
  }
  return 0;
}
