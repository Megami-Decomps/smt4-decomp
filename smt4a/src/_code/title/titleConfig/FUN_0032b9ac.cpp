#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_001641c4(void);
int FUN_0019a5a0(void);
int FUN_0019c364(void);

extern unsigned int *DAT_00589164; /* 0x589164 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */


void FUN_0032b9ac(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = DAT_00589164;
  temp_v0 = 0;
  *(unsigned char *)(DAT_00589164 + 1) = 1;
  if (0 < *(short *)((int)puVar1 + 0x1a)) {
    do {
      FUN_001641c4();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)((int)puVar1 + 0x1a));
  }
  temp_v0 = 0;
  if (temp_v0 < *(short *)(puVar1 + 9)) {
    do {
      FUN_001641c4();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(puVar1 + 9));
  }
  if (puVar1[0x57] != 0) {
    FUN_0019c364();
    puVar1[0x57] = 0;
  }
  if (puVar1[0x55] != 0) {
    FUN_0019a5a0();
    puVar1[0x55] = 0;
  }
  if (puVar1[0x56] != 0) {
    FUN_0019a5a0();
    puVar1[0x56] = 0;
  }
  temp_v0 = FUN_00163e40(*puVar1);
  if (temp_v0 != 0) {
    FUN_001631d0(*puVar1,0);
  }
  if (DAT_00589164 != (unsigned int *)0x0) {
    FUN_0019a5a0();
    DAT_00589164 = (unsigned int *)0x0;
  }
  return;
}

} /* extern "C" */
