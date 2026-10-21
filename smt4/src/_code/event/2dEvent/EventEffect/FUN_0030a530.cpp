/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030a530` (_code @ 0x30a530, 0x168 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTMTexTableLoadEntryAsync(...);
int asdMemAlloc(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);
int asdTMTexTableLoadTmx(...);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int FUN_002222e8(...); /* 0x2222e8 */
extern int FUN_00222520(...); /* 0x222520 */
extern unsigned char LAB_0030a6dc; /* 0x30a6dc */
extern unsigned char LAB_0030a6f0; /* 0x30a6f0 */
extern unsigned char LAB_0030a708; /* 0x30a708 */
extern unsigned int *g_eventEffect; /* 0x43dee8 */
extern unsigned int DAT_0043df00; /* 0x43df00 */
extern unsigned int DAT_0043df04; /* 0x43df04 */

extern int textureGetIndexedResource(unsigned int);
/* Supplied declaration required: asdTMTexTableLoadEntryAsync. */
extern int asdTMTexTableNodeIsLoaded(unsigned int, unsigned int);
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: asdTMTexTableLoadTmx. */


void FUN_0030a530(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  int temp_v0;
  int temp_v1;
  
  if (g_eventEffect == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemAlloc(0x100,0x100,0,0x1c,1);
    g_eventEffect = puVar1;
  }
  puVar1 = g_eventEffect;
  temp_v1 = 0;
  *g_eventEffect = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar2 = &LAB_0030a6dc;
  asdProcessCreateSimple(&LAB_0030a6dc,1,0,0,FUN_00222520,0,0);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(&LAB_0030a6f0,0x81,0,0,FUN_002222e8,0,0,puVar2);
  taskCreateDraw(&LAB_0030a708,0xdf,0,0,FUN_002222e8,0,0,*puVar1);
  puVar1[4] = 0;
  puVar1[2] = 0;
  *(unsigned char *)(puVar1 + 6) = 0;
  puVar1[5] = 0x3f800000;
  puVar1[3] = 0x28;
  do {
    temp_v0 = textureGetIndexedResource((&DAT_0043df00)[temp_v1 * 3]);
    if (temp_v0 == 0) {
      asdTMTexTableLoadTmx((&DAT_0043df00)[temp_v1 * 3],0);
      *(unsigned char *)(temp_v1 * 0xc + 0x43df09) = 1;
    }
    temp_v0 = asdTMTexTableNodeIsLoaded((&DAT_0043df00)[temp_v1 * 3],(&DAT_0043df04)[temp_v1 * 3]);
    if (temp_v0 == 0) {
      asdTMTexTableLoadEntryAsync((&DAT_0043df00)[temp_v1 * 3],(&DAT_0043df04)[temp_v1 * 3]);
      *(unsigned char *)(temp_v1 * 0xc + 0x43df08) = 1;
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 2);
  return;
}

} /* extern "C" */
