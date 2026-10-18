/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022c988` (_code @ 0x22c988, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00402284; /* 0x402284 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_0029e130(void);
/* Supplied declaration required: FUN_0029e17c. */
extern int FUN_0029e1c8(void);
/* Supplied declaration required: FUN_002a0cc8. */
extern int FUN_002a0d0c(void);
/* Supplied declaration required: FUN_002b7bca. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0022c988(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *pbVar4;
  int temp_v3;
  int unaff_r6;
  unsigned char temp_v4;
  unsigned int temp_v5 [35];
  
  temp_v1 = FUN_0029e1c8();
  if (temp_v1 != 0) {
    FUN_0029e17c();
    if (*(char *)(param_1 + 0x5a4) == '\x01') {
      temp_v2 = 0x46;
    }
    else {
      temp_v2 = 0x2e;
    }
    FUN_002b8838(temp_v2);
    FUN_002a0cc8(0);
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  else {
    temp_v1 = FUN_0029e130();
    if (temp_v1 != 0x4b) {
      if (*(short *)(param_1 + 0x5a8) != 0) {
        temp_v1 = FUN_002a0d0c();
        pbVar4 = (unsigned char *)(temp_v1 + 0xc);
        switch(*pbVar4 & 0x7f) {
        default:
          temp_v1 = 6;
          *pbVar4 = (*pbVar4 & 0x80) | 1;
          break;
        case 1:
          temp_v1 = 6;
          break;
        case 2:
          temp_v1 = 2;
          break;
        case 3:
          temp_v1 = 0x16;
          break;
        case 4:
          temp_v1 = 0xe;
          break;
        case 5:
          temp_v1 = 0x14;
        }
        if ((*pbVar4 & 0x80) != 0) {
          temp_v1 = (int)(char)((char)temp_v1 + '\x01');
        }
        temp_v3 = (int)*(char *)(param_1 + 0xa5ac);
        temp_v4 = SBORROW4(temp_v3,temp_v1);
        temp_v0 = temp_v3 - temp_v1;
        if (temp_v3 != temp_v1) {
          unaff_r6 = (int)*(short *)(param_1 + 0x5a8);
          temp_v4 = SBORROW4(unaff_r6,1);
          temp_v0 = unaff_r6 - 1;
        }
        if ((temp_v3 != temp_v1 && unaff_r6 != 1) && temp_v0 < 0 == temp_v4) {
          *(char *)(param_1 + 0xa5ac) = (char)temp_v1;
          rt_memcpy_w(temp_v5,&DAT_00402284,0x88);
          FUN_002b7bca(param_1 + 0x5ac,unaff_r6,0x20,temp_v5[temp_v1]);
        }
        return;
      }
      return;
    }
  }
  return;
}
