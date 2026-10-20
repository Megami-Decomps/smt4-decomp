/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00291f5c` (_code @ 0x291f5c, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int devilGetRecord(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int gameGetUnitRecord(int);
/* Supplied declaration required: devilGetRecord. */


int FUN_00291f5c(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
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
    temp_v0 = gameGetUnitRecord(*param_1);
    temp_v1 = gameGetUnitRecord(*param_2);
    temp_v0 = (int)*(short *)(temp_v1 + 0xe) - (int)*(short *)(temp_v0 + 0xe);
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
        temp_v1 = gameGetUnitRecord(*param_1);
        temp_v2 = gameGetUnitRecord(*param_2);
        temp_v0 = (unsigned int)*(unsigned char *)(temp_v2 + 0x48) - (unsigned int)*(unsigned char *)(temp_v1 + 0x48);
        if (temp_v0 == 0) {
          temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 0x46);
          devilGetRecord();
          temp_v4 = (unsigned int)*(unsigned short *)(temp_v2 + 0x46);
          devilGetRecord();
          temp_v0 = (unsigned int)*(unsigned char *)(temp_v3 + 2) - (unsigned int)*(unsigned char *)(temp_v4 + 2);
          if (temp_v0 == 0) {
            return (unsigned int)*(unsigned short *)(temp_v1 + 0x46) - (unsigned int)*(unsigned short *)(temp_v2 + 0x46);
          }
        }
      }
      return temp_v0;
    }
  }
  return temp_v0;
}

} /* extern "C" */
