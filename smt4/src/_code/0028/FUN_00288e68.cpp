/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00288e68` (_code @ 0x288e68, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4504(void);
int FUN_002b46f8(unsigned char *, unsigned int, unsigned int, int, unsigned char *);

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp1C; /* 0x1c: local_1c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern unsigned char LAB_001264b4; /* 0x1264b4 */
extern unsigned char *DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002b4504. */
/* Supplied declaration required: FUN_002b46f8. */
extern unsigned int FUN_002c0c74(int);
extern unsigned int FUN_002c0cc4(void);
extern int FUN_002c0cec(unsigned int, unsigned int);


unsigned short FUN_00288e68(unsigned short param_1)

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
      (puVar1 = DAT_00433158, FUN_002b4504(), puVar1 == (unsigned char *)0x0)) &&
     (temp_v0 = FUN_002c0cec(8,5), puVar1 = (unsigned char *)0x0, temp_v0 != 0)) {
    temp_v1 = FUN_002c0cc4();
    temp_v2 = FUN_002c0c74(temp_v0);
    puVar1 = temp_v3;
    FUN_002b46f8(puVar1,temp_v1,temp_v2,0x2c,&LAB_001264b4);
  }
  return *(unsigned short *)(puVar1 + 0x26);
}

} /* extern "C" */
