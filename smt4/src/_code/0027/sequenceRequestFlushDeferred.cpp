/* NON_MATCHING: romwright 0.5.0 decompilation of `sequenceRequestFlushDeferred` (_code @ 0x27db40, 0x4c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdSequenceRequest(int, int *, int);

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char DAT_004937a0; /* 0x4937a0 */
extern unsigned int DAT_004937a4; /* 0x4937a4 */
extern unsigned int DAT_004937a8; /* 0x4937a8 */
extern unsigned int DAT_004937ac; /* 0x4937ac */
extern unsigned int DAT_004937b0; /* 0x4937b0 */
extern unsigned int DAT_004937b4; /* 0x4937b4 */
extern unsigned int DAT_004937b8; /* 0x4937b8 */
extern unsigned int DAT_004937bc; /* 0x4937bc */
extern unsigned int DAT_004937c0; /* 0x4937c0 */

/* Supplied declaration required: asdSequenceRequest. */


void sequenceRequestFlushDeferred(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  temp_v0 = DAT_004937a4;
  temp_v1 = DAT_004937a8;
  temp_v2 = DAT_004937ac;
  uStack_1c = DAT_004937b0;
  uStack_18 = DAT_004937b4;
  uStack_14 = DAT_004937b8;
  uStack_10 = DAT_004937bc;
  uStack_c = DAT_004937c0;
  DAT_004937a0 = 0;
  asdSequenceRequest(4,&temp_v0,0x20);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
