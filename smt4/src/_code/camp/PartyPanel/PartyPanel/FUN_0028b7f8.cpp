/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028b7f8` (_code @ 0x28b7f8, 0x644 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int slotPlacementSetSlot(...);
int FUN_0026b9bc(...);
int FUN_0026bc6c(...);
int FUN_0028c040(...);
int FUN_00297468(...);
int FUN_0029e788(...);
int FUN_0029e874(...);
int FUN_0029f848(...);
int gameGetSlotTable(...);
int timerStart(...);
int FUN_002bd954(...);
int FUN_002bee58(...);
int asdOperatorNew(...);
int paramsInit(...);
int memClear(...);
int asdMemAlloc(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);
int FUN_003c9c94(...);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(...);

/* stack frame of param_1: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern int FUN_001c3fd4(...); /* 0x1c3fd4 */
extern unsigned char LAB_00212534; /* 0x212534 */
extern int FUN_00212538(...); /* 0x212538 */
extern unsigned char LAB_0028bbe4; /* 0x28bbe4 */
extern unsigned char LAB_0028bbf4; /* 0x28bbf4 */
extern unsigned char LAB_0028bc00; /* 0x28bc00 */
extern unsigned char LAB_0028bc14; /* 0x28bc14 */
extern unsigned char DAT_00402a4c; /* 0x402a4c */
extern unsigned char DAT_00402ab8; /* 0x402ab8 */
extern unsigned char DAT_00402af4; /* 0x402af4 */
extern unsigned char DAT_00402b0c; /* 0x402b0c */
extern unsigned int *g_partyPanel; /* 0x43dcf0 */

/* Supplied declaration required: slotPlacementSetSlot. */
/* Supplied declaration required: FUN_0026b9bc. */
/* Supplied declaration required: FUN_0026bc6c. */
/* Supplied declaration required: FUN_0028c040. */
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_0029e788. */
/* Supplied declaration required: FUN_0029e874. */
/* Supplied declaration required: FUN_0029f848. */
extern int FUN_002a0d0c(void);
/* Supplied declaration required: gameGetSlotTable. */
/* Supplied declaration required: timerStart. */
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: FUN_002bee58. */
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_003c9c94. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_0028b7f8(int param_1)

{
/* irregular: 22 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned char *puVar4;
  unsigned char *puVar5;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar8;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  if (g_partyPanel == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x100;
    asdMemAlloc(0x100,0x100,0,0x17f8,1);
    g_partyPanel = puVar2;
  }
  puVar2 = g_partyPanel;
  memClear();
  temp_v1 = FUN_002a0d0c();
  *(unsigned char *)((int)puVar2 + 0x42) = *(unsigned char *)(temp_v1 + 0x40);
  puVar4 = &LAB_0028bbe4;
  asdProcessCreateSimple(&LAB_0028bbe4,1,0,0,FUN_001c3fd4,&LAB_00212534,0);
  *puVar2 = (unsigned int)puVar4;
  puVar5 = &LAB_0028bbf4;
  taskCreateDraw(&LAB_0028bbf4,0xe6,0,0,FUN_00212538,0,0,puVar4);
  puVar2[2] = (unsigned int)puVar5;
  FUN_00297468(&LAB_0028bc00,puVar2 + 3,1);
  FUN_00297468(&LAB_0028bc14,puVar2 + 4,1);
  FUN_0028c040();
  if (param_1 != 0) {
    FUN_0029e874(1);
    FUN_0029e788();
  }
  else {
    FUN_0029e874(0);
  }
  temp_v1 = 0x180;
  asdOperatorNew();
  if (temp_v1 != 0) {
    FUN_003c9c94();
  }
  puVar2[0x457] = temp_v1;
  *(unsigned char *)(temp_v1 + 0x142) = 1;
  gameGetSlotTable();
  temp_v1 = 0x54;
  asdOperatorNew();
  puVar2[0x1b2] = temp_v1;
  *(unsigned char *)(temp_v1 + 0x20) = 0;
  *(unsigned int *)(puVar2[0x1b2] + 0x34) = 0xffffffff;
  slotPlacementSetSlot(puVar2[0x1b2],0);
  temp_v1 = 0;
  do {
    temp_v2 = 0x54;
    asdOperatorNew();
    puVar2[temp_v1 + 0x1b3] = temp_v2;
    *(unsigned char *)(temp_v2 + 0x21) = 1;
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 3);
  temp_v1 = 0;
  do {
    temp_v3 = 0x54;
    asdOperatorNew();
    temp_v2 = temp_v1 + 1;
    puVar2[temp_v1 + 0x1b6] = temp_v3;
    temp_v1 = temp_v2;
  } while (temp_v2 < 0x18);
  FUN_0026bc6c();
  puVar2 = g_partyPanel;
  puVar8 = g_partyPanel + 0x12;
  *(unsigned short *)((int)g_partyPanel + 0x36) = 0;
  *(unsigned short *)(puVar2 + 0xe) = 0xffff;
  Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(puVar8);
  paramsInit(puVar2 + 0x12,&DAT_00402a4c,0x6c,&DAT_00402ab8,0x3c,&DAT_00402af4,0x18,0,0,
               &DAT_00402b0c,0x1f8);
  FUN_002bd954(puVar2 + 0x1a,0x19,0x24,puVar2 + 0x12,0x6a);
  FUN_002bee58(puVar2 + 0x1a,0);
  FUN_002bd954(puVar2 + 0x3d,0x19,0x25,puVar2 + 0x12,0x6a);
  FUN_002bee58(puVar2 + 0x3d,1);
  FUN_002bd954(puVar2 + 0x60,0x19,0,puVar2 + 0x12,0x6a);
  timerStart(puVar2 + 0x60,4,0);
  FUN_002bd954(puVar2 + 0x83,0x19,0,puVar2 + 0x12,0x6a);
  FUN_002bee58(puVar2 + 0x83,2);
  temp_v1 = 0;
  do {
    FUN_002bd954(puVar2 + temp_v1 * 0x23 + 0xa6,0x19,0,puVar2 + 0x12,0x6a);
    timerStart(puVar2 + temp_v1 * 0x23 + 0xa6,4,0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 4);
  puVar8 = puVar2 + 0x132;
  FUN_002bd954(puVar8,0x19,0,puVar2 + 0x12,0x6a);
  if (*(char *)((int)puVar2 + 0x42) != '\0') {
    timerStart(puVar8,6,0);
  }
  else {
    timerStart(puVar8,4,0);
  }
  FUN_002bd954(puVar2 + 0x155,0x19,1000,puVar2 + 0x12,0xc9);
  FUN_002bee58(puVar2 + 0x155,3);
  FUN_002bd954(puVar2 + 0x178,0x19,1000,puVar2 + 0x12,0xc9);
  FUN_002bee58(puVar2 + 0x178,4);
  FUN_0029f848(puVar2 + 0x237,4,1,4,1,1);
  temp_v1 = gameGetSlotTable();
  temp_v0 = *(unsigned char *)(temp_v1 + 0x910b);
  temp_v4 = (unsigned int)temp_v0;
  temp_v5 = temp_v0 >> 2;
  if ((temp_v0 & 3) != 0) {
    temp_v5 = temp_v5 + 1;
  }
  if (temp_v4 < 0xc) {
    FUN_0029f848(puVar2 + 0x250,temp_v4,temp_v5,4,1,1);
    FUN_0029f848(puVar2 + 0x282,*(unsigned char *)(temp_v1 + 0x910b) + 4,temp_v5 + 1,4,1,1);
  }
  else if (puVar2[0xb] != 0) {
    FUN_0029f848(puVar2 + 0x250,temp_v4 - 0xc,3,4,1,1);
    FUN_0029f848(puVar2 + 0x282,*(unsigned char *)(temp_v1 + 0x910b) - 8,4,4,1,1);
  }
  else {
    FUN_0029f848(puVar2 + 0x250,0xc,3,4,1,1);
    FUN_0029f848(puVar2 + 0x282,0x10,4,4,1,1);
  }
  FUN_0029f848(puVar2 + 0x269,*(unsigned char *)(temp_v1 + 0x910b),temp_v5,4,1,1);
  FUN_0029f848(puVar2 + 0x29b,*(unsigned char *)(temp_v1 + 0x910b) + 4,temp_v5 + 1,4,1,1);
  FUN_0029f848(puVar2 + 0x2b4,6,6,1,1,1);
  puVar2[0x19c] = 0xffffffff;
  puVar2[0x19d] = 0xffffffff;
  FUN_0026b9bc();
  *(unsigned short *)(puVar2 + 0x1af) = 0;
  *(unsigned char *)(puVar2 + 0x11) = 0;
  return;
}

} /* extern "C" */
