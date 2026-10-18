/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002890d0` (_code @ 0x2890d0, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_001263d8; /* 0x1263d8 */
extern unsigned char *DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002b46e8. */
/* Supplied declaration required: FUN_002b48dc. */
extern unsigned int FUN_002c0e4c(int);
extern unsigned int FUN_002c0e9c(void);
extern int FUN_002c0ec4(unsigned int, unsigned int);


unsigned short FUN_002890d0(unsigned short param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [32];
  unsigned short temp_v4;
  
  temp_v4 = param_1;
  if (((*(int *)(DAT_00433158 + 0x3dc) == 0) ||
      (puVar1 = DAT_00433158, FUN_002b46e8(), puVar1 == (unsigned char *)0x0)) &&
     (temp_v0 = FUN_002c0ec4(8,5), puVar1 = (unsigned char *)0x0, temp_v0 != 0)) {
    temp_v1 = FUN_002c0e9c();
    temp_v2 = FUN_002c0e4c(temp_v0);
    puVar1 = temp_v3;
    FUN_002b48dc(puVar1,temp_v1,temp_v2,0x2c,&LAB_001263d8);
  }
  return *(unsigned short *)(puVar1 + 0x26);
}
