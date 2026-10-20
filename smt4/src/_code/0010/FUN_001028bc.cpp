/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001028bc` (_code @ 0x1028bc, 0x154 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010a7bc(...);
int FUN_0010aff8(...);
int FUN_0010b3c0(...);
int FUN_0010e5e0(...);
int FUN_0010ec70(...);
int objFlagsSetBits(...);
int taskCreateDraw(...);
int FUN_002c4a34(...);
int asdTMTexTableLoadSprites(...);
int FUN_002c58c8(...);
int asdTMTexTableLoadTmx(...);

typedef int romwright_code(...);
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_001029fc; /* 0x1029fc */
extern int FUN_0010a9c8(...); /* 0x10a9c8 */
extern int FUN_0010edf8(...); /* 0x10edf8 */
extern int FUN_0010efd8(...); /* 0x10efd8 */
extern int FUN_0010f084(...); /* 0x10f084 */
extern unsigned int *DAT_0043e18c; /* 0x43e18c */
extern unsigned int *DAT_0043e190; /* 0x43e190 */
extern unsigned int *DAT_0043e194; /* 0x43e194 */
extern romwright_code *pcRam00464d74; /* 0x464d74 */

/* Supplied declaration required: FUN_0010a7bc. */
/* Supplied declaration required: FUN_0010aff8. */
/* Supplied declaration required: FUN_0010b3c0. */
/* Supplied declaration required: FUN_0010e5e0. */
/* Supplied declaration required: FUN_0010ec70. */
/* Supplied declaration required: objFlagsSetBits. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: FUN_002c4a34. */
/* Supplied declaration required: asdTMTexTableLoadSprites. */
/* Supplied declaration required: FUN_002c58c8. */
/* Supplied declaration required: asdTMTexTableLoadTmx. */


void FUN_001028bc(void)

{
/* irregular: 15 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  asdTMTexTableLoadTmx(5,0);
  asdTMTexTableLoadSprites(0xe);
  FUN_002c58c8(5,0);
  temp_v0 = 0;
  do {
    puVar1 = (unsigned int *)FUN_002c58c8(0xe,temp_v0);
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 3);
  FUN_002c4a34();
  DAT_0043e18c = puVar1;
  FUN_002c4a34();
  DAT_0043e190 = puVar1;
  FUN_002c4a34();
  DAT_0043e194 = puVar1;
  *(unsigned char *)((int)DAT_0043e18c + 9) = 1;
  *(unsigned char *)((int)DAT_0043e190 + 9) = 6;
  *(unsigned char *)((int)puVar1 + 9) = 0xc;
  FUN_0010aff8();
  FUN_0010a7bc();
  FUN_0010b3c0();
  taskCreateDraw(&LAB_001029fc,0xea,0,0,FUN_0010a9c8,0,DAT_0043e18c,*DAT_0043e18c);
  puVar1 = DAT_0043e18c;
  *(unsigned char *)(DAT_0043e18c + 0x284) = 1;
  *(unsigned char *)(DAT_0043e190 + 0x284) = 0;
  *(unsigned char *)(DAT_0043e194 + 0x284) = 0;
  objFlagsSetBits(puVar1[1],0x100);
  objFlagsSetBits(DAT_0043e190[1],0x200);
  objFlagsSetBits(DAT_0043e194[1],0x100);
  FUN_0010ec70(FUN_0010efd8);
  FUN_0010e5e0(FUN_0010edf8);
  pcRam00464d74 = FUN_0010f084;
  return;
}

} /* extern "C" */
