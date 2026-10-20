/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00246720` (_code @ 0x246720, 0x210 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int mapDepartResetWork(...);
int FUN_0020ec4c(...);
int FUN_0020ef94(...);
int FUN_0020f054(...);
int FUN_00233170(...);
int FUN_002442ac(...);
int FUN_00244894(...);
int FUN_002496b8(...);
int FUN_002c23cc(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_0024697c; /* 0x24697c */
extern unsigned char LAB_0024698c; /* 0x24698c */
extern unsigned char LAB_00246998; /* 0x246998 */
extern unsigned char LAB_002469a4; /* 0x2469a4 */
extern unsigned char LAB_002469b0; /* 0x2469b0 */
extern int FUN_0024f4ac(...); /* 0x24f4ac */
extern unsigned char LAB_0029ee68; /* 0x29ee68 */
extern unsigned char LAB_002bd170; /* 0x2bd170 */
extern unsigned char LAB_002e0380; /* 0x2e0380 */
extern unsigned char LAB_0032afe0; /* 0x32afe0 */
extern int FUN_00358550(...); /* 0x358550 */
extern int FUN_00358734(...); /* 0x358734 */
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern unsigned int *g_mapMain; /* 0x581274 */
extern unsigned char DAT_005f161d; /* 0x5f161d */
extern unsigned char DAT_005f185b; /* 0x5f185b */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
extern int FUN_00162e8c(void);
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: mapDepartResetWork. */
/* Supplied declaration required: FUN_0020ec4c. */
/* Supplied declaration required: FUN_0020ef94. */
/* Supplied declaration required: FUN_0020f054. */
/* Supplied declaration required: FUN_00233170. */
/* Supplied declaration required: FUN_002442ac. */
/* Supplied declaration required: FUN_00244894. */
/* Supplied declaration required: FUN_002496b8. */
/* Supplied declaration required: FUN_002c23cc. */


void FUN_00246720(void)

{
/* irregular: 15 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned char *puVar3;
  unsigned char *puVar4;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0xd4,1);
  g_mapMain = puVar1;
  temp_v0 = FUN_00162e8c();
  FUN_002c23cc(1);
  *(unsigned char *)((int)puVar1 + 0xd) = 0;
  *(unsigned char *)((int)puVar1 + 0xe) = 0;
  *(unsigned char *)((int)puVar1 + 0xf) = 0;
  *(unsigned char *)(puVar1 + 4) = 0;
  *(unsigned char *)((int)puVar1 + 0x11) = 0;
  *(unsigned char *)((int)puVar1 + 0x12) = 0;
  *(unsigned char *)((int)puVar1 + 0x13) = 0;
  *(unsigned char *)(puVar1 + 5) = 0;
  *(unsigned char *)((int)puVar1 + 0x15) = 0;
  *(unsigned char *)((int)puVar1 + 0x16) = 0;
  puVar1[6] = 0;
  *(unsigned char *)(puVar1 + 7) = 0;
  *(unsigned char *)((int)puVar1 + 0x1d) = 0;
  *(unsigned char *)((int)puVar1 + 0x1e) = 0;
  *(unsigned char *)((int)puVar1 + 0x1f) = 0;
  *(unsigned char *)(puVar1 + 8) = 0;
  *(unsigned char *)((int)puVar1 + 0x21) = 0;
  *(unsigned char *)((int)puVar1 + 0x22) = 0;
  *(unsigned char *)((int)puVar1 + 0x23) = 0;
  *(unsigned char *)(puVar1 + 9) = 0;
  *(unsigned char *)((int)puVar1 + 0x25) = 0;
  *(unsigned char *)((int)puVar1 + 0x41) = 0;
  puVar1[0x11] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 1;
  puVar1[0xe] = 0;
  puVar1[0xd] = 1;
  *(unsigned char *)(puVar1 + 0x10) = 0;
  *(unsigned char *)((int)puVar1 + 0x4e) = 1;
  *(unsigned char *)((int)puVar1 + 0x4f) = 0;
  *(unsigned char *)((int)puVar1 + 0x4a) = 0;
  *(unsigned char *)((int)puVar1 + 0x4b) = 0;
  *(unsigned char *)(puVar1 + 0x13) = 0;
  *(unsigned char *)((int)puVar1 + 0x4d) = 0;
  FUN_0020ec4c();
  FUN_00244894();
  FUN_002496b8();
  FUN_002442ac();
  FUN_0020ef94();
  mapDepartResetWork();
  FUN_0020f054();
  FUN_00233170();
  puVar1[0x2b] = 0x1c2;
  puVar1[0x2c] = 0;
  puVar1[0x2e] = 0;
  *(unsigned char *)(puVar1 + 0x2f) = 0;
  *(unsigned char *)((int)puVar1 + 0xbd) = 0;
  *(unsigned char *)((int)puVar1 + 0xbe) = 0;
  *(unsigned char *)((int)puVar1 + 0xbf) = 0;
  DAT_005f185b = 0;
  DAT_005f161d = 0;
  *(unsigned char *)(temp_v0 + 0x7c4) = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = DAT_0056fcc0;
  *(unsigned char *)(puVar1 + 3) = 0;
  puVar3 = &LAB_0024697c;
  asdProcessCreateSimple(&LAB_0024697c,4,0,0,FUN_0024f4ac,&LAB_002e0380,0);
  *puVar1 = (unsigned int)puVar3;
  puVar4 = &LAB_0024698c;
  taskCreateDraw(&LAB_0024698c,0x71,0,0,&LAB_0029ee68,&LAB_0032afe0,0,puVar3);
  puVar1[1] = (unsigned int)puVar4;
  taskCreateDraw(&LAB_00246998,0x77,0,0,FUN_00358550,0,0,*puVar1);
  taskCreateDraw(&LAB_002469a4,0xd3,0,0,FUN_00358734,0,0,*puVar1);
  taskCreateDraw(&LAB_002469b0,0x68,0,0,&LAB_002bd170,&LAB_0032afe0,0,*puVar1);
  return;
}

} /* extern "C" */
