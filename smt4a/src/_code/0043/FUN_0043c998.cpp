/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043c998` (_code @ 0x43c998, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e98ea(int, int, int);
int nn_applet_CTR_detail_SendMessage(unsigned int, int, unsigned int, unsigned int);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int DAT_005891bc; /* 0x5891bc */
extern int DAT_005891c8; /* 0x5891c8 */
extern unsigned int DAT_005891cc; /* 0x5891cc */
extern romwright_code *DAT_00589500; /* 0x589500 */

/* Supplied declaration required: FUN_002e98ea. */
/* Supplied declaration required: nn_applet_CTR_detail_SendMessage. */


void FUN_0043c998(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned long long temp_v2;
  int temp_v3;
  unsigned int uStack_24;
  
  temp_v1 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    temp_v3 = 0;
    if (DAT_00589500 != (romwright_code *)0x0) {
      temp_v2 = (*DAT_00589500)(&temp_v3,*(int *)(param_1 + 8) + *(int *)(param_3 + 0x144),
                              *(unsigned short *)(param_3 + 0x148));
      temp_v1 = (int)temp_v2;
      temp_v0 = (int)((unsigned long long)temp_v2 >> 0x20);
      if (temp_v1 != 0) {
        temp_v0 = temp_v3;
      }
      if (!(temp_v1 != 0 && temp_v0 != 0)) {
        *(unsigned short *)(param_3 + 0x150) = 0;
      }
      else {
        FUN_002e98ea(param_3 + 0x150,temp_v0,0x100);
        *(unsigned short *)(param_3 + 0x350) = 0;
      }
    }
  }
  *(int *)(param_3 + 0x14c) = temp_v1;
  temp_v3 = DAT_005891c8;
  uStack_24 = DAT_005891cc;
  nn_applet_CTR_detail_SendMessage(param_2,param_3,param_4,DAT_005891bc);
  return;
}

} /* extern "C" */
