/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00241874` (_code @ 0x241874, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_00184310. */
extern int gameGetSlotRecord(int);


int FUN_00241874(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v1 = 0;
  if (*param_1 < 0) {
    if (-1 < *param_2) {
      temp_v1 = 1;
    }
  }
  else if (*param_2 < 0) {
    temp_v1 = -1;
  }
  else {
    temp_v1 = gameGetSlotRecord(*param_1);
    temp_v2 = gameGetSlotRecord(*param_2);
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0x62);
    FUN_00184310();
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v2 + 0x62);
    FUN_00184310();
    temp_v1 = (unsigned int)*(unsigned char *)(temp_v3 + 2) - (unsigned int)*(unsigned char *)(temp_v4 + 2);
    if (temp_v1 == 0) {
      temp_v1 = 0;
      if (*param_1 < 0) {
        if (-1 < *param_2) {
          temp_v1 = 1;
        }
      }
      else if (*param_2 < 0) {
        temp_v1 = -1;
      }
      else {
        temp_v2 = gameGetSlotRecord(*param_1);
        temp_v0 = gameGetSlotRecord(*param_2);
        temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 100) - (unsigned int)*(unsigned short *)(temp_v2 + 100);
        if (temp_v1 == 0) {
          temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 0x62);
          FUN_00184310();
          temp_v4 = (unsigned int)*(unsigned short *)(temp_v0 + 0x62);
          FUN_00184310();
          temp_v1 = (unsigned int)*(unsigned char *)(temp_v3 + 2) - (unsigned int)*(unsigned char *)(temp_v4 + 2);
          if (temp_v1 == 0) {
            return (unsigned int)*(unsigned short *)(temp_v2 + 0x62) - (unsigned int)*(unsigned short *)(temp_v0 + 0x62);
          }
        }
      }
      return temp_v1;
    }
  }
  return temp_v1;
}

} /* extern "C" */
