/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192550` (_code @ 0x192550, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp4C; /* 0x4c: local_4c */
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

extern unsigned char LAB_00183450; /* 0x183450 */
extern unsigned char *DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_00100854. */
extern int FUN_00187180(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0019227c. */
extern unsigned int FUN_00192748(int);
extern unsigned int FUN_00192798(void);
extern int FUN_0019c06c(int);


unsigned char * FUN_00192550(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [48];
  unsigned short temp_v4;
  
  temp_v4 = (unsigned short)param_1;
  if (param_1 == 0) {
    return (unsigned char *)0x0;
  }
  if ((*(int *)(DAT_00570280 + 0x3ac) == 0) ||
     (puVar1 = DAT_00570280, FUN_0019227c(DAT_00570280,param_1), puVar1 == (unsigned char *)0x0)) {
    temp_v0 = FUN_0019c06c(param_1);
    if (temp_v0 == 0) {
      temp_v2 = 1;
    }
    else {
      temp_v2 = 1;
      if (*(char *)(temp_v0 + 8) == '\f') {
        temp_v2 = 6;
      }
    }
    temp_v0 = FUN_00187180(8,temp_v2);
    if (temp_v0 == 0) {
      return (unsigned char *)0x0;
    }
    temp_v2 = FUN_00192798();
    temp_v1 = FUN_00192748(temp_v0);
    puVar1 = temp_v3;
    FUN_00100854(puVar1,temp_v2,temp_v1,0x6c,&LAB_00183450);
  }
  return puVar1;
}
