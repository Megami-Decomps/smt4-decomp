/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f0254` (_code @ 0x3f0254, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_2_stack;

extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_00573990; /* 0x573990 */
extern unsigned int DAT_00573994; /* 0x573994 */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */
extern unsigned int DAT_005739d8; /* 0x5739d8 */
extern unsigned int DAT_005739dc; /* 0x5739dc */


unsigned int FUN_003f0254(int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  
  if (param_2 != 0) {
    temp_v3 = *(int *)(param_1 + 0x1ffc) + *(short *)(param_2 + 0x68) * 0x408;
    temp_v0 = 4;
    do {
      puVar5 = (unsigned int *)(*(int *)(param_1 + 0x1ffc) + temp_v0 * 0x408);
      if (puVar5 != (unsigned int *)0x0) {
        temp_v1 = *puVar5;
        temp_v2 = puVar5[1];
        if (((((temp_v2 & DAT_0057397c) != 0 || (temp_v1 & DAT_00573978) != 0) &&
             ((DAT_005739a4 & temp_v2) == 0 && (DAT_005739a0 & temp_v1) == 0)) &&
            ((DAT_00573990 & temp_v1) != 0 || (DAT_00573994 & temp_v2) != 0)) &&
           (*(short *)((int)puVar5 + 0x6e) != *(short *)(temp_v3 + 0x6e))) {
          if (((DAT_005739d8 & temp_v1) == 0 && (temp_v2 & DAT_005739dc) == 0) &&
             (*(short *)((int)puVar5 + 0x166) == *(short *)(temp_v3 + 0x166) &&
              ((temp_v2 & DAT_005739dc) == 0 && (DAT_005739d8 & temp_v1) == 0))) {
            return 0;
          }
        }
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x36);
  }
  return 1;
}

} /* extern "C" */
