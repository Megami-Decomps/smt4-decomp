/* NON_MATCHING: native requires inline ClearEvent SVC 0x19; no existing IV wrapper/header was found, and new SVC/assembly intrinsics are forbidden. Original draft retained at this primitive boundary. */
#include "romwright_types.h"

extern "C" {

int FUN_002c526c(int);
int asdResultCheck(int);
int FUN_003602b0(unsigned int, int, int, int);
int FUN_003602ec(unsigned int, int, int, int);
int FUN_00360328(unsigned int, int, int, int);
int FUN_003603a0(unsigned int, int, int, int);
int FUN_003603dc(int);
int FUN_003604a0(int);
int FUN_003604bc(void);
int FUN_003604d8(int);
int FUN_003604f4(void);
int serviceQuerySignedByteChecked(void);
void FUN_00360538(unsigned char value);
int resultFatalIfFailed(int);
int FUN_003605b0(unsigned int);
int FUN_003605cc(int);
int FUN_00360aac(int);
int software_interrupt(int);

/* stack frame of param_13: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
} param_13_stack;

extern int g_y2rTransferEvent; /* 0x44e9e8 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_002c526c. */
/* Supplied declaration required: asdResultCheck. */
/* Supplied declaration required: FUN_003602b0. */
/* Supplied declaration required: FUN_003602ec. */
/* Supplied declaration required: FUN_00360328. */
/* Supplied declaration required: FUN_003603a0. */
/* Supplied declaration required: FUN_003603dc. */
/* Supplied declaration required: FUN_003604a0. */
/* Supplied declaration required: FUN_003604bc. */
/* Supplied declaration required: FUN_003604d8. */
/* Supplied declaration required: FUN_003604f4. */
/* Supplied declaration required: serviceQuerySignedByteChecked. */
/* Supplied declaration required: FUN_00360538. */
/* Supplied declaration required: resultFatalIfFailed. */
/* Supplied declaration required: FUN_003605b0. */
/* Supplied declaration required: FUN_003605cc. */
/* Supplied declaration required: FUN_00360aac. */


void movieY2rConfigureAndStart(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 unsigned int param_6,unsigned int param_7,unsigned int param_8,int param_9,
                 unsigned int param_10,unsigned int param_11,unsigned int param_12,unsigned int param_13)

{
/* irregular: 18 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar7;
  int temp_v6;
  
  temp_v5 = param_13;
  temp_v4 = param_11;
  temp_v3 = param_10;
  temp_v2 = param_9;
  puVar7 = (unsigned int *)&param_9;
  FUN_003604bc();
  do {
    serviceQuerySignedByteChecked();
  } while (puVar7 != (unsigned int *)0x0);
  software_interrupt(0x19);
  if (g_y2rTransferEvent < 0) {
    FUN_002c526c(g_y2rTransferEvent);
  }
  FUN_003604a0(1);
  FUN_003604d8(param_3);
  asdResultCheck(0);
  FUN_00360538(param_5);
  FUN_003605cc(1);
  temp_v0 = (short)param_1;
  resultFatalIfFailed((int)temp_v0);
  FUN_003603dc((int)(short)param_2);
  FUN_003605b0(param_4);
  FUN_00360aac(0xff);
  FUN_00360328(param_6,param_1 * param_2,(int)temp_v0,(int)(short)temp_v2);
  temp_v1 = (short)(param_1 / 2);
  temp_v6 = (param_1 / 2) * (param_2 / 2);
  FUN_003602b0(param_7,temp_v6,(int)temp_v1,(int)(short)temp_v3);
  FUN_003602ec(param_8,temp_v6,(int)temp_v1,(int)(short)temp_v4);
  if (param_3 == 0) {
    temp_v6 = 4;
  }
  else if (param_3 == 1) {
    temp_v6 = 3;
  }
  else if (param_3 == 2 || param_3 == 3) {
    temp_v6 = 2;
  }
  else {
    temp_v6 = 0;
  }
  FUN_003603a0(param_12,param_1 * param_2 * temp_v6,(int)(short)(temp_v0 * (short)temp_v6 * 8),
               (int)(short)((short)temp_v5 * (short)temp_v6 * 8));
  FUN_003604f4();
  return;
}

} /* extern "C" */
