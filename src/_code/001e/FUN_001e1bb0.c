/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e1bb0` (_code @ 0x1e1bb0, 0x154 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} void_stack;

extern float DAT_00472550; /* 0x472550 */
extern unsigned int DAT_00472554; /* 0x472554 */
extern unsigned int DAT_00472558; /* 0x472558 */
extern unsigned int DAT_0047255c; /* 0x47255c */
extern float DAT_004ea91c; /* 0x4ea91c */
extern unsigned int DAT_004ea920; /* 0x4ea920 */
extern unsigned int DAT_004ea924; /* 0x4ea924 */
extern unsigned int DAT_004ea928; /* 0x4ea928 */
extern unsigned int DAT_004ea92c; /* 0x4ea92c */
extern unsigned int DAT_004ea930; /* 0x4ea930 */
extern unsigned int DAT_004ea934; /* 0x4ea934 */
extern unsigned int DAT_004ea938; /* 0x4ea938 */

/* Supplied declaration required: FUN_0026330c. */
/* Supplied declaration required: FUN_0028cbd0. */
extern unsigned int FUN_002c5218(void);


void FUN_001e1bb0(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [12];
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  
  temp_v0 = FUN_002c5218();
  DAT_00472550 = DAT_004ea91c;
  DAT_00472554 = DAT_004ea920;
  DAT_00472558 = DAT_004ea924;
  DAT_0047255c = DAT_004ea928;
  temp_v5 = DAT_004ea91c;
  temp_v6 = DAT_004ea920;
  temp_v7 = DAT_004ea924;
  FUN_0026330c(&temp_v1,0,temp_v0,&temp_v5);
  DAT_004ea924 = temp_v3;
  temp_v0 = 0;
  temp_v4 = 0;
  DAT_004ea91c = (float)temp_v1;
  DAT_004ea928 = 0;
  DAT_004ea920 = temp_v2;
  temp_v3 = 0;
  FUN_0028cbd0(temp_v8);
  DAT_00472550 = (float)temp_v9;
  DAT_00472554 = temp_v10;
  DAT_00472558 = temp_v11;
  DAT_004ea92c = temp_v9;
  DAT_004ea930 = temp_v10;
  DAT_004ea934 = temp_v11;
  DAT_004ea938 = DAT_0047255c;
  DAT_004ea91c = (float)temp_v1;
  DAT_004ea928 = temp_v0;
  DAT_004ea920 = temp_v2;
  return;
}
