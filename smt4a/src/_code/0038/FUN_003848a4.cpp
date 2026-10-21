/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003848a4` (_code @ 0x3848a4, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdSequenceRequest(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_005f1b70; /* 0x5f1b70 */
extern int DAT_005f1b74; /* 0x5f1b74 */
extern unsigned int DAT_005f1b78; /* 0x5f1b78 */
extern unsigned int DAT_005f1b80; /* 0x5f1b80 */
extern unsigned int DAT_005f1b84; /* 0x5f1b84 */
extern unsigned int DAT_005f1b88; /* 0x5f1b88 */
extern unsigned int DAT_005f1b8c; /* 0x5f1b8c */
extern int DAT_005f1b94; /* 0x5f1b94 */
extern unsigned int DAT_005f1b98; /* 0x5f1b98 */
extern unsigned int DAT_005f1b9c; /* 0x5f1b9c */
extern unsigned int DAT_005f1ba0; /* 0x5f1ba0 */
extern unsigned int DAT_005f1ba4; /* 0x5f1ba4 */
extern unsigned int DAT_005f1ba8; /* 0x5f1ba8 */
extern int g_mapSelection; /* 0x5f1c98 */

/* Supplied declaration required: asdSequenceRequest. */


void FUN_003848a4(void)

{
/* irregular: irregular input(s): in_r3; 2 native warning(s); review required */
  int in_r3;
  int temp_v0 [2];
  
  temp_v0[0] = in_r3;
  if (DAT_005f1b70 != '\0') {
    if (DAT_005f1b94 >= 200) {
      temp_v0[0] = DAT_005f1b94 - 200;
      DAT_005f1b78 = 0;
      asdSequenceRequest(0xe,temp_v0,4);
      return;
    }
    if (DAT_005f1b94 < 100) {
      asdSequenceRequest(6,0,0,in_r3);
      return;
    }
    if (DAT_005f1b74 < 100) {
      DAT_005f1b74 = DAT_005f1b94;
      DAT_005f1b78 = DAT_005f1b98;
      DAT_005f1b80 = DAT_005f1b9c;
      DAT_005f1b84 = DAT_005f1ba0;
      DAT_005f1b88 = DAT_005f1ba4;
      DAT_005f1b8c = DAT_005f1ba8;
    }
  }
  else {
    if (g_mapSelection == -1) {
      temp_v0[0] = 3;
      asdSequenceRequest(0xe,temp_v0,4);
      return;
    }
    if (g_mapSelection >= 200) {
      temp_v0[0] = g_mapSelection - 200;
      asdSequenceRequest(0xe,temp_v0,4);
      return;
    }
    if (g_mapSelection < 100) {
      asdSequenceRequest(6,0,0,in_r3);
      return;
    }
  }
  asdSequenceRequest(8,0,0,in_r3);
  return;
}

} /* extern "C" */
