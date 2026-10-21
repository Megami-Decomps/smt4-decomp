/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00322d18` (_code @ 0x322d18, 0xe0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ec9d0(...);
int gameDataFlagsSet(...);
int gameDataFlagsSetBits(...);
int gameDataBlocksAddFlags(...);
int asdMemAlloc(...);
int asdProcessCreateSimple(...);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int FUN_002efba0(...); /* 0x2efba0 */
extern unsigned char LAB_00322e3c; /* 0x322e3c */
extern int jobTeardownFlagsAndWork(...); /* 0x324b74 */
extern unsigned char g_byteSettings; /* 0x43e2f0 */
extern unsigned char DAT_0043e2f1; /* 0x43e2f1 */
extern unsigned char DAT_0043e2f2; /* 0x43e2f2 */
extern unsigned char DAT_0043e2f3; /* 0x43e2f3 */
extern unsigned char DAT_0043e2f4; /* 0x43e2f4 */
extern unsigned short DAT_0043e2f6; /* 0x43e2f6 */
extern unsigned int DAT_0043e2f8; /* 0x43e2f8 */

/* Supplied declaration required: FUN_001ec9d0. */
/* Supplied declaration required: gameDataFlagsSet. */
/* Supplied declaration required: gameDataFlagsSetBits. */
/* Supplied declaration required: gameDataBlocksAddFlags. */
extern int gameDataBlocksGetSaveData(void);
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: asdProcessCreateSimple. */


unsigned int FUN_00322d18(unsigned int param_1,unsigned char param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned char *puVar4;
  
  puVar2 = (unsigned int *)0x100;
  asdMemAlloc(0x100,0x100,0,0x18,1);
  gameDataBlocksAddFlags(1);
  gameDataFlagsSetBits(1);
  gameDataFlagsSet(1);
  puVar2[2] = 0;
  temp_v1 = gameDataBlocksGetSaveData();
  temp_v0 = *(unsigned char *)(temp_v1 + 3);
  puVar2[4] = (unsigned int)temp_v0;
  if (temp_v0 == 0) {
    puVar2[4] = 1;
  }
  DAT_0043e2f3 = 0;
  DAT_0043e2f4 = 0;
  DAT_0043e2f8 = 0;
  DAT_0043e2f6 = 0;
  g_byteSettings = 0;
  DAT_0043e2f1 = 0;
  DAT_0043e2f2 = 0;
  puVar2[4] = param_1;
  puVar4 = &LAB_00322e3c;
  asdProcessCreateSimple(&LAB_00322e3c,2,0,0,FUN_002efba0,jobTeardownFlagsAndWork,puVar2);
  *puVar2 = (unsigned int)puVar4;
  FUN_001ec9d0();
  puVar2[1] = 0;
  *(unsigned char *)(puVar2 + 5) = param_2;
  return *puVar2;
}

} /* extern "C" */
