/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00472f58` (_code @ 0x472f58, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e38c(...);
int FUN_0015155c(...);
int FUN_00473754(...);

/* stack frame of param_4: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int FUN_00472568(...); /* 0x472568 */
extern int FUN_00472820(...); /* 0x472820 */
extern int FUN_00472e1c(...); /* 0x472e1c */
extern unsigned int DAT_00570260; /* 0x570260 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00473754. */


void FUN_00472f58(unsigned int *param_1,unsigned int param_2,unsigned char param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  char *pcVar3;
  
  param_1[3] = param_4;
  param_1[2] = 0;
  *(unsigned char *)(param_1 + 0x105) = param_3;
  temp_v0 = DAT_00570260;
  FUN_00473754(DAT_00570260,param_2,param_1 + 5);
  param_1[4] = temp_v0;
  temp_v0 = *param_1;
  temp_v1 = temp_v0 & 0xffffffdf;
  *param_1 = temp_v1;
  if ((temp_v0 & 0x10) == 0) {
    *param_1 = temp_v1 | 0x10;
    param_1[0x106] = 0;
    pcVar3 = "Aoc board CALC";
    FUN_0014e38c("Aoc board CALC",4,0,0,FUN_00472568,0,param_1);
    param_1[1] = (unsigned int)pcVar3;
    FUN_0015155c("Aoc board UP L",0x87,1,0,FUN_00472820,0,param_1,pcVar3);
    FUN_0015155c("Aoc board UP R",0xe3,1,0,FUN_00472820,0,param_1,param_1[1]);
    FUN_0015155c("Aoc board DOWN",0x160,1,0,FUN_00472e1c,0,param_1,param_1[1]);
  }
  return;
}

} /* extern "C" */
