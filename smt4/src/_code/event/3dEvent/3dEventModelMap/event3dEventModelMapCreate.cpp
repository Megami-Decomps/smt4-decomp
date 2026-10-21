/* NON_MATCHING: romwright 0.5.0 decompilation of `event3dEventModelMapCreate` (_code @ 0x310b0c, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018a104(...);
int FUN_002a09b4(...);
int textFormatBuffer(...);
int FUN_002c2044(...);
int memClear(...);
int asdMemAlloc(...);
int asdProcessCreateSimple(...);

typedef int romwright_code(...);
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern int FUN_00221e1c(...); /* 0x221e1c */
extern int FUN_002fe144(...); /* 0x2fe144 */

/* Supplied declaration required: FUN_0018a104. */
extern unsigned int asdMdlManagerCreateSecondList(romwright_code **, unsigned int);
/* Supplied declaration required: FUN_002a09b4. */
/* Supplied declaration required: textFormatBuffer. */
extern int FUN_002c1d5c(void);
/* Supplied declaration required: FUN_002c2044. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: asdProcessCreateSimple. */


void event3dEventModelMapCreate(unsigned int param_1,unsigned int param_2)

{
/* irregular: 9 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  char *pcVar4;
  romwright_code *temp_v2;
  romwright_code *temp_v3;
  unsigned int *puStack_50;
  
  puVar1 = (unsigned int *)0x100;
  temp_v2 = (romwright_code *)0x1;
  asdMemAlloc(0x100,0x100,0,0x550);
  memClear();
  puVar1[4] = param_1;
  puVar1[5] = param_2;
  FUN_002c2044(puVar1 + 8,1);
  FUN_0018a104(puVar1);
  temp_v0 = FUN_002c1d5c();
  if (temp_v0 != 0) {
    puVar1[2] = 0;
  }
  else {
    textFormatBuffer(&temp_v2,"battle/battle_map/e%03d_%02d.bcenv",puVar1[4],puVar1[5]);
    FUN_002a09b4(&temp_v2,0);
    *(unsigned char *)(puVar1 + 7) = 1;
    textFormatBuffer(&temp_v2,"battle/battle_map/b%03d_%02d.bam",puVar1[4],puVar1[5]);
    temp_v1 = asdMdlManagerCreateSecondList(&temp_v2,0x38);
    puVar1[6] = temp_v1;
    puVar1[3] = 0;
    puVar1[2] = 1;
  }
  temp_v2 = FUN_00221e1c;
  temp_v3 = FUN_002fe144;
  pcVar4 = "Event3dModelMap_Calc";
  puStack_50 = puVar1;
  asdProcessCreateSimple("Event3dModelMap_Calc",2,0);
  *puVar1 = (unsigned int)pcVar4;
  return;
}

} /* extern "C" */
