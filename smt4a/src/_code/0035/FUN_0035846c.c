/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035846c` (_code @ 0x35846c, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} void_stack;

extern int DAT_005806a4; /* 0x5806a4 */
extern int DAT_00581274; /* 0x581274 */
extern int DAT_00581288; /* 0x581288 */
extern unsigned int DAT_005f1604; /* 0x5f1604 */
extern signed char DAT_005f18c4; /* 0x5f18c4 */
extern unsigned char DAT_005f1b70; /* 0x5f1b70 */
extern unsigned int DAT_005f1b74; /* 0x5f1b74 */
extern unsigned int DAT_005f1b78; /* 0x5f1b78 */
extern unsigned int DAT_005f1b7c; /* 0x5f1b7c */
extern unsigned int DAT_005f1b80; /* 0x5f1b80 */
extern unsigned int DAT_005f1b84; /* 0x5f1b84 */
extern unsigned int DAT_005f1b88; /* 0x5f1b88 */
extern unsigned int DAT_005f1b8c; /* 0x5f1b8c */
extern unsigned int DAT_005f1b90; /* 0x5f1b90 */
extern unsigned int DAT_005f1b94; /* 0x5f1b94 */
extern unsigned int DAT_005f1b98; /* 0x5f1b98 */
extern unsigned int DAT_005f1b9c; /* 0x5f1b9c */
extern unsigned int DAT_005f1ba0; /* 0x5f1ba0 */
extern unsigned int DAT_005f1ba4; /* 0x5f1ba4 */
extern unsigned int DAT_005f1ba8; /* 0x5f1ba8 */
extern unsigned int DAT_005f1bac; /* 0x5f1bac */


void FUN_0035846c(void)

{
  if (DAT_005f18c4 == '\0') {
    DAT_005f1b70 = 1;
    DAT_005f1b74 = *(unsigned int *)(DAT_00581274 + 0x30);
    DAT_005f1b78 = *(unsigned int *)(DAT_00581274 + 0x34);
    DAT_005f1b7c = DAT_005f1604;
    DAT_005f1b80 = *(unsigned int *)(DAT_00581288 + 0x1c);
    DAT_005f1b84 = *(unsigned int *)(DAT_00581288 + 0x20);
    DAT_005f1b88 = *(unsigned int *)(DAT_00581288 + 0x24);
    DAT_005f1b8c = *(unsigned int *)(DAT_00581288 + 0x4c);
    DAT_005f1b90 = *(unsigned int *)(DAT_005806a4 + 0x18);
    DAT_005f1b94 = *(unsigned int *)(DAT_00581274 + 0x30);
    DAT_005f1b98 = *(unsigned int *)(DAT_00581274 + 0x34);
    DAT_005f1b9c = *(unsigned int *)(DAT_00581288 + 0x1c);
    DAT_005f1ba0 = *(unsigned int *)(DAT_00581288 + 0x20);
    DAT_005f1ba4 = *(unsigned int *)(DAT_00581288 + 0x24);
    DAT_005f1ba8 = *(unsigned int *)(DAT_00581288 + 0x4c);
    DAT_005f1bac = *(unsigned int *)(DAT_005806a4 + 0x18);
    return;
  }
  DAT_005f18c4 = 0;
  return;
}
