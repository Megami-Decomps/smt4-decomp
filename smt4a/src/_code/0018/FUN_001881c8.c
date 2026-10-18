/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001881c8` (_code @ 0x1881c8, 0x20 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001881e8. */
/* Supplied declaration required: FUN_0019b738. */
/* Supplied declaration required: FUN_0019c0e0. */
extern int FUN_0019f29c(unsigned int, unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_0019f30c. */
/* Supplied declaration required: FUN_001ac8ec. */
/* Supplied declaration required: FUN_001acb48. */
/* Supplied declaration required: FUN_001b4eb8. */


void FUN_001881c8(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  unsigned int uStack_5c;
  int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  unsigned int uStack_3c;
  unsigned char temp_v4 [36];
  
  FUN_001881e8(param_1,param_1 + 0x14);
  uStack_4c = 0x3f800000;
  temp_v0 = *(int *)(param_1 + 0x1c);
  temp_v3 = *(unsigned int *)(param_1 + 8);
  if ((temp_v0 != 0) && (temp_v1 = 0, 0 < temp_v0)) {
    do {
      temp_v0 = *(int *)(*(int *)(param_1 + 0x20) + temp_v1 * 4);
      temp_v2 = *(unsigned int *)(temp_v0 + 0xc);
      FUN_0019b738(temp_v4,0x20);
      FUN_00100388(temp_v4,"h_eff%02d",*(unsigned int *)(temp_v0 + 8));
      temp_v0 = FUN_0019f29c(temp_v3,temp_v4,(unsigned int *)&uStack_78);
      if (temp_v0 != 0) {
        uStack_58 = uStack_78;
        uStack_54 = uStack_74;
        uStack_50 = uStack_70;
        FUN_001b4eb8(temp_v2,&uStack_58);
        FUN_0019f30c(temp_v3,temp_v4,&fStack_68);
        fStack_48 = -fStack_68;
        fStack_44 = -fStack_64;
        fStack_40 = -fStack_60;
        uStack_3c = uStack_5c;
        FUN_001acb48(temp_v2,&fStack_48);
        FUN_001ac8ec(temp_v2);
        FUN_0019c0e0(temp_v2);
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(int *)(param_1 + 0x1c));
  }
  return;
}
