/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00270a70` (_code @ 0x270a70, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(unsigned int *);
int FUN_002e3328(void);
int FUN_0047c5f0(void);
int FUN_0047c950(void);

extern unsigned int *DAT_00570278; /* 0x570278 */

extern int FUN_00184e20(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_0047c5f0. */
/* Supplied declaration required: FUN_0047c950. */


unsigned int FUN_00270a70(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  puVar1 = DAT_00570278;
  if (DAT_00570278 != (unsigned int *)0x0) {
    temp_v0 = FUN_00184e20(*DAT_00570278);
    puVar2 = DAT_00570278;
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 6) == '\0')) {
      return 1;
    }
    if (DAT_00570278 != (unsigned int *)0x0) {
      *(unsigned char *)(DAT_00570278 + 6) = 1;
      if (puVar2[7] != 0) {
        FUN_0047c5f0();
        if (puVar2[7] != 0) {
          FUN_0047c950();
          FUN_002e3328();
          puVar2[7] = 0;
        }
      }
      FUN_0019a5a0(DAT_00570278);
      DAT_00570278 = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
