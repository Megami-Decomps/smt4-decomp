/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016e468` (_code @ 0x16e468, 0xc8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysFatalBreak(void);

extern unsigned char DAT_005b4790; /* 0x5b4790 */
extern int DAT_005b479c; /* 0x5b479c */

extern int FUN_0016f864(void);
extern unsigned int FUN_0016f988(unsigned int *, char *, unsigned int, unsigned int);
/* Supplied declaration required: sysFatalBreak. */
extern unsigned int FUN_001a0e10(void);
extern unsigned int libc_strlen(char *);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned int FUN_0016e468(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = FUN_001a0e10();
  nn_os_CriticalSection_Enter(temp_v0);
  if ((*(int *)((unsigned char *)&DAT_005b4790 + 0x8)) == 0) {
    temp_v1 = FUN_0016f864();
    if (temp_v1 < 0) {
      sysFatalBreak();
    }
    if (DAT_005b479c != 0) {
      temp_v3 = 0xd8a103f9;
    }
    else {
      temp_v2 = libc_strlen("cfg:u");
      temp_v3 = FUN_0016f988((unsigned int *)&DAT_005b479c,"cfg:u",temp_v2,0);
      if ((temp_v3 & 0x80000000) != 0) {
        temp_v3 = 0xd92103fb;
      }
    }
    if ((temp_v3 & 0x80000000) == 0) {
      DAT_005b4790 = 1;
    }
    else if (temp_v3 == 0xd92103fb) {
      nn_os_CriticalSection_Leave(temp_v0);
      return 0xd92103fb;
    }
  }
  (*(int *)((unsigned char *)&DAT_005b4790 + 0x8)) = (*(int *)((unsigned char *)&DAT_005b4790 + 0x8)) + 1;
  nn_os_CriticalSection_Leave(temp_v0);
  return 0;
}

} /* extern "C" */
