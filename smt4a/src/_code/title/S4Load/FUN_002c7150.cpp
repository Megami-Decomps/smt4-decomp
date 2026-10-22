/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c7150` (_code @ 0x2c7150, 0x190 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int asdMemoryAlloc(...);
int asdLoadFileAsyncSimple(...);
int asdProcessClearSelectedFlags(...);
int rt_aeabi_memclr(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_002364fc; /* 0x2364fc */
extern int FUN_0027dbac(...); /* 0x27dbac */
extern int s4LoadDestroy(...); /* 0x2bd408 */
extern int FUN_002bd488(...); /* 0x2bd488 */
extern unsigned char LAB_002c7314; /* 0x2c7314 */
extern unsigned char LAB_002c7324; /* 0x2c7324 */
extern unsigned char LAB_002c7340; /* 0x2c7340 */
extern unsigned char LAB_002c7354; /* 0x2c7354 */
extern unsigned char LAB_002c7364; /* 0x2c7364 */
extern unsigned char LAB_002c7378; /* 0x2c7378 */
extern unsigned int *g_s4Load; /* 0x589154 */

extern unsigned int spriteHandleCreate(unsigned int);
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: asdProcessClearSelectedFlags. */
/* Supplied declaration required: rt_aeabi_memclr. */


unsigned int FUN_002c7150(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char *puVar3;
  int temp_v1;
  int temp_v2;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAllocTracked(0x100,0x100,0,0x3bc,1);
  g_s4Load = puVar1;
  puVar1[2] = 0;
  temp_v1 = 0;
  do {
    rt_aeabi_memclr(puVar1 + temp_v1 * 0x20 + 0xaf,0x80);
    temp_v2 = temp_v1 + 1;
    *(unsigned char *)((int)puVar1 + temp_v1 + 0xa4) = 0;
    temp_v1 = temp_v2;
  } while (temp_v2 < 2);
  puVar1[0x27] = 0;
  puVar1[0x28] = 1;
  *(unsigned char *)(puVar1 + 0xad) = 0;
  asdLoadFileAsyncSimple(&LAB_002c7314,puVar1 + 0xaa,0);
  asdLoadFileAsyncSimple(&LAB_002c7324,puVar1 + 0xab,0);
  puVar1[6] = 0x80;
  puVar1[0xac] = 0;
  temp_v0 = 0x100;
  asdMemoryAlloc(0x100,0x100,0,puVar1[6],1);
  puVar1[5] = temp_v0;
  temp_v0 = spriteHandleCreate(0);
  puVar1[0xae] = temp_v0;
  *(unsigned char *)(puVar1 + 1) = 0;
  puVar3 = &LAB_002c7340;
  asdProcessCreateSimple(&LAB_002c7340,4,0,0,&LAB_002364fc,s4LoadDestroy,0);
  *puVar1 = (unsigned int)puVar3;
  taskCreateDraw(&LAB_002c7354,0x7e,0,0,FUN_0027dbac,0,0,puVar3);
  taskCreateDraw(&LAB_002c7364,0xda,0,0,FUN_0027dbac,0,0,*puVar1);
  taskCreateDraw(&LAB_002c7378,0xec,0,0,FUN_002bd488,0,0,*puVar1);
  asdProcessClearSelectedFlags(*puVar1,0x80000,0);
  return *puVar1;
}

} /* extern "C" */
