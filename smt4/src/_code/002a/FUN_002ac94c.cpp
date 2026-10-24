/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac94c` (_code @ 0x2ac94c, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int _ZGVZN2nw4math5MTX348IdentityEvE8identity; /* 0x476634 */
extern unsigned int _ZZN2nw4math5MTX348IdentityEvE8identity; /* 0x4efd6c */
extern unsigned int DAT_004efd70; /* 0x4efd70 */
extern unsigned int DAT_004efd74; /* 0x4efd74 */
extern unsigned int DAT_004efd78; /* 0x4efd78 */
extern unsigned int DAT_004efd7c; /* 0x4efd7c */
extern unsigned int DAT_004efd80; /* 0x4efd80 */
extern unsigned int DAT_004efd84; /* 0x4efd84 */
extern unsigned int DAT_004efd88; /* 0x4efd88 */
extern unsigned int DAT_004efd8c; /* 0x4efd8c */
extern unsigned int DAT_004efd90; /* 0x4efd90 */
extern unsigned int DAT_004efd94; /* 0x4efd94 */
extern unsigned int DAT_004efd98; /* 0x4efd98 */

extern int __cxa_guard_acquire(unsigned int *);


unsigned int * FUN_002ac94c(void)

{
  int temp_v0;
  
  if (((_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity), temp_v0 != 0)) {
    _ZZN2nw4math5MTX348IdentityEvE8identity = 0x3f800000;
    DAT_004efd70 = 0;
    DAT_004efd74 = 0;
    DAT_004efd78 = 0;
    DAT_004efd7c = 0;
    DAT_004efd80 = 0x3f800000;
    DAT_004efd84 = 0;
    DAT_004efd88 = 0;
    DAT_004efd8c = 0;
    DAT_004efd90 = 0;
    DAT_004efd94 = 0x3f800000;
    DAT_004efd98 = 0;
  }
  return &_ZZN2nw4math5MTX348IdentityEvE8identity;
}

} /* extern "C" */
