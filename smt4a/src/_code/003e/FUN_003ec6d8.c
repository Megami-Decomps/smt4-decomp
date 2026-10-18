/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ec6d8` (_code @ 0x3ec6d8, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;

extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_00573988; /* 0x573988 */
extern unsigned int DAT_0057398c; /* 0x57398c */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */


unsigned int FUN_003ec6d8(int param_1,unsigned int param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  
  temp_v1 = 0;
  do {
    puVar4 = (unsigned int *)(*(int *)(param_1 + 0x1ffc) + temp_v1 * 0x408);
    if (puVar4 != (unsigned int *)0x0) {
      temp_v0 = *puVar4;
      temp_v2 = puVar4[1];
      if (((((temp_v2 & DAT_0057397c) != 0 || (temp_v0 & DAT_00573978) != 0) &&
           ((DAT_005739a0 & temp_v0) == 0 && (DAT_005739a4 & temp_v2) == 0)) &&
          ((temp_v2 & DAT_0057398c) != 0 || (DAT_00573988 & temp_v0) != 0)) &&
         (*(unsigned short *)((int)puVar4 + 0x166) == param_2)) {
        return 1;
      }
    }
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x6d) {
      return 0;
    }
  } while( 1 );
}
