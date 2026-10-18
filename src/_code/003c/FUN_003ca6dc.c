/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ca6dc` (_code @ 0x3ca6dc, 0x1fc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int DAT_004342c8; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int *DAT_00435d48; /* 0x435d48 */

/* Supplied declaration required: FUN_00229bd0. */
extern int FUN_0023ec3c(unsigned int);
/* Supplied declaration required: FUN_00240744. */
/* Supplied declaration required: FUN_00256ad8. */
/* Supplied declaration required: FUN_00256b04. */
extern int FUN_00256b80(int, int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0026c120. */
extern int FUN_0027e628(unsigned int *);
/* Supplied declaration required: FUN_0027e668. */
/* Supplied declaration required: FUN_0029c0fc. */
/* Supplied declaration required: FUN_003bf40c. */


void FUN_003ca6dc(int *param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 8 native warning(s); review required */
  unsigned int *puVar1;
  char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  int temp_v3;
  
  *(unsigned int *)(param_2 + 0x56c) = 0;
  temp_v3 = *param_1;
  if (((*(unsigned int *)(temp_v3 + 0x44a0) & 0x40000) == 0) && ((*(unsigned int *)(temp_v3 + 0xe0) & 0x40000) != 0)) {
    FUN_00229bd0(0,param_2,0,5,0);
    return;
  }
  if ((-1 < *(int *)(DAT_004342c8 + 0x760)) &&
     (temp_v3 = FUN_00256b80(DAT_004342c8,temp_v3,1,param_4,param_4), temp_v3 != 0)) {
    FUN_00256b04(0);
  }
  FUN_00256ad8(1,0);
  temp_v3 = 0;
  FUN_0026c120(0,param_2,0xf,*(unsigned int *)(param_2 + 0x24),1);
  FUN_003bf40c();
  temp_v1 = FUN_0023ec3c(99);
  temp_v0 = *(char *)(*param_1 + 0x44b6) + '\x01';
  *(char *)(*param_1 + 0x44b6) = temp_v0;
  if (temp_v0 == -1) {
    temp_v0 = -1;
  }
  *(char *)(*param_1 + 0x44b6) = temp_v0;
  if ((*(unsigned int *)(DAT_00435d18 + 0x3028) & 0x400) != 0) {
    FUN_00240744();
  }
  temp_v2 = *param_1;
  if ((*(int *)(temp_v2 + 0x88) == 4) ||
     ((*(unsigned int *)(temp_v2 + 0x44a0) & 0x40000) != 0 || (*(int *)(temp_v2 + 0x225c) == 3 || temp_v1 < temp_v3)
     )) {
    FUN_0029c0fc(4,1);
    *(unsigned int *)(*param_1 + 0x88) = 4;
    temp_v3 = FUN_0027e628(DAT_00435d48);
    if (temp_v3 != 0) {
      return;
    }
    puVar5 = DAT_00435d48;
    FUN_0027e668(DAT_00435d48,6,0xffffffff,0);
    puVar1 = DAT_00435d48;
    if (puVar5 != (unsigned int *)0x0) {
      *DAT_00435d48 = 9;
      *(unsigned char *)(puVar1 + 0xb) = 0;
      *(unsigned int *)(DAT_00435d18 + 0x2f98) = 0;
      return;
    }
  }
  else {
    FUN_0029c0fc(5,1);
    *(unsigned int *)(*param_1 + 0x88) = 0;
    *(unsigned int *)(*param_1 + 0x44a0) = *(unsigned int *)(*param_1 + 0x44a0) | 0x2000;
  }
  FUN_00229bd0(0,param_2,0,1,0);
  return;
}
