/* NON_MATCHING: Retail instruction scheduling/register allocation differs (43 retail versus 40 compiled rows). */
#include "classes/Obj5592ac.h"
#include "romwright_types.h"

extern "C" {

int _ZN9Obj55b28cC1EPv(unsigned char [12], unsigned char *);
int _ZN9Obj55b28cD1Ev(unsigned char [12]);
int FUN_002fa124(unsigned char [8], unsigned char *, unsigned int **);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern unsigned char DAT_005592b4; /* 0x5592b4 */
extern unsigned char DAT_0062e588; /* 0x62e588 */
extern unsigned int *g_onlineTrackedStrings; /* 0x62e58c */
extern unsigned int *DAT_0062e594; /* 0x62e594 */
extern unsigned char DAT_0062e59c; /* 0x62e59c */

/* Supplied declaration required: _ZN9Obj55b28cC1EPv. */
/* Supplied declaration required: _ZN9Obj55b28cD1Ev. */
extern int wordRefsDiffer_002fa114(unsigned int **);
/* Supplied declaration required: FUN_002fa124. */


} /* extern "C" */

Obj5592ac::~Obj5592ac()

{
    unsigned int *param_1 = (unsigned int *)this;
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *temp_v1;
  unsigned char temp_v2 [8];
  unsigned char temp_v3 [12];
  unsigned int *temp_v4 [3];
  
  _ZN9Obj55b28cC1EPv(temp_v3,&DAT_0062e59c);
  for (temp_v4[0] = g_onlineTrackedStrings; (temp_v4[0] != DAT_0062e594 && (temp_v4[0] != param_1));
      temp_v4[0] = (unsigned int *)temp_v4[0][1]) {
  }
  temp_v0 = wordRefsDiffer_002fa114(temp_v4);
  if (temp_v0 != 0) {
    temp_v1 = temp_v4[0];
    FUN_002fa124(temp_v2,&DAT_0062e588,&temp_v1);
  }
  _ZN9Obj55b28cD1Ev(temp_v3);
  return;
}

