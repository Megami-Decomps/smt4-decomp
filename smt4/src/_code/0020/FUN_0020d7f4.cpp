/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020d7f4` (_code @ 0x20d7f4, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025beb8(unsigned int, int);
int FUN_0028c618(unsigned int, int);
int FUN_0028c640(unsigned int, int, int);
int FUN_0029bb3c(unsigned char [132], int);
int FUN_002a0428(void);
int FUN_002be624(unsigned char [132], unsigned char *);
int FUN_002c58c8(int, int);

extern unsigned char LAB_0020d8cc; /* 0x20d8cc */
extern int DAT_00447a78; /* 0x447a78 */

/* Supplied declaration required: FUN_0025beb8. */
/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: FUN_0028c640. */
/* Supplied declaration required: FUN_0029bb3c. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002c58c8. */


void FUN_0020d7f4(void)

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
  FUN_002be624(temp_v1,&LAB_0020d8cc);
  FUN_0029bb3c(temp_v1,7);
  *(unsigned char **)(temp_v0 + 0xcbec) = puVar2;
  FUN_002a0428();
  FUN_0028c640(*(unsigned int *)(*(int *)(temp_v0 + 0xcbec) + 8),0,temp_v0 + 0xcbdc);
  FUN_0028c618(*(unsigned int *)(*(int *)(temp_v0 + 0xcbec) + 8),0);
  FUN_0025beb8(*(unsigned int *)(*(int *)(temp_v0 + 0xcbec) + 8),0);
  FUN_002c58c8(10,0x25);
  *(unsigned char *)(temp_v0 + 0xccd8) = 1;
  *(unsigned int *)(temp_v0 + 0xccdc) = 0;
  return;
}

} /* extern "C" */
