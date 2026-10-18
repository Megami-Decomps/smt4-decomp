/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00319b10` (_code @ 0x319b10, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern unsigned char LAB_002e2794; /* 0x2e2794 */
extern unsigned char LAB_00319c5c; /* 0x319c5c */
extern unsigned char LAB_00319c70; /* 0x319c70 */
extern unsigned char LAB_00319c7c; /* 0x319c7c */
extern unsigned char LAB_00319c8c; /* 0x319c8c */
extern unsigned char LAB_0032fab0; /* 0x32fab0 */
extern unsigned char LAB_0032fab8; /* 0x32fab8 */
extern unsigned int *DAT_0057f134; /* 0x57f134 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_003f881c. */


void FUN_00319b10(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x34;
  FUN_0016007c();
  puVar2 = &LAB_00319c5c;
  DAT_0057f134 = puVar1;
  FUN_0014e38c(&LAB_00319c5c,4,0,0,&LAB_002e2794,0,0);
  *puVar1 = (unsigned int)puVar2;
  FUN_0015155c(&LAB_00319c70,0x81,0,0,&LAB_0032fab8,0,0,puVar2);
  FUN_0015155c(&LAB_00319c7c,0xdd,0,0,&LAB_0032fab8,0,0,*puVar1);
  FUN_0015155c(&LAB_00319c8c,0xeb,0,0,&LAB_0032fab0,0,0,*puVar1);
  puVar1[0xb] = 0xffffffff;
  puVar1[0xc] = 0xffffffff;
  FUN_003f881c(0x14,0);
  FUN_003f881c(0x25,0);
  FUN_003f881c(0x3e,0);
  puVar1[4] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[5] = 0;
  FUN_002804b0("battle/Result.bf",puVar1 + 4,0);
  FUN_002804b0("battle/ResultMsg.mbm",puVar1 + 6,0);
  FUN_002804b0("battle/DevilLvUp.bf",puVar1 + 7,0);
  puVar1[2] = 0;
  *(unsigned char *)(puVar1 + 1) = 1;
  return;
}
