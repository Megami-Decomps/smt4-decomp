/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a35a4` (_code @ 0x3a35a4, 0x8c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0048d248(int, int);
int FUN_004915d4(int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_00587f28; /* 0x587f28 */
extern unsigned char g_gameState; /* 0x5f15fc */

extern int FUN_001861ec(unsigned char);
extern unsigned char *FUN_00398048(unsigned int);
/* Supplied declaration required: FUN_0048d248. */
/* Supplied declaration required: FUN_004915d4. */


void FUN_003a35a4(void)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned char *puVar4;
  int temp_v3;
  
  puVar4 = (unsigned char *)FUN_00398048(0);
  if (puVar4 == (unsigned char *)0x0) {
    return;
  }
  temp_v3 = FUN_001861ec(*puVar4);
  temp_v2 = DAT_00587f28;
  temp_v0 = *(short *)(temp_v3 + 0x30);
  temp_v1 = *(short *)(temp_v3 + 0x32);
  *(int *)(DAT_00587f28 + 0x30) = (int)*(short *)(temp_v3 + 0x2e);
  *(int *)(temp_v2 + 0x34) = (int)temp_v0;
  *(int *)(temp_v2 + 0x38) = (int)temp_v1;
  FUN_004915d4(temp_v2 + 0x68,(int)*(short *)(temp_v3 + 0x32),(int)*(short *)(temp_v3 + 0x34),
               (int)*(short *)(temp_v3 + 0x36));
  temp_v0 = *(short *)(temp_v3 + 0x2e);
  if (*(int *)(temp_v2 + 0x28) != (int)temp_v0) {
    *(unsigned int *)(temp_v2 + 0x6c) = 0xb;
    *(unsigned int *)(temp_v2 + 0x70) = 0;
    *(int *)(temp_v2 + 200) = (int)temp_v0;
    return;
  }
  (*(unsigned char *)((unsigned char *)&g_gameState + 0x462)) = 1;
  FUN_0048d248(temp_v2 + 0x68,(int)*(short *)(temp_v3 + 0x32));
  return;
}

} /* extern "C" */
