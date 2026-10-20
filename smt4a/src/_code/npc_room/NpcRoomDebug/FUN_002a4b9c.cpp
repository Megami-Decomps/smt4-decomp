/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a4b9c` (_code @ 0x2a4b9c, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(unsigned int *);
int FUN_002e64a0(int);
int FUN_003d54f8(...);

extern unsigned int *DAT_00588128; /* 0x588128 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00164af0(unsigned int);
extern int FUN_001656a0(unsigned int);
/* Supplied declaration required: FUN_0019a5a0. */
extern int FUN_002292cc(void);
/* Supplied declaration required: FUN_002e64a0. */
/* Supplied declaration required: FUN_003d54f8. */


unsigned int FUN_002a4b9c(void)

{
/* irregular: 4 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  
  puVar2 = DAT_00588128;
  temp_v1 = DAT_00588128[1];
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if ((temp_v1 == 2) && (DAT_00588128 != (unsigned int *)0x0)) {
        FUN_001631d0(*DAT_00588128,0);
        FUN_0019a5a0(puVar2);
        DAT_00588128 = (unsigned int *)0x0;
      }
    }
    else {
      temp_v1 = FUN_002292cc();
      if (temp_v1 != 0) {
        FUN_003d54f8(0,1);
        FUN_003d54f8(1);
        puVar2[1] = puVar2[1] + 1;
      }
    }
  }
  else {
    temp_v1 = FUN_00164af0(3);
    if ((temp_v1 != 0) && (*(unsigned short *)(puVar2 + 2) < 999)) {
      *(unsigned short *)(puVar2 + 2) = *(unsigned short *)(puVar2 + 2) + 1;
    }
    temp_v1 = FUN_00164af0(4);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = *(short *)(puVar2 + 2);
    }
    if (temp_v1 != 0 && temp_v0 != 0) {
      *(short *)(puVar2 + 2) = temp_v0 - 1;
    }
    temp_v1 = FUN_001656a0(0);
    if (temp_v1 != 0) {
      FUN_002e64a0(*(unsigned short *)(puVar2 + 2));
      puVar2[1] = puVar2[1] + 1;
    }
  }
  return 0;
}

} /* extern "C" */
