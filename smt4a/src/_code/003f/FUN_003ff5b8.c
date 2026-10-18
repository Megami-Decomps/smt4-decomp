/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ff5b8` (_code @ 0x3ff5b8, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0057113c; /* 0x57113c */
extern unsigned int DAT_00573c98; /* 0x573c98 */
extern unsigned int DAT_00573c9c; /* 0x573c9c */
extern unsigned int DAT_00573ca0; /* 0x573ca0 */
extern unsigned int DAT_00573ca4; /* 0x573ca4 */

extern int FUN_0018719c(unsigned int);
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
extern int FUN_004ee568(unsigned int);


unsigned int FUN_003ff5b8(unsigned int *param_1)

{
  short temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v1 = FUN_0018719c(0x401);
  if (temp_v1 == 0) {
    return 0;
  }
  if (param_1 != (unsigned int *)0x0) {
    if (!((DAT_00573c98 & *param_1) == 0 && (DAT_00573c9c & param_1[1]) == 0)) {
      temp_v1 = FUN_004ee568(DAT_0057113c);
      puVar3 = *(unsigned int **)(temp_v1 + 0x20);
      if ((puVar3 != (unsigned int *)0x0) &&
         ((puVar3[1] & DAT_00573c9c) != 0 || (*puVar3 & DAT_00573c98) != 0)) {
        temp_v1 = FUN_001ab888();
        temp_v4 = 0;
        if (*(unsigned char *)(temp_v1 + 0x1ca3) != 0) {
          do {
            if (((-1 < *(char *)(temp_v1 + temp_v4 + 0x1c88)) && (temp_v2 = FUN_001ab854(), temp_v2 != 0))
               && (-1 < *(char *)(temp_v1 + temp_v4 + 0x1c88))) {
              return 1;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < (int)(unsigned int)*(unsigned char *)(temp_v1 + 0x1ca3));
        }
      }
    }
    else if (((*param_1 & DAT_00573ca0) != 0 || (param_1[1] & DAT_00573ca4) != 0) &&
            (temp_v0 = *(short *)((int)param_1 + 0x166), (int)temp_v0 != 0)) {
      temp_v1 = FUN_001ab888();
      temp_v4 = 0;
      if (*(unsigned char *)(temp_v1 + 0x1ca3) != 0) {
        do {
          if (-1 < *(char *)(temp_v1 + temp_v4 + 0x1c88)) {
            temp_v2 = FUN_001ab854();
            temp_v3 = 0;
            if (temp_v2 != 0) {
              temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 0x62);
            }
            if ((temp_v2 != 0 && temp_v3 != (int)temp_v0) && (-1 < *(char *)(temp_v1 + temp_v4 + 0x1c88))) {
              return 1;
            }
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < (int)(unsigned int)*(unsigned char *)(temp_v1 + 0x1ca3));
      }
    }
  }
  return 0;
}
