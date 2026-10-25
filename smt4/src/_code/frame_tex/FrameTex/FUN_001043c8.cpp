/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001043c8` (_code @ 0x1043c8, 0x5b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "romwright_types.h"

extern "C" {


int asdGxIndexBufferCreate(...);
int memClear(...);
int asdMemAlloc(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);
int drawParameterBlockClear(...);

/* stack frame of void: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char LAB_001047d8; /* 0x1047d8 */
extern unsigned char LAB_001047e4; /* 0x1047e4 */
extern unsigned char LAB_001047f0; /* 0x1047f0 */
extern unsigned char LAB_001047fc; /* 0x1047fc */
extern unsigned char LAB_00104808; /* 0x104808 */
extern unsigned char LAB_00104814; /* 0x104814 */
extern unsigned char LAB_00104820; /* 0x104820 */
extern unsigned char LAB_0010482c; /* 0x10482c */
extern unsigned char LAB_00104838; /* 0x104838 */
extern unsigned char LAB_00104844; /* 0x104844 */
extern unsigned char LAB_00104850; /* 0x104850 */
extern unsigned char LAB_0010485c; /* 0x10485c */
extern unsigned char LAB_00104868; /* 0x104868 */
extern unsigned char LAB_00104878; /* 0x104878 */
extern unsigned char LAB_00104888; /* 0x104888 */
extern unsigned char LAB_00104898; /* 0x104898 */
extern unsigned char LAB_00104980; /* 0x104980 */
extern unsigned char LAB_0010498c; /* 0x10498c */
extern unsigned char LAB_00104998; /* 0x104998 */
extern unsigned char LAB_001049a4; /* 0x1049a4 */
extern int frameTexReleaseWork(...); /* 0x1078ec */
extern int FUN_001080c0(...); /* 0x1080c0 */
extern int FUN_0010812c(...); /* 0x10812c */
extern int FUN_001081b0(...); /* 0x1081b0 */
extern int FUN_0010821c(...); /* 0x10821c */
extern int FUN_0010835c(...); /* 0x10835c */
extern int FUN_0010854c(...); /* 0x10854c */
extern int FUN_00108754(...); /* 0x108754 */
extern int FUN_001087f4(...); /* 0x1087f4 */
extern int FUN_0010889c(...); /* 0x10889c */
extern int FUN_00108b0c(...); /* 0x108b0c */
extern int FUN_00109348(...); /* 0x109348 */
extern int FUN_001093e8(...); /* 0x1093e8 */
extern int FUN_0010949c(...); /* 0x10949c */
extern int FUN_00109520(...); /* 0x109520 */
extern int titlePartStart(...); /* 0x109f40 */
extern int titleCaptureSurfaceOnce(...); /* 0x109fb4 */
extern int FUN_0010a03c(...); /* 0x10a03c */
extern int FUN_0010a110(...); /* 0x10a110 */
extern int titleBackdropRender(...); /* 0x10a3a4 */
extern int titleCaptureHalfSizeSurfaceOnce(...); /* 0x10a450 */
extern int titleCaptureReadySurfaceOnce(unsigned int job); /* 0x10b224 */
extern int FUN_0010b2d0(...); /* 0x10b2d0 */
extern unsigned char DAT_00404164; /* 0x404164 */
extern unsigned char DAT_0040417c; /* 0x40417c */
extern unsigned char DAT_00404188; /* 0x404188 */
extern unsigned char DAT_00404194; /* 0x404194 */
extern unsigned int *g_frameTex; /* 0x43e278 */

/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: asdGxIndexBufferCreate. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: drawParameterBlockClear. */


void FUN_001043c8(void)

{
/* irregular: 30 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int temp_v0;
  unsigned char *puVar4;
  
  puVar2 = (unsigned int *)0x100;
  asdMemAlloc(0x100,0x100,0,0xfec,1);
  g_frameTex = puVar2;
  memClear();
  temp_v0 = 0;
  asdGxIndexBufferCreate();
  puVar2[1] = temp_v0;
  temp_v0 = 0;
  asdGxIndexBufferCreate();
  puVar2[2] = temp_v0;
  temp_v0 = 0;
  asdGxIndexBufferCreate();
  puVar2[0x3c8] = temp_v0;
  temp_v0 = 0;
  asdGxIndexBufferCreate();
  puVar2[0x3c9] = temp_v0;
  puVar2[0x3f7] = 0;
  *(unsigned char *)(puVar2 + 3) = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *(unsigned char *)(puVar2 + 7) = 0;
  drawParameterBlockClear(puVar2 + 0xd);
  paramsInit(reinterpret_cast<UiResourceParameters *>(puVar2 + 0xd), &DAT_00404164,0x18,&DAT_0040417c,0xc,&DAT_00404188,0xc,0,0,&DAT_00404194
               ,0x70);
  puVar2[0xb] = 0x3e800000;
  puVar2[10] = 0x3e800000;
  puVar2[0xc] = 0x41a00000;
  puVar1 = g_frameTex;
  *(unsigned char *)(g_frameTex + 0x3a3) = 0;
  *(unsigned char *)(puVar1 + 0x3b7) = 0;
  *(unsigned char *)(puVar2 + 0x3ca) = 0;
  *(unsigned char *)((int)puVar2 + 0xf2b) = 0;
  *(unsigned char *)(puVar2 + 0x3cb) = 0;
  *(unsigned char *)(puVar2 + 0x3e6) = 0;
  *(unsigned char *)((int)puVar2 + 0xf99) = 0;
  *(unsigned char *)(puVar2 + 0x3f8) = 0;
  puVar4 = &LAB_001047d8;
  asdProcessCreateSimple(&LAB_001047d8,0x6a,0,0,FUN_0010835c,frameTexReleaseWork,puVar1);
  *puVar2 = (unsigned int)puVar4;
  taskCreateDraw(&LAB_001047e4,0xce,0,0,FUN_0010854c,0,g_frameTex,puVar4);
  taskCreateDraw(&LAB_001047f0,0x6b,0,0,FUN_001080c0,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_001047fc,0xcf,0,0,FUN_0010812c,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00104808,0x6d,0,0,FUN_00108754,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00104814,0xd1,0,0,FUN_001087f4,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00104820,0x6c,0,0,FUN_001081b0,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_0010482c,0xd0,0,0,FUN_0010821c,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00104838,0x78,0,0,FUN_00109348,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00104844,0xd6,0,0,FUN_001093e8,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00104850,0x65,0,0,FUN_0010889c,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_0010485c,0xcc,0,0,FUN_00108b0c,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00104868,0x77,0,0,titleBackdropRender,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00104878,0xd5,0,0,titleCaptureHalfSizeSurfaceOnce,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00104888,0x82,0,0,FUN_0010a03c,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00104898,0xe0,0,0,FUN_0010a110,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00104868,0x7e,0,0,titleCaptureReadySurfaceOnce,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00104878,0xdc,0,0,FUN_0010b2d0,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00104980,0x77,0,0,titlePartStart,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_0010498c,0xd5,0,0,titleCaptureSurfaceOnce,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_00104998,0x79,0,0,FUN_0010949c,0,g_frameTex,*puVar2);
  taskCreateDraw(&LAB_001049a4,0xd7,0,0,FUN_00109520,0,g_frameTex,*puVar2);
  return;
}

} /* extern "C" */
