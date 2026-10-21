/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00294090` (_code @ 0x294090, 0x220 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdLoadFileAsyncSimple(unsigned char [68], unsigned int *, int);
int textFormatBuffer(...);
int asdOperatorNew(int, unsigned int);
int FUN_0033e7c4(unsigned int *, int);
int FUN_0033f2b8(unsigned int *);
int aocQueueType0c(unsigned int, int, unsigned int *, unsigned char [68]);
int FUN_00389ed8(unsigned int, int, unsigned int *, unsigned char [68]);

extern unsigned char DAT_00420700; /* 0x420700 */
extern unsigned int g_aocSystem; /* 0x433158 */

extern int FUN_0023e330(unsigned int, int, unsigned int);
extern int FUN_0023e3a4(unsigned int, int, unsigned int);
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_0033e7c4. */
/* Supplied declaration required: FUN_0033f2b8. */
/* Supplied declaration required: aocQueueType0c. */
/* Supplied declaration required: FUN_00389ed8. */


unsigned int * FUN_00294090(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned char temp_v2 [68];
  
  temp_v0 = 0;
  do {
    temp_v1 = *(int *)(temp_v0 * 4 + 0x47e50c);
    if ((temp_v1 != 0) && (*(int *)(temp_v1 + 4) == param_1)) {
      *(int *)(temp_v1 + 0x40) = *(int *)(temp_v1 + 0x40) + 1;
      return *(unsigned int **)(temp_v0 * 4 + 0x47e50c);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x10);
  temp_v0 = 0;
  do {
    if (*(int *)(temp_v0 * 4 + 0x47e50c) == 0) break;
    if (*(int *)(temp_v0 * 4 + 0x47e510) == 0) {
      temp_v0 = temp_v0 + 1;
      break;
    }
    temp_v0 = temp_v0 + 2;
  } while (temp_v0 < 0x10);
  puVar2 = (unsigned int *)0x48;
  asdOperatorNew(0x48,param_4);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = (unsigned int)&DAT_00420700;
    puVar2[1] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *(unsigned char *)(puVar2 + 0xf) = 0;
    *(unsigned char *)((int)puVar2 + 0x3d) = 0;
    puVar2[0x11] = 0;
  }
  *(unsigned int **)(temp_v0 * 4 + 0x47e50c) = puVar2;
  temp_v0 = -param_1;
  puVar2[0x10] = 1;
  if (param_2 != 0) {
    if (param_1 < 0) {
      puVar2[1] = param_1;
      textFormatBuffer(temp_v2,"event/npcgtix/npc%03d.bin",temp_v0);
      puVar2[10] = 0;
      puVar2[2] = 4;
      puVar2[3] = temp_v0;
      temp_v1 = FUN_0023e330(g_aocSystem,temp_v0,1);
      if (temp_v1 != 0) {
        aocQueueType0c(g_aocSystem,temp_v0,puVar2 + 10,temp_v2);
        return puVar2;
      }
    }
    else {
      puVar2[1] = param_1;
      textFormatBuffer(temp_v2,"battle/devil/en%03d.bin",param_1);
      puVar2[10] = 0;
      puVar2[2] = 0xc;
      puVar2[3] = param_1 - 1;
      temp_v0 = FUN_0023e3a4(g_aocSystem,param_1,1);
      if (temp_v0 != 0) {
        FUN_00389ed8(g_aocSystem,param_1,puVar2 + 10,temp_v2);
        return puVar2;
      }
    }
    asdLoadFileAsyncSimple(temp_v2,puVar2 + 10,0);
  }
  else if (param_1 < 0) {
    FUN_0033f2b8(puVar2);
  }
  else {
    FUN_0033e7c4(puVar2,param_1);
  }
  return puVar2;
}

} /* extern "C" */
