/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c522c` (_code @ 0x2c522c, 0xc0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned int DAT_004e39e0; /* 0x4e39e0 */
extern unsigned int DAT_004e3a0c; /* 0x4e3a0c */
extern unsigned int DAT_004e3a38; /* 0x4e3a38 */
extern unsigned char DAT_004e3a68; /* 0x4e3a68 */
extern unsigned char DAT_004e3aa4; /* 0x4e3aa4 */
extern unsigned char DAT_004e3ae0; /* 0x4e3ae0 */
extern int DAT_004e3bd4; /* 0x4e3bd4 */
extern unsigned int DAT_004e3bdc; /* 0x4e3bdc */
extern unsigned char DAT_004e3be0; /* 0x4e3be0 */

/* Supplied declaration required: FUN_001371a0. */
/* Supplied declaration required: FUN_002bc3c8. */


void FUN_002c522c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  
  puVar2 = (unsigned int *)0x0;
  puVar3 = (unsigned int *)0x0;
  temp_v0 = 0;
  if (DAT_004e3bd4 != 1) {
    if (param_1 == 0x400) {
      puVar2 = (unsigned int *)&DAT_004e3a68;
      puVar3 = &DAT_004e39e0;
    }
    else if (param_1 != 0x401) {
      if (param_1 == 0x410) {
        puVar3 = &DAT_004e3a0c;
        puVar2 = (unsigned int *)&DAT_004e3aa4;
      }
    }
    else {
      temp_v0 = 1;
      puVar3 = &DAT_004e3a38;
      puVar2 = (unsigned int *)&DAT_004e3ae0;
    }
    temp_v1 = puVar2[0xe];
    temp_v2 = puVar3[5];
    if ((&DAT_004e3be0)[temp_v0] == '\0') {
      temp_v1 = 0x500;
    }
    FUN_002bc3c8();
    FUN_001371a0(puVar2[2],puVar2[0xc],puVar2[0xd],*puVar2,puVar3[temp_v2 + 8],puVar3[6],puVar3[7],
                 DAT_004e3bdc,temp_v1,0,8);
  }
  return;
}
