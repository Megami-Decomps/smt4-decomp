#include "romwright_types.h"

extern "C" {

int FUN_002a4d14(void);
int FUN_002a72c0(int);
int asdMdlManagerDestroy(void);
int asdMemFree(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_002a4d14. */
/* Supplied declaration required: FUN_002a72c0. */
/* Supplied declaration required: asdMdlManagerDestroy. */
extern int jobGetWork(void);
/* Supplied declaration required: asdMemFree. */


void FUN_002fe144(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = jobGetWork();
  if (*(char *)(temp_v0 + 0x1c) != '\0') {
    FUN_002a72c0(0);
    *(unsigned char *)(temp_v0 + 0x1c) = 0;
  }
  if (*(int *)(temp_v0 + 0x18) != 0) {
    asdMdlManagerDestroy();
    *(unsigned int *)(temp_v0 + 0x18) = 0;
  }
  FUN_002a4d14();
  asdMemFree(temp_v0);
  return;
}

} /* extern "C" */
