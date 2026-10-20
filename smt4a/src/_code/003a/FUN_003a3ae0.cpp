#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(void);
int scrScriptProcessDestroy(void);
int FUN_002e3328(void);
int FUN_00416c90(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_00573c50; /* 0x573c50 */

/* Supplied declaration required: jobStop. */
extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_00416c90. */


void FUN_003a3ae0(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = jobGetWork();
  temp_v0 = DAT_00573c50;
  if (DAT_00573c50 != 0) {
    if (*(int *)(DAT_00573c50 + 0x184) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v0 + 0x184) = 0;
    }
    if (*(int *)(temp_v0 + 0x30) != 0) {
      FUN_00416c90();
      FUN_002e3328();
      *(unsigned int *)(temp_v0 + 0x30) = 0;
    }
    if (*(int *)(temp_v0 + 0x28) != 0) {
      scrScriptProcessDestroy();
      *(unsigned int *)(temp_v0 + 0x28) = 0;
    }
    if (*(int *)(temp_v0 + 0x24) != 0) {
      asdMemFree();
      *(unsigned int *)(temp_v0 + 0x24) = 0;
    }
    if (DAT_00573c50 != 0) {
      asdMemFree();
      DAT_00573c50 = 0;
    }
  }
  jobStop(*(unsigned int *)(temp_v1 + 0x50),0);
  return;
}

} /* extern "C" */
