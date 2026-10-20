#include "romwright_types.h"

extern "C" {

int FUN_002a7218(void);
int FUN_002c415c(...);
int FUN_002c43b4(unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned int *DAT_00435d48; /* 0x435d48 */

/* Supplied declaration required: FUN_002a7218. */
extern int FUN_002bf244(unsigned int);
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */


void FUN_0021ecfc(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002c08f0();
  puVar1 = DAT_00435d48;
  if (DAT_00435d48 != (unsigned int *)0x0) {
    if (DAT_00435d48[2] != 0) {
      FUN_002c415c();
      puVar1[2] = 0;
    }
    if (puVar1[3] != 0) {
      FUN_002c415c();
      puVar1[3] = 0;
    }
    if (puVar1[4] != 0) {
      FUN_002c415c();
      puVar1[4] = 0;
    }
    if (puVar1[5] != 0) {
      FUN_002a7218();
      puVar1[5] = 0;
    }
    *puVar1 = 0;
    FUN_002c415c(DAT_00435d48);
    DAT_00435d48 = (unsigned int *)0x0;
  }
  temp_v1 = FUN_002bf244(*(unsigned int *)(temp_v0 + 0x50));
  if (temp_v1 != 0) {
    FUN_002c43b4(*(unsigned int *)(temp_v0 + 0x50),0);
    return;
  }
  return;
}

} /* extern "C" */
