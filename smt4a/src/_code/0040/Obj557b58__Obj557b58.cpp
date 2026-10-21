/* NON_MATCHING: compiler merges initial vtable and zero-state stores. */
#include "classes/Obj557b58.h"
extern "C" void FUN_00405dec(Obj557b58 *object);
/* Initializes the owned-item vector and the object's state. */
Obj557b58::Obj557b58(){items.begin=NULL;items.end=NULL;items.capacity=NULL;for(int i=0;i<12;++i)unk10[i]=0;FUN_00405dec(this);}
