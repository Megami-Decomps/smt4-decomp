/* NON_MATCHING: romwright 0.5.0 decompilation of `MapIf_Register` (_code @ 0x18aca8, 0x230 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00297a00(void);
int asdMemAlloc(int, int, int, int, int);
int taskCreateDraw(...);

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_2_stack;

extern unsigned char LAB_0018af1c; /* 0x18af1c */
extern unsigned char LAB_0018af28; /* 0x18af28 */
extern unsigned char LAB_0018af34; /* 0x18af34 */
extern unsigned char LAB_0018af44; /* 0x18af44 */
extern unsigned char LAB_0019fa80; /* 0x19fa80 */
extern unsigned char LAB_001e5e50; /* 0x1e5e50 */
extern int MAPIF_DrawUp(...); /* 0x1e8484 */
extern unsigned char LAB_001e84f0; /* 0x1e84f0 */
extern int FUN_0021ef10(...); /* 0x21ef10 */
extern unsigned int *g_mapIf; /* 0x447a78 */
extern unsigned int DAT_004b5d30; /* 0x4b5d30 */
extern unsigned int DAT_004b5d34; /* 0x4b5d34 */
extern unsigned int DAT_004b5d38; /* 0x4b5d38 */
extern unsigned int DAT_004b5d3c; /* 0x4b5d3c */
extern unsigned int DAT_004b5d40; /* 0x4b5d40 */
extern unsigned int DAT_004b5d44; /* 0x4b5d44 */
extern unsigned int DAT_004b5d48; /* 0x4b5d48 */
extern unsigned int DAT_004b5d4c; /* 0x4b5d4c */
extern unsigned int DAT_004b5d50; /* 0x4b5d50 */
extern unsigned int DAT_004b5d54; /* 0x4b5d54 */
extern unsigned int DAT_004b5d58; /* 0x4b5d58 */
extern unsigned int DAT_004b5d5c; /* 0x4b5d5c */
extern unsigned int DAT_004b6360; /* 0x4b6360 */
extern unsigned int DAT_004b6364; /* 0x4b6364 */
extern unsigned int DAT_004b6368; /* 0x4b6368 */
extern unsigned int DAT_004b636c; /* 0x4b636c */
extern unsigned int DAT_004b6370; /* 0x4b6370 */
extern unsigned int DAT_004b6374; /* 0x4b6374 */
extern unsigned int DAT_004b6378; /* 0x4b6378 */
extern unsigned int DAT_004b637c; /* 0x4b637c */
extern unsigned int DAT_004b6380; /* 0x4b6380 */
extern unsigned int DAT_004b6384; /* 0x4b6384 */
extern unsigned int DAT_004b6388; /* 0x4b6388 */
extern unsigned int DAT_004b638c; /* 0x4b638c */
extern unsigned int DAT_004b6990; /* 0x4b6990 */
extern unsigned int DAT_004b6994; /* 0x4b6994 */
extern unsigned int DAT_004b6998; /* 0x4b6998 */
extern unsigned int DAT_004b699c; /* 0x4b699c */
extern unsigned int DAT_004b69a0; /* 0x4b69a0 */
extern unsigned int DAT_004b69a4; /* 0x4b69a4 */
extern unsigned int DAT_004b69a8; /* 0x4b69a8 */
extern unsigned int DAT_004b69ac; /* 0x4b69ac */
extern unsigned int DAT_004b69b0; /* 0x4b69b0 */
extern unsigned int DAT_004b69b4; /* 0x4b69b4 */
extern unsigned int DAT_004b69b8; /* 0x4b69b8 */
extern unsigned int DAT_004b69bc; /* 0x4b69bc */

/* Supplied declaration required: FUN_00297a00. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */


void MapIf_Register(unsigned int param_1,unsigned char param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)0x100;
  asdMemAlloc(0x100,0x100,0,0xcce8,1);
  g_mapIf = puVar1;
  *(unsigned char *)(puVar1 + 5) = 0;
  *(unsigned char *)((int)puVar1 + 0x16) = 0;
  *(unsigned char *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  *(unsigned char *)(puVar1 + 8) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(unsigned char *)(puVar1 + 0x32f4) = 0;
  *(unsigned short *)(puVar1 + 0x332e) = 0;
  *(unsigned short *)((int)puVar1 + 0xccba) = 0;
  *(unsigned char *)(puVar1 + 0x3330) = 0;
  temp_v0 = 0;
  puVar1[0x3333] = 0;
  puVar1[0x3334] = 0;
  puVar1[0x3335] = 0;
  *(unsigned char *)(puVar1 + 0x3336) = 0;
  *(unsigned char *)(puVar1 + 0x3338) = 0;
  puVar1[0x3339] = 0;
  puVar2 = &LAB_0018af1c;
  taskCreateDraw(&LAB_0018af1c,2,0,0,&LAB_0019fa80,&LAB_001e5e50,0,param_1);
  *puVar1 = (unsigned int)puVar2;
  puVar3 = &LAB_0018af28;
  taskCreateDraw(&LAB_0018af28,0x73,0,0,MAPIF_DrawUp,0,0,puVar2);
  puVar1[1] = (unsigned int)puVar3;
  taskCreateDraw(&LAB_0018af34,0x85,0,0,FUN_0021ef10,0,0,*puVar1);
  puVar2 = &LAB_0018af44;
  taskCreateDraw(&LAB_0018af44,0x6f,0,0,&LAB_001e84f0,0,0,*puVar1);
  puVar1[2] = (unsigned int)puVar2;
  DAT_004b5d30 = 0xc2800000;
  DAT_004b5d34 = 0x41800000;
  DAT_004b5d3c = 0xc2800000;
  DAT_004b5d40 = 0xc1800000;
  DAT_004b5d48 = 0x42800000;
  DAT_004b5d4c = 0x41800000;
  DAT_004b5d54 = 0x42800000;
  DAT_004b5d58 = 0xc1800000;
  DAT_004b6360 = 0xc2800000;
  DAT_004b6368 = 0x41800000;
  DAT_004b636c = 0xc2800000;
  DAT_004b6380 = 0x41800000;
  DAT_004b6374 = 0xc1800000;
  DAT_004b6378 = 0x42800000;
  DAT_004b6384 = 0x42800000;
  DAT_004b638c = 0xc1800000;
  DAT_004b6990 = 0xc2800000;
  DAT_004b6998 = 0xc1800000;
  DAT_004b699c = 0xc2800000;
  DAT_004b69a4 = 0x41800000;
  DAT_004b69a8 = 0x42800000;
  DAT_004b69bc = 0x41800000;
  DAT_004b69b0 = 0xc1800000;
  DAT_004b69b4 = 0x42800000;
  DAT_004b5d38 = temp_v0;
  DAT_004b5d44 = temp_v0;
  DAT_004b5d50 = temp_v0;
  DAT_004b5d5c = temp_v0;
  DAT_004b6364 = temp_v0;
  DAT_004b6370 = temp_v0;
  DAT_004b637c = temp_v0;
  DAT_004b6388 = temp_v0;
  DAT_004b6994 = temp_v0;
  DAT_004b69a0 = temp_v0;
  DAT_004b69ac = temp_v0;
  DAT_004b69b8 = temp_v0;
  *(unsigned char *)((int)puVar1 + 0x15) = param_2;
  FUN_00297a00();
  return;
}

} /* extern "C" */
