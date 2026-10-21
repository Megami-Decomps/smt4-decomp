/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b3c0` (_code @ 0x10b3c0, 0x138 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bd954(...);
int FUN_002bee58(...);
int paramsInit(...);
int memClear(...);
int asdMemAlloc(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);
int drawParameterBlockClear(...);

/* stack frame of void: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_0010b538; /* 0x10b538 */
extern unsigned char LAB_0010b54c; /* 0x10b54c */
extern unsigned char LAB_0010b560; /* 0x10b560 */
extern int FUN_0011aa94(...); /* 0x11aa94 */
extern int guestWinUpdate(...); /* 0x11b208 */
extern unsigned char DAT_00403964; /* 0x403964 */
extern unsigned char DAT_0040397c; /* 0x40397c */
extern unsigned char DAT_00403994; /* 0x403994 */
extern unsigned int *g_guestWin; /* 0x43e110 */

/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: drawParameterBlockClear. */


void FUN_0010b3c0(void)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  if (g_guestWin == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x100;
    asdMemAlloc(0x100,0x100,0,0xbc,1);
    g_guestWin = puVar1;
  }
  puVar1 = g_guestWin;
  memClear();
  puVar2 = &LAB_0010b538;
  asdProcessCreateSimple(&LAB_0010b538,1,0,0,guestWinUpdate,0,0);
  *puVar1 = (unsigned int)puVar2;
  taskCreateDraw(&LAB_0010b54c,0x81,0,0,FUN_0011aa94,0,0,puVar2);
  taskCreateDraw(&LAB_0010b560,0xdf,0,0,FUN_0011aa94,0,0,*puVar1);
  puVar1 = g_guestWin;
  drawParameterBlockClear(g_guestWin + 4);
  paramsInit(puVar1 + 4,&DAT_00403964,0x18,&DAT_0040397c,0x18,0,0,0,0,&DAT_00403994,0x70);
  FUN_002bd954(puVar1 + 0xc,0xe,0x87,puVar1 + 4,1);
  FUN_002bee58(puVar1 + 0xc,0);
  return;
}

} /* extern "C" */
