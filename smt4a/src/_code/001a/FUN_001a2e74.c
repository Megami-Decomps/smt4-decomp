/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a2e74` (_code @ 0x1a2e74, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;

extern unsigned int DAT_005891c8; /* 0x5891c8 */
extern unsigned int DAT_005891cc; /* 0x5891cc */
extern romwright_code *DAT_0058923c; /* 0x58923c */
extern unsigned int DAT_0058927c; /* 0x58927c */

/* Supplied declaration required: FUN_0018bd50. */


unsigned int * FUN_001a2e74(unsigned int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  char unaff_r9;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5 [4];
  unsigned int temp_v6 [5];
  unsigned int temp_v7;
  unsigned int *puStack_28;
  
  temp_v2 = 0;
  temp_v7 = param_1;
  puStack_28 = param_2;
  while( 1 ) {
    do {
      temp_v3 = 0;
      puVar2 = &temp_v4;
      FUN_0018bd50(puVar2,temp_v5,0,0,temp_v6,&temp_v3,DAT_005891c8,DAT_005891cc);
      temp_v1 = 0;
      if (((unsigned int)puVar2 & 0x3ff) != 0x3ef) {
        unaff_r9 = '\x01';
        if ((-1 < (int)puVar2) && (DAT_0058923c != (romwright_code *)0x0)) {
          unaff_r9 = (*DAT_0058923c)(DAT_0058927c,temp_v4,temp_v5[0],0,0,temp_v6[0],temp_v3);
        }
        temp_v1 = temp_v4;
        temp_v2 = temp_v5[0];
        if (param_2 != (unsigned int *)0x0) {
          *param_2 = temp_v3;
        }
      }
    } while (unaff_r9 == '\0');
    if ((int)((unsigned int)puVar2 & 0x80000000) < 0) break;
    temp_v0 = (unsigned int)puVar2 & 0x80000000;
    if (temp_v2 == 3) {
      temp_v0 = temp_v7;
    }
    if (temp_v2 == 3 && temp_v0 == temp_v1) {
      return puVar2;
    }
  }
  return puVar2;
}
