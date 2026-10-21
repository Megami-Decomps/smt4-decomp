/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2e98` (_code @ 0x2a2e98, 0x338 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_0013c174(...);
int asdMemoryAlloc(int, int, int, int, int);
int asdMemFree(...);
int FUN_0025f358(...);
int FUN_0025f670(...);
int FUN_0025f954(...);
int FUN_0025fbe8(...);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spA8; /* 0xa8: local_a8 */
} param_4_stack;

extern unsigned char LAB_002a31d4; /* 0x2a31d4 */
extern unsigned char LAB_002a31f0; /* 0x2a31f0 */
extern unsigned char LAB_002a3204; /* 0x2a3204 */
extern unsigned char g_mapCollision; /* 0x580204 */
extern unsigned char DAT_00580205; /* 0x580205 */
extern unsigned int DAT_00580208; /* 0x580208 */
extern unsigned int DAT_0058020c; /* 0x58020c */
extern unsigned int DAT_00580210; /* 0x580210 */
extern unsigned int DAT_00580214; /* 0x580214 */
extern unsigned int DAT_00580218; /* 0x580218 */
extern unsigned int DAT_0058021c; /* 0x58021c */
extern unsigned int DAT_00580220; /* 0x580220 */
extern unsigned int DAT_00580224; /* 0x580224 */
extern unsigned int DAT_00580228; /* 0x580228 */
extern unsigned char *DAT_0058022c; /* 0x58022c */
extern unsigned char *DAT_00580230; /* 0x580230 */
extern int *DAT_00580234; /* 0x580234 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_0013c174. */
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0025f358. */
/* Supplied declaration required: FUN_0025f670. */
/* Supplied declaration required: FUN_0025f954. */
/* Supplied declaration required: FUN_0025fbe8. */


void FUN_002a2e98(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 8 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [4];
  unsigned char temp_v4 [64];
  unsigned char temp_v5 [64];
  
  DAT_00580208 = 0;
  DAT_0058020c = 0;
  DAT_00580210 = 0;
  DAT_00580214 = 0;
  DAT_00580218 = 0;
  g_mapCollision = 0;
  temp_v0 = 0;
  DAT_00580205 = 0;
  if (param_1 != 100) {
    if (param_1 - 0x65U < 99) {
      textFormatBuffer(temp_v4,&LAB_002a31d4,param_1 - 100,param_1 - 100,param_2);
    }
    else {
      textFormatBuffer(temp_v4,&LAB_002a3204,param_1,param_1,param_2);
    }
    if (param_1 == 0x2c || param_1 == 0x2f) {
      textFormatBuffer(temp_v4,&LAB_002a3204,0x2b,0x2b,2);
    }
    if (param_1 == 0x2d || param_1 == 0x2e) {
      textFormatBuffer(temp_v4,&LAB_002a3204,0x2b,0x2b,1);
    }
  }
  else {
    textFormatBuffer(temp_v4,&LAB_002a31f0);
  }
  if (param_3 != 0) {
    temp_v0 = 1;
    if (param_3 - 0x65U < 99) {
      textFormatBuffer(temp_v5,&LAB_002a31d4,param_3 - 100,param_3 - 100,param_4);
    }
    else {
      textFormatBuffer(temp_v5,&LAB_002a3204,param_3,param_3,param_4);
    }
  }
  puVar2 = temp_v4;
  FUN_0013c174(puVar2,temp_v3,0);
  DAT_00580234 = (int *)(puVar2 + *(int *)(puVar2 + 0xc));
  *DAT_00580234 = (int)(puVar2 + *DAT_00580234);
  DAT_00580234[2] = (int)(puVar2 + DAT_00580234[2]);
  DAT_00580234[4] = (int)(puVar2 + DAT_00580234[4]);
  DAT_00580234[6] = (int)(puVar2 + DAT_00580234[6]);
  DAT_00580234[8] = (int)(puVar2 + DAT_00580234[8]);
  DAT_00580234[10] = (int)(puVar2 + DAT_00580234[10]);
  temp_v1 = 0x100;
  DAT_0058022c = puVar2;
  DAT_00580230 = puVar2;
  asdMemoryAlloc(0x100,0x100,0,0x15000,1);
  temp_v2 = 0x100;
  DAT_0058021c = temp_v1;
  asdMemoryAlloc(0x100,0x100,0,0xfc00,1);
  temp_v1 = 0x100;
  DAT_00580220 = temp_v2;
  asdMemoryAlloc(0x100,0x100,0,0x6900,1);
  temp_v2 = 0x100;
  DAT_00580224 = temp_v1;
  asdMemoryAlloc(0x100,0x100,0,0x1f800,1);
  DAT_00580228 = temp_v2;
  FUN_0025f954(0);
  FUN_0025fbe8(0);
  FUN_0025f358(0);
  FUN_0025f670(0);
  asdMemFree(DAT_0058022c);
  DAT_0058022c = (unsigned char *)0x0;
  if (temp_v0) {
    puVar2 = temp_v5;
    FUN_0013c174(puVar2,temp_v3,0);
    DAT_00580234 = (int *)(puVar2 + *(int *)(puVar2 + 0xc));
    *DAT_00580234 = (int)(puVar2 + *DAT_00580234);
    DAT_00580234[2] = (int)(puVar2 + DAT_00580234[2]);
    DAT_00580234[4] = (int)(puVar2 + DAT_00580234[4]);
    DAT_00580234[6] = (int)(puVar2 + DAT_00580234[6]);
    DAT_00580234[8] = (int)(puVar2 + DAT_00580234[8]);
    DAT_00580234[10] = (int)(puVar2 + DAT_00580234[10]);
    DAT_0058022c = puVar2;
    DAT_00580230 = puVar2;
    FUN_0025f954(1);
    FUN_0025fbe8(1);
    FUN_0025f358(1);
    FUN_0025f670(1);
    asdMemFree(DAT_0058022c);
  }
  DAT_0058022c = (unsigned char *)0x0;
  return;
}

} /* extern "C" */
