/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016ec20` (_code @ 0x16ec20, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int _ZGVZN2nw4math5MTX348IdentityEvE8identity; /* 0x5c4c2c */
extern unsigned int _ZZN2nw4math5MTX348IdentityEvE8identity; /* 0x64c054 */
extern unsigned int DAT_0064c058; /* 0x64c058 */
extern unsigned int DAT_0064c05c; /* 0x64c05c */
extern unsigned int DAT_0064c060; /* 0x64c060 */
extern unsigned int DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern unsigned int DAT_0064c06c; /* 0x64c06c */
extern unsigned int DAT_0064c070; /* 0x64c070 */
extern unsigned int DAT_0064c074; /* 0x64c074 */
extern unsigned int DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
extern unsigned int DAT_0064c080; /* 0x64c080 */

extern int __cxa_guard_acquire(unsigned int *);


void FUN_0016ec20(int param_1)

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
    DAT_0064c058 = 0;
    DAT_0064c05c = 0;
    DAT_0064c060 = 0;
    DAT_0064c064 = 0;
    DAT_0064c068 = 0x3f800000;
    DAT_0064c06c = 0;
    DAT_0064c070 = 0;
    DAT_0064c074 = 0;
    DAT_0064c078 = 0;
    DAT_0064c07c = 0x3f800000;
    DAT_0064c080 = 0;
  }
  temp_v6 = DAT_0064c070;
  temp_v5 = DAT_0064c06c;
  temp_v4 = DAT_0064c068;
  temp_v3 = DAT_0064c064;
  temp_v2 = DAT_0064c060;
  temp_v1 = DAT_0064c05c;
  temp_v0 = DAT_0064c058;
  *(unsigned int *)(param_1 + 0x18) = _ZZN2nw4math5MTX348IdentityEvE8identity;
  *(unsigned int *)(param_1 + 0x1c) = temp_v0;
  *(unsigned int *)(param_1 + 0x20) = temp_v1;
  *(unsigned int *)(param_1 + 0x24) = temp_v2;
  *(unsigned int *)(param_1 + 0x28) = temp_v3;
  *(unsigned int *)(param_1 + 0x2c) = temp_v4;
  *(unsigned int *)(param_1 + 0x30) = temp_v5;
  *(unsigned int *)(param_1 + 0x34) = temp_v6;
  temp_v2 = DAT_0064c07c;
  temp_v1 = DAT_0064c078;
  temp_v0 = DAT_0064c074;
  *(unsigned int *)(param_1 + 0x44) = DAT_0064c080;
  *(unsigned int *)(param_1 + 0x38) = temp_v0;
  *(unsigned int *)(param_1 + 0x3c) = temp_v1;
  *(unsigned int *)(param_1 + 0x40) = temp_v2;
  return;
}

} /* extern "C" */
