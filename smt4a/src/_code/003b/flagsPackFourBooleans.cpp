#include "common.h"
extern "C" {
/* Pack four enable switches into bits eight through eleven. */
u32 flagsPackFourBooleans(s32 first,s32 second,s32 third,s32 fourth) { return (first ? 0x100u : 0u)|(second ? 0x200u : 0u)|(third ? 0x400u : 0u)|(fourth ? 0x800u : 0u); }
}
