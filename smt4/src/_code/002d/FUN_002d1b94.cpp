/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d1b94` (_code @ 0x2d1b94, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "map/lmapMain.h"

extern "C" {

void FUN_00264444(LmapObj *);
int FUN_002664d8(int);
int objSetBaseAndValue(int, int, unsigned int);
int FUN_00266a2c(void);
int FUN_002702dc(void);
int mapDepartSetTarget(...);
int FUN_0027b2b4(unsigned int, unsigned int);
int FUN_0027d7b0(unsigned int, unsigned int, unsigned int);
int VectorSignedToFloat(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int g_lmapMainState; /* 0x447060 */
extern int g_lmapScene; /* 0x447e88 */
extern unsigned int DAT_0049f920; /* 0x49f920 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00264444. */
/* Supplied declaration required: FUN_002664d8. */
/* Supplied declaration required: objSetBaseAndValue. */
/* Supplied declaration required: FUN_00266a2c. */
/* Supplied declaration required: FUN_002702dc. */
/* Supplied declaration required: mapDepartSetTarget. */
/* Supplied declaration required: FUN_0027b2b4. */
extern char *dataTableGetRecord23(void);
/* Supplied declaration required: FUN_0027d7b0. */


void FUN_002d1b94(unsigned int param_1,unsigned int param_2)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  char *pcVar3;
  unsigned int in_fpscr;
  unsigned int temp_v2;
  
  temp_v0 = g_lmapMainState;
  FUN_0027d7b0(*(unsigned int *)(g_lmapMainState + 0x40),param_1,param_2);
  pcVar3 = (char *)dataTableGetRecord23();
  mapDepartSetTarget((int)*pcVar3,(int)pcVar3[1],pcVar3[2]);
  *(unsigned int *)(temp_v0 + 0x48) = param_1;
  temp_v1 = g_lmapScene;
  temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar3 + 4),(unsigned char)(in_fpscr >> 0x16) & 3);
  DAT_0049f920 = param_1;
  *(unsigned int *)(g_lmapScene + 0x1c) = temp_v2;
  temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar3 + 6),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v1 + 0x20) = temp_v2;
  temp_v2 = VectorSignedToFloat((int)*(short *)(pcVar3 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v1 + 0x24) = temp_v2;
  *(unsigned int *)(temp_v1 + 0x28) = *(unsigned int *)(temp_v1 + 0x1c);
  *(unsigned int *)(temp_v1 + 0x2c) = *(unsigned int *)(temp_v1 + 0x20);
  *(unsigned int *)(temp_v1 + 0x30) = *(unsigned int *)(temp_v1 + 0x24);
  *(unsigned int *)(temp_v1 + 0x4c) = 0x43340000;
  *(unsigned int *)(temp_v1 + 0x50) = 0x43340000;
  *(unsigned int *)(temp_v1 + 0x34) = *(unsigned int *)(temp_v1 + 0x1c);
  *(unsigned int *)(temp_v1 + 0x38) = *(unsigned int *)(temp_v1 + 0x20);
  *(unsigned int *)(temp_v1 + 0x3c) = *(unsigned int *)(temp_v1 + 0x24);
  FUN_002702dc();
  FUN_0027b2b4(*(unsigned int *)(temp_v0 + 0x40),*(unsigned int *)(temp_v0 + 0x48));
  FUN_00266a2c();
  FUN_00264444((LmapObj *)(temp_v0 + 0xec));
  objSetBaseAndValue(temp_v0 + 0xec,*(int *)(temp_v0 + 0x40) - 100,*(unsigned int *)(temp_v0 + 0x48));
  FUN_002664d8(temp_v0 + 0xec);
  temp_v0 = g_lmapMainState;
  if (*(int *)(g_lmapMainState + 0xcc) != 3) {
    *(unsigned int *)(g_lmapMainState + 0xcc) = 3;
    *(unsigned int *)(temp_v0 + 0xd0) = 0;
    *(unsigned int *)(temp_v0 + 0xd4) = 0;
  }
  mapDepartSetTarget(0xffffffff,0xffffffff);
  return;
}

} /* extern "C" */
