/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ec4a4` (_code @ 0x3ec4a4, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char LAB_00340650; /* 0x340650 */
extern unsigned int DAT_00447e50; /* 0x447e50 */
extern unsigned int DAT_00447e54; /* 0x447e54 */
extern unsigned char DAT_004b896c; /* 0x4b896c */

/* Supplied declaration required: FUN_002c5d5c. */


unsigned char * FUN_003ec4a4(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned char *puVar3;
  unsigned char temp_v1;
  
  *(unsigned int *)(param_3 + 8) = param_1;
  *(unsigned int *)(param_3 + 0xc) = param_2;
  DAT_00447e50 = 0;
  DAT_00447e54 = 0;
  puVar1 = &DAT_004b896c;
  FUN_002c5d5c(&DAT_004b896c,&LAB_00340650,0x284,0x10);
  temp_v0 = 0x20;
  puVar3 = puVar1 + 0x2844;
  while (temp_v1 = temp_v0 != 0, temp_v0 = temp_v0 - 1, temp_v1) {
    (*(romwright_code *)0x340664)(puVar3);
    puVar3 = puVar3 + 0x30;
  }
  return puVar1 + 0x2844;
}
