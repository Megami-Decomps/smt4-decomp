/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043f2a8` (_code @ 0x43f2a8, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bcd48(int, int);
int FUN_0043dd54(unsigned int *);
int software_interrupt(int);

typedef int romwright_code(...);
extern unsigned int DAT_0064602c; /* 0x64602c */
extern unsigned int *DAT_00646030; /* 0x646030 */
extern unsigned int DAT_0064603c; /* 0x64603c */
extern int DAT_00646050; /* 0x646050 */
extern unsigned char DAT_0064606d; /* 0x64606d */
extern unsigned int DAT_00646070; /* 0x646070 */
extern int *DAT_00646074; /* 0x646074 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_001bcd48. */
/* Supplied declaration required: FUN_0043dd54. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


void FUN_0043f2a8(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char temp_v0;
  
  FUN_0043dd54(&DAT_0064602c);
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0064603c);
  puVar2 = DAT_00646030;
  if (DAT_00646030 != (unsigned int *)0x0) {
    do {
      if (puVar2[2] != 0) {
        software_interrupt(0x23);
        puVar2[2] = 0;
      }
      puVar1 = (unsigned int *)0x0;
      if (DAT_00646030 != (unsigned int *)0x0) {
        puVar1 = (unsigned int *)*DAT_00646030;
      }
      temp_v0 = puVar1 != puVar2;
      if (temp_v0) {
        puVar2 = (unsigned int *)puVar2[1];
      }
    } while (temp_v0 && puVar2 != (unsigned int *)0x0);
  }
  while (DAT_00646050 != 0) {
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
    FUN_001bcd48(100000000,0);
    nn_os_CriticalSection_Enter((unsigned int)&DAT_0064603c);
  }
  DAT_0064606d = 0;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0064603c);
  FUN_0043dd54(&DAT_0064602c);
  (**(romwright_code **)(*DAT_00646074 + 4))(DAT_00646074,DAT_00646070);
  DAT_00646070 = 0;
  DAT_00646074 = (int *)0x0;
  return;
}

} /* extern "C" */
