/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ae3c4` (_code @ 0x2ae3c4, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(unsigned int *);

typedef int romwright_code(...);
extern unsigned int *DAT_0057f0bc; /* 0x57f0bc */
extern unsigned int DAT_0057f0c0; /* 0x57f0c0 */

extern int FUN_00184e20(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */


unsigned int FUN_002ae3c4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  puVar1 = DAT_0057f0bc;
  if (DAT_0057f0bc != (unsigned int *)0x0) {
    temp_v0 = FUN_00184e20(*DAT_0057f0bc);
    puVar2 = DAT_0057f0bc;
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 3) == '\0')) {
      return 1;
    }
    if (DAT_0057f0bc != (unsigned int *)0x0) {
      *(unsigned char *)(DAT_0057f0bc + 3) = 1;
      DAT_0057f0c0 = 0xffffffff;
      if ((int *)puVar2[6] != (int *)0x0) {
        (**(romwright_code **)(*(int *)puVar2[6] + 0x10))();
        if ((int *)puVar2[6] != (int *)0x0) {
          (**(romwright_code **)(*(int *)puVar2[6] + 4))();
        }
        puVar2[6] = 0;
      }
      FUN_0019a5a0(DAT_0057f0bc);
      DAT_0057f0bc = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
