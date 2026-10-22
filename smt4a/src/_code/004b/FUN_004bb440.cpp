/* NON_MATCHING: native C1/vtable names and MessageId constructor-return chaining need integration; vtable callback 0x4bb4dc has no named function unit. */
#include "romwright_types.h"

extern "C" {

int asdCecSetBoxArgs(unsigned int, unsigned int);
int asdLoadFileSyncDefault(void);
int asdCecInit(void);
int FUN_0028022c(void);

extern unsigned char LAB_004bb4a4; /* 0x4bb4a4 */
extern unsigned char LAB_004bb4bc; /* 0x4bb4bc */
extern unsigned char DAT_00557ec8; /* 0x557ec8 */
extern unsigned int g_resourceDispatchContext; /* 0x57f2c8 */

/* Supplied declaration required: asdCecSetBoxArgs. */
/* Supplied declaration required: asdLoadFileSyncDefault. */
/* Supplied declaration required: asdCecInit. */
/* Supplied declaration required: FUN_0028022c. */
extern unsigned int FUN_0042d694(unsigned int);
extern int asdCecMessageIdInit(unsigned int *);


int FUN_004bb440(unsigned int *param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  
  param_1[1] = 0;
  *param_1 = (unsigned int)&DAT_00557ec8;
  param_1[2] = 0;
  temp_v0 = asdCecMessageIdInit(param_1 + 3);
  FUN_0028022c();
  asdCecInit();
  puVar2 = &LAB_004bb4a4;
  asdLoadFileSyncDefault();
  *(unsigned char **)(temp_v0 - 8) = puVar2;
  puVar2 = &LAB_004bb4bc;
  asdLoadFileSyncDefault();
  *(unsigned char **)(temp_v0 - 4) = puVar2;
  temp_v1 = FUN_0042d694(0x19a2);
  asdCecSetBoxArgs(temp_v1,g_resourceDispatchContext);
  return temp_v0 - 0xc;
}

} /* extern "C" */
