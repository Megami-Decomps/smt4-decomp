#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int asdMemFree(void);
int FUN_0019a7f4(int, int);
int scrScriptProcessDestroy(void);
int FUN_002c85b0(int);
int asdTMTexTableFreeEntry(int);
int FUN_00318d6c(void);
int FUN_00333f6c(void);
int FUN_0035b304(void);
int FUN_0037b450(void);
int FUN_0040a244(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_002c85b0. */
/* Supplied declaration required: asdTMTexTableFreeEntry. */
/* Supplied declaration required: FUN_00318d6c. */
/* Supplied declaration required: FUN_00333f6c. */
/* Supplied declaration required: FUN_0035b304. */
/* Supplied declaration required: FUN_0037b450. */
/* Supplied declaration required: FUN_0040a244. */


void FUN_00497144(int param_1)

{
/* irregular: 11 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = jobIsValid(*(unsigned int *)(param_1 + 0x16020));
  if (temp_v0 != 0) {
    jobStop(*(unsigned int *)(param_1 + 0x16020),0);
  }
  temp_v0 = jobIsValid(*(unsigned int *)(param_1 + 0x16024));
  if (temp_v0 != 0) {
    jobStop(*(unsigned int *)(param_1 + 0x16024),0);
  }
  FUN_0019a7f4(0x20,0);
  asdTMTexTableFreeEntry(0x20);
  if (*(int *)(param_1 + 0x18c) != 0) {
    scrScriptProcessDestroy();
    *(unsigned int *)(param_1 + 0x18c) = 0;
  }
  if (*(int *)(param_1 + 400) != 0) {
    scrScriptProcessDestroy();
    *(unsigned int *)(param_1 + 400) = 0;
  }
  if (*(int *)(param_1 + 0x184) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x184) = 0;
  }
  if (*(int *)(param_1 + 0x188) != 0) {
    asdMemFree();
    *(unsigned int *)(param_1 + 0x188) = 0;
  }
  if (*(int *)(param_1 + 0x16004) != 0) {
    FUN_002c85b0(0);
    FUN_00333f6c();
  }
  if (*(int *)(param_1 + 0x16054) != 0) {
    FUN_0040a244();
    *(unsigned int *)(param_1 + 0x16054) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 1) {
    FUN_0035b304();
  }
  FUN_0037b450();
  FUN_00318d6c();
  return;
}

} /* extern "C" */
