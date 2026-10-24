/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001287e4` (_code @ 0x1287e4, 0x98 bytes) from smt4_v1.2.0.cxi.
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


void FUN_001287e4(int param_1)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  
  if (((_ZGVZN2nw4math5MTX348IdentityEvE8identity & 1) == 0) && (temp_v7 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX348IdentityEvE8identity), temp_v7 != 0)) {
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
  temp_v6 = DAT_004efd88;
  temp_v5 = DAT_004efd84;
  temp_v4 = DAT_004efd80;
  temp_v3 = DAT_004efd7c;
  temp_v2 = DAT_004efd78;
  temp_v1 = DAT_004efd74;
  temp_v0 = DAT_004efd70;
  *(unsigned int *)(param_1 + 0x18) = _ZZN2nw4math5MTX348IdentityEvE8identity;
  *(unsigned int *)(param_1 + 0x1c) = temp_v0;
  *(unsigned int *)(param_1 + 0x20) = temp_v1;
  *(unsigned int *)(param_1 + 0x24) = temp_v2;
  *(unsigned int *)(param_1 + 0x28) = temp_v3;
  *(unsigned int *)(param_1 + 0x2c) = temp_v4;
  *(unsigned int *)(param_1 + 0x30) = temp_v5;
  *(unsigned int *)(param_1 + 0x34) = temp_v6;
  temp_v2 = DAT_004efd94;
  temp_v1 = DAT_004efd90;
  temp_v0 = DAT_004efd8c;
  *(unsigned int *)(param_1 + 0x44) = DAT_004efd98;
  *(unsigned int *)(param_1 + 0x38) = temp_v0;
  *(unsigned int *)(param_1 + 0x3c) = temp_v1;
  *(unsigned int *)(param_1 + 0x40) = temp_v2;
  return;
}

} /* extern "C" */
