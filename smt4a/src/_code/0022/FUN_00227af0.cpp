/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00227af0` (_code @ 0x227af0, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aba54(int);
int FUN_002e6354(int, int);
int rt_memcpy(int, int, int);

extern int DAT_0057f56c; /* 0x57f56c */

extern int FUN_0019f240(int);
extern unsigned int FUN_001ab854(void);
/* Supplied declaration required: FUN_001aba54. */
extern int FUN_001ba514(unsigned int);
/* Supplied declaration required: FUN_002e6354. */
extern int FUN_004bd098(unsigned int, int);
extern int FUN_004c6bd0(int, int);
/* Supplied declaration required: rt_memcpy. */


void FUN_00227af0(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = DAT_0057f56c;
  *(unsigned char *)(DAT_0057f56c + 0x10) = 0;
  if (param_1 != 0) {
    FUN_002e6354(temp_v0 + 0x26c,0x3d);
    temp_v1 = 0;
    do {
      if (*(char *)(param_1 + temp_v1) == '\0') {
        rt_memcpy(temp_v0 + 0x26c,param_1,temp_v1 + 1);
        *(unsigned char *)(temp_v0 + 0x10) = 1;
        break;
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 0x3d);
    temp_v0 = DAT_0057f56c;
    *(unsigned int *)(DAT_0057f56c + 0x2b4) = 0;
    if ((*(int *)(temp_v0 + 0x14) == 2) && (*(char *)(temp_v0 + 0x2b8) != '\x01')) {
      if (*(char *)(temp_v0 + 0x11) != '\0') {
        temp_v1 = FUN_0019f240((int)*(short *)(temp_v0 + 0x18));
        temp_v1 = temp_v1 - 1;
        *(int *)(temp_v0 + 0x2b4) = temp_v1;
        if (temp_v1 < 1) {
          temp_v1 = 0;
        }
      }
      else {
        if ((int)*(unsigned int *)(temp_v0 + 0x2ac) < 1) {
          return;
        }
        if (*(char *)(temp_v0 + 0x2b0) != '\0') {
          temp_v1 = FUN_001ba514(*(unsigned int *)(temp_v0 + 0x2ac) & 0xffff);
          if (temp_v1 < 0) {
            return;
          }
          temp_v2 = FUN_001ab854();
          temp_v1 = FUN_004bd098(temp_v2,(int)*(short *)(temp_v0 + 0x18));
        }
        else {
          temp_v1 = (int)*(short *)(temp_v0 + 0x18);
          FUN_001aba54(temp_v1);
          temp_v1 = FUN_004c6bd0((int)(short)*(unsigned int *)(temp_v0 + 0x2ac),temp_v1);
        }
      }
      *(int *)(temp_v0 + 0x2b4) = temp_v1;
    }
  }
  return;
}

} /* extern "C" */
