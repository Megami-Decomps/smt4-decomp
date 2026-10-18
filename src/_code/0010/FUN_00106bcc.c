/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00106bcc` (_code @ 0x106bcc, 0xfc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00209ff9; /* 0x209ff9 */
extern int DAT_0044e34c; /* 0x44e34c */
extern unsigned int DAT_004655f8; /* 0x4655f8 */
extern unsigned int DAT_004c6410; /* 0x4c6410 */

extern int FUN_0010f4e8(void);
/* Supplied declaration required: FUN_0010f524. */
extern unsigned char *FUN_002c153c(unsigned int *, char *, unsigned int, unsigned int);
extern unsigned char *FUN_002c1570(void);
extern unsigned int FUN_002c3290(char *);
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


unsigned char * FUN_00106bcc(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  unsigned char temp_v2;
  
  FUN_002c3aa8(&DAT_004c6410);
  temp_v0 = FUN_0010f4e8();
  if (temp_v0 != 0) {
    FUN_002c3a24(&DAT_004c6410);
    return (unsigned char *)0xd8a09ff9;
  }
  FUN_002c3aa8(&DAT_004c6410);
  temp_v2 = DAT_0044e34c == 0;
  FUN_002c3a24(&DAT_004c6410);
  if (temp_v2) {
    puVar2 = (unsigned char *)FUN_002c1570();
    if (-1 < (int)puVar2) {
      temp_v1 = FUN_002c3290("ac:u");
      puVar2 = (unsigned char *)FUN_002c153c(&DAT_004655f8,"ac:u",temp_v1,0);
      if (-1 < (int)puVar2) {
        DAT_0044e34c = DAT_0044e34c + 1;
        FUN_0010f524(0x40201c8);
        FUN_002c3a24(&DAT_004c6410);
        return (unsigned char *)0x0;
      }
    }
    FUN_002c3a24(&DAT_004c6410);
    return puVar2;
  }
  DAT_0044e34c = DAT_0044e34c + 1;
  FUN_002c3a24(&DAT_004c6410);
  return &LAB_00209ff9;
}
