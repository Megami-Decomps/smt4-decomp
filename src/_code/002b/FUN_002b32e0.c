/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b32e0` (_code @ 0x2b32e0, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_0046513c; /* 0x46513c */
extern unsigned int DAT_00465140; /* 0x465140 */
extern unsigned int DAT_00465144; /* 0x465144 */
extern unsigned int DAT_00465148; /* 0x465148 */
extern int DAT_0046514c; /* 0x46514c */
extern int DAT_00465150; /* 0x465150 */
extern int DAT_00465154; /* 0x465154 */
extern int DAT_00465158; /* 0x465158 */


unsigned int FUN_002b32e0(unsigned int param_1)

{
  if ((param_1 < DAT_0046513c) || (DAT_0046513c + DAT_0046514c < param_1)) {
    if ((DAT_00465140 <= param_1) && (param_1 <= DAT_00465150 + DAT_00465140)) {
      return 1;
    }
    if ((DAT_00465144 <= param_1) && (param_1 <= DAT_00465154 + DAT_00465144)) {
      return 2;
    }
    if ((DAT_00465148 <= param_1) && (param_1 <= DAT_00465158 + DAT_00465148)) {
      return 3;
    }
  }
  return 0;
}
