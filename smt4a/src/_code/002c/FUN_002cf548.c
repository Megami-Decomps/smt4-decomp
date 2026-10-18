/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf548` (_code @ 0x2cf548, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned int DAT_005c1120; /* 0x5c1120 */
extern unsigned int DAT_005c1124; /* 0x5c1124 */
extern unsigned int DAT_005c1128; /* 0x5c1128 */
extern unsigned int DAT_005c112c; /* 0x5c112c */
extern unsigned int DAT_006472dc; /* 0x6472dc */
extern unsigned int DAT_006472e0; /* 0x6472e0 */
extern unsigned int DAT_006472e4; /* 0x6472e4 */
extern unsigned int DAT_006472e8; /* 0x6472e8 */

extern unsigned int FUN_00152f54(void);
/* Supplied declaration required: FUN_002a1850. */


void FUN_002cf548(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int uStack_24;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int uStack_14;
  unsigned int temp_v4;
  
  temp_v0 = FUN_00152f54();
  temp_v3 = DAT_006472dc;
  uStack_14 = DAT_006472e0;
  temp_v4 = DAT_006472e4;
  DAT_005c1120 = DAT_006472dc;
  DAT_005c1124 = DAT_006472e0;
  DAT_005c1128 = DAT_006472e4;
  DAT_005c112c = DAT_006472e8;
  FUN_002a1850(&temp_v1,0,temp_v0,&temp_v3);
  DAT_006472dc = temp_v1;
  DAT_006472e0 = uStack_24;
  DAT_006472e4 = temp_v2;
  DAT_006472e8 = 0;
  return;
}
