/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010fca0` (_code @ 0x10fca0, 0xf4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} void_stack;

extern unsigned char LAB_0010fd98; /* 0x10fd98 */

/* Supplied declaration required: FUN_002bb7c4. */
extern int FUN_002bb804(unsigned int *, int *, unsigned int *, unsigned int);
extern int FUN_002bb88c(unsigned int *, int *);
/* Supplied declaration required: FUN_002bb8e4. */
/* Supplied declaration required: FUN_002bbd10. */


unsigned int FUN_0010fca0(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  char temp_v2 [4];
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  
  temp_v3 = 0;
  temp_v2[0] = -0x50;
  temp_v2[1] = '\b';
  temp_v2[2] = 'B';
  temp_v2[3] = '\0';
  puVar2 = (unsigned int *)&temp_v3;
  temp_v6 = 0;
  temp_v7 = 0;
  temp_v4 = 0;
  temp_v5 = 0;
  FUN_002bb8e4(puVar2,&LAB_0010fd98,1);
  if (-1 < (int)puVar2) {
    temp_v1 = FUN_002bb88c((unsigned int *)&temp_v3,&temp_v10);
    if (temp_v1 < 0) {
      FUN_002bbd10(temp_v1,0x10fd18);
    }
    if (temp_v11 == 0 && temp_v10 == 4) {
      temp_v9 = 0;
      temp_v1 = FUN_002bb804((unsigned int *)&temp_v3,&temp_v8,(unsigned int *)&temp_v9,4);
      if (temp_v1 < 0) {
        FUN_002bbd10(temp_v1,0x10fd50);
      }
      temp_v0 = temp_v9;
      if (temp_v8 == 4) {
        FUN_002bb7c4(temp_v2,0);
        return temp_v0;
      }
    }
  }
  FUN_002bb7c4(temp_v2,0);
  return 0;
}
