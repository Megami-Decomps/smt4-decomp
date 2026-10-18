/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b50e4` (_code @ 0x2b50e4, 0x14c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_002984d4(); /* 0x2984d4 */
extern unsigned char LAB_002b5238; /* 0x2b5238 */
extern unsigned char LAB_002b524c; /* 0x2b524c */
extern int FUN_002decb4(); /* 0x2decb4 */
extern int FUN_003285dc(); /* 0x3285dc */
extern int DAT_00571508; /* 0x571508 */
extern unsigned int *DAT_005737e0; /* 0x5737e0 */
extern unsigned int DAT_005737e8; /* 0x5737e8 */
extern unsigned int DAT_005737ec; /* 0x5737ec */
extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
/* Supplied declaration required: FUN_004aa780. */
extern int FUN_004f2708(int, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_004fb670. */
/* Supplied declaration required: FUN_004feecc. */


void FUN_002b50e4(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int *puVar2;
  int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = &LAB_002b5238;
  FUN_0015155c(&LAB_002b5238,4,0,0,FUN_002984d4,FUN_003285dc,param_1,*param_1);
  param_1[0x1f] = (unsigned int)puVar1;
  FUN_0015155c(&LAB_002b524c,0x75,0,0,FUN_002decb4,0,param_1,puVar1);
  puVar2 = (unsigned int *)0x100;
  FUN_00163060(0x100,0x100,0,0x18,1);
  DAT_005737e0 = puVar2;
  *puVar2 = 0;
  puVar2[1] = (unsigned int)*(unsigned char *)((int)param_1 + 0x1ed9);
  *(unsigned short *)(puVar2 + 4) = 0xffff;
  *(unsigned char *)((int)puVar2 + 0x12) = 0xff;
  *(unsigned char *)((int)puVar2 + 0x13) = 0xff;
  if (DAT_00571508 != 0) {
    if ((-1 < *(int *)(DAT_00571508 + 0x7cc)) &&
       (temp_v0 = FUN_004f2708(DAT_00571508,param_1,1), temp_v0 != 0)) {
      FUN_004fb670(0,0);
    }
    FUN_004feecc(1,0);
  }
  temp_v1 = param_1[0x116b] | DAT_005737ec;
  param_1[0x116a] = DAT_005737e8 | param_1[0x116a];
  param_1[0x116b] = temp_v1;
  if (DAT_0057a9c8 != 0) {
    FUN_004aa780(DAT_0057a9c8,1);
    return;
  }
  return;
}
