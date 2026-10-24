/* NON_MATCHING: The clone still reconstructs the authentication subtype through raw constructor calls; constructor-result lifetimes differ. */
#include "romwright_types.h"
#include "classes/Obj55a254.h"

extern "C" {

int FUN_00119ee6(unsigned int *, unsigned int);
int FUN_002f76ca(int, unsigned char *);

extern unsigned char LAB_00124238; /* 0x124238 */
extern unsigned char DAT_00559534; /* 0x559534 */
extern unsigned char DAT_0055a25c; /* 0x55a25c */

/* Supplied declaration required: FUN_00119ee6. */
extern int _Znwj(unsigned int);
extern int _ZN9Obj55aff4C1Ev(unsigned int *);
/* Supplied declaration required: FUN_002f76ca. */
extern unsigned int *FUN_002fb018(void);


} /* extern "C" */

Obj55a254 *Obj55a254::clone()

{
    unsigned int param_1 = (unsigned int)this;
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = _Znwj(0x1c);
  if (temp_v0 != 0) {
    puVar2 = (unsigned int *)FUN_002fb018();
    *puVar2 = (unsigned int)&DAT_0055a25c;
    *(unsigned char *)((int)puVar2 + 5) = 0;
    temp_v0 = _ZN9Obj55aff4C1Ev(puVar2 + 2);
    puVar2 = (unsigned int *)(temp_v0 - 8);
    *puVar2 = (unsigned int)&DAT_00559534;
    FUN_002f76ca(temp_v0,&LAB_00124238);
    *(unsigned int *)(temp_v0 + 8) = 3;
    *(unsigned int *)(temp_v0 + 0x10) = 0x7d4;
    *(unsigned char *)(temp_v0 + 0xc) = 0;
  }
  else {
    puVar2 = (unsigned int *)0x0;
  }
  FUN_00119ee6(puVar2,param_1);
  return (Obj55a254 *)puVar2;
}

