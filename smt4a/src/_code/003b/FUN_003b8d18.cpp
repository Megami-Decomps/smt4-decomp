/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8d18` (_code @ 0x3b8d18, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable00FindById(void);
int sysMemClear(unsigned int [129], int);
int scrSetResult(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp218; /* 0x218: local_218 */
} void_stack;

extern unsigned int btlGetMainState(void);
extern int randRange(unsigned int);
extern int dataTableGetCount(unsigned int);
extern unsigned short *dataTableGetEntries(void);
/* Supplied declaration required: dataTable00FindById. */
extern unsigned int scrGetArg(unsigned int);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: scrSetResult. */
extern unsigned int btlGetTable(unsigned int, unsigned int);


unsigned int FUN_003b8d18(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6 [129];
  
  temp_v0 = scrGetArg(0) & 0xffff;
  dataTable00FindById();
  sysMemClear(temp_v6,0x200);
  temp_v3 = (unsigned int)*(unsigned short *)(temp_v0 + 0x60);
  if (temp_v3 != 0x7b6 && temp_v3 != 0) {
    temp_v6[0] = temp_v3;
  }
  temp_v4 = (unsigned int)*(unsigned short *)(temp_v0 + 0x66);
  temp_v5 = (unsigned int)(temp_v3 != 0x7b6 && temp_v3 != 0);
  temp_v3 = temp_v5;
  if (temp_v4 != 0x7b6 && temp_v4 != 0) {
    temp_v3 = temp_v5 + 1;
    temp_v6[temp_v5] = temp_v4;
  }
  temp_v4 = (unsigned int)*(unsigned short *)(temp_v0 + 0x6c);
  temp_v0 = temp_v3;
  if (temp_v4 != 0x7b6 && temp_v4 != 0) {
    temp_v0 = temp_v3 + 1;
    temp_v6[temp_v3] = temp_v4;
  }
  temp_v1 = btlGetMainState();
  temp_v1 = btlGetTable(temp_v1,0x10);
  puVar3 = (unsigned short *)dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v1);
  if (0 < temp_v2) {
    do {
      if (*puVar3 != 0) {
        temp_v6[temp_v0] = (unsigned int)*puVar3;
        temp_v0 = (temp_v0 + 1) & 0xff;
      }
      temp_v2 = temp_v2 - 1;
      puVar3 = puVar3 + 1;
    } while (temp_v2 != 0);
  }
  temp_v2 = randRange((temp_v0 - 1) & 0xffff);
  scrSetResult(temp_v6[temp_v2]);
  return 1;
}

} /* extern "C" */
