/* NON_MATCHING: native C1/vtable names and MessageId constructor-return chaining need integration; the vtable callback at 0x3bbf08 has no named function unit. */
#include "romwright_types.h"

extern "C" {

int asdCecInit(void);
int FUN_001db548(void);
int asdCecSetBoxArgs(unsigned int, unsigned int);

extern unsigned char LAB_003bbed0; /* 0x3bbed0 */
extern unsigned char LAB_003bbee8; /* 0x3bbee8 */
extern unsigned char DAT_00420a24; /* 0x420a24 */
extern unsigned int DAT_0043ddb8; /* 0x43ddb8 */

/* Supplied declaration required: asdCecInit. */
/* Supplied declaration required: FUN_001db548. */
/* Supplied declaration required: asdCecSetBoxArgs. */
extern int asdCecMessageIdInit(unsigned int *);
extern unsigned int asdLoadFileSyncDefault(unsigned char *);
extern unsigned int FUN_00357818(unsigned int);


int FUN_003bbe6c(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_00420a24;
  param_1[2] = 0;
  temp_v0 = asdCecMessageIdInit(param_1 + 3);
  FUN_001db548();
  asdCecInit();
  temp_v1 = asdLoadFileSyncDefault(&LAB_003bbed0);
  *(unsigned int *)(temp_v0 - 8) = temp_v1;
  temp_v1 = asdLoadFileSyncDefault(&LAB_003bbee8);
  *(unsigned int *)(temp_v0 - 4) = temp_v1;
  temp_v1 = FUN_00357818(0xe5c);
  asdCecSetBoxArgs(temp_v1,DAT_0043ddb8);
  return temp_v0 - 0xc;
}

} /* extern "C" */
