#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);
int FUN_00184758(int, int, int);
int FUN_00184c00(int, int, int);
int FUN_0037c8e4(int, int);
int FUN_0038843c(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0057f108; /* 0x57f108 */

/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_0037c8e4. */
/* Supplied declaration required: FUN_0038843c. */


void FUN_002277d8(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  FUN_0037c8e4(1,0);
  FUN_0038843c();
  temp_v0 = DAT_0057f108;
  temp_v1 = 0;
  do {
    temp_v2 = temp_v0 + temp_v1 * 0x8c + 0xe8c;
    FUN_00184758(temp_v2,10,0);
    FUN_00184c00(temp_v2,0x13,0);
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0xd);
  FUN_00184c00(temp_v0 + 0x15a8,6,0);
  FUN_001846d0(temp_v0 + 0x197c,8);
  *(unsigned int *)(temp_v0 + 0x18) = 0;
  FUN_00184c00(temp_v0 + 0x1634,0x16,0);
  return;
}

} /* extern "C" */
