/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a9008` (_code @ 0x1a9008, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028c618(unsigned int, int);
int FUN_0028c640(unsigned int, int, int);
int asdMdlManagerCreateLoaded(unsigned char [128], int);
int FUN_002a0428(void);
int FUN_002be624(...);

extern unsigned char LAB_001a90cc; /* 0x1a90cc */
extern unsigned char LAB_001a90ec; /* 0x1a90ec */
extern int g_mapIf; /* 0x447a78 */
extern int g_gameState; /* 0x49f91c */

/* Supplied declaration required: FUN_0028c618. */
/* Supplied declaration required: FUN_0028c640. */
/* Supplied declaration required: asdMdlManagerCreateLoaded. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: FUN_002be624. */


void FUN_001a9008(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 9 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  unsigned char temp_v1 [128];
  
  temp_v0 = g_mapIf;
  puVar2 = temp_v1;
  *(unsigned char *)(g_mapIf + 0xcbd0) = 1;
  *(unsigned int *)(temp_v0 + 0xcbd4) = 0;
  *(unsigned int *)(temp_v0 + 0xcbd8) = 0;
  *(unsigned int *)(temp_v0 + 0xcbdc) = in_s0;
  *(unsigned int *)(temp_v0 + 0xcbe0) = in_s1;
  *(unsigned int *)(temp_v0 + 0xcbe4) = in_s2;
  *(unsigned int *)(temp_v0 + 0xcbe8) = in_s3;
  if (g_gameState != 0x18) {
    FUN_002be624(temp_v1,&LAB_001a90cc,g_gameState,g_gameState);
  }
  else {
    FUN_002be624(temp_v1,&LAB_001a90ec);
  }
  asdMdlManagerCreateLoaded(temp_v1,7);
  *(unsigned char **)(temp_v0 + 0xcbec) = puVar2;
  FUN_002a0428();
  FUN_0028c640(*(unsigned int *)(*(int *)(temp_v0 + 0xcbec) + 8),0,temp_v0 + 0xcbdc);
  FUN_0028c618(*(unsigned int *)(*(int *)(temp_v0 + 0xcbec) + 8),0);
  return;
}

} /* extern "C" */
