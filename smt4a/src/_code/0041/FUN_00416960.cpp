/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00416960` (_code @ 0x416960, 0x1ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int objFlagsSetBits(...);
int FUN_0014e188(unsigned int *, int, unsigned int, int, int);
int positionStateSet(unsigned int, int, int);
int FUN_001527d8(int, int);
int pairSetFirstResetSecond(unsigned int *, int);
int uiSpriteSetImageKeyframe(unsigned int *, int, int);
int pairSetHalves(unsigned int *, int, int);
int FUN_0019e330(unsigned int *, int, int);
int asdMemFreeSlot(void);
int FUN_002a1850(unsigned int *, int, unsigned int, unsigned char [16]);
int asdTextDrawDirectoryEntry(...);
int FUN_00416388(int, int, unsigned int *);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
} param_3_stack;

extern int btlGetMainState(void);
extern int spriteHandleCreate(unsigned int);
/* Supplied declaration required: objFlagsSetBits. */
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: positionStateSet. */
/* Supplied declaration required: FUN_001527d8. */
extern unsigned int FUN_00152f54(void);
/* Supplied declaration required: pairSetFirstResetSecond. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: pairSetHalves. */
/* Supplied declaration required: FUN_0019e330. */
/* Supplied declaration required: asdMemFreeSlot. */
/* Supplied declaration required: FUN_002a1850. */
/* Supplied declaration required: asdTextDrawDirectoryEntry. */
extern unsigned int FUN_0033885c(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00416388. */


void FUN_00416960(int param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s1; 12 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  float temp_v3;
  float in_s1;
  unsigned char temp_v4 [16];
  int iStack_24;
  int iStack_20;
  unsigned int uStack_1c;
  
  puVar4 = (unsigned int *)(param_1 + param_2 * 0xb0);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(unsigned char *)(puVar4 + 0x28) = 0;
  puVar4[0x29] = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
  puVar4[4] = 0;
  iStack_24 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  if (puVar4[0x2a] != 0) {
    asdMemFreeSlot();
    puVar4[0x2a] = 0;
  }
  puVar4[0x2b] = 0;
  *(unsigned char *)(puVar4 + 0x28) = 1;
  puVar4[0x29] = 1;
  *puVar4 = param_3;
  puVar4[1] = 0;
  temp_v3 = 1.0f;
  FUN_0014e188(puVar4 + 5,8,0xffffffff,param_1 + 0x840,0xb);
  pairSetFirstResetSecond(puVar4 + 5,0x8b);
  uiSpriteSetImageKeyframe(puVar4 + 5,4,0);
  FUN_0019e330(puVar4 + 5,6,0);
  temp_v0 = FUN_00152f54();
  FUN_002a1850(puVar4 + 2,0,temp_v0,temp_v4);
  FUN_00416388(param_1,param_2,puVar4 + 5);
  puVar4[2] = (float)puVar4[2] + temp_v3;
  temp_v3 = (float)puVar4[3];
  puVar4[3] = temp_v3 + in_s1;
  pairSetHalves(puVar4 + 5,(int)(short)(int)(float)puVar4[2],(int)(short)(int)(temp_v3 + in_s1));
  temp_v1 = btlGetMainState();
  temp_v2 = puVar4[0x2a];
  if (temp_v2 == 0) {
    temp_v2 = spriteHandleCreate(0);
    puVar4[0x2a] = temp_v2;
  }
  FUN_001527d8(temp_v2,0x320202ff);
  positionStateSet(puVar4[0x2a],0,0x646464ff);
  objFlagsSetBits(puVar4[0x2a],8);
  objFlagsSetBits(puVar4[0x2a],0x100);
  asdTextDrawDirectoryEntry(puVar4[0x2a],3,0xffffffff,0,3,*(unsigned int *)(temp_v1 + 0x4d64),*puVar4);
  temp_v0 = FUN_0033885c(puVar4[0x2a],0);
  puVar4[0x2b] = temp_v0;
  return;
}

} /* extern "C" */
