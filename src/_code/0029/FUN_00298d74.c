/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00298d74` (_code @ 0x298d74, 0x230 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int DAT_0043da90; /* 0x43da90 */

/* Supplied declaration required: FUN_002116ac. */
extern int FUN_00292ae8(unsigned int);
extern int FUN_002931cc(void);
/* Supplied declaration required: FUN_0029eb58. */
/* Supplied declaration required: FUN_0029fae8. */
/* Supplied declaration required: FUN_002c0ba8. */
extern int FUN_00310724(unsigned int);


void FUN_00298d74(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  
  temp_v2 = DAT_0043da90;
  temp_v1 = 0;
  temp_v7 = 0;
  do {
    temp_v3 = FUN_00292ae8(temp_v7 & 0xff);
    temp_v4 = 0;
    if ((temp_v3 != 0) &&
       (((((*(short *)(temp_v3 + 0x5a) != 0 && (temp_v4 = FUN_002c0ba8(), temp_v4 != 0)) ||
          ((*(short *)(temp_v3 + 0x5c) != 0 && (temp_v4 = FUN_002c0ba8(), temp_v4 != 0)))) ||
         (((*(short *)(temp_v3 + 0x5e) != 0 && (temp_v4 = FUN_002c0ba8(), temp_v4 != 0)) ||
          ((*(short *)(temp_v3 + 0x60) != 0 && (temp_v4 = FUN_002c0ba8(), temp_v4 != 0)))))) ||
        ((temp_v4 = 0, *(short *)(temp_v3 + 0x62) != 0 && (temp_v4 = FUN_002c0ba8(), temp_v4 != 0)))))) {
      temp_v1 = 1;
    }
    temp_v7 = temp_v7 + 1;
  } while ((int)temp_v7 < 0x35);
  temp_v0 = 0;
  temp_v3 = 0;
  FUN_002116ac();
  temp_v7 = 0;
  if (temp_v7 < temp_v4) {
    do {
      temp_v5 = FUN_00310724(temp_v7);
      if ((((temp_v5 != 0) && ((unsigned int)*(unsigned char *)(temp_v5 + 1) == (int)*(char *)(temp_v2 + 0x98))) &&
          ((*(short *)(temp_v5 + 0x56) == 0 || (temp_v6 = FUN_002c0ba8(), temp_v6 != 0)))) &&
         (((((*(short *)(temp_v5 + 0x58) == 0 || (temp_v6 = FUN_002931cc(), temp_v6 != 0)) &&
            (temp_v3 = temp_v3 + 1, (unsigned char)(temp_v1 & ~temp_v0))) &&
           ((*(short *)(temp_v5 + 0x5a) == 0 || (temp_v6 = FUN_002c0ba8(), temp_v6 == 0)))) &&
          (((*(short *)(temp_v5 + 0x5c) == 0 || (temp_v6 = FUN_002c0ba8(), temp_v6 == 0)) &&
           (((*(short *)(temp_v5 + 0x5e) == 0 || (temp_v6 = FUN_002c0ba8(), temp_v6 == 0)) &&
            (((*(short *)(temp_v5 + 0x60) == 0 || (temp_v6 = FUN_002c0ba8(), temp_v6 == 0)) &&
             ((*(short *)(temp_v5 + 0x62) == 0 || (temp_v5 = FUN_002c0ba8(), temp_v5 == 0)))))))))))) {
        temp_v0 = 1;
        *(char *)((int)*(char *)(temp_v2 + 0x98) + temp_v2 + 0x9b) = (char)temp_v3 - '\x01';
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < temp_v4);
  }
  FUN_0029fae8(temp_v2 + 0x34,temp_v3,1,temp_v3,1,1);
  FUN_0029eb58(temp_v2 + 0x34,(int)*(char *)((int)*(char *)(temp_v2 + 0x98) + temp_v2 + 0x9b));
  return;
}
