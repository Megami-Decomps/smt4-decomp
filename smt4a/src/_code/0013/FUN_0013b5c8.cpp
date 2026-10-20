/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b5c8` (_code @ 0x13b5c8, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014668c(int);

extern unsigned char LAB_00209ff9; /* 0x209ff9 */
extern int DAT_005891a8; /* 0x5891a8 */
extern unsigned int DAT_005b4438; /* 0x5b4438 */
extern unsigned int DAT_0061a5f0; /* 0x61a5f0 */

extern int FUN_00146650(void);
/* Supplied declaration required: FUN_0014668c. */
extern unsigned char *FUN_0016f864(void);
extern unsigned char *FUN_0016f988(unsigned int *, char *, unsigned int, unsigned int);
extern unsigned int FUN_002e3390(char *);
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


unsigned char * FUN_0013b5c8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0061a5f0);
  temp_v0 = FUN_00146650();
  if (temp_v0 != 0) {
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0061a5f0);
    return (unsigned char *)0xd8a09ff9;
  }
  nn_os_CriticalSection_Enter((unsigned int)&DAT_0061a5f0);
  temp_v2 = DAT_005891a8 == 0;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0061a5f0);
  if (temp_v2) {
    puVar2 = (unsigned char *)FUN_0016f864();
    if (-1 < (int)puVar2) {
      temp_v1 = FUN_002e3390("ac:u");
      puVar2 = (unsigned char *)FUN_0016f988(&DAT_005b4438,"ac:u",temp_v1,0);
      if (-1 < (int)puVar2) {
        DAT_005891a8 = DAT_005891a8 + 1;
        FUN_0014668c(0xb0101c8);
        nn_os_CriticalSection_Leave((unsigned int)&DAT_0061a5f0);
        return (unsigned char *)0x0;
      }
    }
    nn_os_CriticalSection_Leave((unsigned int)&DAT_0061a5f0);
    return puVar2;
  }
  DAT_005891a8 = DAT_005891a8 + 1;
  nn_os_CriticalSection_Leave((unsigned int)&DAT_0061a5f0);
  return &LAB_00209ff9;
}

} /* extern "C" */
