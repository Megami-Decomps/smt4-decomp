/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00390038` (_code @ 0x390038, 0x154 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00126fb8(int);
int FUN_00297060(int, unsigned int);
int FUN_002a126c(unsigned char [4], unsigned int);
int resultPairInitialize(unsigned int *, int);
int memClear(int, int);
int asdTMTexTableLoadSprites(int);
int FUN_002c58c8(int, int);
int FUN_0036196c(void);
void aocMenuInitializePanelSprites(void *context);
int rt_memcpy_w(int, unsigned char *, int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_00390198; /* 0x390198 */
extern int g_aocMain; /* 0x432fc8 */
extern unsigned int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_00126fb8. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_002a126c. */
extern unsigned int fileSlotGetBuffer(unsigned int);
/* Supplied declaration required: resultPairInitialize. */
extern unsigned int *FUN_002bad5c(unsigned char *);
extern unsigned int fileLoadSync(char *, unsigned char *, unsigned int);
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: FUN_002c58c8. */
extern int FUN_00361960(void);
/* Supplied declaration required: FUN_0036196c. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_00390038(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [4];
  unsigned char temp_v6 [16];
  unsigned char temp_v7 [4];
  unsigned int temp_v8 [3];
  
  temp_v0 = FUN_00361960();
  if (temp_v0 != 0) {
    FUN_0036196c();
  }
  FUN_002a126c(temp_v5,g_aocSystem);
  FUN_00126fb8(g_aocMain + 0x80);
  temp_v5[0] = 0;
  puVar2 = (unsigned int *)FUN_002bad5c(temp_v6);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar3 = temp_v8;
  resultPairInitialize(puVar3,0);
  temp_v1 = *puVar3;
  temp_v2 = puVar3[1];
  *puVar2 = temp_v1;
  puVar2[1] = temp_v2;
  temp_v3 = puVar2[2];
  temp_v4 = puVar2[3];
  *(unsigned int *)(param_1 + 0x210) = puVar2[-1];
  *(unsigned int *)(param_1 + 0x214) = temp_v1;
  *(unsigned int *)(param_1 + 0x218) = temp_v2;
  *(unsigned int *)(param_1 + 0x21c) = temp_v3;
  *(unsigned int *)(param_1 + 0x220) = temp_v4;
  aocMenuInitializePanelSprites((void *)param_1);
  asdTMTexTableLoadSprites(0x3a);
  temp_v0 = 0;
  do {
    FUN_002c58c8(0x3a,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  temp_v1 = fileLoadSync("addon/aoc_scr.bf",temp_v7,0);
  *(unsigned int *)(param_1 + 0x350) = temp_v1;
  temp_v1 = fileSlotGetBuffer(0x41);
  *(unsigned int *)(param_1 + 0x354) = temp_v1;
  temp_v0 = *(int *)(param_1 + 0x350);
  FUN_00297060(temp_v0,temp_v1);
  *(int *)(param_1 + 0x358) = temp_v0;
  *(unsigned int *)(temp_v0 + 0x108) = 2;
  *(unsigned int *)(param_1 + 4) = 1;
  *(unsigned int *)(param_1 + 8) = 0;
  if (*(int **)(param_1 + 0x208) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x208) + 4))();
    *(unsigned int *)(param_1 + 0x208) = 0;
  }
  temp_v0 = g_aocMain;
  *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xffffff8f;
  *(unsigned char *)(temp_v0 + 0xd50) = 2;
  memClear(param_1 + 0x1130,0x80);
  rt_memcpy_w(param_1 + 0x1130,&LAB_00390198,0x23);
  return;
}

} /* extern "C" */
