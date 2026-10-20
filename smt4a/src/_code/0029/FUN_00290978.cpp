/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290978` (_code @ 0x290978, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);
int FUN_001ab854(int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern int FUN_0017760c(unsigned int);
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_001ab854. */


int FUN_00290978(int *param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v0 = 0;
  if (*param_1 < 0) {
    if (-1 < *param_2) {
      temp_v0 = 1;
    }
  }
  else if (*param_2 < 0) {
    temp_v0 = -1;
  }
  else {
    temp_v1 = FUN_001ab854(*param_1);
    temp_v2 = FUN_001ab854(*param_2);
    temp_v0 = FUN_0017760c(temp_v1);
    temp_v3 = FUN_0017760c(temp_v2);
    temp_v0 = temp_v0 - temp_v3;
    if (temp_v0 == 0) {
      temp_v0 = 0;
      if (*param_1 < 0) {
        if (-1 < *param_2) {
          temp_v0 = 1;
        }
      }
      else if (*param_2 < 0) {
        temp_v0 = -1;
      }
      else {
        temp_v3 = FUN_001ab854(*param_1);
        temp_v4 = FUN_001ab854(*param_2);
        temp_v0 = (unsigned int)*(unsigned short *)(temp_v3 + 100) - (unsigned int)*(unsigned short *)(temp_v4 + 100);
        if (temp_v0 == 0) {
          temp_v5 = (unsigned int)*(unsigned short *)(temp_v3 + 0x62);
          FUN_00184310();
          temp_v6 = (unsigned int)*(unsigned short *)(temp_v4 + 0x62);
          FUN_00184310();
          temp_v0 = (unsigned int)*(unsigned char *)(temp_v6 + 2) - (unsigned int)*(unsigned char *)(temp_v5 + 2);
          if (temp_v0 == 0) {
            return (unsigned int)*(unsigned short *)(temp_v4 + 0x62) - (unsigned int)*(unsigned short *)(temp_v3 + 0x62);
          }
        }
      }
      return temp_v0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
