/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031cd5c` (_code @ 0x31cd5c, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int scrSetResult(unsigned int);
int FUN_002b06c4(void);
int memClear(unsigned int [129], int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp218; /* 0x218: local_218 */
} void_stack;

extern unsigned int FUN_002451ac(unsigned int, unsigned int);
/* Supplied declaration required: scrSetResult. */
extern unsigned int btlGetMainState(void);
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: FUN_002b06c4. */
extern int FUN_002c09f4(unsigned int);
extern int dataTableGetCount(unsigned int);
extern unsigned short *dataTableGetEntries(void);
/* Supplied declaration required: memClear. */


unsigned int FUN_0031cd5c(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5 [129];
  
  temp_v0 = scrGetArg(0);
  FUN_002b06c4();
  memClear(temp_v5,0x200);
  temp_v1 = (unsigned int)*(unsigned short *)(temp_v0 + 0x58);
  if (temp_v1 != 0) {
    temp_v5[0] = temp_v1;
  }
  temp_v4 = (unsigned int)(temp_v1 != 0);
  temp_v1 = temp_v4;
  if (*(unsigned short *)(temp_v0 + 0x5e) != 0) {
    temp_v1 = temp_v4 + 1;
    temp_v5[temp_v4] = (unsigned int)*(unsigned short *)(temp_v0 + 0x5e);
  }
  temp_v4 = temp_v1;
  if (*(unsigned short *)(temp_v0 + 100) != 0) {
    temp_v4 = temp_v1 + 1;
    temp_v5[temp_v1] = (unsigned int)*(unsigned short *)(temp_v0 + 100);
  }
  temp_v2 = btlGetMainState();
  temp_v2 = FUN_002451ac(temp_v2,0x10);
  puVar4 = (unsigned short *)dataTableGetEntries();
  temp_v3 = dataTableGetCount(temp_v2);
  if (0 < temp_v3) {
    do {
      if (*puVar4 != 0) {
        temp_v5[temp_v4] = (unsigned int)*puVar4;
        temp_v4 = (temp_v4 + 1) & 0xff;
      }
      temp_v3 = temp_v3 - 1;
      puVar4 = puVar4 + 1;
    } while (temp_v3 != 0);
  }
  temp_v3 = FUN_002c09f4((temp_v4 - 1) & 0xffff);
  scrSetResult(temp_v5[temp_v3]);
  return 1;
}

} /* extern "C" */
