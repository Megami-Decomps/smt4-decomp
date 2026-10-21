#include "common.h"
struct ValueTriple { u32 first,second,third; };
struct TripleOwner { u8 unk000[496]; ValueTriple value; };
/* Copies the three-word value. */
extern "C" void FUN_003fe9b4(TripleOwner *owner,const ValueTriple *value) { owner->value=*value; }
