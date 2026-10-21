/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00285020` (_code @ 0x285020, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadTmx(...);
int FUN_0014e188(...);
int asdProcessCreateSimple(...);
int paramsInit(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int sysMemClear(...);
int paramsClearPacket(...);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_002851d0; /* 0x2851d0 */
extern unsigned char LAB_002851e0; /* 0x2851e0 */
extern unsigned char LAB_002851f0; /* 0x2851f0 */
extern int FUN_003d02bc(...); /* 0x3d02bc */
extern int FUN_003d0958(...); /* 0x3d0958 */
extern unsigned char DAT_0052fbcc; /* 0x52fbcc */
extern unsigned char DAT_0052fbe4; /* 0x52fbe4 */
extern unsigned int *g_sWin; /* 0x57f57c */

/* Supplied declaration required: asdTMTexTableLoadTmx. */
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: paramsClearPacket. */


void FUN_00285020(int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (g_sWin == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0xd4,1);
    g_sWin = puVar1;
  }
  puVar1 = g_sWin;
  sysMemClear();
  temp_v0 = 0x80;
  temp_v1 = 0xdc;
  if (param_1 != 0) {
    temp_v0 = 0x85;
    temp_v1 = 0xe1;
  }
  asdTMTexTableLoadTmx(0x34,0);
  puVar2 = &LAB_002851d0;
  asdProcessCreateSimple(&LAB_002851d0,3,0,0,FUN_003d0958,0,0);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(&LAB_002851e0,temp_v0,0,0,FUN_003d02bc,0,0,puVar2);
  taskCreateDraw(&LAB_002851f0,temp_v1,0,0,FUN_003d02bc,0,0,*puVar1);
  puVar1 = g_sWin;
  puVar3 = g_sWin + 10;
  g_sWin[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  paramsClearPacket(puVar3);
  paramsInit(puVar1 + 10,0,0,&DAT_0052fbcc,0x18,&DAT_0052fbe4,0x18,0,0,0,0);
  FUN_0014e188(puVar1 + 0x12,0x34,0,puVar1 + 10,0x15);
  return;
}

} /* extern "C" */
