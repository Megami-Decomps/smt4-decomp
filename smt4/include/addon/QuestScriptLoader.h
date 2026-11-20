#ifndef SMT4_ADDON_QUESTSCRIPTLOADER_H
#define SMT4_ADDON_QUESTSCRIPTLOADER_H
#include "addon/AocScriptHolder.h"
extern "C" {
u32 questSysLoadStep(AocScriptHolder *holder);
u32 questSysUpdateLoad(AocScriptHolder *holder);
void scrLoaderReset(AocScriptHolder *holder);
void scrLoaderResetWithFlag(AocScriptHolder *holder, u8 flag);
void scrLoaderFreeBuffers(AocScriptHolder *holder);
void scrLoaderRelease(AocScriptHolder *holder);
void aocScriptHolderReset(AocScriptHolder *holder, u8 flag);
void aocScriptHolderRelease(AocScriptHolder *holder);
}
#endif
