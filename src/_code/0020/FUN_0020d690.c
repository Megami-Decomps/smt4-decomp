/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020d690` (_code @ 0x20d690, 0xd4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0020d768; /* 0x20d768 */
extern int DAT_00447a78; /* 0x447a78 */

/* Supplied declaration required: FUN_0025c0f0. */
/* Supplied declaration required: FUN_0028c880. */
/* Supplied declaration required: FUN_0028c8a8. */
/* Supplied declaration required: FUN_0029bddc. */
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c5ab8. */


void FUN_0020d690(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 11 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  unsigned char temp_v1 [132];
  
  temp_v0 = DAT_00447a78;
  puVar2 = temp_v1;
  *(unsigned char *)(DAT_00447a78 + 0xcbd0) = 1;
  *(unsigned int *)(temp_v0 + 0xcbd4) = 0;
  *(unsigned int *)(temp_v0 + 0xcbd8) = 0;
  *(unsigned int *)(temp_v0 + 0xcbdc) = in_s0;
  *(unsigned int *)(temp_v0 + 0xcbe0) = in_s1;
  *(unsigned int *)(temp_v0 + 0xcbe4) = in_s2;
  *(unsigned int *)(temp_v0 + 0xcbe8) = in_s3;
  FUN_002be7fc(temp_v1,&LAB_0020d768);
  FUN_0029bddc(temp_v1,7);
  *(unsigned char **)(temp_v0 + 0xcbec) = puVar2;
  FUN_002a06c8();
  FUN_0028c8a8(*(unsigned int *)(*(int *)(temp_v0 + 0xcbec) + 8),0,temp_v0 + 0xcbdc);
  FUN_0028c880(*(unsigned int *)(*(int *)(temp_v0 + 0xcbec) + 8),0);
  FUN_0025c0f0(*(unsigned int *)(*(int *)(temp_v0 + 0xcbec) + 8),0);
  FUN_002c5ab8(10,0x25);
  *(unsigned char *)(temp_v0 + 0xccd8) = 1;
  *(unsigned int *)(temp_v0 + 0xccdc) = 0;
  return;
}
