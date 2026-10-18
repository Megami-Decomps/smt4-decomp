/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d88e0` (_code @ 0x2d88e0, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002d89f4; /* 0x2d89f4 */
extern unsigned char LAB_002d8a10; /* 0x2d8a10 */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern int DAT_0058103c; /* 0x58103c */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0014afd0. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fd784. */
/* Supplied declaration required: FUN_003fdb18. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
extern unsigned int FUN_0040ac08(void);
/* Supplied declaration required: FUN_0040ace8. */


void FUN_002d88e0(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  unsigned char temp_v3 [136];
  
  temp_v0 = DAT_0058103c;
  *(unsigned char *)(DAT_0058103c + 0xcbdc) = 1;
  *(unsigned int *)(temp_v0 + 0xcbe0) = 0;
  *(unsigned int *)(temp_v0 + 0xcbe4) = 0;
  *(unsigned int *)(temp_v0 + 0xcbe8) = in_s0;
  *(unsigned int *)(temp_v0 + 0xcbec) = in_s1;
  *(unsigned int *)(temp_v0 + 0xcbf0) = in_s2;
  *(unsigned int *)(temp_v0 + 0xcbf4) = in_s3;
  FUN_00100388(temp_v3,&LAB_002d89f4);
  temp_v1 = 0x20;
  FUN_00178b04(0x20,&LAB_002d8a10,0x1745);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_0040ac08();
  }
  *(unsigned int *)(temp_v0 + 0xcbf8) = temp_v2;
  FUN_0040aa6c();
  FUN_0040aad4(*(unsigned int *)(temp_v0 + 0xcbf8),0);
  temp_v2 = *(unsigned int *)(*(int *)(temp_v0 + 0xcbf8) + 4);
  FUN_0040ace8(DAT_0056fcc0,temp_v2);
  FUN_003fd76c(temp_v2,temp_v0 + 0xcbe8);
  FUN_003fdb18(temp_v2);
  FUN_003fd784(temp_v2);
  FUN_003fe86c(temp_v2,0,2);
  FUN_0014afd0(4,0x25);
  *(unsigned char *)(temp_v0 + 0xcd08) = 1;
  *(unsigned int *)(temp_v0 + 0xcd0c) = 0;
  return;
}
