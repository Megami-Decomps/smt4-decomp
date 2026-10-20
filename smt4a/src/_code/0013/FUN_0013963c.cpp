#include "romwright_types.h"

extern "C" {

int FUN_0013cab8(int, int, int);
int asdSequenceStart(int, unsigned char *, int);
int FUN_0013ea78(int, unsigned char *, int);
int FUN_00144544(unsigned char *, unsigned char *);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char LAB_0015110c; /* 0x15110c */
extern unsigned char LAB_00151230; /* 0x151230 */
extern unsigned char DAT_00580000; /* 0x580000 */
extern unsigned char DAT_00580150; /* 0x580150 */

/* Supplied declaration required: FUN_0013cab8. */
extern int FUN_0013def0(unsigned int);
/* Supplied declaration required: asdSequenceStart. */
/* Supplied declaration required: FUN_0013ea78. */
/* Supplied declaration required: FUN_00144544. */


void FUN_0013963c(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  asdSequenceStart(1,&DAT_00580000,0x1c);
  FUN_0013ea78(0xc9,&DAT_00580150,0x16);
  FUN_00144544(&LAB_0015110c,&LAB_00151230);
  temp_v0 = FUN_0013def0(0);
  if (temp_v0 == 3) {
    FUN_0013cab8(0,10,0xff);
  }
  temp_v0 = FUN_0013def0(1);
  if (temp_v0 == 3) {
    FUN_0013cab8(1,10,0xff);
    return;
  }
  return;
}

} /* extern "C" */
