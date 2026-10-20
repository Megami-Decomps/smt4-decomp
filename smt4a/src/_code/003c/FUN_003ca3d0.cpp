/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ca3d0` (_code @ 0x3ca3d0, 0x1b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdOperatorNew(...);
int jobStop(...);
int asdMemFree(...);
int scrScriptProcessDestroy(...);
int FUN_0019de98(...);
int FUN_001add24(...);
int FUN_002804b0(...);
int FUN_002e3328(...);
int FUN_00342010(...);
int FUN_0037b450(...);
int FUN_003f881c(...);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_00349b14; /* 0x349b14 */
extern unsigned char LAB_003710f8; /* 0x3710f8 */
extern unsigned int *DAT_00588130; /* 0x588130 */

/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: jobStop. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_001add24. */
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_002804b0. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_00342010. */
/* Supplied declaration required: FUN_0037b450. */
extern int FUN_003f86c8(unsigned int);
/* Supplied declaration required: FUN_003f881c. */


unsigned int FUN_003ca3d0(void)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  char *pcVar4;
  
  temp_v0 = FUN_002deb84();
  if (temp_v0 == 0) {
    temp_v1 = scrGetArg(0);
    puVar3 = (unsigned int *)0x50;
    asdOperatorNew();
    if (puVar3 != (unsigned int *)0x0) {
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
    }
    else {
      puVar3 = (unsigned int *)0x0;
    }
    pcVar4 = "SAINT_GERMAIN PROC";
    DAT_00588130 = puVar3;
    asdProcessCreateSimple("SAINT_GERMAIN PROC",4,0,0,&LAB_00349b14,0,0);
    *puVar3 = (unsigned int)pcVar4;
    taskCreateDraw("SAINT_GERMAIN DD",0xeb,0,0,&LAB_003710f8,0,0,pcVar4);
    puVar3[8] = temp_v1;
    FUN_002804b0("npc_shop/SaintGermain/SaintGermain.mbm",puVar3 + 4,0);
    FUN_002804b0("npc_shop/SaintGermain/SaintGermain.bf",puVar3 + 5,0);
    *(unsigned char *)(puVar3 + 7) = 0;
    temp_v0 = FUN_003f86c8(0x4f);
    if (temp_v0 == 0) {
      FUN_003f881c(0x4f,0);
      *(unsigned char *)(puVar3 + 7) = 1;
    }
    FUN_00342010();
    temp_v0 = 1;
    puVar3[3] = puVar3[1];
    puVar3[1] = 1;
    puVar3[2] = 0;
  }
  puVar3 = DAT_00588130;
  if (DAT_00588130 != (unsigned int *)0x0) {
    temp_v0 = DAT_00588130[1];
  }
  if ((DAT_00588130 != (unsigned int *)0x0 && temp_v0 != 0) && (temp_v0 != 8)) {
    temp_v1 = 0;
  }
  else {
    if (DAT_00588130 != (unsigned int *)0x0) {
      FUN_0019de98(0,0xf4f4f4ff);
      FUN_0037b450();
      if (puVar3[6] != 0) {
        scrScriptProcessDestroy();
        puVar3[6] = 0;
      }
      if (puVar3[4] != 0) {
        asdMemFree();
        puVar3[4] = 0;
      }
      if (puVar3[5] != 0) {
        asdMemFree();
        puVar3[5] = 0;
      }
      if (*(char *)(puVar3 + 7) != '\0') {
        FUN_001add24(0x4f);
      }
      jobStop(*puVar3,0);
      if (DAT_00588130 != (unsigned int *)0x0) {
        FUN_002e3328();
        DAT_00588130 = (unsigned int *)0x0;
      }
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
