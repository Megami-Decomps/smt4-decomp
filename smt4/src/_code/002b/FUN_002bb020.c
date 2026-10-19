/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb020` (_code @ 0x2bb020, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00144924; /* 0x144924 */
extern unsigned int DAT_0047236c; /* 0x47236c */
extern unsigned char DAT_004ea6d0; /* 0x4ea6d0 */

extern int FUN_002bfefc(unsigned int *);
/* Supplied declaration required: FUN_002c5d5c. */


unsigned char * FUN_002bb020(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  if (((DAT_0047236c & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_0047236c), temp_v0 != 0)) {
    puVar2 = &DAT_004ea6d0;
    FUN_002c5d5c(&DAT_004ea6d0,&LAB_00144924,0xc,3);
    *(unsigned int *)(puVar2 + 0x24) = 0;
    puVar2[0x28] = 0;
    *(unsigned int *)(puVar2 + 0x2c) = 0;
    *(unsigned int *)(puVar2 + 0x30) = 0;
    *(unsigned int *)(puVar2 + 0x34) = 0xffffffff;
    *(unsigned int *)(puVar2 + 0x3c) = 0;
    *(unsigned short *)(puVar2 + 0x40) = 0;
    *(unsigned int *)(puVar2 + 0x44) = 0;
    *(unsigned short *)(puVar2 + 0x48) = 0;
    *(unsigned int *)(puVar2 + 0x4c) = 0;
    *(unsigned int *)(puVar2 + 0x50) = 0;
    *(unsigned int *)(puVar2 + 0x54) = 0xffffffff;
    *(unsigned int *)(puVar2 + 100) = 0;
    *(unsigned int *)(puVar2 + 0x68) = 0;
  }
  return &DAT_004ea6d0;
}
