/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00475ea8` (_code @ 0x475ea8, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern int DAT_00570260; /* 0x570260 */

/* Supplied declaration required: FUN_001764dc. */
/* Supplied declaration required: FUN_001b57a8. */
extern unsigned int *FUN_001b5acc(unsigned char *);
extern int FUN_001d25ec(int);
extern int FUN_004288bc(int);
/* Supplied declaration required: FUN_00473acc. */
extern int FUN_00473d28(int);
/* Supplied declaration required: FUN_00473da0. */
/* Supplied declaration required: FUN_0047d904. */


void FUN_00475ea8(unsigned char *param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar6;
  unsigned int temp_v3;
  unsigned int *puVar8;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int uStack_1c;
  
  piVar3 = &temp_v4;
  *param_1 = 1;
  puVar2 = (unsigned int *)FUN_001b5acc(param_1 + 4);
  puVar2[2] = 0;
  puVar8 = puVar2 + -1;
  puVar2[3] = 0;
  FUN_001b57a8(&temp_v4,0);
  temp_v3 = piVar3[1];
  *puVar2 = *piVar3;
  puVar2[1] = temp_v3;
  temp_v2 = DAT_00570260;
  temp_v1 = *(int *)(param_2 + 4);
  if (temp_v1 != 0) {
    if (temp_v1 != 1) {
      if ((temp_v1 == 2) && (temp_v2 = FUN_00473d28(DAT_00570260), temp_v2 != 0)) {
        *(unsigned int *)(param_2 + 4) = 3;
        *(unsigned char *)puVar8 = 0;
        return;
      }
    }
    else {
      FUN_00473da0();
      if (temp_v2 == 0) {
        *(unsigned int *)(param_2 + 4) = 3;
        *(unsigned char *)puVar8 = 0;
        return;
      }
      *(unsigned int *)(param_2 + 4) = 2;
    }
  }
  else {
    temp_v4 = -0x181c0001;
    temp_v1 = param_2 + 0x18;
    FUN_0047d904(temp_v1,&temp_v4,&temp_v5);
    if (temp_v1 != 0) {
      temp_v1 = FUN_004288bc(temp_v2 + 0x80);
      if (temp_v1 < 0) {
        FUN_00473acc(&temp_v6,temp_v2);
        *(unsigned int *)(param_2 + 0xc) = temp_v6;
        *(unsigned int *)(param_2 + 0x10) = uStack_1c;
        temp_v2 = FUN_001d25ec(param_2 + 0xc);
        if (temp_v2 < 0) {
          temp_v3 = *(unsigned int *)(param_2 + 0x10);
          *puVar2 = *(unsigned int *)(param_2 + 0xc);
          puVar2[1] = temp_v3;
          *(unsigned char *)puVar8 = 100;
          return;
        }
      }
      *(unsigned int *)(param_2 + 4) = 1;
      return;
    }
    if (temp_v4 < 0) {
      puVar6 = (unsigned int *)&temp_v6;
      FUN_001b57a8();
      temp_v3 = puVar6[1];
      *puVar2 = *puVar6;
      puVar2[1] = temp_v3;
      if (temp_v5 == 0) {
        temp_v0 = 0x66;
      }
      else {
        FUN_001764dc(temp_v2);
        temp_v0 = 0x67;
      }
      *(unsigned char *)puVar8 = temp_v0;
      return;
    }
  }
  return;
}
