/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b4e7c` (_code @ 0x2b4e7c, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_3_stack;

extern int DAT_00573920; /* 0x573920 */
extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_00573980; /* 0x573980 */
extern unsigned int DAT_00573984; /* 0x573984 */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */


unsigned int FUN_002b4e7c(unsigned int param_1,unsigned int param_2,int param_3)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  
  if (DAT_00573920 != 0) {
    param_3 = *(int *)(DAT_00573920 + 0x88);
  }
  if (DAT_00573920 != 0 && param_3 != 0x1d) {
    temp_v2 = 0;
    do {
      puVar4 = (unsigned int *)(*(int *)(DAT_00573920 + 0x1ffc) + temp_v2 * 0x408);
      temp_v0 = *puVar4;
      temp_v1 = puVar4[1];
      if (((((temp_v1 & DAT_0057397c) != 0 || (temp_v0 & DAT_00573978) != 0) &&
           ((DAT_005739a0 & temp_v0) == 0 && (DAT_005739a4 & temp_v1) == 0)) &&
          ((temp_v0 & DAT_00573980) != 0 || (temp_v1 & DAT_00573984) != 0)) && (puVar4[0xfe] == param_1)
         ) {
        return puVar4[0x97];
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x6d);
  }
  return (int)*(short *)(param_1 + 0x1c);
}
