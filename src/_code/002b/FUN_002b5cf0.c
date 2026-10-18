/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5cf0` (_code @ 0x2b5cf0, 0x23c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_001394d4. */
/* Supplied declaration required: FUN_001413d0. */
extern int FUN_0014143c(unsigned int, unsigned int);
extern unsigned int *FUN_002ab824(int, unsigned int *, unsigned int, unsigned int);


/* WARNING: Control flow encountered bad instruction data */

void FUN_002b5cf0(int param_1,unsigned int *param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int unaff_r7;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  FUN_001394d4(param_2,(*(int *)(param_1 + 4) >> 0x1f) + 1,*(unsigned char *)(param_1 + 0x298));
  if (*(int *)(param_1 + 4) >= 0) {
    *param_2 = 0;
    param_2[1] = 0xf029b;
    temp_v0 = *(unsigned int *)(param_1 + 0x90);
    puVar2 = (unsigned int *)FUN_002ab824(param_1,param_2 + 2,0x29c,*(unsigned int *)(param_1 + 0x8c));
    *puVar2 = 1;
    puVar2[1] = 0xf028f;
    puVar2[2] = 0;
    puVar2[3] = 0xf02a5;
    uStack_28 = 0xa9800;
    *(unsigned char *)(puVar2 + 4) = 1;
    temp_v1 = unaff_r7 >> 0xe;
    uStack_20 = 1;
    uStack_24 = 0;
    temp_v2 = FUN_0014143c(DAT_00433158,temp_v1);
    if (temp_v2 != 0) {
      FUN_001413d0(DAT_00433158,temp_v1,(temp_v0 >> 0xd) & 0xfffffffe,0x2a6,0xfffffffc);
      return;
    }
    if (temp_v1 >= 0x200) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iStack_38 = (temp_v1 / 0x10) * 0x10;
    iStack_34 = iStack_38 + 0x10;
    iStack_30 = (temp_v1 % 0x10) * 0x20;
    if (*(char *)(temp_v1 + 0x18) != '\0' ||
        &iStack_38 != *(int **)(temp_v1 + ((int)&iStack_38 >> 0x20) * 4 + 8)) {
      (**(romwright_code **)(temp_v1 + 0x1c))();
      *(unsigned char *)(temp_v1 + 0x18) = 0xa6;
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0xf02cb;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
