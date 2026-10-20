#include "romwright_types.h"

extern "C" {

int FUN_0026c214(void);
int FUN_00293348(int, int);
int FUN_002bd8e8(int, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_0043dcf0; /* 0x43dcf0 */

/* Supplied declaration required: FUN_0026c214. */
/* Supplied declaration required: FUN_00293348. */
/* Supplied declaration required: FUN_002bd8e8. */


void FUN_0028a368(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int unaff_r4;
  
  temp_v0 = DAT_0043dcf0;
  if (DAT_0043dcf0 != 0) {
    *(unsigned char *)(DAT_0043dcf0 + 0x34) = 0;
    if (param_1 != 0) {
      unaff_r4 = 0;
    }
    *(unsigned char *)(temp_v0 + 0x35) = 0;
    if (param_1 != 0) {
      do {
        FUN_002bd8e8(temp_v0 + unaff_r4 * 0x8c + 0x298,4,0);
        unaff_r4 = unaff_r4 + 1;
      } while (unaff_r4 < 4);
      if (*(char *)(temp_v0 + 0x42) != '\0') {
        FUN_002bd8e8(temp_v0 + 0x4c8,6,0);
      }
      else {
        FUN_002bd8e8(temp_v0 + 0x4c8,4,0);
      }
    }
    if (*(unsigned char *)(temp_v0 + 0x66c) != 0 && *(unsigned char *)(temp_v0 + 0x66c) != 1) {
      FUN_0026c214();
    }
    FUN_00293348(0,1);
    return;
  }
  return;
}

} /* extern "C" */
