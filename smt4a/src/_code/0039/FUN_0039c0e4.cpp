/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c0e4` (_code @ 0x39c0e4, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int FUN_001641c4(void);
int asdMemFree(void);
int FUN_0019a7f4(int, int);
int scrScriptProcessDestroy(void);
int FUN_00237210(unsigned int);
int asdTMTexTableFreeEntry(int);
int FUN_002e3328(void);

extern unsigned char DAT_0057f254; /* 0x57f254 */

/* Supplied declaration required: jobStop. */
/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_00237210. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_0039c0e4(void)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&DAT_0057f254 + 0x4));
  temp_v0 = 0;
  if (*(short *)((*(unsigned int * *)((unsigned char *)&DAT_0057f254 + 0x4)) + 0x52) != 0) {
    do {
      FUN_001641c4();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < (int)(unsigned int)*(unsigned short *)(puVar1 + 0x52));
  }
  FUN_00237210(puVar1[0x176]);
  puVar1[0x176] = 0;
  temp_v0 = 0;
  do {
    FUN_0019a7f4(0x31,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 2);
  asdTMTexTableFreeEntry(0x31);
  if (puVar1[0xd] != 0) {
    scrScriptProcessDestroy();
    puVar1[0xd] = 0;
  }
  if (puVar1[0xb] != 0) {
    asdMemFree();
    puVar1[0xb] = 0;
  }
  if (puVar1[10] != 0) {
    asdMemFree();
    puVar1[10] = 0;
  }
  if (puVar1[0xc] != 0) {
    asdMemFree();
    puVar1[0xc] = 0;
    if (puVar1[10] != 0) {
      asdMemFree();
      puVar1[10] = 0;
    }
  }
  if (puVar1[4] != 0) {
    asdMemFree();
    puVar1[4] = 0;
  }
  jobStop(*puVar1,0);
  if ((*(unsigned int * *)((unsigned char *)&DAT_0057f254 + 0x4)) != (unsigned int *)0x0) {
    FUN_002e3328();
    (*(unsigned int * *)((unsigned char *)&DAT_0057f254 + 0x4)) = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
