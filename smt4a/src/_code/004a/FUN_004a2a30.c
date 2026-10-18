/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a2a30` (_code @ 0x4a2a30, 0x1b4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_4_stack;

extern unsigned int DAT_005e1e88; /* 0x5e1e88 */

/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184e64. */
/* Supplied declaration required: FUN_002a4b28. */
/* Supplied declaration required: FUN_002e7284. */
/* Supplied declaration required: FUN_00493408. */
/* Supplied declaration required: FUN_004a7814. */
/* Supplied declaration required: FUN_004a7a50. */
/* Supplied declaration required: FUN_004a7ba0. */
/* Supplied declaration required: FUN_004a7cb0. */
/* Supplied declaration required: FUN_004a80d8. */


void FUN_004a2a30(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 11 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = *(int *)(param_1 + 0x850);
  if (param_3 != 0) {
    temp_v2 = temp_v2 + 1;
  }
  FUN_002a4b28(param_4 & 0xffff);
  if (param_3 != 0) {
    FUN_004a80d8(param_1,param_2,temp_v2,(int)*(char *)(param_1 + 0x829));
  }
  temp_v0 = *(char *)(param_1 + 0x860);
  FUN_001677c0();
  FUN_004a7a50(param_1,temp_v0 == '\0',param_4,param_2,param_3,temp_v2);
  FUN_004a7cb0(param_1,param_4,param_2,param_3,temp_v2);
  FUN_004a7ba0(param_1,param_4,param_2,param_3,temp_v2);
  FUN_001677c0();
  FUN_004a7814(param_1,*(unsigned int *)(param_2 * 4 + 0x5e1ca8),param_2,param_3,temp_v2,
               *(unsigned int *)(param_2 * 4 + 0x5e1cd0));
  FUN_00184e64((&DAT_005e1e88)[param_2]);
  temp_v1 = FUN_002a4b28(param_4 & 0xffff);
  if (temp_v1 != 0) {
    FUN_002e7284(param_1 + 200,*(unsigned int *)(param_2 * 4 + 0x5e1cf8),
                 *(unsigned int *)(param_2 * 4 + 0x5e1d20),temp_v2,param_2 * 0x20 + 0x5e1d48);
  }
  else {
    FUN_00493408(param_1 + 200,0,*(unsigned int *)(param_2 * 4 + 0x5e1cf8),
                 *(unsigned int *)(param_2 * 4 + 0x5e1d20),0,0,0xffffffff,temp_v2,"     ???");
  }
  FUN_00183bb0();
  FUN_001677c0();
  return;
}
