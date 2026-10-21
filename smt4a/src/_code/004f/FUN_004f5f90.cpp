#include "common.h"
struct ObjectOwner { u8 unk0000[8016]; void *object; };
extern "C" {
void *asdOperatorNew(u32 size);
void *FUN_0041aed4(void *memory);
/* Allocates the owner's 68-byte auxiliary object. */
void FUN_004f5f90(ObjectOwner *owner) { void *object=asdOperatorNew(68);if(object!=NULL)object=FUN_0041aed4(object);owner->object=object; }
}
