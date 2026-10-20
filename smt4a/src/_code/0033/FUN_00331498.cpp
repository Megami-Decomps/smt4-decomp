#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_002852f0(int);
int FUN_002c76c0(...);
int FUN_002f0c18(void);
int FUN_0034aae4(void);
int FUN_0038b710(int);

/* Supplied declaration required: sysPlaySe. */
extern unsigned int scrGetArg(void);
/* Supplied declaration required: FUN_002852f0. */
/* Supplied declaration required: FUN_002c76c0. */
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002f0c18. */
/* Supplied declaration required: FUN_0034aae4. */
extern int FUN_0038b6f0(void);
/* Supplied declaration required: FUN_0038b710. */


unsigned char FUN_00331498(void)

{
/* irregular: 6 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = FUN_002deb84();
  if (temp_v1 == 0) {
    FUN_002c76c0(1);
    FUN_002f0c18();
    FUN_0038b710(temp_v0);
  }
  temp_v1 = FUN_0038b6f0();
  if (temp_v1 != 0) {
    FUN_0034aae4();
    sysPlaySe(0x92);
    FUN_002c76c0(0xffffffff);
    FUN_002852f0(0);
  }
  return temp_v1 != 0;
}

} /* extern "C" */
