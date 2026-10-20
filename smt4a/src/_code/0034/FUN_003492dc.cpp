/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003492dc` (_code @ 0x3492dc, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_001641c4(void);
int FUN_0019a5a0(void);
int FUN_002a49b4(void);
int FUN_002e3328(void);

extern unsigned char DAT_0057f25c; /* 0x57f25c */

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002a49b4. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_003492dc(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned short unaff_r9;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&DAT_0057f25c + 0x4));
  temp_v0 = (*(unsigned int * *)((unsigned char *)&DAT_0057f25c + 0x4))[0xc4];
  if (0 < temp_v0) {
    temp_v1 = 0;
    if (0 < temp_v0) {
      unaff_r9 = 0xffff;
    }
    (*(unsigned int * *)((unsigned char *)&DAT_0057f25c + 0x4))[0xc4] = temp_v0 + 1;
    if (0 < temp_v0) {
      do {
        FUN_001641c4();
        temp_v0 = temp_v1 * 2;
        temp_v1 = temp_v1 + 1;
        *(unsigned short *)((int)puVar1 + temp_v0 + 0x2f8) = unaff_r9;
        temp_v0 = puVar1[0xc4];
        puVar1[0xc4] = temp_v0 + 1;
      } while (temp_v1 < temp_v0);
    }
    puVar1[0xc4] = 0;
    FUN_002a49b4();
  }
  if (puVar1[0xc5] != 0) {
    FUN_0019a5a0();
    puVar1[0xc5] = 0;
  }
  if (puVar1[0xc6] != 0) {
    FUN_0019a5a0();
    puVar1[0xc6] = 0;
  }
  if (puVar1[199] != 0) {
    FUN_0019a5a0();
    puVar1[199] = 0;
  }
  FUN_001631d0(*puVar1,0);
  if ((*(unsigned int * *)((unsigned char *)&DAT_0057f25c + 0x4)) != (unsigned int *)0x0) {
    FUN_002e3328();
    (*(unsigned int * *)((unsigned char *)&DAT_0057f25c + 0x4)) = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
