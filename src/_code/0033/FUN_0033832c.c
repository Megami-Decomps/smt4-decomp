/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033832c` (_code @ 0x33832c, 0xf8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;


unsigned int FUN_0033832c(int param_1,unsigned int *param_2,int param_3)

{
/* irregular: 3 goto(s) */
  char temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int unaff_r5;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v2 = 0;
  do {
    temp_v5 = param_1 + temp_v2 * 8;
    temp_v3 = (unsigned int)*(short *)(temp_v5 + 0x44bc);
    if (temp_v3 != 0) {
      unaff_r5 = *(unsigned int *)(temp_v5 + 0x44b8);
    }
    if (temp_v3 != 0 && unaff_r5 != 0) {
      temp_v4 = *param_2;
      if ((temp_v4 & 2) != 0) {
        if (((unaff_r5 & 2) != 0) && (temp_v3 == 0xffffffff)) {
LAB_003383d0:
          if (param_3 != 1) {
            if (param_3 != 2) {
              temp_v2 = temp_v2 + 1;
              if (temp_v2 >= 0x80) {
                return 0;
              }
              continue;
            }
            temp_v0 = *(char *)(temp_v5 + 0x44bf);
          }
          else {
            temp_v0 = *(char *)(temp_v5 + 0x44be);
          }
          if (temp_v0 != '\0') {
            return 1;
          }
        }
      }
      else if ((temp_v4 & 8) != 0) {
        if ((unaff_r5 & 8) != 0) {
          temp_v1 = *(unsigned short *)((int)param_2 + 0xce);
          goto joined_r0x003383ac;
        }
      }
      else if ((temp_v4 & 0x10) != 0) {
        if ((unaff_r5 & 0x10) != 0) {
          temp_v1 = *(unsigned short *)((int)param_2 + 0xce);
joined_r0x003383ac:
          unaff_r5 = (unsigned int)temp_v1;
          if (temp_v3 == unaff_r5) goto LAB_003383d0;
        }
      }
      else if (((temp_v4 & 0x20) != 0) && ((unaff_r5 & 0x20) != 0)) {
        temp_v1 = *(unsigned short *)((int)param_2 + 0xce);
        goto joined_r0x003383ac;
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x80) {
      return 0;
    }
  } while( 1 );
}
