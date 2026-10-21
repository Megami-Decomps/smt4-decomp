/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00322b80` (_code @ 0x322b80, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ec9d0(...);
int gameDataFlagsSet(...);
int FUN_00259294(...);
int gameDataBlocksAddFlags(...);
int asdMemAlloc(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_002ef8e4(...); /* 0x2ef8e4 */
extern int FUN_003112ec(...); /* 0x3112ec */
extern unsigned char LAB_00322cf0; /* 0x322cf0 */
extern unsigned char LAB_00322cfc; /* 0x322cfc */
extern unsigned char LAB_00322d08; /* 0x322d08 */
extern int FUN_00324b74(...); /* 0x324b74 */
extern unsigned char g_byteSettings; /* 0x43e2f0 */
extern unsigned char DAT_0043e2f1; /* 0x43e2f1 */
extern unsigned char DAT_0043e2f2; /* 0x43e2f2 */
extern unsigned char DAT_0043e2f3; /* 0x43e2f3 */
extern unsigned char DAT_0043e2f4; /* 0x43e2f4 */
extern unsigned short DAT_0043e2f6; /* 0x43e2f6 */
extern unsigned int DAT_0043e2f8; /* 0x43e2f8 */

/* Supplied declaration required: FUN_001ec9d0. */
/* Supplied declaration required: gameDataFlagsSet. */
/* Supplied declaration required: FUN_00259294. */
/* Supplied declaration required: gameDataBlocksAddFlags. */
extern int gameDataBlocksGetSaveData(void);
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */


unsigned int FUN_00322b80(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned char *puVar4;
  
  puVar2 = (unsigned int *)0x100;
  asdMemAlloc(0x100,0x100,0,0x18,1);
  gameDataBlocksAddFlags(1);
  FUN_00259294(1);
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
  puVar4 = &LAB_00322cf0;
  asdProcessCreateSimple(&LAB_00322cf0,2,0,0,FUN_002ef8e4,FUN_00324b74,puVar2);
  *puVar2 = (unsigned int)puVar4;
  FUN_001ec9d0();
  taskCreateDraw(&LAB_00322cfc,0x81,0,0,FUN_003112ec,0,0,*puVar2);
  taskCreateDraw(&LAB_00322d08,0xdf,0,0,FUN_003112ec,0,0,*puVar2);
  puVar2[1] = 8;
  return *puVar2;
}

} /* extern "C" */
