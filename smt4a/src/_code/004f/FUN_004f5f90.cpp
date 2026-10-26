#include "common.h"
#include "code/Code004f_Smt4a.h"
struct ObjectOwner { u8 unk0000[8016]; void *object; };
extern "C" {
void *asdOperatorNew(u32 size);
void *_ZN9Obj4208d4C1Ev(void *memory);
/* Allocates the owner's 68-byte auxiliary object. */
void FUN_004f5f90(ObjectOwner *owner) { void *object=asdOperatorNew(68);if(object!=NULL)object=_ZN9Obj4208d4C1Ev(object);owner->object=object; }
}
