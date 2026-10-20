/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b12c` (_code @ 0x38b12c, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002159f8(unsigned int, unsigned int);
int scrGetArg(int);

extern int g_npcRoom; /* 0x588124 */

extern int FUN_001801b8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002159f8. */
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_0038b12c(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  unsigned short *puVar5;
  unsigned int temp_v3;
  
  temp_v1 = scrGetArg(0);
  puVar3 = (unsigned short *)scrGetArg(1);
  temp_v3 = 0;
  temp_v2 = FUN_001801b8(temp_v1,(unsigned int)puVar3 & 0xff);
  if (temp_v2 == 0) {
    temp_v3 = 5;
  }
  FUN_002159f8(temp_v1,(unsigned int)puVar3 & 0xff);
  if (g_npcRoom != 0) {
    temp_v2 = 0;
    do {
      puVar5 = *(unsigned short **)(g_npcRoom + temp_v2 * 4 + 0x28);
      temp_v0 = *puVar5;
      if (temp_v0 == temp_v1) {
        puVar5 = (unsigned short *)(unsigned int)(unsigned char)puVar5[0x29];
      }
      if (temp_v0 == temp_v1 && puVar5 == puVar3) {
        *(unsigned int *)(g_npcRoom + temp_v2 * 0xc + 0x110) = temp_v3;
        return 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 8);
  }
  return 1;
}

} /* extern "C" */
