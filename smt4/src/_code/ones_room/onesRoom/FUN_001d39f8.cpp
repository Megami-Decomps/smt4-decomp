/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d39f8` (_code @ 0x1d39f8, 0x10c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00282bfc(...);
int FUN_00289880(...);
int FUN_002898e4(...);
int buttonHelpCreate(...);
int scrScriptProcessStartEntry(...);
int FUN_00297060(...);
int buttonHelpSetPreset(...);
int asdMemoryAlloc(...);
int asdProcessCreateSimple(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int onesRoomTeardown(...); /* 0x1a96fc */
extern unsigned char LAB_001d3b3c; /* 0x1d3b3c */
extern unsigned char LAB_001d3b54; /* 0x1d3b54 */
extern unsigned char LAB_001d3b74; /* 0x1d3b74 */
extern unsigned char LAB_001fc560; /* 0x1fc560 */
extern unsigned int *g_onesRoom; /* 0x44d1c8 */

/* Supplied declaration required: FUN_00282bfc. */
/* Supplied declaration required: FUN_00289880. */
/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: buttonHelpCreate. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: asdMemoryAlloc. */
/* Supplied declaration required: asdProcessCreateSimple. */
extern unsigned int FUN_002c5c04(unsigned char *);


void FUN_001d39f8(int param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *puVar4;
  
  puVar1 = (unsigned int *)0x100;
  asdMemoryAlloc(0x100,0x100,0,0x14,1);
  g_onesRoom = puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  if (param_1 == 0) {
    *(unsigned char *)(puVar1 + 4) = 1;
  }
  FUN_002898e4();
  buttonHelpCreate();
  FUN_00289880();
  buttonHelpSetPreset(0xa2);
  temp_v0 = FUN_002c5c04(&LAB_001d3b3c);
  puVar1[1] = temp_v0;
  temp_v0 = FUN_002c5c04(&LAB_001d3b54);
  puVar1[3] = temp_v0;
  temp_v1 = puVar1[1];
  FUN_00297060(temp_v1,temp_v0);
  puVar1[2] = temp_v1;
  *(unsigned int *)(temp_v1 + 0x108) = 2;
  scrScriptProcessStartEntry(puVar1[2],0);
  *(unsigned char *)((int)puVar1 + 0x11) = 0;
  if (*(char *)(puVar1 + 4) != '\0') {
    FUN_00282bfc(0,0xff);
    FUN_00282bfc(1,0xff);
  }
  puVar4 = &LAB_001d3b74;
  asdProcessCreateSimple(&LAB_001d3b74,2,0,0,onesRoomTeardown,&LAB_001fc560,g_onesRoom);
  *g_onesRoom = (unsigned int)puVar4;
  return;
}

} /* extern "C" */
