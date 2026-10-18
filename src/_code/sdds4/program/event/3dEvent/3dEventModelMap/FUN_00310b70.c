/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00310b70` (_code @ 0x310b70, 0xf0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern int FUN_00221d24(); /* 0x221d24 */
extern int FUN_002fe108(); /* 0x2fe108 */

/* Supplied declaration required: FUN_0018a004. */
extern unsigned int FUN_0029a2d0(romwright_code **, unsigned int);
/* Supplied declaration required: FUN_002a0c54. */
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002c1f28(void);
/* Supplied declaration required: FUN_002c2210. */
/* Supplied declaration required: FUN_002c4b30. */
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c5978. */


void FUN_00310b70(unsigned int param_1,unsigned int param_2)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  char *pcVar4;
  romwright_code *temp_v2;
  romwright_code *temp_v3;
  unsigned int *puStack_50;
  
  temp_v2 = (romwright_code *)0x1;
  puVar1 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x550);
  FUN_002c4b30(puVar1,0x550);
  puVar1[4] = param_1;
  puVar1[5] = param_2;
  FUN_002c2210(puVar1 + 8,1);
  FUN_0018a004(puVar1);
  temp_v0 = FUN_002c1f28();
  if (temp_v0 != 0) {
    puVar1[2] = 0;
  }
  else {
    FUN_002be7fc(&temp_v2,"battle/battle_map/e%03d_%02d.bcenv",puVar1[4],puVar1[5]);
    FUN_002a0c54(&temp_v2,0);
    *(unsigned char *)(puVar1 + 7) = 1;
    FUN_002be7fc(&temp_v2,"battle/battle_map/b%03d_%02d.bam",puVar1[4],puVar1[5]);
    temp_v1 = FUN_0029a2d0(&temp_v2,0x38);
    puVar1[6] = temp_v1;
    puVar1[3] = 0;
    puVar1[2] = 1;
  }
  temp_v2 = FUN_00221d24;
  temp_v3 = FUN_002fe108;
  pcVar4 = "Event3dModelMap_Calc";
  puStack_50 = puVar1;
  FUN_002c5978("Event3dModelMap_Calc",2,0);
  *puVar1 = (unsigned int)pcVar4;
  return;
}
