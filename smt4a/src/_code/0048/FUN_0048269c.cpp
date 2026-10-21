#include "common.h"
struct ValueTriple { u32 first, second, third; };
struct TripleOwner { u8 unk00[80]; ValueTriple value; };
/* Copies the three-word value into the owner. */
extern "C" void FUN_0048269c(TripleOwner *owner,const ValueTriple *value) { owner->value=*value; }
