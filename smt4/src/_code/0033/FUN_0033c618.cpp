/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033c618` (_code @ 0x33c618, 0xb8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp58; /* 0x58: local_58 */
} void_stack;

extern int randBetween(int, unsigned int);
extern unsigned int fileLoadSync(unsigned int, int, unsigned int);


unsigned int FUN_0033c618(void)

{
  unsigned char temp_v0;
  char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  char temp_v5;
  unsigned char *pbVar7;
  unsigned char temp_v6 [68];
  
  pbVar7 = temp_v6;
  temp_v1 = '\x01';
  temp_v4 = 0x21;
  temp_v6[0] = 0;
  do {
    temp_v5 = temp_v1 + '\x01';
    pbVar7[1] = temp_v1;
    temp_v4 = temp_v4 - 1;
    temp_v1 = temp_v1 + '\x02';
    pbVar7 = pbVar7 + 2;
    *pbVar7 = temp_v5;
  } while (temp_v4 != 0);
  temp_v4 = 0;
  do {
    temp_v2 = randBetween(temp_v4 + 1,0x42);
    temp_v0 = temp_v6[temp_v4];
    temp_v6[temp_v4] = temp_v6[temp_v2];
    temp_v4 = temp_v4 + 1;
    temp_v6[temp_v2] = temp_v0;
  } while (temp_v4 < 0x21);
  temp_v4 = 0;
  do {
    temp_v2 = (unsigned int)temp_v6[temp_v4] * 0x10;
    if ((*(int *)(temp_v2 + 0x493830) == 0) && (*(char *)(temp_v2 + 0x493838) != '\0')) {
      temp_v3 = fileLoadSync(*(unsigned int *)(temp_v2 + 0x49382c),temp_v2 + 0x493834,0);
      *(unsigned int *)(temp_v2 + 0x493830) = temp_v3;
    }
    temp_v4 = temp_v4 + 1;
  } while (temp_v4 < 0x43);
  return 1;
}

} /* extern "C" */
