/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003efae8` (_code @ 0x3efae8, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char LAB_00346af0; /* 0x346af0 */
extern unsigned char LAB_00346af4; /* 0x346af4 */
extern unsigned int DAT_00447e20; /* 0x447e20 */
extern unsigned int DAT_00447e24; /* 0x447e24 */
extern unsigned char DAT_004b765c; /* 0x4b765c */

/* Supplied declaration required: FUN_002c5d5c. */


unsigned char * FUN_003efae8(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned char *puVar3;
  unsigned char temp_v1;
  
  *(unsigned int *)(param_3 + 8) = param_1;
  *(unsigned int *)(param_3 + 0xc) = param_2;
  DAT_00447e20 = 0;
  DAT_00447e24 = 0;
  puVar1 = &DAT_004b765c;
  FUN_002c5d5c(&DAT_004b765c,&LAB_00346af4,0x44,0x40);
  puVar1 = puVar1 + 0x1100;
  FUN_002c5d5c(puVar1,&LAB_00346af0,0x2c,9);
  temp_v0 = 3;
  puVar3 = puVar1 + 0x18c;
  while (temp_v1 = temp_v0 != 0, temp_v0 = temp_v0 - 1, temp_v1) {
    (*(romwright_code *)&LAB_00346af0)(puVar3);
    puVar3 = puVar3 + 0x2c;
  }
  return puVar1 + 0x18c;
}
