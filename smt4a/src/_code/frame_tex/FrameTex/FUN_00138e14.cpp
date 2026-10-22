/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138e14` (_code @ 0x138e14, 0x5d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdGxIndexBufferCreate(...);
int asdProcessCreateSimple(...);
int paramsInit(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int sysMemClear(...);
int paramsClearPacket(...);

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char LAB_00139228; /* 0x139228 */
extern unsigned char LAB_00139234; /* 0x139234 */
extern unsigned char LAB_00139240; /* 0x139240 */
extern unsigned char LAB_0013924c; /* 0x13924c */
extern unsigned char LAB_00139258; /* 0x139258 */
extern unsigned char LAB_00139264; /* 0x139264 */
extern unsigned char LAB_00139270; /* 0x139270 */
extern unsigned char LAB_0013927c; /* 0x13927c */
extern unsigned char LAB_00139288; /* 0x139288 */
extern unsigned char LAB_00139294; /* 0x139294 */
extern unsigned char LAB_001392a0; /* 0x1392a0 */
extern unsigned char LAB_001392ac; /* 0x1392ac */
extern unsigned char LAB_001392b8; /* 0x1392b8 */
extern unsigned char LAB_001392c8; /* 0x1392c8 */
extern unsigned char LAB_001392d8; /* 0x1392d8 */
extern unsigned char LAB_001392e8; /* 0x1392e8 */
extern unsigned char LAB_001393f8; /* 0x1393f8 */
extern unsigned char LAB_00139404; /* 0x139404 */
extern unsigned char LAB_00139410; /* 0x139410 */
extern unsigned char LAB_0013941c; /* 0x13941c */
extern int frameTexReleaseWork(...); /* 0x13c1a0 */
extern int FUN_0013c660(...); /* 0x13c660 */
extern int FUN_0013c6d4(...); /* 0x13c6d4 */
extern int FUN_0013c764(...); /* 0x13c764 */
extern int FUN_0013c7dc(...); /* 0x13c7dc */
extern int renderSurfaceDownsampleJob(...); /* 0x13cb90 */
extern int FUN_0013cd7c(...); /* 0x13cd7c */
extern int FUN_0013cf80(...); /* 0x13cf80 */
extern int FUN_0013d030(...); /* 0x13d030 */
extern int panelUpdateAnimatedScale(...); /* 0x13d0f0 */
extern int FUN_0013d2dc(...); /* 0x13d2dc */
extern int FUN_0013db18(...); /* 0x13db18 */
extern int jobRenderOnce(...); /* 0x13dbb4 */
extern int FUN_0013dc70(...); /* 0x13dc70 */
extern int frameTexDrawWhenReady(...); /* 0x13dd18 */
extern int FUN_0013e7c4(...); /* 0x13e7c4 */
extern int FUN_0013e848(...); /* 0x13e848 */
extern int FUN_0013e8f8(...); /* 0x13e8f8 */
extern int FUN_0013e9e4(...); /* 0x13e9e4 */
extern int FUN_0013ee80(...); /* 0x13ee80 */
extern unsigned int FUN_0013ef3c(unsigned int process); /* 0x13ef3c */
extern int FUN_0014055c(...); /* 0x14055c */
extern int FUN_00140618(...); /* 0x140618 */
extern unsigned char DAT_00530cfc; /* 0x530cfc */
extern unsigned char DAT_00530d14; /* 0x530d14 */
extern unsigned char DAT_00530d38; /* 0x530d38 */
extern unsigned char DAT_00530d44; /* 0x530d44 */
extern unsigned int *g_frameTex; /* 0x57f65c */

/* Supplied declaration required: asdGxIndexBufferCreate. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: paramsClearPacket. */


void FUN_00138e14(void)

{
/* irregular: 30 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  unsigned char *puVar4;
  
  puVar2 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x14a0,1);
  g_frameTex = puVar2;
  sysMemClear();
  temp_v0 = 0;
  asdGxIndexBufferCreate();
  puVar2[1] = temp_v0;
  temp_v0 = 0;
  asdGxIndexBufferCreate();
  puVar2[2] = temp_v0;
  temp_v0 = 0;
  asdGxIndexBufferCreate();
  puVar2[0x40e] = temp_v0;
  temp_v0 = 0;
  asdGxIndexBufferCreate();
  puVar2[0x40f] = temp_v0;
  puVar2[0x524] = 0;
  *(unsigned char *)(puVar2 + 3) = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(unsigned char *)(puVar2 + 7) = 0;
  paramsClearPacket(puVar2 + 0xd);
  paramsInit(puVar2 + 0xd,&DAT_00530cfc,0x18,&DAT_00530d14,0x24,&DAT_00530d38,0xc,0,0,
               &DAT_00530d44,0x70);
  puVar2[0xb] = 0x3e800000;
  puVar2[10] = 0x3e800000;
  puVar2[0xc] = 0x41a00000;
  puVar1 = g_frameTex;
  *(unsigned char *)(g_frameTex + 0x3e9) = 0;
  *(unsigned char *)(puVar1 + 0x3fd) = 0;
  *(unsigned char *)(puVar2 + 0x410) = 0;
  *(unsigned char *)((int)puVar2 + 0x1043) = 0;
  *(unsigned char *)(puVar2 + 0x411) = 0;
  *(unsigned char *)(puVar2 + 0x513) = 0;
  *(unsigned char *)((int)puVar2 + 0x144d) = 0;
  *(unsigned char *)(puVar2 + 0x525) = 0;
  puVar4 = &LAB_00139228;
  asdProcessCreateSimple(&LAB_00139228,0x6c,0,0,renderSurfaceDownsampleJob,frameTexReleaseWork,puVar1);
  *puVar2 = (unsigned int)puVar4;
  taskCreateDraw(&LAB_00139234,0xce,0,0,FUN_0013cd7c,0,g_frameTex,puVar4);
  taskCreateDraw(&LAB_00139240,0x6d,0,0,FUN_0013c660,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_0013924c,0xcf,0,0,FUN_0013c6d4,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00139258,0x6f,0,0,FUN_0013cf80,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00139264,0xd1,0,0,FUN_0013d030,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00139270,0x6e,0,0,FUN_0013c764,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_0013927c,0xd0,0,0,FUN_0013c7dc,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00139288,0x7b,0,0,FUN_0013db18,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00139294,0xd7,0,0,jobRenderOnce,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_001392a0,0x65,0,0,panelUpdateAnimatedScale,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_001392ac,0xcc,0,0,FUN_0013d2dc,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_001392b8,0x7a,0,0,FUN_0013ee80,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_001392c8,0xd6,0,0,FUN_0013ef3c,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_001392d8,0x87,0,0,FUN_0013e8f8,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_001392e8,0xe3,0,0,FUN_0013e9e4,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_001392b8,0x82,0,0,FUN_0014055c,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_001392c8,0xde,0,0,FUN_00140618,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_001393f8,0x7a,0,0,FUN_0013e7c4,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00139404,0xd6,0,0,FUN_0013e848,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00139410,0x7c,0,0,FUN_0013dc70,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_0013941c,0xd8,0,0,frameTexDrawWhenReady,0,g_frameTex,*puVar2);
  return;
}

} /* extern "C" */
