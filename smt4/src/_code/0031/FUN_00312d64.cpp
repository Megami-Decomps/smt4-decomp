#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(int);

extern unsigned int FUN_002451ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int FUN_002939f4(void);
extern int FUN_002c09f4(unsigned short);
extern short FUN_002c0c74(unsigned int);
extern int FUN_002c0cc4(void);


unsigned int FUN_00312d64(void)
{
  unsigned int temp_v1;
  
  temp_v1 = FUN_002939f4();
  temp_v1 = FUN_002451ac(temp_v1,0x11);
  FUN_0028dcb0(*(unsigned short *)(FUN_002c0cc4() + FUN_002c09f4(FUN_002c0c74(temp_v1) - 1) * 2));
  return 1;
}
} /* extern "C" */
