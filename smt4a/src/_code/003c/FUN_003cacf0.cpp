/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cacf0` (_code @ 0x3cacf0, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int DAT_00570d78; /* 0x570d78 */
extern unsigned int DAT_00570d7c; /* 0x570d7c */
extern unsigned int DAT_00570d80; /* 0x570d80 */
extern unsigned int DAT_00570d84; /* 0x570d84 */
extern unsigned int DAT_00570d90; /* 0x570d90 */
extern unsigned int DAT_00570d94; /* 0x570d94 */

extern int FUN_0014aa78(void);
extern unsigned int FUN_00236038(unsigned int);


unsigned int FUN_003cacf0(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  unsigned int *puVar12;
  
  temp_v6 = FUN_00236038(0);
  temp_v7 = FUN_0014aa78();
  temp_v5 = DAT_00570d94;
  temp_v4 = DAT_00570d90;
  temp_v3 = DAT_00570d84;
  temp_v2 = DAT_00570d80;
  temp_v1 = DAT_00570d7c;
  temp_v0 = DAT_00570d78;
  temp_v10 = 4;
  do {
    puVar12 = (unsigned int *)(*(int *)(temp_v7 + 0x1ffc) + temp_v10 * 0x408);
    temp_v8 = *puVar12;
    temp_v9 = puVar12[1];
    if (((((temp_v9 & temp_v1) != 0 || (temp_v8 & temp_v0) != 0) &&
         ((temp_v9 & temp_v5) == 0 && (temp_v8 & temp_v4) == 0)) &&
        ((temp_v8 & temp_v2) != 0 || (temp_v9 & temp_v3) != 0)) &&
       (*(unsigned short *)((int)puVar12 + 0x166) == temp_v6)) {
      puVar12[0x57] = 0;
    }
    temp_v10 = temp_v10 + 1;
  } while (temp_v10 < 0x36);
  return 1;
}

} /* extern "C" */
