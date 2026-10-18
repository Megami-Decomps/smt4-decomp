/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a108` (_code @ 0x10a108, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_0062db70; /* 0x62db70 */
extern int DAT_0062db78; /* 0x62db78 */
extern unsigned short DAT_0062db7c; /* 0x62db7c */

extern int FUN_002f3290(unsigned char *);


void FUN_0010a108(unsigned short param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_002f3290(&DAT_0062db70);
  if (temp_v0 != 0) {
    *(unsigned short *)(DAT_0062db78 + temp_v0 * 2) = param_1;
    return;
  }
  DAT_0062db7c = param_1;
  return;
}
