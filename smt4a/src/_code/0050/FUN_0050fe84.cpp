/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050fe84` (_code @ 0x50fe84, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00188b60(unsigned int *);
int FUN_002f4370(unsigned int *, unsigned char *, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned char LAB_0042ce3c; /* 0x42ce3c */
extern unsigned int DAT_0062d28c; /* 0x62d28c */
extern unsigned int DAT_0062d290; /* 0x62d290 */
extern unsigned int DAT_0062d294; /* 0x62d294 */
extern unsigned int DAT_0062d298; /* 0x62d298 */
extern unsigned int DAT_0062d29c; /* 0x62d29c */
extern unsigned int DAT_0062d2a0; /* 0x62d2a0 */
extern unsigned int DAT_0062d2a4; /* 0x62d2a4 */

/* Supplied declaration required: FUN_00188b60. */
/* Supplied declaration required: FUN_002f4370. */


void FUN_0050fe84(void)

{
/* irregular: 2 native warning(s); review required */
  DAT_0062d2a4 = 0;
  FUN_00188b60(&DAT_0062d2a4);
  DAT_0062d28c = 0;
  DAT_0062d294 = 0xffffffff;
  DAT_0062d290 = 0;
  DAT_0062d298 = 0;
  DAT_0062d2a0 = 0xffffffff;
  DAT_0062d29c = 0;
  FUN_002f4370(&DAT_0062d298,&LAB_0042ce3c,0x100000);
  return;
}

} /* extern "C" */
