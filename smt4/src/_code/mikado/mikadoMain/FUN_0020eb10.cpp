/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020eb10` (_code @ 0x20eb10, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a7838(void);
int FUN_002b2368(int);
int FUN_002c415c(unsigned int *);

extern unsigned char DAT_0044cfd0; /* 0x44cfd0 */

extern int FUN_00263c34(int);
/* Supplied declaration required: FUN_002a7838. */
/* Supplied declaration required: FUN_002b2368. */
extern int FUN_002b2378(unsigned int);
/* Supplied declaration required: FUN_002c415c. */


unsigned int FUN_0020eb10(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&DAT_0044cfd0 + 0x4));
  if ((*(unsigned int * *)((unsigned char *)&DAT_0044cfd0 + 0x4)) != (unsigned int *)0x0) {
    temp_v0 = FUN_002b2378(*(*(unsigned int * *)((unsigned char *)&DAT_0044cfd0 + 0x4)));
    puVar2 = (*(unsigned int * *)((unsigned char *)&DAT_0044cfd0 + 0x4));
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 1) == '\0')) {
      return 1;
    }
    if ((*(unsigned int * *)((unsigned char *)&DAT_0044cfd0 + 0x4)) != (unsigned int *)0x0) {
      *(unsigned char *)((*(unsigned int * *)((unsigned char *)&DAT_0044cfd0 + 0x4)) + 1) = 1;
      if (puVar2[2] != 0) {
        FUN_002a7838();
        if (puVar2[2] != 0) {
          temp_v0 = FUN_00263c34(puVar2[2] + 0x110);
          FUN_002b2368(temp_v0 - 0x110);
        }
        puVar2[2] = 0;
      }
      FUN_002c415c((*(unsigned int * *)((unsigned char *)&DAT_0044cfd0 + 0x4)));
      (*(unsigned int * *)((unsigned char *)&DAT_0044cfd0 + 0x4)) = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
