#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(int);
int FUN_003307dc(void);
int FUN_0035bb70(void);
int FUN_003a6c18(void);
int FUN_003d9280(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_005702f4; /* 0x5702f4 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_003307dc. */
/* Supplied declaration required: FUN_0035bb70. */
/* Supplied declaration required: FUN_003a6c18. */
/* Supplied declaration required: FUN_003d9280. */


void FUN_00282c4c(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00164a9c();
  temp_v1 = FUN_00163e40(*(unsigned int *)(temp_v0 + 0x52c));
  if (temp_v1 != 0) {
    FUN_001631d0(*(unsigned int *)(temp_v0 + 0x52c),0);
  }
  temp_v1 = FUN_00163e40(*(unsigned int *)(temp_v0 + 0x530));
  if (temp_v1 != 0) {
    FUN_001631d0(*(unsigned int *)(temp_v0 + 0x530),0);
  }
  temp_v1 = FUN_00163e40(*(unsigned int *)(temp_v0 + 0x534));
  if (temp_v1 != 0) {
    FUN_001631d0(*(unsigned int *)(temp_v0 + 0x534),0);
  }
  FUN_0035bb70();
  FUN_003307dc();
  if (*(char *)(temp_v0 + 0x538) == '\0') {
    FUN_003a6c18();
  }
  FUN_0019a5a0(temp_v0);
  DAT_005702f4 = 0;
  FUN_003d9280();
  return;
}

} /* extern "C" */
