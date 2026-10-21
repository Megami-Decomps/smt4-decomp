#include "romwright_types.h"

extern "C" {

int asdSequenceStart(int, unsigned char *, int);
int paramTripleSet(int, unsigned char *, int);
int setCallbackBinding(unsigned char *, unsigned char *);
int FUN_002c29d8(int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_00118170; /* 0x118170 */
extern unsigned char LAB_00118290; /* 0x118290 */
extern unsigned char DAT_00446e00; /* 0x446e00 */
extern unsigned char DAT_00446f2c; /* 0x446f2c */

/* Supplied declaration required: asdSequenceStart. */
/* Supplied declaration required: paramTripleSet. */
/* Supplied declaration required: setCallbackBinding. */
/* Supplied declaration required: FUN_002c29d8. */
extern int FUN_002c2a04(unsigned int);


void FUN_00104ec4(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  asdSequenceStart(1,&DAT_00446e00,0x19);
  paramTripleSet(0xc9,&DAT_00446f2c,0x14);
  setCallbackBinding(&LAB_00118170,&LAB_00118290);
  temp_v0 = FUN_002c2a04(0);
  if (temp_v0 == 3) {
    FUN_002c29d8(0,10,0xff);
  }
  temp_v0 = FUN_002c2a04(1);
  if (temp_v0 == 3) {
    FUN_002c29d8(1,10,0xff);
    return;
  }
  return;
}

} /* extern "C" */
