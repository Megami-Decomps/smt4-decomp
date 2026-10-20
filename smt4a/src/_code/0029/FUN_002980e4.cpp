/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002980e4` (_code @ 0x2980e4, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int ARM_common_memcpy4_9(int *, char *);
int obj4FQueryPair(unsigned int, int *, unsigned int, int);

/* stack frame of param_2: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned int DAT_00573808; /* 0x573808 */

/* Supplied declaration required: ARM_common_memcpy4_9. */
/* Supplied declaration required: obj4FQueryPair. */


void FUN_002980e4(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  char *pcVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  pcVar1 = (char *)0x0;
  temp_v0 = 0;
  temp_v1 = 0;
  temp_v2 = 0;
  temp_v3 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  temp_v6 = 0;
  temp_v7 = 0;
  if (0 < param_1) {
    pcVar1 = "commonUp";
  }
  if (param_1 < 0) {
    pcVar1 = "commonDw";
  }
  if (param_1 != 0) {
    ARM_common_memcpy4_9(&temp_v0,pcVar1);
  }
  obj4FQueryPair(DAT_00573808,&temp_v0,param_2,0);
  return;
}

} /* extern "C" */
