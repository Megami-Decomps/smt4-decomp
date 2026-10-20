/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001067ae` (_code @ 0x1067ae, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int strAssign(int, unsigned int, unsigned int, unsigned int);
int FUN_002e7614(int, int);
int sharedRefHolderDestroy(unsigned char [16]);
int FUN_002ece58(int, int);
int FUN_002ed258(unsigned char [16], unsigned int);
int ringSetLimit(int, int);
int FUN_002ed84a(...);

/* stack frame of param_2: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned char sp20; /* 0x20: local_20 */
} param_2_stack;

/* Supplied declaration required: strAssign. */
extern int operatorNew(unsigned int);
/* Supplied declaration required: FUN_002e7614. */
/* Supplied declaration required: sharedRefHolderDestroy. */
extern unsigned int onlineBufferGetData(void);
/* Supplied declaration required: FUN_002ece58. */
/* Supplied declaration required: FUN_002ed258. */
/* Supplied declaration required: ringSetLimit. */
/* Supplied declaration required: FUN_002ed84a. */
extern int streamWriterWriteU32(unsigned char *, int);


unsigned int FUN_001067ae(unsigned int param_1,int param_2)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char *puVar4;
  unsigned char *puVar5;
  unsigned int temp_v3;
  unsigned char temp_v4 [16];
  unsigned char temp_v5 [4];
  unsigned int uStack_1c;
  int temp_v6;
  
  puVar4 = temp_v4;
  puVar5 = temp_v4;
  temp_v0 = *(int *)(param_2 + 0xd8);
  uStack_1c = param_1;
  temp_v6 = param_2;
  if ((temp_v0 != 0) && (*(int *)(temp_v0 + 0x10) != 0)) {
    if (*(int *)(temp_v0 + 0x18) != 0xc) {
      temp_v1 = operatorNew(0x20);
      temp_v0 = 0;
      if (temp_v1 != 0) {
        temp_v0 = FUN_002e7614(temp_v1,*(int *)(*(int *)(param_2 + 0xd8) + 0x10) + 0xc);
      }
      *(unsigned int *)(temp_v0 + 0x10) = 0xc;
      temp_v3 = *(unsigned int *)(*(int *)(param_2 + 0xd8) + 0x10);
      temp_v2 = onlineBufferGetData();
      strAssign(temp_v0,temp_v2,temp_v3,0xffffffff);
      FUN_002ece58(temp_v6,temp_v0);
    }
    else {
      ringSetLimit(temp_v0,0);
    }
  }
  else {
    temp_v1 = operatorNew(0x20);
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = FUN_002e7614(temp_v1,0xc);
    }
    *(unsigned int *)(temp_v0 + 0x10) = 0xc;
    FUN_002ece58(temp_v6,temp_v0);
  }
  temp_v2 = *(unsigned int *)(*(int *)(param_2 + 0xd8) + 0x10);
  *(unsigned int *)(*(int *)(param_2 + 0xd8) + 0x10) = 0;
  FUN_002ed258(temp_v4,*(unsigned int *)(param_2 + 0xd8));
  FUN_002ed84a(temp_v4,temp_v6 + 0xbc);
  if ((puVar4 != (unsigned char *)0x0) &&
     (FUN_002ed84a(temp_v4,temp_v6 + 0xbd), puVar5 != (unsigned char *)0x0)) {
    temp_v0 = 0;
    do {
      temp_v5[0] = 0;
      puVar4 = temp_v4;
      FUN_002ed84a(temp_v4,temp_v5);
      if (puVar4 == (unsigned char *)0x0) {
        sharedRefHolderDestroy(temp_v4);
        return 0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 2);
    temp_v0 = streamWriterWriteU32(temp_v4,temp_v6 + 0xc0);
    if ((temp_v0 != 0) && (temp_v0 = streamWriterWriteU32(temp_v4,temp_v6 + 0xc4), temp_v0 != 0)) {
      *(unsigned int *)(*(int *)(param_2 + 0xd8) + 0x10) = temp_v2;
      sharedRefHolderDestroy(temp_v4);
      return 1;
    }
  }
  sharedRefHolderDestroy(temp_v4);
  return 0;
}

} /* extern "C" */
