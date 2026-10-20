/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de8b8` (_code @ 0x2de8b8, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(unsigned int *);
int FUN_0019e290(void);
int FUN_002e3328(int);

extern unsigned int *DAT_00588014; /* 0x588014 */

extern int FUN_00184e20(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019e290. */
/* Supplied declaration required: FUN_002e3328. */
extern int FUN_004d08d0(int);


unsigned int FUN_002de8b8(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  
  puVar1 = DAT_00588014;
  if (DAT_00588014 != (unsigned int *)0x0) {
    temp_v0 = FUN_00184e20(*DAT_00588014);
    puVar2 = DAT_00588014;
    if ((temp_v0 != 0) || (*(char *)(puVar1 + 1) == '\0')) {
      return 1;
    }
    if (DAT_00588014 != (unsigned int *)0x0) {
      *(unsigned char *)(DAT_00588014 + 1) = 1;
      if (puVar2[2] != 0) {
        FUN_0019e290();
        if (puVar2[2] != 0) {
          temp_v0 = FUN_004d08d0(puVar2[2] + 0x110);
          FUN_002e3328(temp_v0 - 0x110);
        }
        puVar2[2] = 0;
      }
      FUN_0019a5a0(DAT_00588014);
      DAT_00588014 = (unsigned int *)0x0;
    }
  }
  return 0;
}

} /* extern "C" */
