/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031ceac` (_code @ 0x31ceac, 0xf0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp218; /* 0x218: local_218 */
} void_stack;

extern unsigned int FUN_00245318(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028df54. */
extern unsigned int FUN_00293c98(void);
extern unsigned int FUN_00296f60(unsigned int);
/* Supplied declaration required: FUN_002b087c. */
extern int FUN_002c0bcc(unsigned int);
extern int FUN_002c0e4c(unsigned int);
extern unsigned short *FUN_002c0e9c(void);
/* Supplied declaration required: FUN_002c4b30. */


unsigned int FUN_0031ceac(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5 [129];
  
  temp_v0 = FUN_00296f60(0);
  FUN_002b087c();
  FUN_002c4b30(temp_v5,0x200);
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
  temp_v2 = FUN_00293c98();
  temp_v2 = FUN_00245318(temp_v2,0x10);
  puVar4 = (unsigned short *)FUN_002c0e9c();
  temp_v3 = FUN_002c0e4c(temp_v2);
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
  temp_v3 = FUN_002c0bcc((temp_v4 - 1) & 0xffff);
  FUN_0028df54(temp_v5[temp_v3]);
  return 1;
}
