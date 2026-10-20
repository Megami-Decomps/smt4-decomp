#include "romwright_types.h"

extern "C" {

int jobStop(unsigned int, int);
int FUN_0040afcc(unsigned int);

typedef int romwright_code(...);
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */
extern unsigned char DAT_0057aa00; /* 0x57aa00 */

/* Supplied declaration required: jobStop. */
extern int jobIsValid(unsigned int);
extern int jobGetWork(void);
/* Supplied declaration required: FUN_0040afcc. */


void FUN_002df6f0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = jobGetWork();
  temp_v1 = jobIsValid(*(unsigned int *)(temp_v0 + 0x58));
  if (temp_v1 != 0) {
    jobStop(*(unsigned int *)(temp_v0 + 0x58),0);
  }
  FUN_0040afcc(DAT_0056fcc0);
  if ((*(int * *)((unsigned char *)&DAT_0057aa00 + 0x8)) != (int *)0x0) {
    (**(romwright_code **)(*(*(int * *)((unsigned char *)&DAT_0057aa00 + 0x8)) + 4))((*(int * *)((unsigned char *)&DAT_0057aa00 + 0x8)));
    (*(int * *)((unsigned char *)&DAT_0057aa00 + 0x8)) = (int *)0x0;
  }
  return;
}

} /* extern "C" */
