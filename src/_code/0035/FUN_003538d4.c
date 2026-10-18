/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003538d4` (_code @ 0x3538d4, 0x170 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 5 slot(s), 14 byte(s) */
typedef struct {
    unsigned char sp23; /* 0x23: local_23 */
    unsigned char sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern unsigned int DAT_0044e5f0; /* 0x44e5f0 */
extern unsigned char DAT_004d4000; /* 0x4d4000 */

/* Supplied declaration required: FUN_003df5a8. */
/* Supplied declaration required: FUN_003df5e0. */
/* Supplied declaration required: FUN_003df6a4. */


void FUN_003538d4(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [4];
  unsigned int temp_v5;
  char temp_v6;
  unsigned char temp_v7;
  
  temp_v0 = param_1;
  FUN_003df5a8(param_1,&temp_v3);
  temp_v1 = DAT_0044e5f0;
  if ((-1 < temp_v0) && (temp_v3 != 0)) {
    if (param_3 != 0) {
      temp_v2 = 0;
      do {
        temp_v0 = param_1;
        FUN_003df5e0(param_1,&temp_v5,param_2 + temp_v2 * 8);
        if (temp_v0 < 0) {
          return;
        }
        if (temp_v6 == '\0') {
          temp_v1 = 0x8c;
        }
        else if (temp_v6 == '\x01') {
          temp_v1 = 0xd;
        }
        else if ((temp_v6 == '\x02') || (temp_v6 != '\x03')) {
          temp_v1 = 0;
        }
        else {
          temp_v1 = 0x10;
        }
        temp_v0 = temp_v2 * 8;
        temp_v2 = temp_v2 + 1;
        *(unsigned int *)(&DAT_004d4000 + temp_v0) = (unsigned int)temp_v7 | ((temp_v5 & 0xff0fffff) << 8);
        *(unsigned int *)(temp_v0 + 0x4d4004) = temp_v1 | 0x40000;
        temp_v1 = param_3;
      } while (temp_v2 < param_3);
    }
    else {
      temp_v2 = 0;
      temp_v1 = temp_v3;
      if (temp_v3 != 0) {
        do {
          temp_v0 = param_1;
          FUN_003df6a4(param_1,temp_v4,&temp_v5,1,temp_v2);
          if (temp_v0 < 0) {
            return;
          }
          if (temp_v6 == '\0') {
            temp_v1 = 0x8c;
          }
          else if (temp_v6 == '\x01') {
            temp_v1 = 0xd;
          }
          else if ((temp_v6 == '\x02') || (temp_v6 != '\x03')) {
            temp_v1 = 0;
          }
          else {
            temp_v1 = 0x10;
          }
          *(unsigned int *)(&DAT_004d4000 + temp_v2 * 8) = (unsigned int)temp_v7 | ((temp_v5 & 0xff0fffff) << 8);
          *(unsigned int *)(temp_v2 * 8 + 0x4d4004) = temp_v1 | 0x40000;
          temp_v2 = temp_v2 + 1;
          temp_v1 = temp_v3;
        } while (temp_v2 < temp_v3);
      }
    }
  }
  DAT_0044e5f0 = temp_v1;
  return;
}
