/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031e5dc` (_code @ 0x31e5dc, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int FUN_002f0c18(int);
int FUN_0034aae4(void);
int FUN_003a7c3c(int);
int partyEntrySetBit0AndFlag80(int);

extern int FUN_00162ea4(void);
/* Supplied declaration required: sysPlaySe. */
extern unsigned short scrGetArg(void);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_002f0c18. */
/* Supplied declaration required: FUN_0034aae4. */
extern int stateHolder4IsZero2(void);
/* Supplied declaration required: FUN_003a7c3c. */
/* Supplied declaration required: partyEntrySetBit0AndFlag80. */


unsigned char FUN_0031e5dc(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = FUN_002deb84();
  if (temp_v1 == 0) {
    partyEntrySetBit0AndFlag80(temp_v0);
    temp_v1 = FUN_00162ea4();
    if (temp_v1 != 0) {
      return 1;
    }
    FUN_002f0c18(0);
    FUN_003a7c3c(temp_v0);
  }
  temp_v1 = stateHolder4IsZero2();
  if (temp_v1 != 0) {
    FUN_0034aae4();
    sysPlaySe(0x92);
  }
  return temp_v1 != 0;
}

} /* extern "C" */
