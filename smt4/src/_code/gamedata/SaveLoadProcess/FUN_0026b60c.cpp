/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026b60c` (_code @ 0x26b60c, 0xdc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ec9d0(...);
int gameDataFlagsSet(...);
int gameDataFlagsSetBits(...);
int gameDataBlocksAddFlags(...);
int asdMemAlloc(...);
int asdProcessCreateSimple(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_0026b730; /* 0x26b730 */
extern int FUN_002efa00(...); /* 0x2efa00 */
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


unsigned int FUN_0026b60c(unsigned int param_1)

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
  puVar4 = &LAB_0026b730;
  asdProcessCreateSimple(&LAB_0026b730,2,0,0,FUN_002efa00,jobTeardownFlagsAndWork,puVar2);
  *puVar2 = (unsigned int)puVar4;
  FUN_001ec9d0();
  puVar2[4] = param_1;
  g_byteSettings = 0;
  DAT_0043e2f1 = 0;
  DAT_0043e2f2 = 0;
  puVar2[1] = 4;
  return *puVar2;
}

} /* extern "C" */
