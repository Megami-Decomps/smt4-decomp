/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a903c` (_code @ 0x3a903c, 0xac bytes) from smt4a.cxi.
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

extern int btlGetMainState(void);
extern unsigned int scrGetArg(unsigned int);


unsigned int FUN_003a903c(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  unsigned int *puVar13;
  
  temp_v6 = scrGetArg(0);
  temp_v7 = scrGetArg(1);
  temp_v8 = btlGetMainState();
  temp_v5 = DAT_00570d94;
  temp_v4 = DAT_00570d90;
  temp_v3 = DAT_00570d84;
  temp_v2 = DAT_00570d80;
  temp_v1 = DAT_00570d7c;
  temp_v0 = DAT_00570d78;
  temp_v11 = 4;
  do {
    puVar13 = (unsigned int *)(*(int *)(temp_v8 + 0x1ffc) + temp_v11 * 0x408);
    temp_v9 = *puVar13;
    temp_v10 = puVar13[1];
    if (((((temp_v10 & temp_v1) != 0 || (temp_v9 & temp_v0) != 0) &&
         ((temp_v10 & temp_v5) == 0 && (temp_v9 & temp_v4) == 0)) &&
        ((temp_v9 & temp_v2) != 0 || (temp_v10 & temp_v3) != 0)) &&
       (*(unsigned short *)((int)puVar13 + 0x166) == temp_v6)) {
      puVar13[0x57] = temp_v7;
    }
    temp_v11 = temp_v11 + 1;
  } while (temp_v11 < 0x36);
  return 1;
}

} /* extern "C" */
