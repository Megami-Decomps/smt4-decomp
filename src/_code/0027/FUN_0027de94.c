/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027de94` (_code @ 0x27de94, 0x178 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int FUN_0023ec74(void);
extern int FUN_002904d0(void);
/* Supplied declaration required: FUN_00290694. */
extern int FUN_00299084(void);
/* Supplied declaration required: FUN_003bc204. */
/* Supplied declaration required: FUN_003bc35c. */
/* Supplied declaration required: FUN_003bc470. */
/* Supplied declaration required: FUN_003bc8b0. */


void FUN_0027de94(int param_1,unsigned int *param_2,int param_3,int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  
  temp_v0 = *(int *)(param_1 + 0xc0);
  puVar5 = (unsigned int *)(param_1 + 0x44a0);
  if ((param_3 != 0) && ((*puVar5 & 0x200) != 0)) {
    FUN_003bc8b0(param_2,temp_v0,*(unsigned int *)(param_1 + 0x144),*(unsigned int *)(param_1 + 0x148),
                 (int)(char)*(unsigned int *)(param_1 + 0x150),
                 (int)(char)*(unsigned int *)(param_1 + 0x154));
    *param_2 = *(unsigned int *)(param_1 + 0x158);
    param_2[1] = *(unsigned int *)(param_1 + 0x15c);
    param_2[2] = *(unsigned int *)(param_1 + 0x160);
    param_2[3] = *(unsigned int *)(param_1 + 0x164);
    param_2[4] = *(unsigned int *)(param_1 + 0x168);
    return;
  }
  if (temp_v0 >= 0) {
    temp_v3 = *(int *)(param_1 + 0x144);
    if (-1 < temp_v3) {
      param_4 = *(int *)(param_1 + 0x148);
    }
    if (!(-1 < temp_v3 && -1 < param_4)) {
      temp_v1 = FUN_0023ec74();
      FUN_003bc204(param_2,temp_v1);
    }
    else {
      FUN_003bc8b0(param_2,temp_v0,temp_v3,param_4,(int)(char)*(unsigned int *)(param_1 + 0x150),
                   (int)(char)*(unsigned int *)(param_1 + 0x154));
    }
  }
  else if (-1 < *(int *)(param_1 + 0xc4)) {
    FUN_003bc35c();
    FUN_003bc470(param_2,*(unsigned int *)(param_1 + 0xc4),(int)(char)*(unsigned int *)(param_1 + 0x150)
                 ,(int)(char)*(unsigned int *)(param_1 + 0x154));
  }
  if ((param_2[7] & 4) != 0) {
    temp_v2 = *puVar5 | 0x40000;
  }
  else {
    temp_v2 = *puVar5 & 0xfffbffff;
  }
  *puVar5 = temp_v2;
  temp_v0 = FUN_002904d0();
  if (temp_v0 != 0) {
    FUN_00290694();
    temp_v0 = FUN_00299084();
    if (temp_v0 != 0) {
      temp_v2 = *(unsigned int *)(param_1 + 0x44a4) | 4;
      *(unsigned int *)(param_1 + 0x44a4) = temp_v2;
      return;
    }
  }
  temp_v2 = *(unsigned int *)(param_1 + 0x44a4) & 0xfffffffb;
  *(unsigned int *)(param_1 + 0x44a4) = temp_v2;
  return;
}
