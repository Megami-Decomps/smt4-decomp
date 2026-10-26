/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b1998` (_code @ 0x1b1998, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_ctor_nocookie_nodtor(unsigned char *, unsigned char *, int, int);

extern unsigned char FUN_00197f40; /* 0x197f40 */
extern unsigned int DAT_005c0f90; /* 0x5c0f90 */
extern unsigned char DAT_00647090; /* 0x647090 */

extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


unsigned char * FUN_001b1998(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  if (((DAT_005c0f90 & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_005c0f90), temp_v0 != 0)) {
    puVar2 = &DAT_00647090;
    __aeabi_vec_ctor_nocookie_nodtor(&DAT_00647090,&FUN_00197f40,0xc,3);
    *(unsigned int *)(puVar2 + 0x24) = 0;
    puVar2[0x28] = 0;
    *(unsigned int *)(puVar2 + 0x2c) = 0;
    *(unsigned int *)(puVar2 + 0x30) = 0;
    *(unsigned int *)(puVar2 + 0x34) = 0xffffffff;
    *(unsigned int *)(puVar2 + 0x3c) = 0;
    *(unsigned short *)(puVar2 + 0x40) = 0;
    *(unsigned int *)(puVar2 + 0x44) = 0;
    *(unsigned short *)(puVar2 + 0x48) = 0;
    *(unsigned int *)(puVar2 + 0x4c) = 0;
    *(unsigned int *)(puVar2 + 0x50) = 0;
    *(unsigned int *)(puVar2 + 0x54) = 0xffffffff;
    *(unsigned int *)(puVar2 + 100) = 0;
    *(unsigned int *)(puVar2 + 0x68) = 0;
  }
  return &DAT_00647090;
}

} /* extern "C" */
