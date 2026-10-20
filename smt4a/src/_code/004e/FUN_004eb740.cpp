/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004eb740` (_code @ 0x4eb740, 0xe8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003e77cc(int, int, int, int, unsigned int);
int FUN_003e81bc(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_btlScriptUnit; /* 0x57113c */

extern int gameDataBlocksGetSaveData(void);
/* Supplied declaration required: FUN_003e77cc. */
/* Supplied declaration required: FUN_003e81bc. */
extern int FUN_003edca0(int);
extern int FUN_004ea0c0(int *);


void FUN_004eb740(int *param_1)

{
/* irregular: irregular input(s): in_s16; 2 native warning(s); review required */
  int temp_v0;
  unsigned int in_s16;
  
  if (*(int *)(*param_1 + 0xa8) == 8) {
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x26;
    return;
  }
  temp_v0 = FUN_004ea0c0(param_1);
  if (temp_v0 != 0) {
    *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x24;
    return;
  }
  temp_v0 = FUN_003edca0(*param_1);
  if (temp_v0 != 0) {
    temp_v0 = *param_1;
    FUN_003e81bc();
    FUN_003e77cc(*param_1,1,(int)*(short *)(*(int *)(*param_1 + 0x1ed4) + 0x68),
                 (int)*(short *)(temp_v0 + 0x6e),in_s16);
    temp_v0 = gameDataBlocksGetSaveData();
    *(unsigned char *)(temp_v0 + 0x27e3e) = 0;
  }
  *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0xa4) * 0x1254 + 9) = 0x26;
  return;
}

} /* extern "C" */
