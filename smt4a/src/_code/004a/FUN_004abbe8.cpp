#include "romwright_types.h"

extern "C" {

int FUN_001a9104(unsigned int *, unsigned int *);
int FUN_0050d794(unsigned int *, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

/* Supplied declaration required: FUN_001a9104. */
extern unsigned short FUN_003ea1cc(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0050d794. */


void FUN_004abbe8(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned short temp_v0;
  unsigned int *puVar3;
  
  puVar1 = (*(unsigned int * *)((unsigned char *)&DAT_0057a9b8 + 0x10));
  puVar3 = puVar1 + 0x1d3f;
  FUN_0050d794(puVar1 + 0x1d3f,0xffffffff);
  temp_v0 = FUN_003ea1cc(*puVar1,0);
  *(unsigned short *)(puVar1 + 0x1d3f) = temp_v0;
  temp_v0 = FUN_003ea1cc(*puVar1,1);
  *(unsigned short *)((int)puVar1 + 0x74fe) = temp_v0;
  temp_v0 = FUN_003ea1cc(*puVar1,2);
  *(unsigned short *)(puVar1 + 0x1d40) = temp_v0;
  temp_v0 = FUN_003ea1cc(*puVar1,3);
  *(unsigned short *)((int)puVar1 + 0x7502) = temp_v0;
  FUN_001a9104(puVar1 + 0xa31,puVar3);
  return;
}

} /* extern "C" */
