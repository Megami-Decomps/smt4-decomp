/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00147ee8` (_code @ 0x147ee8, 0xf0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_2_stack;

extern romwright_code *DAT_0044e3f8; /* 0x44e3f8 */
extern unsigned int DAT_0044e438; /* 0x44e438 */
extern unsigned int DAT_0044e440; /* 0x44e440 */
extern unsigned int DAT_0044e444; /* 0x44e444 */

/* Supplied declaration required: FUN_0013b508. */


unsigned int * FUN_00147ee8(unsigned int param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  char unaff_r10;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5 [2];
  unsigned int temp_v6;
  unsigned int temp_v7 [5];
  unsigned int temp_v8;
  unsigned int *puStack_28;
  
  temp_v2 = 0;
  temp_v8 = param_1;
  puStack_28 = param_2;
  while( 1 ) {
    do {
      temp_v6 = 0;
      temp_v3 = 0;
      puVar2 = &temp_v4;
      FUN_0013b508(puVar2,temp_v5,0,0,temp_v7,&temp_v3,DAT_0044e440,DAT_0044e444);
      temp_v1 = 0;
      if (((unsigned int)puVar2 & 0x3ff) != 0x3ef) {
        unaff_r10 = '\x01';
        if ((-1 < (int)puVar2) && (DAT_0044e3f8 != (romwright_code *)0x0)) {
          unaff_r10 = (*DAT_0044e3f8)(DAT_0044e438,temp_v4,temp_v5[0],temp_v6,0,temp_v7[0],
                                      temp_v3);
        }
        temp_v1 = temp_v4;
        temp_v2 = temp_v5[0];
        if (param_2 != (unsigned int *)0x0) {
          *param_2 = temp_v3;
        }
      }
    } while (unaff_r10 == '\0');
    if ((int)((unsigned int)puVar2 & 0x80000000) < 0) break;
    temp_v0 = (unsigned int)puVar2 & 0x80000000;
    if (temp_v2 == 3) {
      temp_v0 = temp_v8;
    }
    if (temp_v2 == 3 && temp_v0 == temp_v1) {
      return puVar2;
    }
  }
  return puVar2;
}
