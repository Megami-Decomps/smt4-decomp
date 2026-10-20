#include "romwright_types.h"

extern "C" {

int FUN_0012f2ce(int, int);
int FUN_002e9538(unsigned int, unsigned int);
int FUN_002e95c4(...);
int FUN_002e9614(int, int);

/* Supplied declaration required: FUN_0012f2ce. */
/* Supplied declaration required: FUN_002e9538. */
extern unsigned int FUN_002e95ba(int);
/* Supplied declaration required: FUN_002e95c4. */
/* Supplied declaration required: FUN_002e9614. */


void FUN_002e9974(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  
  if (*(char *)(param_2 + 0x65) != '\0') {
    temp_v0 = FUN_002e95ba(param_2);
    FUN_002e95c4(param_1,temp_v0);
    *(unsigned char *)(param_1 + 0x65) = 1;
  }
  else {
    FUN_002e95c4(param_1,0);
  }
  if (*(char *)(param_2 + 100) != '\0') {
    FUN_002e9538(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_2 + 4));
    *(unsigned char *)(param_1 + 8) = *(unsigned char *)(param_2 + 8);
    FUN_0012f2ce(param_1 + 0xc,param_2 + 0xc);
    int d = param_1 + 0x28;
    int s = param_2 + 0x28;
    FUN_002e9614(d,s);
    d = param_1 + 0x44;
    s = param_2 + 0x44;
    FUN_002e9614(d,s);
    *(unsigned char *)(param_1 + 100) = 1;
  }
  *(unsigned char *)(param_1 + 0x66) = *(unsigned char *)(param_2 + 0x66);
  return;
}

} /* extern "C" */
