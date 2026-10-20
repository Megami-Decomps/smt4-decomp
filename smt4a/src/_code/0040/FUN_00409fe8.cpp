/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00409fe8` (_code @ 0x409fe8, 0x248 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int asdOperatorNew(int, unsigned int);
int FUN_002804b0(unsigned char [64], unsigned int *, int);
int FUN_003fc1b0(unsigned int *, int);
int FUN_003fcd20(unsigned int *);
int FUN_00470b60(unsigned int, int, unsigned int *, unsigned char [64]);
int FUN_004713ec(unsigned int, int, unsigned int *, unsigned char [64]);

extern unsigned char DAT_00557b10; /* 0x557b10 */
extern unsigned int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_003fc1b0. */
/* Supplied declaration required: FUN_003fcd20. */
extern int FUN_004705ec(unsigned int, int, unsigned int);
extern int FUN_00470b18(unsigned int, int, unsigned int);
/* Supplied declaration required: FUN_00470b60. */
/* Supplied declaration required: FUN_004713ec. */


unsigned int * FUN_00409fe8(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned char temp_v2 [64];
  
  temp_v0 = 0;
  do {
    temp_v1 = *(int *)(temp_v0 * 4 + 0x5cc50c);
    if ((temp_v1 != 0) && (*(int *)(temp_v1 + 4) == param_1)) {
      *(int *)(temp_v1 + 0x40) = *(int *)(temp_v1 + 0x40) + 1;
      return *(unsigned int **)(temp_v0 * 4 + 0x5cc50c);
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x10);
  temp_v0 = 0;
  do {
    if (*(int *)(temp_v0 * 4 + 0x5cc50c) == 0) break;
    if (*(int *)(temp_v0 * 4 + 0x5cc510) == 0) {
      temp_v0 = temp_v0 + 1;
      break;
    }
    temp_v0 = temp_v0 + 2;
  } while (temp_v0 < 0x10);
  puVar2 = (unsigned int *)0x48;
  asdOperatorNew(0x48,param_4);
  if (puVar2 != (unsigned int *)0x0) {
    *puVar2 = (unsigned int)&DAT_00557b10;
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
  *(unsigned int **)(temp_v0 * 4 + 0x5cc50c) = puVar2;
  temp_v0 = -param_1;
  puVar2[0x10] = 1;
  if (param_2 == 0) {
    if (param_1 < 0) {
      FUN_003fcd20(puVar2);
      return puVar2;
    }
    FUN_003fc1b0(puVar2,param_1);
    return puVar2;
  }
  if (param_1 < 0) {
    puVar2[1] = param_1;
    FUN_00100388(temp_v2,"event/npcgtix/npc%03d.bin",temp_v0);
    puVar2[10] = 0;
    puVar2[2] = 2;
    puVar2[3] = temp_v0;
    temp_v1 = FUN_004705ec(g_aocSystem,temp_v0,1);
    if (temp_v1 != 0) {
      FUN_00470b60(g_aocSystem,temp_v0,puVar2 + 10,temp_v2);
      return puVar2;
    }
  }
  else {
    puVar2[1] = param_1;
    FUN_00100388(temp_v2,"battle/devil/en%03d.bin",param_1);
    puVar2[10] = 0;
    puVar2[2] = 6;
    puVar2[3] = param_1 - 1;
    temp_v0 = FUN_00470b18(g_aocSystem,param_1,1);
    if (temp_v0 != 0) {
      FUN_004713ec(g_aocSystem,param_1,puVar2 + 10,temp_v2);
      return puVar2;
    }
    if (param_3 == 0) {
      FUN_002804b0(temp_v2,puVar2 + 10,1);
      return puVar2;
    }
  }
  FUN_002804b0(temp_v2,puVar2 + 10,0);
  return puVar2;
}

} /* extern "C" */
