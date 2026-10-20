/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00122a68` (_code @ 0x122a68, 0xb2 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0010a0c4(unsigned int, int);
int FUN_0010d128(int, unsigned char *, int [2]);
int FUN_002ea2a8(...);
int FUN_002ea2b4(int, unsigned int);
int ptrHolderDestroy(unsigned char [8]);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_00122799; /* 0x122799 */
extern unsigned char DAT_0055b300; /* 0x55b300 */

extern unsigned int *initVtable00558510(void);
extern unsigned int constructObj00558838(int, int);
/* Supplied declaration required: FUN_0010a0c4. */
/* Supplied declaration required: FUN_0010d128. */
extern int operatorNew(unsigned int);
extern int FUN_002e7908(unsigned int *, unsigned int *);
extern unsigned int FUN_002ea268(void);
/* Supplied declaration required: FUN_002ea2a8. */
/* Supplied declaration required: FUN_002ea2b4. */
/* Supplied declaration required: ptrHolderDestroy. */
extern unsigned int FUN_002ea704(void);


int FUN_00122a68(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4 [2];
  unsigned char temp_v5 [8];
  unsigned int temp_v6 [3];
  
  puVar1 = (unsigned int *)initVtable00558510();
  *puVar1 = (unsigned int)&DAT_0055b300;
  puVar1[0x46] = 0;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 200;
  temp_v6[0] = 0x10001;
  temp_v0 = FUN_002e7908(puVar1 + 0x4c,temp_v6);
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  *(unsigned char *)(temp_v0 + 0x10) = 0;
  *(unsigned char *)(temp_v0 + 0x11) = 0;
  *(unsigned char *)(temp_v0 + 0x12) = 0;
  temp_v0 = FUN_002ea2a8(temp_v0 + 0x14,0);
  temp_v3 = temp_v0 - 0x144;
  temp_v1 = FUN_002ea704();
  FUN_0010a0c4(temp_v1,0);
  temp_v4[0] = temp_v3;
  FUN_0010d128(temp_v3,&LAB_00122799,temp_v4);
  temp_v2 = operatorNew(0x1c);
  temp_v1 = 0;
  if (temp_v2 != 0) {
    temp_v1 = FUN_002ea268();
  }
  temp_v1 = FUN_002ea2a8(temp_v5,temp_v1);
  FUN_002ea2b4(temp_v0,temp_v1);
  ptrHolderDestroy(temp_v5);
  temp_v2 = operatorNew(8);
  temp_v1 = 0;
  if (temp_v2 != 0) {
    temp_v1 = constructObj00558838(temp_v2,temp_v3);
  }
  *(unsigned int *)(temp_v0 - 0x20) = temp_v1;
  return temp_v3;
}

} /* extern "C" */
