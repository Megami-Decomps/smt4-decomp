/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002914e8` (_code @ 0x2914e8, 0x144 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bced4(unsigned char [12]);
int FUN_002a1850(unsigned long long *, int, unsigned int, float *);

/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp9C; /* 0x9c: local_9c */
} void_stack;

extern float DAT_005c1120; /* 0x5c1120 */
extern unsigned int DAT_005c1124; /* 0x5c1124 */
extern unsigned int DAT_005c1128; /* 0x5c1128 */
extern unsigned int DAT_005c112c; /* 0x5c112c */
extern float DAT_006472dc; /* 0x6472dc */
extern unsigned int DAT_006472e0; /* 0x6472e0 */
extern unsigned int DAT_006472e4; /* 0x6472e4 */
extern unsigned int DAT_006472e8; /* 0x6472e8 */
extern unsigned int DAT_006472ec; /* 0x6472ec */
extern unsigned int DAT_006472f0; /* 0x6472f0 */
extern unsigned int DAT_006472f4; /* 0x6472f4 */
extern unsigned int DAT_006472f8; /* 0x6472f8 */

extern unsigned int FUN_00152f54(void);
/* Supplied declaration required: FUN_001bced4. */
/* Supplied declaration required: FUN_002a1850. */


void FUN_002914e8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [12];
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned long long temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  
  temp_v0 = FUN_00152f54();
  temp_v8 = DAT_006472dc;
  uStack_3c = DAT_006472e0;
  uStack_38 = DAT_006472e4;
  DAT_005c1120 = DAT_006472dc;
  DAT_005c1124 = DAT_006472e0;
  DAT_005c1128 = DAT_006472e4;
  DAT_005c112c = DAT_006472e8;
  FUN_002a1850(&temp_v5,0,temp_v0,&temp_v8);
  DAT_006472e4 = temp_v6;
  temp_v0 = 0;
  temp_v7 = 0;
  DAT_006472dc = (float)temp_v5;
  DAT_006472e0 = (unsigned int)((unsigned long long)temp_v5 >> 0x20);
  DAT_006472e8 = 0;
  temp_v6 = 0;
  FUN_001bced4(temp_v1);
  DAT_005c1120 = (float)temp_v2;
  DAT_005c1124 = temp_v3;
  DAT_005c1128 = temp_v4;
  DAT_006472ec = temp_v2;
  DAT_006472f0 = temp_v3;
  DAT_006472f4 = temp_v4;
  DAT_006472f8 = DAT_005c112c;
  DAT_006472dc = (float)(int)temp_v5;
  DAT_006472e0 = (int)((unsigned long long)temp_v5 >> 0x20);
  DAT_006472e8 = temp_v0;
  return;
}

} /* extern "C" */
