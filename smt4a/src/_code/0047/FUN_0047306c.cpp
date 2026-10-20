/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047306c` (_code @ 0x47306c, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00151408(unsigned int, int, int);
int FUN_001527d8(unsigned int, unsigned int);
int FUN_00237210(void);
int FUN_002a1f60(unsigned int, int, unsigned int, int, int, unsigned int, unsigned int);
int FUN_00472f58(unsigned int *, unsigned int, unsigned int, unsigned int);
int FUN_00473910(unsigned int, unsigned int);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned int g_aocMain; /* 0x570260 */

extern unsigned int spriteHandleCreate(unsigned int);
/* Supplied declaration required: FUN_00151408. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_00237210. */
extern unsigned int FUN_0023b4a4(unsigned int);
/* Supplied declaration required: FUN_002a1f60. */
/* Supplied declaration required: FUN_00472f58. */
/* Supplied declaration required: FUN_00473910. */


void FUN_0047306c(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  *param_1 = *param_1 | 0x40;
  puVar3 = param_1 + 0x107;
  if (param_1[0x107] != 0) {
    FUN_00237210();
    *puVar3 = 0;
  }
  temp_v0 = spriteHandleCreate(0);
  param_1[0x107] = temp_v0;
  temp_v1 = FUN_0023b4a4(5);
  FUN_001527d8(*puVar3,temp_v1);
  FUN_00151408(*puVar3,0,0x646464ff);
  temp_v1 = g_aocMain;
  FUN_00473910(g_aocMain,0xffffffff);
  FUN_002a1f60(*puVar3,3,0xffffffff,0,3,temp_v1,param_2);
  temp_v1 = g_aocMain;
  FUN_00473910(g_aocMain,param_2);
  FUN_00472f58(param_1,temp_v1,param_3,param_4);
  return;
}

} /* extern "C" */
