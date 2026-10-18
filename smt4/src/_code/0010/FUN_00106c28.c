/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106c28` (_code @ 0x106c28, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00209ff9; /* 0x209ff9 */
extern int DAT_0044e34c; /* 0x44e34c */
extern unsigned int DAT_004655f8; /* 0x4655f8 */
extern unsigned int DAT_004c6410; /* 0x4c6410 */

extern int FUN_0010f50c(void);
/* Supplied declaration required: FUN_0010f548. */
extern unsigned char *FUN_002c1364(unsigned int *, char *, unsigned int, unsigned int);
extern unsigned char *FUN_002c1398(void);
extern unsigned int FUN_002c30c4(char *);
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


unsigned char * FUN_00106c28(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  nn_os_CriticalSection_Enter(&DAT_004c6410);
  temp_v0 = FUN_0010f50c();
  if (temp_v0 != 0) {
    nn_os_CriticalSection_Leave(&DAT_004c6410);
    return (unsigned char *)0xd8a09ff9;
  }
  nn_os_CriticalSection_Enter(&DAT_004c6410);
  temp_v2 = DAT_0044e34c == 0;
  nn_os_CriticalSection_Leave(&DAT_004c6410);
  if (temp_v2) {
    puVar2 = (unsigned char *)FUN_002c1398();
    if (-1 < (int)puVar2) {
      temp_v1 = FUN_002c30c4("ac:u");
      puVar2 = (unsigned char *)FUN_002c1364(&DAT_004655f8,"ac:u",temp_v1,0);
      if (-1 < (int)puVar2) {
        DAT_0044e34c = DAT_0044e34c + 1;
        FUN_0010f548(0x40201c8);
        nn_os_CriticalSection_Leave(&DAT_004c6410);
        return (unsigned char *)0x0;
      }
    }
    nn_os_CriticalSection_Leave(&DAT_004c6410);
    return puVar2;
  }
  DAT_0044e34c = DAT_0044e34c + 1;
  nn_os_CriticalSection_Leave(&DAT_004c6410);
  return &LAB_00209ff9;
}
