/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5914` (_code @ 0x2c5914, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char spA8; /* 0xa8: local_a8 */
    unsigned int sp1B0; /* 0x1b0: local_1b0 */
} param_2_stack;

extern unsigned char LAB_002c5b80; /* 0x2c5b80 */
extern unsigned char LAB_002c5b84; /* 0x2c5b84 */
extern int DAT_0044ea28; /* 0x44ea28 */
extern unsigned int DAT_0044ea2c; /* 0x44ea2c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern unsigned char *FUN_0010024c(char *, unsigned int);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf694. */
extern int FUN_002c3124(unsigned char *, unsigned char *, unsigned char);
/* Supplied declaration required: func_0x006c5b7c. */
/* Supplied declaration required: func_0x006c5b80. */


/* WARNING: Control flow encountered bad instruction data */

long long FUN_002c5914(int param_1,unsigned int param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  int temp_v2;
  unsigned int *puVar5;
  char *pcVar6;
  unsigned int *puVar7;
  unsigned char temp_v3;
  unsigned char temp_v4 [4];
  unsigned char temp_v5 [256];
  char temp_v6;
  char acStack_a7 [131];
  
  temp_v0 = DAT_0044ea2c;
  puVar7 = (unsigned int *)(DAT_0044ea28 + param_1 * 0x18);
  temp_v1 = *puVar7;
  if (temp_v1 == 0) {
    FUN_002bf694(&temp_v6,DAT_0044ea2c);
    pcVar6 = &temp_v6;
    while (temp_v6 != '\0') {
      puVar3 = (unsigned char *)FUN_0010024c(pcVar6,0x5c);
      if (puVar3 != (unsigned char *)0x0) {
        *puVar3 = 0x2f;
      }
      pcVar6 = pcVar6 + 1;
      temp_v6 = *pcVar6;
    }
    FUN_002bf694(temp_v0,&temp_v6);
    FUN_002be624(temp_v5,&LAB_002c5b84,temp_v0,puVar7 + 2,&LAB_002c5b80);
    temp_v3 = (param_2 & 1) != 0;
    if ((param_2 & 2) != 0) {
      temp_v3 = temp_v3 | 2;
    }
    temp_v2 = FUN_002c3124(temp_v5,temp_v4,temp_v3);
    if (temp_v2 != 0) {
      puVar5 = *(unsigned int **)(temp_v2 + 0x24);
      *(int *)(*(int *)(temp_v2 + 0x1c) * 2) = temp_v2;
      func_0x006c5b7c(*puVar5,puVar5[1],puVar5[2],puVar5[3],param_2);
      func_0x006c5b80();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *puVar7 = 0;
    temp_v1 = 0;
  }
  software_interrupt(99);
  return (unsigned long long)temp_v1 << 0x20;
}
