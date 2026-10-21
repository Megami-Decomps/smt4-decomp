/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b31ac` (_code @ 0x3b31ac, 0x10c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdGxSetEffectColorFromRGBA8(...);
int FUN_002b3c9c(unsigned short *, unsigned int);
int FUN_002f8a54(void);
int FUN_00338330(unsigned short *, int, int, int);
int FUN_0038136c(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_006472dc; /* 0x6472dc */
extern unsigned int DAT_006472e0; /* 0x6472e0 */
extern unsigned int DAT_006472e4; /* 0x6472e4 */
extern unsigned int DAT_006472e8; /* 0x6472e8 */
extern unsigned int DAT_006472ec; /* 0x6472ec */
extern unsigned int DAT_006472f0; /* 0x6472f0 */
extern unsigned int DAT_006472f4; /* 0x6472f4 */
extern unsigned int DAT_006472f8; /* 0x6472f8 */

extern unsigned int FUN_00221cb0(void);
/* Supplied declaration required: asdGxSetEffectColorFromRGBA8. */
/* Supplied declaration required: FUN_002b3c9c. */
/* Supplied declaration required: FUN_002f8a54. */
/* Supplied declaration required: FUN_00338330. */
/* Supplied declaration required: FUN_0038136c. */


void FUN_003b31ac(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  
  temp_v3 = *(int *)(param_1 + 0x40);
  puVar4 = *(unsigned short **)(*(int *)(param_1 + 0x3c) + 4);
  if ((*(unsigned int *)(temp_v3 + 0x34) < *(unsigned int *)(param_1 + 0x34)) && (*(unsigned int *)(temp_v3 + 0x34) != 0)) {
    return;
  }
  temp_v1 = temp_v3;
  FUN_0038136c(temp_v3,temp_v3 + 0x24);
  asdGxSetEffectColorFromRGBA8(*(unsigned int *)(param_1 + 0x30));
  DAT_006472ec = DAT_006472dc;
  DAT_006472f0 = DAT_006472e0;
  DAT_006472f4 = DAT_006472e4;
  DAT_006472f8 = DAT_006472e8;
  asdGxSetEffectColorFromRGBA8(temp_v1);
  FUN_002f8a54();
  temp_v2 = FUN_00221cb0();
  *(unsigned int *)(puVar4 + 0x28) =
       (temp_v2 & 0xff) | (((temp_v2 >> 8) & 0xff) << 8) | (((temp_v2 >> 0x10) & 0xff) << 0x10) |
       (temp_v2 & 0xff000000);
  FUN_00338330(puVar4,param_1,param_1 + 0x10,param_1 + 0x20);
  if (*(char *)(temp_v3 + 0x56) != '\0') {
    temp_v0 = *puVar4 | 0x100;
  }
  else {
    temp_v0 = *puVar4 & 0xfeff;
  }
  *puVar4 = temp_v0;
  FUN_002b3c9c(puVar4,*(unsigned int *)(temp_v3 + 0x28) & 0xffff);
  return;
}

} /* extern "C" */
