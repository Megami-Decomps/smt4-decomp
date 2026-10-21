/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00365c94` (_code @ 0x365c94, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int navigationSetArguments(void);
int FUN_0033e014(int, int);
int naviMainApplyRequestValue(unsigned int);
int FUN_00357ab0(int);
int naviMainSetRequestValue(int);
int naviMainSetRequestTriple(unsigned int, unsigned int, unsigned int);
int FUN_003b5714(void);
int VectorSignedToFloat(int, int);

extern int g_lmapView; /* 0x5806a4 */
extern int g_mapMain; /* 0x581274 */
extern int g_lmapScene; /* 0x581288 */
extern int g_gameState; /* 0x5f15fc */
extern int DAT_005f1600; /* 0x5f1600 */
extern unsigned int DAT_005f1604; /* 0x5f1604 */
extern unsigned int DAT_005f1608; /* 0x5f1608 */
extern unsigned int DAT_005f160c; /* 0x5f160c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: navigationSetArguments. */
/* Supplied declaration required: FUN_0033e014. */
/* Supplied declaration required: naviMainApplyRequestValue. */
/* Supplied declaration required: FUN_00357ab0. */
/* Supplied declaration required: naviMainSetRequestValue. */
extern char *dataTableGetRecord23(void);
/* Supplied declaration required: naviMainSetRequestTriple. */
/* Supplied declaration required: FUN_003b5714. */


void FUN_00365c94(void)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  char *pcVar3;
  unsigned int *puVar4;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  
  temp_v0 = g_mapMain;
  *(unsigned char *)(g_mapMain + 0x23) = 1;
  FUN_003b5714();
  pcVar3 = (char *)dataTableGetRecord23();
  temp_v1 = g_lmapScene;
  puVar4 = (unsigned int *)(g_lmapScene + 0x1c);
  temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar3 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(g_lmapScene + 0x1c) = temp_v2;
  temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar3 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v1 + 0x20) = temp_v2;
  temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar3 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v1 + 0x24) = temp_v2;
  temp_v2 = *puVar4;
  *(unsigned int *)(temp_v1 + 0x28) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x2c) = *(unsigned int *)(temp_v1 + 0x20);
  *(unsigned int *)(temp_v1 + 0x30) = *(unsigned int *)(temp_v1 + 0x24);
  *(unsigned int *)(temp_v1 + 0x34) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x38) = *(unsigned int *)(temp_v1 + 0x20);
  *(unsigned int *)(temp_v1 + 0x3c) = *(unsigned int *)(temp_v1 + 0x24);
  temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v1 + 0x4c) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x50) = temp_v2;
  temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(g_lmapView + 0x18) = temp_v2;
  g_gameState = (int)*pcVar3;
  *(int *)(temp_v0 + 0x30) = g_gameState;
  DAT_005f1600 = (int)pcVar3[1];
  *(int *)(temp_v0 + 0x34) = DAT_005f1600;
  DAT_005f1604 = (unsigned int)(unsigned char)pcVar3[3];
  DAT_005f1608 = *(unsigned int *)(temp_v0 + 0x30);
  DAT_005f160c = *(unsigned int *)(temp_v0 + 0x34);
  navigationSetArguments();
  naviMainSetRequestTriple(DAT_005f1608,DAT_005f160c,DAT_005f1604);
  DAT_005f1604 = (unsigned int)(unsigned char)pcVar3[3];
  if (DAT_005f1604 == 0xff) {
    DAT_005f1604 = 0xffffffff;
  }
  naviMainApplyRequestValue(DAT_005f1608);
  FUN_00357ab0(g_lmapScene + 0x1c);
  naviMainSetRequestValue(1);
  FUN_0033e014(g_gameState,DAT_005f1600);
  *(unsigned int *)(temp_v0 + 0x28) = 0x8a;
  *(unsigned int *)(temp_v0 + 0x2c) = 0;
  return;
}

} /* extern "C" */
