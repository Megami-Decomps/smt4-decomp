/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4f28` (_code @ 0x2b4f28, 0xb8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015155c(...);
int FUN_00163e40(...);
int FUN_004dcb40(...);

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

extern int FUN_00298354(...); /* 0x298354 */
extern unsigned char LAB_002b4ff0; /* 0x2b4ff0 */
extern int FUN_003284cc(...); /* 0x3284cc */
extern unsigned int DAT_0057113c; /* 0x57113c */

/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163e40. */
/* Supplied declaration required: FUN_004dcb40. */


void FUN_002b4f28(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = (param_1[0x29] + 1) % 0xc;
  param_1[0x29] = temp_v0;
  FUN_00163e40(param_1[temp_v0 + 3]);
  FUN_004dcb40(DAT_0057113c,param_1,param_2,param_3,param_4,param_5);
  puVar2 = &LAB_002b4ff0;
  FUN_0015155c(&LAB_002b4ff0,3,0,0,FUN_00298354,FUN_003284cc,param_1,*param_1);
  param_1[param_1[0x29] + 3] = (unsigned int)puVar2;
  return;
}

} /* extern "C" */
