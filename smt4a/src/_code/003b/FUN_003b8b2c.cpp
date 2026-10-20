/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8b2c` (_code @ 0x3b8b2c, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned int DAT_00570d78; /* 0x570d78 */
extern unsigned int DAT_00570d7c; /* 0x570d7c */
extern unsigned int DAT_00570d80; /* 0x570d80 */
extern unsigned int DAT_00570d84; /* 0x570d84 */
extern unsigned int DAT_00570d90; /* 0x570d90 */
extern unsigned int DAT_00570d94; /* 0x570d94 */
extern unsigned int DAT_00570d98; /* 0x570d98 */
extern unsigned int DAT_00570d9c; /* 0x570d9c */

extern int FUN_0014aa78(void);
extern unsigned int FUN_00236038(unsigned int);


unsigned int FUN_003b8b2c(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int *puVar11;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  
  temp_v8 = FUN_00236038(0);
  temp_v9 = FUN_0014aa78();
  temp_v7 = DAT_00570d9c;
  temp_v6 = DAT_00570d98;
  temp_v5 = DAT_00570d94;
  temp_v4 = DAT_00570d90;
  temp_v3 = DAT_00570d84;
  temp_v2 = DAT_00570d80;
  temp_v1 = DAT_00570d7c;
  temp_v0 = DAT_00570d78;
  temp_v10 = 4;
  do {
    puVar11 = (unsigned int *)(*(int *)(temp_v9 + 0x1ffc) + temp_v10 * 0x408);
    temp_v11 = *puVar11;
    temp_v12 = puVar11[1];
    if (((((temp_v12 & temp_v1) != 0 || (temp_v11 & temp_v0) != 0) &&
         ((temp_v12 & temp_v5) == 0 && (temp_v11 & temp_v4) == 0)) &&
        ((temp_v12 & temp_v3) != 0 || (temp_v11 & temp_v2) != 0)) &&
       (*(unsigned short *)((int)puVar11 + 0x166) == temp_v8)) {
      *puVar11 = temp_v11 & ~temp_v6;
      puVar11[1] = temp_v12 & ~temp_v7;
      if (puVar11[0x96] == 0) {
        puVar11[0x96] = 1;
      }
    }
    temp_v10 = temp_v10 + 1;
  } while (temp_v10 < 0x36);
  return 1;
}

} /* extern "C" */
