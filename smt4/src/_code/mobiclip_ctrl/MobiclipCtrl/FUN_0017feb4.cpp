/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017feb4` (_code @ 0x17feb4, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdMemFree(unsigned int);
int FUN_0034e9b8(void);
int FUN_00351b44(void);
int videoResetFilterState(void);
int videoResetSecondaryFilterState(void);
int videoResetDeblockerState(void);
int FUN_003f60a4(void);
int mobiclipAllocatorReset(void);
int videoResetAuxFilterState(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_004c3828; /* 0x4c3828 */
extern unsigned int DAT_004c3858; /* 0x4c3858 */
extern unsigned int DAT_004c3880; /* 0x4c3880 */
extern unsigned int DAT_004c38b0; /* 0x4c38b0 */
extern unsigned int DAT_004c38d8; /* 0x4c38d8 */
extern unsigned int DAT_004c3908; /* 0x4c3908 */
extern unsigned int DAT_004c3930; /* 0x4c3930 */
extern unsigned int DAT_004c3960; /* 0x4c3960 */
extern unsigned int DAT_004c3988; /* 0x4c3988 */
extern unsigned int DAT_004c39b8; /* 0x4c39b8 */
extern unsigned int DAT_004c39e0; /* 0x4c39e0 */
extern unsigned int DAT_004c3a10; /* 0x4c3a10 */

/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: FUN_0034e9b8. */
/* Supplied declaration required: FUN_00351b44. */
/* Supplied declaration required: videoResetFilterState. */
/* Supplied declaration required: videoResetSecondaryFilterState. */
/* Supplied declaration required: videoResetDeblockerState. */
/* Supplied declaration required: FUN_003f60a4. */
/* Supplied declaration required: mobiclipAllocatorReset. */
/* Supplied declaration required: videoResetAuxFilterState. */
extern void nn_fnd_ExpHeapBase_Finalize(unsigned int);


void FUN_0017feb4(void)

{
/* irregular: 9 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_0034e9b8();
  FUN_00351b44();
  videoResetAuxFilterState();
  videoResetSecondaryFilterState();
  videoResetFilterState();
  FUN_003f60a4();
  mobiclipAllocatorReset();
  videoResetDeblockerState();
  temp_v0 = DAT_004c3858;
  nn_fnd_ExpHeapBase_Finalize((unsigned int)&DAT_004c3828);
  asdMemFree(temp_v0);
  temp_v0 = DAT_004c38b0;
  nn_fnd_ExpHeapBase_Finalize((unsigned int)&DAT_004c3880);
  asdMemFree(temp_v0);
  temp_v0 = DAT_004c3908;
  nn_fnd_ExpHeapBase_Finalize((unsigned int)&DAT_004c38d8);
  asdMemFree(temp_v0);
  temp_v0 = DAT_004c3960;
  nn_fnd_ExpHeapBase_Finalize((unsigned int)&DAT_004c3930);
  asdMemFree(temp_v0);
  temp_v0 = DAT_004c39b8;
  nn_fnd_ExpHeapBase_Finalize((unsigned int)&DAT_004c3988);
  asdMemFree(temp_v0);
  temp_v0 = DAT_004c3a10;
  nn_fnd_ExpHeapBase_Finalize((unsigned int)&DAT_004c39e0);
  asdMemFree(temp_v0);
  return;
}

} /* extern "C" */
