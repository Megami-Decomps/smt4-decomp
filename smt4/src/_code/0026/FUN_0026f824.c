/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026f824` (_code @ 0x26f824, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 6 slot(s), 14 byte(s) */
typedef struct {
    unsigned short sp14; /* 0x14: local_14 */
    unsigned short sp16; /* 0x16: local_16 */
    unsigned short sp18; /* 0x18: local_18 */
    unsigned short sp1A; /* 0x1a: local_1a */
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char DAT_00404360; /* 0x404360 */

/* Supplied declaration required: FUN_001a1110. */
/* Supplied declaration required: FUN_001dd930. */
extern unsigned int FUN_00288f60(void);
/* Supplied declaration required: FUN_00295a18. */
/* Supplied declaration required: FUN_00299370. */
extern unsigned int *FUN_002a8764(void);
extern short *FUN_002b63ac(void);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_003c1ef4. */


void FUN_0026f824(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int *puVar1;
  short *psVar2;
  unsigned int temp_v0;
  unsigned int temp_v1;
  short temp_v2 [8];
  
  FUN_001a1110();
  puVar1 = (unsigned int *)FUN_002a8764();
  if (param_1 == 0) {
    *puVar1 = 0;
    *(unsigned char *)((int)puVar1 + 0x910b) = 8;
    temp_v1 = 0;
    temp_v2[0] = 0x3d;
    temp_v2[1] = 0;
    temp_v2[2] = 0;
    temp_v2[3] = 0x1a4;
    temp_v2[4] = 0x21c;
    temp_v2[5] = 0x294;
    temp_v2[6] = 0x295;
    temp_v2[7] = 0x100;
    do {
      if (temp_v2[temp_v1] != 0) {
        FUN_00295a18(temp_v2[temp_v1],1);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 7);
    psVar2 = (short *)FUN_002b63ac();
    FUN_002c4938(psVar2,0x8c);
    *(unsigned char *)(psVar2 + 0x3b) = 1;
    psVar2[0x3a] = 0;
    strncpy(psVar2 + 0x26,&DAT_00404360,0x12);
    *(unsigned char *)((int)psVar2 + 0x5d) = 0;
    FUN_003c1ef4(0);
    *psVar2 = temp_v2[0];
    psVar2[1] = temp_v2[1];
    psVar2[2] = temp_v2[2];
    psVar2[3] = temp_v2[3];
    psVar2[4] = temp_v2[4];
    psVar2[5] = temp_v2[5];
    psVar2[6] = temp_v2[6];
    FUN_00299370(0);
    psVar2[0x15] = psVar2[0xe];
    psVar2[0x16] = psVar2[0xf];
    FUN_001dd930();
    temp_v0 = FUN_00288f60();
    FUN_002be624(temp_v0,"沂覂讂膂蒂辂㴀");
    FUN_00295a18(0x370,1);
  }
  return;
}
