#include "romwright_types.h"

extern "C" {

int FUN_002a4d14(void);
int FUN_002a72c0(int);
int FUN_002a775c(void);
int FUN_002c415c(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

/* Supplied declaration required: FUN_002a4d14. */
/* Supplied declaration required: FUN_002a72c0. */
/* Supplied declaration required: FUN_002a775c. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */


void FUN_002fe144(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  if (*(char *)(temp_v0 + 0x1c) != '\0') {
    FUN_002a72c0(0);
    *(unsigned char *)(temp_v0 + 0x1c) = 0;
  }
  if (*(int *)(temp_v0 + 0x18) != 0) {
    FUN_002a775c();
    *(unsigned int *)(temp_v0 + 0x18) = 0;
  }
  FUN_002a4d14();
  FUN_002c415c(temp_v0);
  return;
}

} /* extern "C" */
