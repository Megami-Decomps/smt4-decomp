/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c113c` (_code @ 0x3c113c, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int gameDataBlocksAddFlags(...);
int asdProcessClearSelectedFlags(...);
int gameDataAddHomeButtonHold(...);
int FUN_00333574(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int FUN_0037116c(...); /* 0x37116c */
extern int FUN_003a7938(...); /* 0x3a7938 */
extern unsigned char LAB_003c12b0; /* 0x3c12b0 */
extern unsigned char LAB_003c12bc; /* 0x3c12bc */
extern unsigned char LAB_003c12c8; /* 0x3c12c8 */
extern int work8BufDestroy(...); /* 0x3c6038 */
extern unsigned char g_saveLoadProcess; /* 0x57f6bc */
extern unsigned char DAT_0057f6bd; /* 0x57f6bd */
extern unsigned char DAT_0057f6be; /* 0x57f6be */
extern unsigned char DAT_0057f6bf; /* 0x57f6bf */
extern unsigned char DAT_0057f6c0; /* 0x57f6c0 */
extern unsigned short DAT_0057f6c2; /* 0x57f6c2 */
extern unsigned int DAT_0057f6c4; /* 0x57f6c4 */

extern int gameDataBlocksGetSaveData(void);
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: gameDataBlocksAddFlags. */
/* Supplied declaration required: asdProcessClearSelectedFlags. */
/* Supplied declaration required: gameDataAddHomeButtonHold. */
/* Supplied declaration required: FUN_00333574. */


unsigned int FUN_003c113c(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned char *puVar4;
  
  puVar2 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x1c,1);
  gameDataAddHomeButtonHold(1);
  gameDataBlocksAddFlags(1);
  FUN_00333574(1);
  puVar2[2] = 0;
  temp_v1 = gameDataBlocksGetSaveData();
  temp_v0 = *(unsigned char *)(temp_v1 + 3);
  puVar2[4] = (unsigned int)temp_v0;
  if (temp_v0 == 0) {
    puVar2[4] = 1;
  }
  DAT_0057f6bf = 0;
  DAT_0057f6c0 = 0;
  DAT_0057f6c4 = 0;
  DAT_0057f6c2 = 0;
  g_saveLoadProcess = 0;
  DAT_0057f6bd = 0;
  DAT_0057f6be = 0;
  puVar4 = &LAB_003c12b0;
  asdProcessCreateSimple(&LAB_003c12b0,4,0,0,FUN_0037116c,work8BufDestroy,puVar2);
  *puVar2 = (unsigned int)puVar4;
  asdProcessClearSelectedFlags();
  taskCreateDraw(&LAB_003c12bc,0x86,0,0,FUN_003a7938,0,0,*puVar2);
  taskCreateDraw(&LAB_003c12c8,0xe2,0,0,FUN_003a7938,0,0,*puVar2);
  puVar2[1] = 0xc;
  return *puVar2;
}

} /* extern "C" */
