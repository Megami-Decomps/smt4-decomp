/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019c40c` (_code @ 0x19c40c, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_005b4048; /* 0x5b4048 */
extern unsigned int DAT_005b404c; /* 0x5b404c */
extern unsigned int DAT_005b4050; /* 0x5b4050 */
extern unsigned int DAT_005b4054; /* 0x5b4054 */
extern int DAT_005b4058; /* 0x5b4058 */
extern int DAT_005b405c; /* 0x5b405c */
extern int DAT_005b4060; /* 0x5b4060 */
extern int DAT_005b4064; /* 0x5b4064 */


unsigned int FUN_0019c40c(unsigned int param_1)

{
  if ((param_1 < DAT_005b4048) || (DAT_005b4048 + DAT_005b4058 < param_1)) {
    if ((DAT_005b404c <= param_1) && (param_1 <= DAT_005b405c + DAT_005b404c)) {
      return 1;
    }
    if ((DAT_005b4050 <= param_1) && (param_1 <= DAT_005b4060 + DAT_005b4050)) {
      return 2;
    }
    if ((DAT_005b4054 <= param_1) && (param_1 <= DAT_005b4064 + DAT_005b4054)) {
      return 3;
    }
  }
  return 0;
}

} /* extern "C" */
