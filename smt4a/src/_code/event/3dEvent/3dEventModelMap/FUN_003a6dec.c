/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a6dec` (_code @ 0x3a6dec, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_2_stack;

extern int FUN_0031bd24(); /* 0x31bd24 */
extern int FUN_0038a184(); /* 0x38a184 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0013c884. */
/* Supplied declaration required: FUN_0014e38c. */
extern int FUN_00162ea4(void);
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_001f474c. */
extern unsigned int FUN_001f4a48(romwright_code **, unsigned int);
/* Supplied declaration required: FUN_001ffba8. */
/* Supplied declaration required: FUN_002e6354. */


void FUN_003a6dec(unsigned int param_1,unsigned int param_2)

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
  FUN_00163060(0x100,0x100,0,0x554);
  FUN_002e6354();
  puVar1[4] = param_1;
  puVar1[5] = param_2;
  FUN_0013c884(puVar1 + 8,1);
  FUN_001ffba8(puVar1);
  temp_v0 = FUN_00162ea4();
  if (temp_v0 != 0) {
    puVar1[2] = 0;
  }
  else {
    FUN_00100388(&temp_v2,"battle/battle_map/e%03d_%02d.bcenv",puVar1[4],puVar1[5]);
    FUN_001f474c(&temp_v2,0);
    *(unsigned char *)(puVar1 + 7) = 1;
    FUN_00100388(&temp_v2,"battle/battle_map/b%03d_%02d.bam",puVar1[4],puVar1[5]);
    temp_v1 = FUN_001f4a48(&temp_v2,0x38);
    puVar1[6] = temp_v1;
    puVar1[3] = 0;
    puVar1[2] = 1;
  }
  temp_v2 = FUN_0031bd24;
  temp_v3 = FUN_0038a184;
  pcVar4 = "Event3dModelMap_Calc";
  puStack_50 = puVar1;
  FUN_0014e38c("Event3dModelMap_Calc",4,0);
  *puVar1 = (unsigned int)pcVar4;
  return;
}
