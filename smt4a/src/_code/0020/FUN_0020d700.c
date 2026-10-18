/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020d700` (_code @ 0x20d700, 0x230 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern int DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: FUN_0018719c. */
/* Supplied declaration required: FUN_00203b40. */
/* Supplied declaration required: FUN_002a4914. */
/* Supplied declaration required: FUN_002e26ac. */
extern int FUN_002e26c4(unsigned int);
extern int FUN_003a62c0(unsigned int);
extern int FUN_003e46f4(void);


void FUN_0020d700(void)

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
  
  temp_v2 = DAT_0057f108;
  temp_v1 = 0;
  temp_v7 = 0;
  do {
    temp_v3 = FUN_002e26c4(temp_v7 & 0xff);
    temp_v4 = 0;
    if ((temp_v3 != 0) &&
       (((((*(short *)(temp_v3 + 0x5a) != 0 && (temp_v4 = FUN_0018719c(), temp_v4 != 0)) ||
          ((*(short *)(temp_v3 + 0x5c) != 0 && (temp_v4 = FUN_0018719c(), temp_v4 != 0)))) ||
         (((*(short *)(temp_v3 + 0x5e) != 0 && (temp_v4 = FUN_0018719c(), temp_v4 != 0)) ||
          ((*(short *)(temp_v3 + 0x60) != 0 && (temp_v4 = FUN_0018719c(), temp_v4 != 0)))))) ||
        ((temp_v4 = 0, *(short *)(temp_v3 + 0x62) != 0 && (temp_v4 = FUN_0018719c(), temp_v4 != 0)))))) {
      temp_v1 = 1;
    }
    temp_v7 = temp_v7 + 1;
  } while ((int)temp_v7 < 0x4f);
  temp_v0 = 0;
  temp_v3 = 0;
  FUN_002e26ac();
  temp_v7 = 0;
  if (temp_v7 < temp_v4) {
    do {
      temp_v5 = FUN_003a62c0(temp_v7);
      if ((((temp_v5 != 0) && ((unsigned int)*(unsigned char *)(temp_v5 + 1) == (int)*(char *)(temp_v2 + 0xa4))) &&
          ((*(short *)(temp_v5 + 0x56) == 0 || (temp_v6 = FUN_0018719c(), temp_v6 != 0)))) &&
         (((((*(short *)(temp_v5 + 0x58) == 0 || (temp_v6 = FUN_003e46f4(), temp_v6 != 0)) &&
            (temp_v3 = temp_v3 + 1, (unsigned char)(temp_v1 & ~temp_v0))) &&
           ((*(short *)(temp_v5 + 0x5a) == 0 || (temp_v6 = FUN_0018719c(), temp_v6 == 0)))) &&
          (((*(short *)(temp_v5 + 0x5c) == 0 || (temp_v6 = FUN_0018719c(), temp_v6 == 0)) &&
           (((*(short *)(temp_v5 + 0x5e) == 0 || (temp_v6 = FUN_0018719c(), temp_v6 == 0)) &&
            (((*(short *)(temp_v5 + 0x60) == 0 || (temp_v6 = FUN_0018719c(), temp_v6 == 0)) &&
             ((*(short *)(temp_v5 + 0x62) == 0 || (temp_v5 = FUN_0018719c(), temp_v5 == 0)))))))))))) {
        temp_v0 = 1;
        *(char *)((int)*(char *)(temp_v2 + 0xa4) + temp_v2 + 0xa7) = (char)temp_v3 - '\x01';
      }
      temp_v7 = temp_v7 + 1;
    } while (temp_v7 < temp_v4);
  }
  FUN_00203b40(temp_v2 + 0x40,temp_v3,1,temp_v3,1,1);
  FUN_002a4914(temp_v2 + 0x40,(int)*(char *)((int)*(char *)(temp_v2 + 0xa4) + temp_v2 + 0xa7));
  return;
}
