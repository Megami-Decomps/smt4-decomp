/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105ef8` (_code @ 0x105ef8, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010e5a4(void);
int FUN_0010e8e8(void);
int FUN_0010edbc(void);
int FUN_0011a324(int);
int FUN_002c1d78(int);
int FUN_002c1dd8(int);
int memClear(unsigned char *, int);
int jyoucyuGetTableEntry(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_0044e0b0; /* 0x44e0b0 */
extern unsigned char DAT_004c5404; /* 0x4c5404 */

/* Supplied declaration required: FUN_0010e5a4. */
/* Supplied declaration required: FUN_0010e8e8. */
/* Supplied declaration required: FUN_0010edbc. */
/* Supplied declaration required: FUN_0011a324. */
/* Supplied declaration required: FUN_002c1d78. */
/* Supplied declaration required: FUN_002c1dd8. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: jyoucyuGetTableEntry. */


void FUN_00105ef8(void)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = jyoucyuGetTableEntry(1);
  if (temp_v0 == 0) {
    FUN_002c1dd8(0);
    FUN_002c1d78(0x6000000);
    FUN_002c1dd8(1);
    FUN_002c1d78(0x6000002);
    FUN_002c1dd8(3);
    FUN_002c1d78(0x6000001);
    FUN_0010e5a4();
    FUN_0010e8e8();
    FUN_0010edbc();
    FUN_0011a324((*(unsigned char *)((unsigned char *)&DAT_0044e0b0 + 0x1)));
    memClear(&DAT_004c5404,0x80);
    jyoucyuGetTableEntry(1);
    return;
  }
  return;
}

} /* extern "C" */
