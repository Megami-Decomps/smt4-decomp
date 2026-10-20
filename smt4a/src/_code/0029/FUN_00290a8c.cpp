/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290a8c` (_code @ 0x290a8c, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00184310. */
extern int gameGetSlotRecord(int);


int FUN_00290a8c(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v3 = 0;
  if (*param_1 < 0) {
    if (-1 < *param_2) {
      temp_v3 = 1;
    }
  }
  else if (*param_2 < 0) {
    temp_v3 = -1;
  }
  else {
    temp_v3 = gameGetSlotRecord(*param_1);
    temp_v4 = gameGetSlotRecord(*param_2);
    temp_v3 = (int)*(short *)(temp_v3 + 0x10) - (int)*(short *)(temp_v4 + 0x10);
    if (temp_v3 == 0) {
      temp_v3 = 0;
      if (*param_1 < 0) {
        if (-1 < *param_2) {
          temp_v3 = 1;
        }
      }
      else if (*param_2 < 0) {
        temp_v3 = -1;
      }
      else {
        temp_v4 = gameGetSlotRecord(*param_1);
        temp_v0 = gameGetSlotRecord(*param_2);
        temp_v3 = (unsigned int)*(unsigned short *)(temp_v4 + 100) - (unsigned int)*(unsigned short *)(temp_v0 + 100);
        if (temp_v3 == 0) {
          temp_v1 = (unsigned int)*(unsigned short *)(temp_v4 + 0x62);
          FUN_00184310();
          temp_v2 = (unsigned int)*(unsigned short *)(temp_v0 + 0x62);
          FUN_00184310();
          temp_v3 = (unsigned int)*(unsigned char *)(temp_v2 + 2) - (unsigned int)*(unsigned char *)(temp_v1 + 2);
          if (temp_v3 == 0) {
            return (unsigned int)*(unsigned short *)(temp_v0 + 0x62) - (unsigned int)*(unsigned short *)(temp_v4 + 0x62);
          }
        }
      }
      return temp_v3;
    }
  }
  return temp_v3;
}

} /* extern "C" */
