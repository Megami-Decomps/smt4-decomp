#include "romwright_types.h"

extern "C" {

int FUN_001846d0(int, int);
int sysMemClear(int, int);
int rt_memcpy(int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0057f578; /* 0x57f578 */

/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: rt_memcpy. */


void FUN_0020401c(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f578;
  *(unsigned int *)(DAT_0057f578 + 8) = 1;
  *(unsigned char *)(temp_v0 + 0x10) = 1;
  FUN_001846d0(temp_v0 + 0x34,0);
  sysMemClear(temp_v0 + 0xc0,0x80);
  temp_v1 = 0;
  do {
    if (*(char *)(param_1 + temp_v1) == '\0') break;
    if (*(char *)(param_1 + temp_v1 + 1) == '\0') {
      temp_v1 = temp_v1 + 1;
      break;
    }
    temp_v1 = temp_v1 + 2;
  } while (temp_v1 < 0x80);
  rt_memcpy(temp_v0 + 0xc0,param_1,temp_v1);
  return;
}

} /* extern "C" */
