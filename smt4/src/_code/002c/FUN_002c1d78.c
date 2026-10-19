/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1d78` (_code @ 0x2c1d78, 0x5c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_004e21b8; /* 0x4e21b8 */
extern int DAT_004e316c; /* 0x4e316c */

/* Supplied declaration required: FUN_00132da4. */
/* Supplied declaration required: FUN_002af3b4. */


void FUN_002c1d78(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = DAT_004e316c;
  if (DAT_004e316c != 0) {
    puVar2 = &DAT_004e21b8;
    FUN_00132da4(&DAT_004e21b8,param_1,0xffffffff,param_4,param_4);
    if (puVar2 == (unsigned char *)0x0) {
      FUN_002af3b4(&DAT_004e21b8,param_1,temp_v0,0xffffffff,0);
    }
  }
  return;
}
