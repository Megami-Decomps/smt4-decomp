/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001386f8` (_code @ 0x1386f8, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char LAB_00145a98; /* 0x145a98 */
extern unsigned char *DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002a9f98. */
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: FUN_002b46f8. */
extern unsigned int FUN_002c0c74(unsigned int);
extern unsigned int FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


unsigned int FUN_001386f8(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [32];
  unsigned short temp_v5;
  
  if (param_1 >= 0x191) {
    puVar1 = DAT_00433158;
    FUN_002a9f98(DAT_00433158,param_1);
    if (puVar1 == (unsigned char *)0x0) {
      temp_v0 = FUN_002c0cec(4,1);
      temp_v1 = FUN_002c0cc4();
      temp_v0 = FUN_002c0c74(temp_v0);
      puVar1 = temp_v4;
      temp_v5 = (unsigned short)param_1;
      FUN_002b46f8(puVar1,temp_v1,temp_v0,0x3c,&LAB_00145a98);
    }
    if (puVar1 != (unsigned char *)0x0) {
      return (*(unsigned int *)(puVar1 + 0x38) & 0x40000000) >> 0x1e;
    }
  }
  else {
    FUN_002ae164();
    if ((param_1 != 0) && (temp_v2 = 0, (*(unsigned int *)(param_1 + 0x38) & 0x80000000) == 0)) {
      while( 1 ) {
        temp_v3 = param_1 + temp_v2 * 2;
        if (*(char *)(temp_v3 + 0x58) == '\0') {
          return temp_v2 + 1;
        }
        if (*(char *)(temp_v3 + 0x5a) == '\0') break;
        temp_v2 = temp_v2 + 2;
        if (temp_v2 >= 8) {
          return 9;
        }
      }
      return temp_v2 + 2;
    }
  }
  return 0;
}
