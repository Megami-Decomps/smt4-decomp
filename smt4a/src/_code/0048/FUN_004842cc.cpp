#include "romwright_types.h"

extern "C" {

int FUN_001641c4(void);
int sysPlaySe(int);
int FUN_001695a0(void);
int asdMemFree(unsigned int);
int FUN_0019a7f4(int, int);
int scrScriptProcessDestroy(unsigned int);
int FUN_001b4a90(int, int, unsigned int);
int asdTMTexTableFreeEntry(int);
int FUN_0037b450(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned short DAT_00588108; /* 0x588108 */

/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: FUN_0037b450. */


void FUN_004842cc(int param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  
  sysPlaySe(DAT_00588108);
  FUN_0037b450();
  if (0 < *(short *)(param_1 + 0x55c)) {
    temp_v0 = 0;
    do {
      FUN_001641c4();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0x55c));
    FUN_001b4a90(param_1 + 0x438,0x124,0xffffffff);
    *(unsigned short *)(param_1 + 0x55c) = 0;
  }
  FUN_0019a7f4(0x23,0);
  asdTMTexTableFreeEntry(0x23);
  scrScriptProcessDestroy(*(unsigned int *)(param_1 + 0x26c));
  asdMemFree(*(unsigned int *)(param_1 + 0x268));
  asdMemFree(*(unsigned int *)(param_1 + 0x264));
  FUN_001695a0();
  return;
}

} /* extern "C" */
